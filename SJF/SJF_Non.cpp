using namespace std;

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include "../Process/process.cpp"

vector<process> SJF(queue<process>& readyQueue) {
	
	vector<process> sorting;
	vector<process> GranttChart;
    int execTime = 0;
	int currentTime = 0;
	// transfer conents of queue to a vector
    while (!readyQueue.empty()) {
        sorting.push_back(readyQueue.front());
        readyQueue.pop();
    }
	// sort the vector
	sort(sorting.begin(), sorting.end());

    // Transfer sorted elements back to the queue
    for (const auto& elem : sorting) {
        readyQueue.push(elem);
    }
	
	while (!readyQueue.empty()) {
		process currentProcess = readyQueue.front();
        readyQueue.pop();
		execTime = currentProcess.getBurst();
		currentProcess.setDoneBurst(execTime);
		currentTime += execTime;
		
		currentProcess.calcProcessTurnaroundTime(currentTime);
    	currentProcess.calcProcessWaitingTime(currentTime);
    	
		GranttChart.push_back(currentProcess);
	}
    return GranttChart;
}

int main(){
	int n;
	int ID, arrival,burst;
	cout << "Please input the number of processes \n";
	cin >> n;
	
	queue <process> readyQueue;
	
	for(int i = 0; i < n; i++){
		cout<<"Please input information for process number  " << (i + 1)<< " (Arrival time, Burst time)\n";
		cin>> arrival>> burst;
		
		process temp = process(i + 1, arrival, burst);
		readyQueue.push(temp);
	
	}
	vector<process> ganttChart = SJF(readyQueue);

	 cout << "Gantt Chart:" << endl;
    for (const auto& event : ganttChart) {
        cout << "Process " << event.getID() <<" time done: "<< event.getDoneBurst() + event.getWaitingTime()<<endl;
    }
    cout << endl;

    cout << "Turnaround Time and Waiting Time:" << endl;
    for (const auto& process : ganttChart) {
        cout << "Process " << (process.getID()) << ": Turnaround Time = " << (process.getTurnaroundTime())
             << ", Waiting Time = " << (process.getWaitingTime()) << endl;
    }
	return 0;
}
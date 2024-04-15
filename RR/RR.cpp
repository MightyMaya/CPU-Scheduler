
using namespace std;

#include <iostream>
#include <thread>
#include <chrono>
#include <queue>
#include <vector>


int quantumTime;

vector<Process> RR(queue<Process>& readyQueue, int quantumTime) {
    vector<Process> GranttChart;
    int currentTime = 0;
    while (!readyQueue.empty()) {
        Process currentProcess = readyQueue.front();
        readyQueue.pop();
        currentProcess.setWaitingTime(currentTime - currentProcess.getArrival());
        int execTime = min(quantumTime, currentProcess.getBurst());
        currentTime += execTime;
        currentProcess.setBurst(currentProcess.getBurst() - execTime);
        if (currentProcess.getBurst() > 0) {
            currentProcess.setArrival(currentTime);
            readyQueue.push(currentProcess);
        }
        else{
            currentProcess.setTurnaroundTime(currentTime - currentProcess.getArrival());
        }
        GranttChart.push_back(currentProcess);
    }
    return GranttChart;
}

int main() {
    queue<Process> readyQueue;
    readyQueue.push(Process(1, 0, 5));
    readyQueue.push(Process(2, 1, 3));
    readyQueue.push(Process(3, 2, 6));

    quantumTime = 2;

    vector<Process> ganttChart = RR(readyQueue, quantumTime);

    cout << "Gantt Chart:" << endl;
    for (const auto& event : ganttChart) {
        cout << "Process " << event.getID() <<" time remaining: "<< event.getBurst()<<endl;
    }
    cout << endl;

    cout << "Turnaround Time and Waiting Time:" << endl;
    for (const auto& process : ganttChart) {
        cout << "Process " << process.getID() << ": Turnaround Time = " << process.getTurnaroundTime()
             << ", Waiting Time = " << process.getWaitingTime() << endl;
    }

    return 0;
}


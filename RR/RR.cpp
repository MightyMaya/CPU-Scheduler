
using namespace std;

#include <iostream>
#include <queue>
#include <vector>
#include "process.h"


int quantumTime;

vector<process> RR(queue<process>& readyQueue, int quantumTime) {
    vector<process> GranttChart;
    int currentTime = 0;
    while (!readyQueue.empty()) {
        process currentProcess = readyQueue.front();
        readyQueue.pop();
        int execTime = min(quantumTime, currentProcess.getBurst());
        currentTime += execTime;
        currentProcess.setDoneBurst(execTime + currentProcess.getDoneBurst());
        if ((currentProcess.getBurst() - currentProcess.getDoneBurst()) > 0) {
            readyQueue.push(currentProcess);
        }
        else{
            currentProcess.calcProcessTurnaroundTime(currentTime);
            currentProcess.calcProcessWaitingTime(currentTime);
        }
        GranttChart.push_back(currentProcess);
    }
    return GranttChart;
}

int main() {
    queue<process> readyQueue;
    readyQueue.push(process(1, 0, 5));
    readyQueue.push(process(2, 1, 3));
    readyQueue.push(process(3, 2, 6));

    quantumTime = 2;

    vector<process> ganttChart = RR(readyQueue, quantumTime);

    cout << "Gantt Chart:" << endl;
    for (const auto& event : ganttChart) {
        cout << "Process " << event.getID() <<" time done: "<< event.getDoneBurst()<<endl;
    }
    cout << endl;

    cout << "Turnaround Time and Waiting Time:" << endl;
    for (const auto& process : ganttChart) {
        cout << "Process " << process.getID() << ": Turnaround Time = " << process.getTurnaroundTime()
             << ", Waiting Time = " << process.getWaitingTime() << endl;
    }

    return 0;
}


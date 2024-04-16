

#include <iostream>
#include "process.h"
#include <queue>
#include <vector>
using namespace std;

bool compareByArrival(const process& p1, const process& p2) {
    return p1.getArrival() < p2.getArrival();
}

bool compareByPriority(const process& p1, const process& p2) {
    return p1.getPriority() < p2.getPriority();
}

queue<process> schePriorityNon(queue<process> que)
{
    queue<process> finQue;
    vector<process> aux;

    // Dequeue all elements and store them in the vector
    while (!que.empty()) {
        aux.push_back(que.front());
        que.pop();
    }
    sort(aux.begin(), aux.end(), compareByArrival);
   
   
    for (int i = 0; i < aux.size(); i++)
    {
        int arrival = aux.at(i).getArrival();
        int start = i,end=i+1;
        for (int j = i + 1; j < aux.size(); j++)
        {
            if (aux.at(j).getArrival() != arrival)
            {
                i = j;
                end = j;
                break;
            }
            end = j + 1;
                
        }
        //sort(aux.begin() + start, aux.begin() + end,compareByPriority);
        sort(aux.begin() + start, aux.begin() + end);
    }
    int currentTime = 0;
    for (int i = 0;i<aux.size();i++) {
        aux.at(i).calcProcessTurnaroundTime(currentTime + aux.at(i).getBurst());
        aux.at(i).calcProcessWaitingTime(currentTime + aux.at(i).getBurst());
        aux.at(i).setDoneBurst(aux.at(i).getBurst());
        currentTime += aux.at(i).getBurst();
        finQue.push(aux.at(i));
    }
   
    return finQue;
}
queue<process> schePriorityPre(queue<process> que)
{
    queue<process> finQue;
    vector<process> aux;

    // Dequeue all elements and store them in the vector
    while (!que.empty()) {
        aux.push_back(que.front());
        que.pop();
    }
    sort(aux.begin(), aux.end());
    for (const auto& p : aux) {
        finQue.push(p);
    }


    return finQue;
}
int main()
{
    int sc, numProcess;
    queue<process> reQue;
    cout << "enter 0 for priority non preemtive scheduling and 1 for preemtive then enter the number of required processes"<<endl;
    cin >> sc >> numProcess;
    if (sc == 0)
    {
        for (int i = 0; i < numProcess; i++)
        {
            cout << "for process number " << i << " enter priority number and burst time"<<endl;
            int priNum, burTime;
            cin >> priNum >> burTime;
            reQue.push(process(i, 0, burTime, priNum));

        }
        queue<process> runQue = schePriorityNon(reQue);
        cout << "Elements of the queue:" << std::endl;
        while (!runQue.empty()) {
            process item = runQue.front();
            std::cout << "ID: " << item.getID() << ": Turnaround Time = " << item.getTurnaroundTime()
                << ", Waiting Time = " << item.getWaitingTime() << endl;
            runQue.pop();
        }

    }
    else if (sc == 1)
    {
        for (int i = 0; i < numProcess; i++)
        {
            cout << "for process number " << i << " enter priority number and burst time";
            int priNum, burTime;
            cin >> priNum >> burTime;
            reQue.push(process(i, 0, burTime, priNum));

        }
        queue<process> runQue = schePriorityPre(reQue);
        cout << "Elements of the queue:" << std::endl;
        while (!runQue.empty()) {
            process item = runQue.front();
            std::cout << "ID: " << item.getID() << std::endl;
            runQue.pop();
        }
    }
}


//============================================================================
// Name        : FCFS.cpp
// Author      : Menna
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include"process.h"

using namespace std;
//calculating the turnaround time of all processes
vector<int> calcTurnAround(vector<process>&processes)
{
	int size = processes.size();
	vector<int>turnAround(size);
	int finishTime=0;
	for(int i =0; i<size;i++)
	{
		finishTime +=(processes[i].getBurst());
		processes[i].calcProcessTurnaroundTime(finishTime);
		turnAround[i] = processes[i].getTurnaroundTime();
	}
	return turnAround;
}
//calculating the waiting time of all processes
vector<int> calcWaitingTime(vector<process>&processes)
{
	int size=processes.size();
	vector<int>waiting(size);
	int finishTime=0;
	for(int i =0; i<size;i++)
	{
		finishTime +=(processes[i].getBurst());
		processes[i].calcProcessWaitingTime(finishTime);
		waiting[i] = processes[i].getWaitingTime();
	}
	return waiting;
}
//used to rearrange the processes with respect to its arrival(ascendingly)
bool compare(const process &a,const process &b)
{
	return a.getArrival() < b.getArrival();
}
//for calculating the average of turnaround or waiting time.
double calcTotalTurnaroundOrWaiting(vector<int>&values)
{
	double avg=0;
	for(auto &val:values)
	{
		avg +=val;
	}
	avg/=values.size();
	return avg;
}

//testing all the functionalities
void mainFunc(vector<process>&processes)
{
	sort(processes.begin(),processes.end(),compare);
	vector<int> turnAroundTime = calcTurnAround(processes);
	vector<int> waitingTime = calcWaitingTime(processes);
	cout << "process" << "\t\t" << "turnAround" << "\t\t" << "waiting" << endl;
	for(int i =0; i < (int)processes.size();i++)
	{
		cout <<setw(4)<< i <<setw(15)<< turnAroundTime[i] << setw(22) << waitingTime[i];
		cout << endl;
	}
	cout << "average turnaround is: " << calcTotalTurnaroundOrWaiting(turnAroundTime) << endl;
	cout << "average waiting is: " << calcTotalTurnaroundOrWaiting(waitingTime) << endl;
}
int main() {
	//first is burst,second is arrival.
	vector<process>processes;
	processes.push_back(process(0,0,1));
	processes.push_back(process(1,0,2));
	processes.push_back(process(2,0,3));
	processes.push_back(process(3,0,4));
	processes.push_back(process(4,0,5));
	processes.push_back(process(5,0,6));
	mainFunc(processes);
	return 0;
}

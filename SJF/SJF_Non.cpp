using namespace std;

#include <iostream>
#include <vector>

#include "SJF_Non.h"
#include "../Process/process.cpp"

int main(){
	int n;
	int ID, arrival,burst;
	
	cout<<"Please input the number of processes \n";
	cin>> n;
	
	vector <Process> processes(n);
	
	for(int i = 0; i < n; i++){
		cout<<"Please input information for process number  " << (i + 1)<< " (Arrival time, Burst time)\n";
		cin>> arrival>> burst;
		
		processes[i] .setArrival(arrival);
		processes[i] .setBurst(burst);
	}

	for(int i = 0; i < n; i++){
		processes[i].execute();
		cout<< "Remaining time for process number " << i + 1 << ": ";
		processes[i].printRemainingTime();
	}

	return 0;
}
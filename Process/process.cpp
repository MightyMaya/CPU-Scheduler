using namespace std;

#include <iostream>
// class to represent a process with its ID, Arrival time,Burst time
class Process {
	private:
		int ID;
		int arrival;
		int burst;
	
	public:
		Process(){
			ID = 0;
			arrival = 0;
			burst = 1;
		}
		Process(int id, int arrival_, int burst_){
			ID = id;
			arrival = arrival_;
			burst = burst_;
		}
		
		int getID(){
			return ID;
		}
		
		void setID(int id){
			ID = id;
		}
		
		int getArrival(){
			return arrival;
		}
		
		void setArrival(int arrival_){
			arrival = arrival_;
		}
		
		int getBurst(){
			return burst;
		}
		
		void setBurst(int burst_){
			burst = burst_;
		}
		
		//function to execute the process for 1 second
		void execute (){
			burst--;
		}
		//function to print remaining time of a process
		void printRemainingTime(){
			cout << burst << endl;
		}

};
using namespace std;

#include <iostream>
#include <thread>
#include <chrono>
// class to represent a process with its ID, Arrival time,Burst time
class Process {
private:
    int ID;
    int arrival;
    int burst;
    int waitingTime=0;
    int turnaroundTime=0;

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

    int getID ()const{
        return ID;
    }
    void setID(int id){
        ID = id;
    }

    int getArrival()const{
        return arrival;
    }
    void setArrival(int arrival_){
        arrival = arrival_;
    }

    int getBurst()const{
        return burst;
    }
    void setBurst(int burst_){
        burst = burst_;
    }

    int getWaitingTime()const{
        return waitingTime;
    }
    void setWaitingTime(int waitingTime_){
        waitingTime = waitingTime_;
    }

    int getTurnaroundTime()const{
        return turnaroundTime;
    }
    void setTurnaroundTime(int turnaroundTime_){
        turnaroundTime = turnaroundTime_;
    }


    //function to execute the process for 1 second
    void execute (){
        this_thread::sleep_for(chrono::seconds(1));
        burst--;
    }
    //function to print remaining time of a process
    void printRemainingTime(){
        cout << burst << endl;
    }

};

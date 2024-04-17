
using namespace std;

#include "process.h"


process::process() {
    ID = 0;
    arrival = 0;
    burst = 1;
}
process::process(int id, int arrival_, int burst_) {
    ID = id;
    arrival = arrival_;
    burst = burst_;
}

process::process(int id, int arrival_, int burst_, int priority_)
{
    ID = id;
    arrival = arrival_;
    burst = burst_;
    priority = priority_;

}

int process::getID()const {
    return ID;
}
void process::setID(int id) {
    ID = id;
}

int process::getArrival()const {
    return arrival;
}
void process::setArrival(int arrival_) {
    arrival = arrival_;
}

int process::getBurst()const {
    return burst;
}
void process::setBurst(int burst_) {
    burst = burst_;
}

int process::getPriority() const
{
    return priority;
}

void process::setPriority(int priority_)
{
    priority = priority_;
}

int process::getWaitingTime()const {
    return waitingTime;
}
void process::setWaitingTime(int waitingTime_) {
    waitingTime = waitingTime_;
}

int process::getTurnaroundTime()const {
    return turnaroundTime;
}
void process::setTurnaroundTime(int turnaroundTime_) {
    turnaroundTime = turnaroundTime_;
}

int process::getDoneBurst()const {
    return doneBurst;
}
void process::setDoneBurst(int doneBurst_) {
    doneBurst = doneBurst_;
}

int process::getexecTime() const{
    return execTime;
}
void process::setexecTime(int execTime_){
    execTime = execTime_;
}

bool process::operator<(const process& other) const {
    return priority < other.priority;
}

//function to execute the process for 1 second
/*void process::execute() {
    this_thread::sleep_for(chrono::seconds(1));
    burst--; //NEEDS TO CHANGE`
}*/

//function to print remaining time of a process
void process::printRemainingTime() {
    //cout << burst << endl;
}

//function to calculate waiting time
void process::calcProcessWaitingTime(int finishTime) {
    waitingTime = finishTime - this->burst - this->arrival;
}

//function to calculate turnaround time
void process::calcProcessTurnaroundTime(int finishTime) {
    turnaroundTime = finishTime - this->arrival;
}



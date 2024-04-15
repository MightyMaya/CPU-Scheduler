#ifndef PROCESS_H
#define PROCESS_H

#include <iostream>
#include <thread>
#include <chrono>

class process {
private:
    int ID;
    int arrival;
    int burst;
    int doneBurst=0;
    int waitingTime=0;
    int turnaroundTime=0;

public:
    process();
    process(int id, int arrival_, int burst_);
    int getID() const;
    void setID(int id);
    int getArrival() const;
    void setArrival(int arrival_);
    int getBurst() const;
    void setBurst(int burst_);
    int getWaitingTime() const;
    void setWaitingTime(int waitingTime_);
    int getTurnaroundTime() const;
    void setTurnaroundTime(int turnaroundTime_);
    int getDoneBurst() const;
    void setDoneBurst(int doneBurst_);
    void execute();
    void printRemainingTime();
    void calcProcessWaitingTime(int finishTime);
    void calcProcessTurnaroundTime(int finishTime);
    bool operator<(const process& other) const;
};

#endif

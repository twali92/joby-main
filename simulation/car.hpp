#ifndef CAR_HPP
#define CAR_HPP

#include <iostream>
#include <string>

using namespace std;
class Car
{
private:
    string _make;
    int _cruiseSpeed;
    int _batteryCap;
    int _timeToCharge;
    int _energyUseAtCruise;
    int _passengerCount;
    int _probFaultPerHour;

    //Calculated stats
    int _avgFlightTime;         // average flight time per flight
    int _avgFlightDistance;     // average distance traveled per flight
    int _avgChargeTime;         // average time charging per charge session
    int _totalNumFaults;        // total number of faults
    int _totalNumPassMiles;     // total number of passenger miles

public:
    //Constructor
    Car(string make, int cruiseSpeed, int batteryCap, int timeToCharge,
        int energyUseAtCruise, int passengerCount, int probFaultPerHour);

    //Destructor
    ~Car();

    //Getters
    string getMake();
    int getCruiseSpeed();
    int getBatteryCap();
    int getTimeToCharge();
    int getEnergyUseAtCruise();
    int getPassengerCount();
    int getProbFaultPerHour();
};
#endif
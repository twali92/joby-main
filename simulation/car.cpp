#include "car.hpp"

Car::Car(string make, int cruiseSpeed, int batteryCap, int timeToCharge,
        int energyUseAtCruise, int passengerCount, int probFaultPerHour)
{
    _make = make;
    _cruiseSpeed = cruiseSpeed;
    _batteryCap = batteryCap;
    _timeToCharge = timeToCharge;
    _energyUseAtCruise = energyUseAtCruise;
    _passengerCount = passengerCount;
    _probFaultPerHour = probFaultPerHour;
        /*
        : _make(make), _cruiseSpeed(cruiseSpeed), _batteryCap(batteryCap), _timeToCharge(timeToCharge),
          _energyUseAtCruise(energyUseAtCruise), _passengerCount(passengerCount), _probFaultPerHour(probFaultPerHour) {}
         */

}
Car::~Car() {};

string Car::getMake() {
    return _make;
}

int Car::getCruiseSpeed() {
    return _cruiseSpeed;
}

int Car::getBatteryCap() {
    return _batteryCap;
}

int Car::getTimeToCharge() {
    return _timeToCharge;
}

int Car::getEnergyUseAtCruise() {
    return _energyUseAtCruise;
}

int Car::getPassengerCount() {
    return _passengerCount;
}

int Car::getProbFaultPerHour() {
    return _probFaultPerHour;
}
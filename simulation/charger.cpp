#include <iostream>
#include <string>
#include <thread>
#include <chrono>

#include "car.hpp"

class CarCharger {
private:
    std::string     chargerID;
    double          chargingPower;
    std::string     status;
    Car*            connectedCar;
    double          chargeTime;
    
public:
    //constructor  
    CarCharger(std::string id, double power)
        : chargerID(id), chargingPower(power), status("idle"), connectedCar(nullptr), chargeTime(0) {}
        
    // Method to connect a car to the charger
    void connectCar(Car* car, double fullChargeTime) {
        connectedCar = car;
        chargeTime = fullChargeTime;
        status = "connected";
        std::cout << "Car connected to charger " << chargerID << ". Ready to charge." << std::endl;
    }

    // Method to start charging the car
    void startCharging() {
        if (connectedCar == nullptr) {
            std::cout << "No car is connected to charger " << chargerID << "." << std::endl;
            return;
        }

        if (status == "charging") {
            std::cout << "Charger " << chargerID << " is already charging a car." << std::endl;
            return;
        }

        status = "charging";
        std::cout << "Charger " << chargerID << " is now charging the car." << std::endl;
        chargeCar(); // Simulate charging process
    }

    // Method to stop charging the car
    void stopCharging() {
        if (connectedCar == nullptr) {
            std::cout << "No car is connected to charger " << chargerID << "." << std::endl;
            return;
        }

        if (status == "idle") {
            std::cout << "Charger " << chargerID << " is not currently charging any car." << std::endl;
            return;
        }

        status = "finished";
        std::cout << "Charging at charger " << chargerID << " has finished." << std::endl;
        connectedCar = nullptr;
    }

    // Method to simulate the charging process
    void chargeCar() {
        if (connectedCar == nullptr) {
            std::cout << "No car is connected to charger " << chargerID << "." << std::endl;
            return;
        }

        std::cout << "Charging car with charger " << chargerID << " at " << chargingPower << " kW..." << std::endl;
        
        // Simulate charging time (simplified as waiting for a few seconds)
        for (int i = 0; i < 5; ++i) {
            std::cout << "Charging in progress..." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1)); // Simulate 1 second of charging time
        }
        
        // After "charging"
        status = "finished";
        std::cout << "Charging complete! Car is now fully charged." << std::endl;
    }

    // Method to get the status of the charger
    std::string getStatus() const {
        return status;
    }

    // Method to display charger details
    void displayInfo() const {
        std::cout << "Charger ID: " << chargerID << std::endl;
        std::cout << "Charging Power: " << chargingPower << " kW" << std::endl;
        std::cout << "Status: " << status << std::endl;
        if (connectedCar != nullptr) {
            std::cout << "Currently connected car: " << connectedCar->getMake() << std::endl;
        } else {
            std::cout << "No car is currently connected." << std::endl;
        }
    }

    // Destructor
    ~CarCharger() {
        if (status == "charging") {
            stopCharging(); // Ensure charging is stopped when the charger is destroyed
        }
    }
};
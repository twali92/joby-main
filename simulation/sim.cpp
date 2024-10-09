#include "car.hpp"
#include "charger.cpp"
#include <vector>

using namespace std;

class Simulation
{
    std::vector<Car> _cars;
    CarCharger _chargerOne;
    CarCharger _chargerTwo;
    CarCharger _chargerThree;
    double _totalSimTime;
    
public:
    Simulation(std::vector<Car>& cars, CarCharger& chargerOne, CarCharger& chargertwo, CarCharger& chargerThree, double& totalSimTime)
        : _cars(cars), _chargerOne(chargerOne), _chargerTwo(chargertwo), _chargerThree(chargerThree), _totalSimTime(totalSimTime) {}
        
    ~Simulation();
    
}
#include <iostream>
#include "Engine.hpp"
//BCS370 Data Structures CLass 2/3 and 2/8 Thomas Barrella Notes

//OOP Abstraction=shows essential information and hides unnecessary information

class Table {
  public:
  std::string shape;
  std::string materials;
  int size;
};

class Car {
  protected:
    int yearMade;
    float speed;
    Engine engine; //composition
  public:
    Car(int y, Engine e) {//constructor used ot initialize memeber vairable (parameterized constructor)

    yearMade = y;
    speed = 0;
    engine = e;

    }

    Car(int y, std::string engineType, int hp){//constructor used to initialize memeber vairable (parameterized constructor)

    yearMade = y;
    speed = 0;
    engine = Engine(engineType, hp);

    }

    void printCarInfo();

};

class ElectricCar : public Car {
  private:
    double batteryCap;
  public:
    ElectricCar(int y, double b, Engine e) : Car(y, e) {//parameterized constructor
      batteryCap = b;
    }

    void printCarInfo(); //function prototype: declaration
};

//outside class member method definition
void ElectricCar::printCarInfo() {//inline function definition
  std::cout << "\nYear made: " << yearMade << " \ncurrent speed: " << speed << " \nbattery capacity: " << batteryCap;

  engine.printEngineInfo();

}

/*void Car::printCarInfo() {//inline function definition
  std::cout << "\nYear made: " << yearMade << " \nEngine Type: " << engineType << " \nHorse Power: " << hp;

}*/

int main() {
  /*Table table; //instantiate an obj
  table.shape = "triangle";
  table.materials = "wood";
  table.size = 30;*/
  Engine engine("V6", 300);
  ElectricCar Tesla(2020, 300.5, engine);
  Tesla.printCarInfo();

 // Car Toyota(2021,"V6",600);
  
  return 0;
}

/*
-OOP Reduces Redundancy
-Everything is based on efficiency
-Have to organize code in an efficient way
-If you have 2000 user defined functions, it can be broken down and organized into      classes
  -no functions are lost
-Encapsulation reduces human error
  -increases security
-Be detail oriented and be precise - may seem annoying but it is important to being     all around developer
-Inheritance is used to save time and not re-write the same code if two entities share  pieces, but that doesn't mean the entities are the same, they are still two separate   entities
  -All inheritance does is help to consolidate code
-Use abstract classas a super class (will be in a future class)
-Try to make source code not operating system dependent
  */
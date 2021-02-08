//Engine.hpp
//OOP-composition-inheritance

//Thomas Barrella Claswork and notes

//Data Structures class 2/8, updating code from class 2/3

#ifndef Engine_hpp
#define Engine_hpp
#include <string>
#include <iostream>

class Engine {
  private:
    std::string type;//V8, V6, Diesel, 4-cylinder
    int horsePower;//300, 150
  public:
    Engine() {//default constructor
      type = "unknown";
      horsePower = 150;
    }
    Engine(std::string type, int horsePower) {//parameterized constructor
      this->type = type;
      this->horsePower = horsePower;
    }

    void printEngineInfo() {
      std::cout << "\nEngine type: " << type << "\nHorse Power: " << horsePower;
    }

};

#endif /*Engine_hpp*/
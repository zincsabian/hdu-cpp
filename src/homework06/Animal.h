#include <iostream>
#include <cstring>

// 基类：动物
class animal {
public:
    char* name;
    int length;
    int weight;
    
    animal(const char* _name, int _length, int _weight) :
        length(_length), weight(_weight) {
        int len = strlen(_name);
        name = new char[len + 1];
        strcpy(name, _name);
    }

    virtual ~animal() {
        delete[] name;
    }
};

// 虚继承，确保只有一份 animal 的实例
class ter_animal : virtual public animal {
public:
    double run_speed;

    ter_animal(const char* _name, int _length, int _weight, double _run_speed) :
        animal(_name, _length, _weight), run_speed(_run_speed) {}
};

// 虚继承，确保只有一份 animal 的实例
class aqu_animal : virtual public animal {
public:
    double swim_speed;

    aqu_animal(const char* _name, int _length, int _weight, double _swim_speed) :
        animal(_name, _length, _weight), swim_speed(_swim_speed) {}
};

// 虚继承 ter_animal 和 aqu_animal，确保只有一份 animal 的实例
class amp_animal : public ter_animal, public aqu_animal {
public:
    amp_animal(const char* _name, int _length, int _weight, double _run_speed, double _swim_speed) :
        animal(_name, _length, _weight),
        ter_animal(_name, _length, _weight, _run_speed),
        aqu_animal(_name, _length, _weight, _swim_speed) {}

    void Print() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Length: " << length << " cm" << std::endl;
        std::cout << "Weight: " << weight << " kg" << std::endl;
        std::cout << "Run Speed: " << run_speed << " m/s" << std::endl;
        std::cout << "Swim Speed: " << swim_speed << " m/s" << std::endl;
    }
};

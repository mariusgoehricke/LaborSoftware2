#include <iostream>
#include <string>

class Animal{
    public:
    std::string str_animal;
};
class Bird;
class Cat : public Animal{
    public:
    void operator+(const Bird &class_bird){
        std::cout << "Cat +  Bird" << std::endl;
    }
    void operator+(const Cat &class_cat){
        std::cout << "Cat +  Cat" << std::endl;
    }
};
class Bird : public Animal {
    public:
    void operator+(const Bird &class_bird){
        std::cout << "Bird +  Bird" << std::endl;
    }
    void operator+(const Cat &class_cat){
        std::cout << "Bird +  Cat" << std::endl;
    }
};


int main(){
    Bird vogel;
    Cat katze;
    

    vogel + vogel;
    vogel + katze;
    katze + vogel;
    katze + katze;
}
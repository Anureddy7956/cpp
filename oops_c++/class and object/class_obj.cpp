// Simple example progamme for class and object in c++
#include<iostream>
using namespace std;
class Car{
    public:
        string brand;
        int speed;

void display(){
    cout<<"Car Brand: "<<brand<<"\tCar Speed: "<<speed<<"\n";
    }
};
int main(){
    Car c1,c2;
    c1.brand="BMW";
    c1.speed=200;

    c2.brand="Audi";
    c2.speed=250;

    c1.display();
    c2.display();
    return 0;

}
#include <iostream>
using namespace std;

// Base Car class
class Car {
    private:
        string brand;
        int vinNumber;
    
    protected:
        float fuelLevel;
        float mileage;
        float speed;

    public:
        float lastRadioStation;

        Car(string b, int vn, float f, float ml, float s) :
        brand(b), vinNumber(vn), fuelLevel(f), mileage(ml), speed(s) {}

        void displayBasicInfo() {
            cout    << "Brand: " << brand << endl
                    << "Fuel Level: " << fuelLevel << endl
                    << "Mileage: " << mileage << endl
                    << "Speed: " << speed << endl;
        }

};

int main() {
    Car car1("Toyota", 123456, 98.7, 3050, 0);
    car1.displayBasicInfo();

    return 0;
}
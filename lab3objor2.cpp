#include <iostream>
using namespace std;

class Vehicle {
public:
string Br; //brand
string Mo;  //model
int MD;     //date
string P;      //sign
string VT;  //vehicle type
};

Vehicle veh1;

int main(){

veh1.Br="Opel";
veh1.Mo="Agila";


veh1.MD=2002;
veh1.P="ZEX-7994";
veh1.VT="Car";


cout << veh1.Br << "\n";
cout << veh1.Mo << "\n";
cout << veh1.MD << "\n";
cout << veh1.P << "\n";
cout << veh1.VT;

return 0;

}

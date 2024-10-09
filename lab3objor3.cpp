#include <iostream>
using namespace std;


class Vehicle {
private:
string Br; //brand
string Mo;  //model
int MD;     //date
string P;      //sign
string VT;  //vehicle type
public:
void set_br(string Br);
void set_mo(string Mo);
void set_md(int MD);


void set_p(string P);
void set_vt(string VT);
void display();
};

void Vehicle::set_br(string a){

cout << "Enter brand: ";
cin >> Br;

}

void Vehicle::set_mo(string b){

cout << "Enter model: ";
cin >> Mo;

}

void Vehicle::set_md(int e){

cout << "Enter date: ";
cin >> MD;

}

void Vehicle::set_p(string c){

cout << "Enter sign: ";
cin >> P;

}

void Vehicle::set_vt(string d){

cout << "Enter vehicle type: ";
cin >> VT;

}

Vehicle veh2;

void Vehicle::display(){

string a,b,c,d;
int e;

veh2.set_br(a);
veh2.set_md(e);
veh2.set_mo(b);
veh2.set_p(c);
veh2.set_vt(d);

cout << veh2.Br << "\n";
cout << veh2.MD << "\n";
cout << veh2.Mo << "\n";
cout << veh2.P << "\n";
cout << veh2.VT;



}

int main(){

veh2.display();

return 0;
}
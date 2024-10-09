#include <iostream>
using namespace std;

class trapeze {
  private:
    double sb; //small base
    double bb; //big base
    double h;  //height
  public:
    void set_smbas(double a);
    void set_bgbas(double a);
  
  void set_height(double a);
    double get_acr();
};

void trapeze::set_smbas(double a){

cout << "Enter the trapeze's small base: ";
cin >> sb;

}

void trapeze::set_bgbas(double a){

cout << "Enter the trapeze's big base:";
cin >> bb;

}

void trapeze::set_height(double a){

cout << "Enter trapeze height: ";
cin >> h;

}

double trapeze::get_acr(){

return (1.0 / 2 * (sb + bb) * h);

}

trapeze trap1;

int main(){

double a,b,c;

trap1.set_smbas(a);
trap1.set_bgbas(b);


trap1.set_height(c);
cout << "Trapeze Acreage: " << trap1.get_acr();

return 0;

}
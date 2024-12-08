#include <iostream>
#include "TempConvert.h"
using namespace std;
double Cel_to_Fah(double cel);
double Cel_to_Fah(double cel);
int main() {
    double fah,cel;
    cout<<"Enter temperature in Fahrenheit:";
    cin>>fah;
    cout<<"The temperature after conversion is"<<Fah_to_Cel(fah)<<endl;
    cout<<"Enter temperature in Celsius:";
    cin>>cel;
    cout<<"The temperature after conversion is"<<Cel_to_Fah(cel)<<endl;
    return 0;
}

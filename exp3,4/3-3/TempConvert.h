#include <iostream>
using namespace std;
double Cel_to_Fah(double cel) {
    return cel* (1.8) + 32.0;
}
double Fah_to_Cel(double fah) {
    return (fah - 32.0)/1.8;
}
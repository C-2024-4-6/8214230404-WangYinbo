#include <iostream>
using namespace std;
int main() {
    cout<<"Please enter 10 numbers:";
    int a[10];
    int b[10];
    int count = 0;
    for(int i=0;i<10;i++) {
        cin>>a[i];
        bool flag = true;
        for (int j = 0; j < count; j++) {
            if (a[i] == b[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            b[count] = a[i];
            count++;
        }
    }

    cout << "The distinct numbers are:" << endl;
    for (int i = 0; i < count; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
}

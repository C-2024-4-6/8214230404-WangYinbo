#include <iostream>
using namespace std;
int main() {
    int arr[100];
    for (int i = 1; i<=100; i++) {
        for (int j = i-1;j<100;j+=i+1) {
            if(arr[j]==0)
                arr[j]=1;
            else
                arr[j]=0;
        }
    }
    for(int c=0;c<100;c++)
        if(arr[c]==1)
            cout<<c+1<<" ";
    return 0;
}

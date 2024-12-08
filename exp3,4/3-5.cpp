#include <iostream>
using namespace std;
int MonkeyPeach(int n) {
    if(n==1)
        return 1;
    else {
        return (MonkeyPeach(n-1)+1)*2;
    }
}
int main() {
    cout<<MonkeyPeach(10)<<endl;
    return 0;
}

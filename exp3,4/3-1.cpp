#include <iostream>
using namespace std;
int GCD(int a,int b){
	while(b){
		int c=a%b;
		a=b;
		b=c;
	}
	return (a);
}
int LCM(int a,int b){
	int c=GCD(a,b);
	return a*b/c;
}
int main(){
	int a,b;
	cout<<"Please enter two numbers:"<<endl;
	cin>>a>>b;
	cout<<GCD(a,b)<<" "<<LCM(a,b)<<endl;
	return 0;
}

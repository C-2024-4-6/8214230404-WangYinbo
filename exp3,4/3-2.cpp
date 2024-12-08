#include <iostream>
#include <cmath>
using namespace std;
int is_prime(int n){
	if(n<=1)
		return false;
	int c=sqrt(n)+1;
	for(int i=2;i<c;i++){
		if (n%i==0)
			return false;
	}
	return true;
}
int main(){
	int count=0;
	for (int i=1;i<=200;i++){
		if(is_prime(i)){
			cout<<i<<"\t";
			count+=1;
			if(count%10==0)
				cout<<endl;
		}
		
	}
	return 0;
}



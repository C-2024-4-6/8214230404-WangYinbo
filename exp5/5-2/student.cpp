#include <iostream>
#include <cstring>
#include "student.h"
using namespace std;
void Student::set_value(int n,const char*str, char s)
{
	num = n;
	int i = 0;
	strncpy(name, str, sizeof(str) - 1);//¿½±´×Ö·û´®
	name[sizeof(name) - 1] = '\0';//ÉèÖÃ×Ö·û´®
	sex = s;
}
void Student::display() {
	cout << "num: " << num << endl;
	cout << "name: " << name << endl;
	cout << "sex> " << sex << endl;
}



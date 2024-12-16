#pragma once

class Student   //类声明
{
public: 
	void set_value(int n, const char *str,char s);//公用成员函数原型声明
	void display();
private:
	int num;
	char name[20];
	char sex;
};

#pragma once

class Student   //������
{
public: 
	void set_value(int n, const char *str,char s);//���ó�Ա����ԭ������
	void display();
private:
	int num;
	char name[20];
	char sex;
};

#include <iostream>
using namespace std;

class Point {
private:
	int x, y;
public:
	Point(int a=60,int b=80) {
		x = a;
		y = b;
	}
	//���������
	void setPoint(int i, int j) {
		x += i;
		y += j;
	}
	//��ʾ����
	void display() const {
		cout << "���꣺(" << x << "," << y << ")" << endl;

	}
};

int main()
{
	Point p1;
	p1.display();

	int x1, y1;
	cout << "����ı����꣺";
	cin >> x1 >> y1;
	p1.setPoint(x1, y1);
	//���
	p1.display();
	return 0;
}
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
	//设置坐标点
	void setPoint(int i, int j) {
		x += i;
		y += j;
	}
	//显示坐标
	void display() const {
		cout << "坐标：(" << x << "," << y << ")" << endl;

	}
};

int main()
{
	Point p1;
	p1.display();

	int x1, y1;
	cout << "输入改变坐标：";
	cin >> x1 >> y1;
	p1.setPoint(x1, y1);
	//输出
	p1.display();
	return 0;
}
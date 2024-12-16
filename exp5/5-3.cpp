//#include <iostream>
//using namespace std;
//class Cuboid {
//private:
//	double length;
//	double width;
//	double height;
//public:
//	Cuboid() {
//		length = 0;
//		width = 0;
//		height = 0;
//	}
//	//长方体尺寸
//	void inputCuboid() {
//		cout << "Please enter length:";
//		cin >> length;
//		cout << "Please enter width:";
//		cin >> width;
//		cout << "Please enter height:";
//		cin >> height;
//	}
//	//计算体积
//	double calculate() const {
//		return length * width * height;
//	}
//};
//int main()
//{
//	Cuboid Cb[4];
//	for (int i = 1; i <= 3; i++)
//	{
//		cout << "输入第" << i << "个长方体尺寸：" << endl;
//		Cb[i].inputCuboid();
//		cout << "第" << i << "个长方体体积为:" << Cb[i].calculate() << endl;
//	}
//	return 0;
//}
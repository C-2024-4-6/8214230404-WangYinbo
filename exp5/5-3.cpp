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
//	//������ߴ�
//	void inputCuboid() {
//		cout << "Please enter length:";
//		cin >> length;
//		cout << "Please enter width:";
//		cin >> width;
//		cout << "Please enter height:";
//		cin >> height;
//	}
//	//�������
//	double calculate() const {
//		return length * width * height;
//	}
//};
//int main()
//{
//	Cuboid Cb[4];
//	for (int i = 1; i <= 3; i++)
//	{
//		cout << "�����" << i << "��������ߴ磺" << endl;
//		Cb[i].inputCuboid();
//		cout << "��" << i << "�����������Ϊ:" << Cb[i].calculate() << endl;
//	}
//	return 0;
//}
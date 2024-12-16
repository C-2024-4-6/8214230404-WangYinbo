//#include <iostream>
//using namespace std;
//
//class Student {
//private:
//	int id;
//	double score;
//public:
//	Student() {
//		id = 0;
//		score = 0;
//	}
//	void input() {
//		cout << "Please enter id:";
//		cin >> id;
//		cout << "Please enter score:";
//		cin >> score;
//	}
//	int getId() const
//	{
//		return score;
//	}
//	double getScore() const {
//		return score;
//	}
//};
//void max(Student* students, int n) {
//	Student* maxStudent = students;
//	for (int i = 1; i <= n; i++)
//	{
//		if (students[i].getScore() > \
//			maxStudent->getScore())
//		{
//			maxStudent = &students[i];
//		}
//	}
//	cout << "The student with the best grades is:"\
//		<<maxStudent->getId() << endl;
//}
//
//int main()
//{
//	int n = 5;
//	Student students[5];
//
//	//输入信息
//	for (int i = 1; i <= n; i++)
//	{
//		cout << "Please enter Student " << i << " :";
//		students[i-1].input();
//	}
//	//处理
//	max(students, n);
//	return 0;
//}
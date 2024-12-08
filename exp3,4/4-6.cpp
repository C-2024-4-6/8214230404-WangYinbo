//#include <iostream>
//#include <cstring>
//using namespace std;
//int indexof(const char* s1, const char* s2)
//{
//	if (*s1 == '\0')
//		return 0;
//	for (int i = 0; s2[i] != '\0'; i++)
//	{
//		if (s2[i] == s1[0])
//		{
//			int j = 1;
//			while (s1[j] != '\0' && s2[i + j] == s1[j])
//				j++;
//			if (s1[j] == '\0')
//				return i;
//		}
//	}
//	return  -1;
//}
//
//int main() {
//	char s1[100],s2[100];
//	cout << "Enter the first string:";
//	cin.getline(s1, 100);
//	cout << "Enter the second string:";
//	cin.getline(s2, 100);
//
//	int result = indexof(s1, s2);
//	if (result != -1)
//		cout << "founded," << result << endl;
//	else
//		cout << "S1 is not a substring of s2" << endl;
//	return 0;
//}
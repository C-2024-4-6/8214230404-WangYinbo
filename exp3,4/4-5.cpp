//#include <iostream>
//#include <cstring>
//#include <cctype>
//using namespace std;
//
//void count(const char s[], int counts[])
//{
//	for (int i = 0; i < 26; i++)
//		counts[i] = 0;
//	for (int i = 0; s[i] != '\0'; i++)
//	{
//		char ch = tolower(s[i]);
//		if (ch >= 'a' && ch <= 'z')
//			counts[ch - 'a']++;
//	}
//}
//
//int main()
//{
//	char s[100];
//	int counts[26];
//	cout << "请输入字符串：";
//	cin.getline(s, 100);
//	count(s, counts);
//	cout << "字幕出现次数：" << endl;
//	for (int i = 0; i < 26; i++)
//	{
//		if (counts[i] > 0)
//			cout << char(i + 'a') << ":" << counts[i] << endl;
//	}
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//int parseHex(const char* const hexString)
//{
//    int n, i, num = 0;
//    n = strlen(hexString);
//    for (i = n - 1; i >= 0; i--)
//    {
//        if (hexString[i] >= '0' && hexString[i] <= '9')
//            num += (hexString[i] - '0') * pow(16, n - 1 - i);
//        else if (hexString[i] >= 'A' && hexString[i] <= 'F')
//            num += (10 + (hexString[i] - 'A')) * pow(16, n - 1 - i);
//        else if (hexString[i] >= 'a' && hexString[i] <= 'f')
//            num += (10 + (hexString[i] - 'a')) * pow(16, n - 1 - i);
//    }
//    return num;
//}
//int main()
//{
//    char a[] = "A5";
//    cout<<parseHex(a);
//}
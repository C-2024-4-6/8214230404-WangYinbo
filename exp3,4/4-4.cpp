//#include <iostream>
//using namespace std;
//void merge(const int list1[], int size1, const int list2[]\
//	, int size2, int list3[])
//{
//	for (int i = 0; i < size1 + size2; i++)
//		list3[i] = 0;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	while (i < size1 && j < size2)
//	{
//		if (list1[i] < list2[j])
//			list3[k++] = list1[i++];
//		else
//			list3[k++] = list2[j++];
//	}
//	while (i < size1)
//		list3[k++] = list1[i++];
//	while (j < size2)
//		list3[k++] = list2[j++];
//}
//
//int main()
//{
//	int list1[] = {1,2,3,4};
//	int size1 = 4;
//	int list2[] = { 3,4,5,7 };
//	int size2 = 4;
//	int list3[100];
//	merge(list1, size1, list2, size2, list3);
//	cout << "The merged list is: ";
//	for (int i = 0; i < size1 + size2; ++i) {
//		cout << list3[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}

#include <iostream>
using namespace std;
void BubbleSort(int* arr, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {
	cout << "Enter arr size:";
	int n;
	cin >> n;
	int* p = new int[n];
	for (int i = 0; i < n; i++)
		cin >> p[i];
	BubbleSort(p, n);
	cout << "Output:";
	for (int i = 0; i < n; i++)
	{
		cout << p[i]<<" ";
	}
	return 0;
}
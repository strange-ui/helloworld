#include<iostream>

using namespace std;
void sort(int arr[], int size)
{
	int temp = 0;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int arr[] = { 21,41,53,65,77,33,52, };
	int size = sizeof(arr) / sizeof(arr[0]);
	sort(arr, size);
	return 0;
}
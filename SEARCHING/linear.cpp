#include <iostream>
using namespace std;

int search(int array[], int n, int x)
{

	// Going through array sequencially
	for (int i = 0; i < n; i++)
		if (array[i] == x)
			return i;
	return -1;
}

int main()
{
	int array[] = { 12, 114, 0, 4, 9 };
	int x = 4;
	int n = sizeof(array) / sizeof(array[0]);

	int result = search(array, n, x);

	(result == -1)
		? cout << "Element not found"
		: cout << "Element found at index: " << result;
}

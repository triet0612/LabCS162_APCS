#include <iostream>
using namespace std;

int step_to_increasing(int arr[], int length, int d);

int main() {
	int n, d;
	cin >> n >> d;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int ans = step_to_increasing(arr, n, d);
	cout << ans;
	delete[]arr;
	return 0;
}

int step_to_increasing(int arr[], int length, int d) {
	int count = 0;
	if (length == 1) {
		return 0;
	}
	for (int i = 1; i < length; i++) {
		if (arr[i - 1] >= arr[i]) {
			count += (arr[i - 1] - arr[i]) / d + 1;
			arr[i] += ((arr[i - 1] - arr[i]) / d + 1) * d;
		}
	}
	return count;
}

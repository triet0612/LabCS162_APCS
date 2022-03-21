#include <iostream>
using namespace std;

int main() {
	int n, p1, p2, p3, t1, t2;
	cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
	int pow = 0;
	int temp1, temp2;
	cin >> temp1 >> temp2;
	pow += (temp2 - temp1)*p1;
	for (int i = 1; i < n; i++) {
		cin >> temp1;
		int idle = temp1 - temp2;
		if (idle <= t1) {
			pow += idle * p1;
		}
		else if (idle > t1 && idle <= t1 + t2) {
			pow += t1 * p1 + (idle - t1) * p2;
		}
		else if (idle > t1+t2) {
			pow += t1 * p1 + t2 * p2 + (idle - t1 - t2) * p3;
		}
		cin >> temp2;
		pow += (temp2 - temp1)*p1;
	}
	cout << pow;
	return 0;
}
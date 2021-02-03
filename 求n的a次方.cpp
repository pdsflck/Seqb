#include <iostream>
using namespace std;
int main(){
	int a, n, sum = 0;
	cin >> a >> n;
	for (int i = 1; i <= n - 1; i++) {
		sum += a * a;
	} cout << sum << endl;
	return 0;
}

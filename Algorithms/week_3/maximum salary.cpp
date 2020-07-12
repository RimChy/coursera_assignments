#include<bits/stdc++.h>
using namespace std;
bool GreaterOrEqual(string& a, string& b) {
	return(b + a > a + b);
}
string Largeast_Salary(vector<string> Nums, int n) {
	for (size_t i = 1; i < n; i++) {
		for (size_t j = 0; j < n - i; j++) {
			if (GreaterOrEqual(Nums[j], Nums[j + 1])) {
				swap(Nums[j], Nums[j + 1]);
			}
		}
	}
	stringstream Salary;
	for (size_t i = 0; i < n; i++) {
		Salary << Nums[i];
	}
	return Salary.str(); // return string as an object
}

int main() {
	int n;
	cin >> n;
	vector<string> v(n);
	for (int i = 0; i < n; i++) {
		cin >>v[i];
	}
	cout << Largeast_Salary(v, n) << endl;
}


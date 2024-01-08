#include <bits/stdc++.h>

using namespace std;

class Rectangle{
private:
	double width = 1.0, length = 1.0;
public:
	inline void SetLength(double L) {
		length = L;
	}	
	inline void SetWidth(double W) {
		width = W;
	}
	inline double S() {
		return width * length;
	}
};

int main() {
	Rectangle T;
	T.SetLength(15);
	T.SetWidth(10);
	cout << T.S() << '\n';
} 

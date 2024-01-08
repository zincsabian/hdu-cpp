#include <bits/stdc++.h>

using namespace std;

class Complex{
private:
	double rea = 0.0, ima = 0.0;
public:
	Complex(double a, double b = 0.0) {
		rea = a; ima = b;
	}
	inline double real() {
		return rea;
	}
	inline double imag() {
		return ima;
	} 
	void add(Complex b) {
		rea += b.real();
		ima += b.imag();
	}
	void show() {
		cout << rea << "+" << ima << "i" << '\n';
	}
};

int main() {
	Complex c1(3, 5);
	Complex c2(4.5);
	c1.add(c2);
	c1.show();
} 

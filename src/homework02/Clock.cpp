#include <bits/stdc++.h>

using namespace std;

class Clock{
private:
	int hour = 0, minute = 0, second = 0;
public:
	inline void SetHour(int h) {
		hour = h;
	}	
	inline void SetMinute(int m) {
		minute = m;
	}
	inline void SetSecond(int s) {
		second = s;
	}
	inline void ShowTime() {
		cout << hour << ":" << minute << ":" << second << '\n'; 
	}
};

int main() {
	Clock C;
	C.SetHour(15);
	C.SetMinute(15);
	C.SetSecond(15);
	C.ShowTime(); 
} 

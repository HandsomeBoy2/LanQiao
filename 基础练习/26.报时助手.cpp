#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a[24] = {"zero", "one", "two", "three", "four", "five", "six",
					 "seven", "eight", "nine", "ten", "eleven", "twelve", 
					 "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", 
					 "eighteen", "nineteen", "twenty", "twenty one", "twenty two", 
					 "twenty three"};
	int h, m;
	cin >> h >> m;
	cout << a[h] << " ";  //小时 
	if (m == 0) {  //是否整点 
		cout << "o’clock"; 
		return 0;
	}
	int t = m % 10; 
	m = m / 10; 
	switch (m) {
		case 2: cout << "twenty "; break;
		case 3: cout << "thirty "; break;
		case 4: cout << "forty "; break;
		case 5: cout << "fifty "; break;	 
		default: break;
	}
	if (m == 0 && t != 0) {  //0-10分 
		cout << a[t];
	}
	if (m == 1) { //10-20分 
		cout << a[t+10];
	}
	if (m != 0 && m != 1 && t != 0) {  //其他的分钟 
		cout << a[t];
	}
	return 0;
}


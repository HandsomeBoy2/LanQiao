#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string a;
	cin >> a;
	int l = n - 1;
	int cnt = 0;  //cnt用来统计交换的次数 
	int flag = 0; //flag判断是否已经有一个单独的奇数个的字符了 
	for (int i = 0; i < l; i++) { //i指针从头遍历到倒数第二个字符 
		for (int j = l; j >= i; j--) {//j指针从后面往前一直到i指针所指位置 
			if (i == j) { //如果找不到相同的字符 
				if (n % 2 == 0 || flag == 1) {//Impossible的两种情况 
					cout << "Impossible";
					return 0;
				}
				flag = 1;
				cnt += n / 2 - i;
			} else if (a[i] == a[j]){
				for (int k = j; k < l; k++) {//
					swap(a[k], a[k+1]); //把a[k]交换到a[l]处 
					cnt++;//统计交换的次数 
				}
				l--;
				break;
			}
		}
	}
	cout << cnt;
	return 0;
}


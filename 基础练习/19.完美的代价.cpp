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
	int cnt = 0;  //cnt����ͳ�ƽ����Ĵ��� 
	int flag = 0; //flag�ж��Ƿ��Ѿ���һ�����������������ַ��� 
	for (int i = 0; i < l; i++) { //iָ���ͷ�����������ڶ����ַ� 
		for (int j = l; j >= i; j--) {//jָ��Ӻ�����ǰһֱ��iָ����ָλ�� 
			if (i == j) { //����Ҳ�����ͬ���ַ� 
				if (n % 2 == 0 || flag == 1) {//Impossible��������� 
					cout << "Impossible";
					return 0;
				}
				flag = 1;
				cnt += n / 2 - i;
			} else if (a[i] == a[j]){
				for (int k = j; k < l; k++) {//
					swap(a[k], a[k+1]); //��a[k]������a[l]�� 
					cnt++;//ͳ�ƽ����Ĵ��� 
				}
				l--;
				break;
			}
		}
	}
	cout << cnt;
	return 0;
}


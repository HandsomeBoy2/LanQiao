#include <iostream>    
#include <cstring>    
#include <cstdio>    
using namespace std;  
int a[100], c[100];  
int n, ans;//���и���  
int fun(int num, int k)  
{  
    if (k == 1 || k == 2)return 1;//�߽�����  
    if (c[k - 1]>c[k - 2] && num<c[k - 2]) return 1;  
    if (c[k - 1]<c[k - 2] && num>c[k - 2]) return 1;  
    return 0;  
}  
  
void dfs(int x) //x�Ǽ�¼c�����±�  
{  
    if (x > n)return;//Խ��  
    for (int i = 1; i <= n; i++)   
    {  
        if (!a[i] && fun(i, x))//����������û��ʹ�ù�������ڶ�������  
        {  
            a[i] = 1;//���Ϊ�Ѿ��ù�  
            c[x] = i;//��¼����   
            if (x >= 2) {  
                ans++; //4�����������㣬���еĸ�����һ  
            }  
            dfs(x + 1);//��������Ѱ��  
            a[i] = 0;//ȡ�����  
        }  
    }  
}  
int main()  
{  
    while (cin >> n)  
    {  
        memset(a, 0, sizeof(a));//�����ʼ��  
        memset(c, 0, sizeof(c));  
        ans = 0;  
        dfs(1);  
        cout << ans << endl;  
    }  
    return 0;  
}  


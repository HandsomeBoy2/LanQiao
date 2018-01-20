#include <iostream>    
#include <cstring>    
#include <cstdio>    
using namespace std;  
int a[100], c[100];  
int n, ans;//序列个数  
int fun(int num, int k)  
{  
    if (k == 1 || k == 2)return 1;//边界条件  
    if (c[k - 1]>c[k - 2] && num<c[k - 2]) return 1;  
    if (c[k - 1]<c[k - 2] && num>c[k - 2]) return 1;  
    return 0;  
}  
  
void dfs(int x) //x是记录c数组下标  
{  
    if (x > n)return;//越界  
    for (int i = 1; i <= n; i++)   
    {  
        if (!a[i] && fun(i, x))//满足条件（没有使用过且满足摆动条件）  
        {  
            a[i] = 1;//标记为已经用过  
            c[x] = i;//记录序列   
            if (x >= 2) {  
                ans++; //4个条件都满足，序列的个数加一  
            }  
            dfs(x + 1);//继续向下寻找  
            a[i] = 0;//取消标记  
        }  
    }  
}  
int main()  
{  
    while (cin >> n)  
    {  
        memset(a, 0, sizeof(a));//数组初始化  
        memset(c, 0, sizeof(c));  
        ans = 0;  
        dfs(1);  
        cout << ans << endl;  
    }  
    return 0;  
}  


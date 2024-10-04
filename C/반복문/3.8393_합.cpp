/* 
8393_합
n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.
*/
#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    cin >> n;
    int a =0;
   for(int i=1; i<=n; i++){
        a += i;
   }
   cout << a << "\n";
}

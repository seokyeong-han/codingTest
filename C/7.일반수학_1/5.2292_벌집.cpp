/* 
2292_벌집
https://www.acmicpc.net/problem/2292

               
1     |      | n = 1 
2-7   | 6개  | n = 2
8-19  | 12개 | n = 3
20-37 | 18개 | n = 4
      | 6배수 
*/

#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    
    int layer =1 ;
    int cnt = 1;

    while (true)
    {
        if(n == 1)break;
        if(n > cnt){// n이 cnt보다 크면
            cnt += 6*layer;
            layer++;
            
        }else{
            break;
        }
    }
    
    cout << layer;

   return 0;
}
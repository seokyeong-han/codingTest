/*
11653_소인수분해
https://www.acmicpc.net/problem/11653

*/

#include<bits/stdc++.h>
using namespace std;
int n;
int tt(int n){
    //cout << "n = " << n << "\n";
    for(int i=2; i<n; i++){
        if(n%i == 0){
            cout << i << "\n";
            return n/i;
        }
    }
    cout << n;
    return -1;
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    if (n == 1) return 0;
    while (true)
    {
        n = tt(n);
        if(n == -1)break;
    }
    return 0;
}

//간단한 방법
/*
//백준11653 소인수분해
 
#include <iostream>
using namespace std;
 
int main() {
    int N;
    cin >> N;
 
    if (N == 1) return 0;
 
    for (int i = 2; i <= N; i++) {
        while (N % i == 0) {
            cout << i << endl;
            N /= i;
        }
    }
 
}
*/

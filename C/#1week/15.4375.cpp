#include <bits/stdc++.h>>
using namespace std;
int n;
int main(){
    while (cin >> n)
    {
        int cnt=1, a=1;
        while(true){
            if(a % n == 0){
                cout << cnt << "\n";
                break;
            }else{
                a = (a * 10)+1;
                a %= n; 
                cnt ++;
            }
            
        }
    }
    return 0;
}

/*
int main(){
    int a = 1;
    int n = 7;
    int cnt = 1;
    while (a)
    {
        if(a % n == 0){
            break;
        }else{
            a = (a * 10)+1;
            cout << a; 
            cnt++;       
        }
    }
    cout << "\n" << cnt;
    
}*/
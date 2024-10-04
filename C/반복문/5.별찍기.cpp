#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    /*
        *
        **
        ***
        ****
        *****
    */
   /*
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << "\n";
    }*/
    
    /*
        *
       **
      ***
     ****
    *****
    */
    for(int i=1; i<=n; i++){
    int a =0;
        for(int j=1; j<=n; j++){
            a = n-i;
            if(a >= j){
                cout << " ";
            }else{
                cout << "*";
            }
        }
    cout << "\n";
    }

   return 0;
}
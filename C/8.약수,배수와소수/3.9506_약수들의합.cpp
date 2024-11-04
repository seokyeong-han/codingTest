/*
9506_약수들의 합
https://www.acmicpc.net/problem/9506

ex)
6 = 1 + 2 + 3
12 is NOT perfect.
*/

#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    while (true)
    {
        cin >> n;
        if(n == -1)break;
        vector<int> result;
        int sum = 0;
        for(int i=1; i<n; i++){
            if(n%i == 0){
                result.push_back(i);
                sum += i;
            }
        }
        
        if(n == sum){
            cout << n << " = ";
            for(int i=0; i< result.size(); i++){
                if(i == result.size()-1){
                    cout << result[i];
                }else{
                    cout << result[i] << " + ";
                }
            }
            cout << "\n";
        }else{
            cout << n << " is NOT perfect." << "\n";
        }
        

    }
    
    return 0;
}

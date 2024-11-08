/*
9063_대지
https://www.acmicpc.net/problem/9063


*/
#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    vector<int>x;
    vector<int>y;

    for(int i=0; i<n; i++){
        int xi,yi;
        cin >> xi >> yi ;
        x.push_back(xi);
        y.push_back(yi);
    }
      
    int xMaxVal = *max_element(x.begin(), x.end());
    int xMinVal = *min_element(x.begin(), x.end());
    int yMaxVal = *max_element(y.begin(), y.end());
    int yMinVal = *min_element(y.begin(), y.end());

    cout << (xMaxVal - xMinVal) * (yMaxVal - yMinVal);

    return 0;
}
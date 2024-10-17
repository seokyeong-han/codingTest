/* 
2566_최댓값
https://www.acmicpc.net/problem/2566

총 다섯줄의 입력이 주어진다. 각 줄에는 최소 1개, 최대 15개의 글자들이 빈칸 없이 연속으로 주어진다. 
*/

#include <bits/stdc++.h>
using namespace std;
int a[9][9],x,y;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int maxVal = -1;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin >> a[i][j];
            if(maxVal < a[i][j]){
                maxVal = a[i][j];
                x = i;
                y = j;
            }
        }
    }

    cout << maxVal << "\n";
    cout << x+1 << " " << y+1;
   return 0;
}
// 좋은 단어
// 문제 : https://www.acmicpc.net/problem/3986
// 스택

#include <bits/stdc++.h>
using namespace std;
int n, ret;
string s;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> s;
        cout << s <<"\n";
        stack<char> stk;
        for(char c : s){
            //스택 사이즈가 있고, stk맨윗값이 들어오는 값과 같으면 pop(스택의 가장 위 요소를 제거)
            if(stk.size() && stk.top() == c) stk.pop();
            else stk.push(c);
        }
        if(stk.size() == 0){
            ret++;
        }
    }
    cout << ret;
    return 0;
}
/*
3
ABAB
AABB
ABBA
*/
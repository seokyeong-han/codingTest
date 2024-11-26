/*
24262_알고리즘 수업 - 알고리즘의 수행 시간 1
https://www.acmicpc.net/problem/24262

배열에서 특정 인덱스의 값을 가져오는 상수 시간을 구하는 문제
입력크리 n에 상관없이 항상 같은 시간이 소요되는 경우를 말하며 보통 O(1)로 표시된다
어떤 n이 들어와도 항상 상수시간이 소모 되므로 1,0을 개행하여 출력하면 된다.
#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    cout << 1 << "\n" << 0;
    return 0;
}

24263_알고리즘의 수행 시간 2
상수시간은 항상 똑같으므로

#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    cout << n << "\n" << 1;
    return 0;
}
*/

/*
24264_알고리즘 수업 - 알고리즘의 수행 시간 3
https://www.acmicpc.net/problem/24264

첫째 줄에 입력의 크기 n(1 ≤ n ≤ 500,000) long형식을 써야함
*/

#include<bits/stdc++.h>
using namespace std;
long n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    cout << n*n << "\n" << 2;
    return 0;
}
/*
2587_대표값2
https://www.acmicpc.net/problem/2587

다섯개의 수에서 평균값 중간값 출력
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v;
	int n = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		v.push_back(n);
	}

	sort(v.begin(), v.end());
    int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum+= v[i];
	}
    cout << sum/5 << "\n";
    cout << v[2];
	return 0;
    
}
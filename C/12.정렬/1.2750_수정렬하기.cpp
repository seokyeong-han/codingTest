/*
2750_수 정렬하기
https://www.acmicpc.net/problem/2750

첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000)이 주어진다. 
둘째 줄부터 N개의 줄에는 수가 주어진다. 이 수는 절댓값이 1,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.
*/


#include <bits/stdc++.h>
using namespace std;
int n, arr[1000]; //N(1 ≤ N ≤ 1,000)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v;
	int n = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int input = 0;
		cin >> input;

		v.push_back(input);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++)
	{
		cout << v[i] << '\n';
	}

	return 0;
    
}

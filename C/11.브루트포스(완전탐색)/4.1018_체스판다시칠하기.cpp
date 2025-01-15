/*
1018_체스판다시칠하기
https://www.acmicpc.net/problem/1018


*/
#include <bits/stdc++.h>
using namespace std;

string board[50];
string wb[8] = { //일차원 배열
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

string bw[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

int comparison(int x, int y) {
    int wbCnt = 0;
    int bwCnt = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[i + x][j + y] != bw[i][j]) {
                bwCnt++;
            }
            if (board[i + x][j + y] != wb[i][j]) {
                wbCnt++;
            }
        }
    }
    return min(bwCnt, wbCnt);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    // 입력 받기
    for (int i = 0; i < n; i++) {
        cin >> board[i];
    }

    int minCnt = INT_MAX; // 최대값으로 초기화

    for (int x = 0; x <= n - 8; x++) { //이부분 복습
        for (int y = 0; y <= m - 8; y++) {
            int res = comparison(x, y);
            minCnt = min(minCnt, res);
        }
    }

    cout << minCnt;
    return 0;
}
//패션왕 신해빈
// 문제 : https://www.acmicpc.net/problem/9375
#include <bits/stdc++.h>
using namespace std;
int n,m,ret;
string name,type;

int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> m;
        map<string, int> _map;
        for(int i=0; i<m; i++){
            cin >> name >> type;
            _map[type]++;
        }

        //cout << _map["headgear"] << ", " << _map["eyewear"] << "끝 \n";
        ret = 1; 
        // auto를 사용하여 _map의 각 요소를 순회
        for(auto c: _map){
            ret *= c.second +1; //c.second -> value값 출력
                                // +1 은 옷이 없는 경우도 추가
        }
        cout << ret -1 << "\n"; //모든 의상을 입지 않은 경우 제거
    }
    return 0;
}
/*
2
3
hat headgear
sunglasses eyewear
turban headgear
3
mask face
sunglasses face
makeup face

1
3
hat headgear
sunglasses eyewear
turban headgear
*/

//counting 문제
/*
5 3 1 -> 요금 1대=5, 2대=3 3대=1
출발, 도착 시간
1 6 -> 5시간
3 5 -> 2시간
2 8 -> 6시간
    따라서 counting 할때 for(int j=a; j<b; j++) 이렇게 for문으로 해줘야한다.

counting 배열에서 금액 더해주면 된다
1대 = A
2대 = B*2
3대 = C*3

*/
#include<bits/stdc++.h>
using namespace std;
//typedef long long ll;  
string str;
int A,B,C,a,b,pay,cnt[100];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> A >> B >> C;
    //cout << "A :" << A << "B :" << B << "C :" << C << "\n"; //요금
    for(int i=0; i<3; i++){
        cin >> a >> b; //트럭 출발, 도착 시간
        //cout << "a :" << a << "b :" << b << "\n"; 

        //counting 문제와 비슷함
        for(int j=a; j<b; j++){ //시간이라 사잇값으로 계산해야한다.
            cnt[j]++;
        }
    }

    for(int i:cnt){
        if(i == 1){pay += A;}
        else if(i ==2){pay += B * 2;}
        else if(i ==3){pay += C * 3;}
    }
    cout << pay ;
    return 0;
}
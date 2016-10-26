#include <bits/stdc++.h>
#define REP(i,n)  for(int i=0;i<(int)(n);++i)
#define FOR(i,b,n)  for(int i=b;i<(n);++i)
#define ALL(c) (c).begin(),(c).end()
#define SS size()
#define CLR(a,v) memset((a),(v), sizeof a)
#define ST first
#define ND second
template<typename T, typename U> inline void AMIN(T &x, U y) { if(y < x) x = y; }
template<typename T, typename U> inline void AMAX(T &x, U y) { if(x < y) x = y; }
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef pair<int,int> pii;

int main () {
    int ziel = 7;
    vi W = {7,8,15,3,68};
    int hier = 0;
    int zahl = 0;
    for (int i = 0; i < W.size(); i++){
        if ((W[i] & (1 << 3)) != 0){
            cout << W[i] << endl;
        }
    }
    /*for (int i = 0; i < gg.to_string().length(); i++){
            cout << gg[i]
    }
    if (hier & (1 << 2) == 0){
        cout << (hier & (1 << 2));
    }
    else {
        cout << (hier & (1 << 1));
    }

    if (hier == ziel){
        zahl = 1;
    }
    cout << zahl;*/
}

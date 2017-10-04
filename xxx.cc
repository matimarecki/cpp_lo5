#include <bits/stdc++.h>
#define REP(i,n)  for(int i=0;i<(int)(n);++i)
#define FOR(i,b,n)  for(int i=b;i<(n);++i)
#define ALL(c) (c).begin(),(c).end()
#define SS size()
#define CLR(a,v) memset((a),(v), sizeof a)
#define PB push_back
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
    vector <pair<int,int>> bloo = {{0,1},{1,2}};
    int max = 0;
    for (int i = 0; i < 2; i++){
        if (max < bloo[i].second){
            max = bloo[i].second;
        }
        if (max < bloo[i].first){
            max = bloo[i].first;
        }
    }
    max ++;
    vi supp (max + 1);
    for (int i = 0; i < max; i++){
        for (int j = 0; j < 2; j++){
            if (bloo[j].second == i){
                supp[i] = supp[max]++;
            }
        }
    }
    for (int i = 0; i < max; i++){
        cout << supp[i] << endl;
    }
    
    
}

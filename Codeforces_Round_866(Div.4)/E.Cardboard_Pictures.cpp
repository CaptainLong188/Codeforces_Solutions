#include <iostream>
#include <vector>

using namespace std;

bool ok(vector<long long>& v, long long m, long long c){

    int n = v.size();
    long long area = 0;

    for(int i = 0; i < n; ++i){
        area += (v[i] + m) * (v[i] + m);
        if(area >= c) break; // avoid overflow
    }

    return area >= c;
}

int main(){

    int T; cin >> T;

    while(T--){

        long long n, c; cin >> n >> c;
        vector<long long> s(n);

        for(int i = 0; i < n; ++i){
            cin >> s[i];
        }

        int l = 0, r = 1e9; // c <= 1e18

        while(r > l + 1){
            
            int m = l + (r - l)/2;

            if(ok(s, m, c)){
                r = m;
            }else{
                l = m;
            }
        }
        
        cout << r/2 << '\n';
    }

    return 0;
}

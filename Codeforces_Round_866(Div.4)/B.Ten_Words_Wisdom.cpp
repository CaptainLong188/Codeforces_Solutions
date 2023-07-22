#include <iostream>
#include <vector>

using namespace std;

int main(){

    int T; cin >> T;

    while(T--){

        int n; cin >> n;
        int winner = -1, best_score = 0;

        for(int i = 1; i <= n; ++i){ // 1-indexed
            
            int a, b; cin >> a >> b;
            
            if(b > best_score && a <= 10){
                winner = i;
                best_score = b;
            }
        }

        cout << winner << '\n';
    }

    return 0;
}

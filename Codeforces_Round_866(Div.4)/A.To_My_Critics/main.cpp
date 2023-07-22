#include <iostream>

using namespace std;

int main(){

    int T; cin >> T;

    while(T--){

        int a, b, c; cin >> a >> b >> c;
        
        cout << ((a + b >= 10 || b + c >= 10 || a + c >= 10) ? "YES\n" : "NO\n");
    }

    return 0;
}

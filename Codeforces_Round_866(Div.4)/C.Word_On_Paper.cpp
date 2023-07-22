#include <iostream>
#include <vector>

using namespace std;

int main(){

    int T; cin >> T;

    while(T--){
        
        string s = "";

        for(int i = 0; i < 8; ++i){
            for(int j = 0; j < 8; ++j){
                
                char x; cin >> x;
                
                if(x != '.'){
                    s += x;
                }
            }
        }

        cout << s << '\n';
    }

    return 0;
}

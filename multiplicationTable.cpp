#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    for (int i = 1; i <= 8; ++i){
        for (int j = 1; j <= 8; ++j){
            cout << i * j << setw(4);
        }
        cout << '\n';
    }

    return 0;
}

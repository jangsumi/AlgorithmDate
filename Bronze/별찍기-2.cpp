#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i=1; i<=n; i++){ //세로
        for (int j=n; j>1; j--){ //가로
            cout << "-";
        }
        cout << endl;
    }
}
#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int testcase;
    int a, b;

    cin >> testcase;

    for (int i=0; i<testcase; i++){
        cin >> a >> b;
        cout << a+b << "\n";
    }
}
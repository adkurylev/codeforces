#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    bool flag = false;

    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        if(k){
            flag = true;
            break;
        }
    }

    printf(flag ? "HARD" : "EASY");

    return 0;
}
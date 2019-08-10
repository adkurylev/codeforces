#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int * array = new int [n];

    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += array[i];
    }

    if(sum % 2 == 1){
        cout << "NO";
        return 0;
    }

    int max = array[0];
    int maxIndex = 0;

    for (int i = 1; i < n; ++i) {
        if(array[i] > max){
            max = array[i];
            maxIndex = i;
        }
    }

    int res = 0;

    for (int i = 0; i < n; ++i) {
        if(i == maxIndex){
            continue;
        }
        res += array[i];
    }

    if(max > res){
        cout << "NO";
    }
    else{
        cout << "YES";
    }

    return 0;
}
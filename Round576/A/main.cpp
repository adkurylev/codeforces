#include <iostream>

using namespace std;

int main() {
    int n, x, y, res = -1;
    cin >> n >> x >> y;

    int * array = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    int len = x + y + 1;

    for (int i = 0; i < n; ++i) {
        int * tempArray = new int [len];

        for (int j = 0; j < len; ++j){
            if(i + j < n){
                tempArray[j] = array[i+j];
            }
            else{
                tempArray[j] = 2147483647;
            }
        }

        int min = tempArray[0];
        int minIndex = 0;
        for (int j = 1; j < len; ++j) {
            if (tempArray[j] < min){
                min = tempArray[j];
                minIndex = j + i;
            }
        }

        if(minIndex <= x + i){
            res = minIndex;
            break;
        }

        delete[] tempArray;
    }

    cout << res + 1;

    delete[] array;
    return 0;
}
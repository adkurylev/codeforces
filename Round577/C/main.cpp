#include <iostream>
#include <algorithm>
#include <ctime>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int * array = new int [n];

    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    sort(array.begin(), array + n);

    int med = array[int(n/2)];
    int medCount = 0;

    for (int i = int(n/2); i < n; ++i) {
        if(array[i] == med){
            medCount++;
        }
    }

    if(k < medCount){
        cout << med;
        return 0;
    }

    k -= medCount;

    while(true){
        med++;
        for (int i = int(n/2) + 1; i < n; ++i) {
            if(array[i] == med){
                medCount++;
            }
        }

        if(k < medCount){
            break;
        }

        k -= medCount;
    }

//    while(true){
//        med = array[int(n/2)];
//        int medCount = 0;
//
//        for (int i = int(n/2); i < n; ++i) {
//            if(array[i] == med){
//                medCount++;
//            }
//        }
//
//        if(k < medCount){
//            break;
//        }
//
//        for (int i = int(n/2); i < n; ++i) {
//            if(array[i] == med){
//                array[i]++;
//            }
//        }
//
//        k -= medCount;
//    }

    cout << med;

    return 0;
}
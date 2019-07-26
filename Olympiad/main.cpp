#include <iostream>
#include <set>

using namespace std;

int main() {
    int * array;
    int n;
    cin >> n;
    array = new int[n];
    set<int> markSet;
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
        markSet.insert(array[i]);
    }

    int out = markSet.count(0) ? markSet.size() - 1 : markSet.size();

    cout << out;

    delete[] array;

    return 0;
}
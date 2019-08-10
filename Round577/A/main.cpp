#include <iostream>
#include <string>

using namespace std;

int main() {

    int n, m, res = 0;
    cin >> n >> m;

    int ** matrix = new int * [m];

    for (int i = 0; i < m; ++i) {
        matrix[i] = new int [5];
        for (int j = 0; j < 5; ++j) {
            matrix[i][j] = 0;
        }
    }



    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;

        for (int j = 0; j < m; ++j) {
            if(str[j] == 'A'){
                matrix[j][0]++;
            }
            else{
                if(str[j] == 'B'){
                    matrix[j][1]++;
                }
                else{
                    if(str[j] == 'C'){
                        matrix[j][2]++;
                    }
                    else{
                        if(str[j] == 'D'){
                            matrix[j][3]++;
                        }
                        else{
                            matrix[j][4]++;
                        }
                    }
                }
            }
        }
    }

    int * answPoint = new int [m];

    for (int i = 0; i < m; ++i) {
        cin >> answPoint[i];
    }

    for (int i = 0; i < m; ++i) {
        int max = matrix[i][0];
        for (int j = 1; j < 5; ++j) {
            if(matrix[i][j] > max){
                max = matrix[i][j];
            }
        }

        res += answPoint[i] * max;
    }

    cout << res;

    return 0;
}
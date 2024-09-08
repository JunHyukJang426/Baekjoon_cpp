#include <iostream>
using namespace std;

int main(){
    int N;
    int y = 0; // = 10 * ((N / 30) + 1);
    int m = 0; // = 15 * ((N / 60) + 1);

    cin >> N;
    for(int i = 0; i < N; i++){
        int time;
        cin >> time;
        y += 10 * ((time / 30 + 1));
        m += 15 * ((time / 60 + 1));
    }
    if (y == m)
        cout << "Y M " << y;
    else if(y > m)
        cout << "M " << m;
    else
        cout << "Y " << y;

    return 0;
}
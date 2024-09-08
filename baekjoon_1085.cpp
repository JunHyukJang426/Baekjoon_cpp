#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int x, y, w, h;
    int tmp1, tmp2;
    cin >> x >> y >> w >>h;

    tmp1 = min(x, y);
    tmp2 = min((w-x), (h-y));
    
    cout << min(tmp1, tmp2);

}
// int main(){
//     int x, y, w, h;
//     cin >> x >> y >> w >> h;

//     if((w-x) > (h-y))
//         cout << h-y;
//     else if((w-x) < (h-y))
//         cout << w-h;
//     else 
//         cout << x;

//     return 0;
// }


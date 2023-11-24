#include <iostream>
using namespace std;
int main() {
    long long n,result=0;
    cin >> n;
    if (n % 2 == 0) {
        result = n / 2;
    } else {
        result = (n/2)-n;
    }
 
    cout << result;
 
    return 0;
}

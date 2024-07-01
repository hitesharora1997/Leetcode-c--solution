#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
         long a = 0;
        while( x != 0) {
            long l = x % 10;
            a = (a * 10) + l;
            x = x / 10;
        }
        if( a > INT_MAX || a < INT_MIN)
            return 0;
        return a;
    }
};


int main() {
    Solution s;

    int x = s.reverse(-123);
    cout << x << endl;
    return 0;
}
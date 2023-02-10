#include<bits/stdc++.h>

using namespace std ;

int main() {

    int c = 0 , t ;
    while(cin >> t)
    {
        c = c*2 + t ;
        cout << (c%3 == 0  ? "Divisible" : "Not Divisible"  )  << endl ;
        c %= 3 ;
    }


    return 0;
}


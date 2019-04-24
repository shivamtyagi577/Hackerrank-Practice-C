#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int i;
    long l;
    char c;
    float f;
    double d;
    cin >>i>>l>>c>>f>>d;
    cout<<i<<"\n"<<l<<"\n"<<c<<"\n";
    cout.precision(3);
    cout<<fixed<<f<<endl;
    cout.precision(9);
    cout<<fixed<<d<<endl;

        return 0;
}


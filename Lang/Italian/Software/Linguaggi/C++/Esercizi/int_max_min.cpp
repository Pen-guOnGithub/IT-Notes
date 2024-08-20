#include <iostream>
#include <limits.h>

using std::cout;

int main() {
    cout<<INT_MAX<<'\n';
    cout<<INT_MIN<<'\n';
    cout<<__FLT_MAX__<<'\n';
    cout<<__FLT_MIN__<<'\n';
    cout<<__DBL_MAX__<<'\n'; // Double > Float
    cout<<__DBL_MIN__<<'\n';
    return 0;
}
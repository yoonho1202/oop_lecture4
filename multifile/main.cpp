// main.cpp
#include <iostream>
#include "math.h"   
using namespace std;

int main() {
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;

    int result = add(x, y);
    cout << "The sum is: " << result << endl;

    return 0;
}
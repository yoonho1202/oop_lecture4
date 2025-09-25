// main.cpp
#include <iostream>
#include "math.h"   // 내가 만든 헤더 불러오기
using namespace std;

int main() {
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;

    int result = add(x, y);
    cout << "The sum is: " << result << endl;

    return 0;
}
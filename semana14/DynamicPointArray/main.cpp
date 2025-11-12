#include <iostream>
#include "Point.h"
#include "DynamicPointArray.h"

using namespace std;

int main()
{
    Point p1;
    Point p2(4, 5);
    Point p3(7, 2);

    Point arr[3] = {p1, p2, p3};

    DynamicPointArray da(arr, 3);
    da.print();
    return 0;
}

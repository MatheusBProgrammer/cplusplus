#include <iostream>
using std::cout;
using std::endl;

int main()
{

    const int arraySize = 10;
    int lista[arraySize] = {87, 68, 94, 100, 83, 78, 85, 91, 76, 87};
    int total = 0;

    for (int i = 0; i < arraySize; ++i)
    {
        total += lista[i];
    }

    cout << total << endl;
    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()

{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    for (int i = 0; i < 5; ++i)
    {
        std::cout << rand() % 10 << std::endl;
    }

    return 0;
}

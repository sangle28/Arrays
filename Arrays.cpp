#include <iostream>

int main()
{
    int guesses[10] = {12, 43, 23, 43, 23};
    int num_elements = 5;
    int size = sizeof(guesses) / sizeof(guesses[0]);
    std::cout << size << std::endl;

    for(int i = 0; i < num_elements; i++)
    {
        std::cout << guesses[i] << "\t";
    }

    return 0;
}
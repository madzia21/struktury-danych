#include <iostream>
int minNumber(int * tab, int arrSize)
{
    int minNumber = 0;
    for (int i = 0; i < arrSize; ++i)
    {
        if (tab[i] < tab[i + 1])
        {
            minNumber = tab[i];
        }
    }
}
int main()
{
    int number = 0;
    std::cout << "Enter number: ";
    std::cin >> number;
    int* tab = new int[number];

    int tempNumber = 0;
    for (int i = 0; i < number; ++i)
    {
        std::cout << "Enter number: ";
        std::cin >> tempNumber;
        tab[i] = tempNumber;
    }

   
}
#include <iostream>

void bubbleSort(int* tab, const unsigned int size)
{
        bool isSwapped = false;
        do
        {
            isSwapped = false;
                for (int i = 0; i < size - 1; ++i)
                {
                    if (tab[i] > tab[i + 1])
                    {
                        int temp = tab[i];
                        tab[i] = tab[i+1];
                        tab[i+1] = temp;
                        isSwapped = true;
                    }
                }
        }while (isSwapped);
}
void bubbleSort_(int* tab, const unsigned int size)
{
    int tabSize = size;
    int temp = 0;
    for (int i = 0; i < size; ++i)
    {
        for (int i = 0; i < tabSize - 1; ++i)
        {
            if (tab[i] > tab[i + 1])
            {
                temp = tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = temp;
            }
            --tabSize;
        }
    }
}

int main()
{
    const unsigned int size = 10;
    int tab[size] = {8, 3, 5, 8, 2, 9, 1, 7, 6, 4};

    for (int i = 0; i < size; ++i)
    {
        std::cout << "[" << i << "]" << tab[i] << std::endl;
    }

    bubbleSort_(tab, size);

    for (int i = 0; i < size; ++i)
    {
        std::cout << "[" << i << "]" << tab[i] << std::endl;
    }
}
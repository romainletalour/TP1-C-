#include "exo5.hpp"

int main()
{
    float num1 = 2;
    float num2 = 4;
    float num3 = 6;
    float num4 = 8;
    float num5 = 10;

    float * tab[5] = {&num1, &num2, &num3, &num4, &num5};
    float * tableau = creer(tab, 5);
    int i = 0;
    while (i < 5)
    {
        cout << *tableau << endl;
        *tableau++;
        i++;
    }
    
    
}

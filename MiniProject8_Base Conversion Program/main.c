#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int base10Number;                   // Input decimal number
    int baseInput;                      // Base to convert to
    int maxNumber;                      // Maximum number with 4 digits in this base
    int baseBNum;                       // Result as construct
    int place0, place1, place2, place3; // locations of the 4 digits

    printf("Enter any decimal number: ");
    scanf("%d", &base10Number);

    printf("Enter the base you want it to convert to: ");
    scanf("%d", &baseInput);

    // pow() returns double → convert it to int
    maxNumber = (int)(pow(baseInput, 4) - 1);
    printf("\nMaximum 4-digit value in base %d is: %d\n", baseInput, maxNumber);

    place0 = base10Number % baseInput;
    base10Number /= baseInput;

    place1 = base10Number % baseInput;
    base10Number /= baseInput;

    place2 = base10Number % baseInput;
    base10Number /= baseInput;

    place3 = base10Number % baseInput;

    // Correct digit order
    baseBNum = place3 * 1000 + place2 * 100 + place1 * 10 + place0;

    printf("The decimal number converted to base %d is: %d\n", baseInput, baseBNum);

    return 0;
}

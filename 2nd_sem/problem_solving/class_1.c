// date: Sep 7, 2024
#include <stdio.h>

int main()
{
    // Linear search
    int array[5] = {5, 1, 2, 3, 4};
    int target = 4; // worst case
    int loc = -1;
    int i = 0;
    while (i <= 4)
    {
        if (array[i] == target)
        {
            loc = i;
            break;
        }
        i++;
    }
    if (loc == -1)
    {
        printf("Element not found in array");
    }
    else
    {
        printf("Found element at %f", loc);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5};

    int largest=arr[0];
    int second_largest=largest;

    for(int i=0; i<5; i++)
    {
        if(arr[i]>largest)
        {
            second_largest = largest;
            largest = arr[i];

        }
        else if(arr[i]<largest && arr[i]!=second_largest)
        {
            second_largest = arr[i];
        }
    }
    
    
    printf("Largest number in arr %d\n",largest);
    printf("Second largest: %d\n",second_largest);
}
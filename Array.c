// Largest and Second largest


// #include <stdio.h>

// int main()
// {
//     int arr[5]={1,2,4,5,6};

//     int largest=arr[0];
//     int second_largest=largest;

//     for(int i=0; i<5; i++)
//     {
//         if(arr[i]>largest)
//         {
//             second_largest = largest;
//             largest = arr[i];

//         }
//         else if(arr[i]<largest && arr[i]>second_largest)
//         {
//             second_largest = arr[i];
//         }
//     }
    
    
//     printf("Largest number in arr %d\n",largest);
//     printf("Second largest: %d\n",second_largest);
// }


// Sorted Checking

// #include <stdio.h>

// int main()
// {
//     int arr[5]={0,2,3,6,5};
//     int left = arr[0];
//     int right = arr[1];
//     int num =0;

//     for(int i=left; i<5; i++)
//     {
//         for(int j=right; j<5-1; j++)
//         {
//             if(right <left)
//             {
//                num = 0;
//             }

//             else
//             {
//                 num = 1;
//             }

//         }
//     }
//     if(num==1)
//     {
//         printf("Sorted\n");
//     }
//     else
//     {
//         printf("Unsorted\n");
//     }
//     return 0;
// }




// Reverse an array

// #include <stdio.h>

// int  main()
// {
//     int arr[10]={10,9,8,7,6,5,4,3,2,1};

//     for(int i = 9; i>=0; i--)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     return 0;

// }



// Move Zeros

#include <stdio.h>

int main()
{   int arr[5]={0,0,1,2,3};
    int left = arr[0];
    for(int right = 0; right<5; right++)
    {
        if(arr[right]!=0)
        {
            int temp;
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
        }
    }

    for(int i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
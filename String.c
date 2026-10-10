// #include <stdio.h>

// int main()
// {
//     char str[8]="Gajanand";
//     int n =0;
//     while (str[n]!='\0')
//     {
//         n++;
//     }
//     for(int i=0; i<n/2; i++)
//     {
//       char temp = str[i];
//       str[i]=str[n-1-i];
//       str[n-1-i] = temp;
//     }
//     printf("%s\n",str);
//     return 0;
// }


// Palindrome Check


// #include <stdio.h>
// #include <stdbool.h>

// int main()
// {
//     char str[5] = "hello";
//     int n = 0;
//     bool pall = false;

//     while (str[n] != '\0')
//     {
//         n++;
//     }
//     for(int i=0; i<n/2; i++)
//     {
//         if(str[i] == str[n-1-i])
//         {
//             pall = true;
//             break;
//         }
//     }
//     if(pall)
//     {
//         printf("Paalindron\n");
//     }
//     else
//     {
//         printf("Not Pallindrom\n");
//     }
//     return 0;
// }

// two pointers 

// #include <stdio.h>
// int main()
// {
// char str[6]="madam";
// int n = 0;

// int flag = 1;

// while (str[n]!= '\0')
// {
//     n++;
// }
// char left = 0;
// char right = n-1;

// for(int i=0; i<n/2; i++)
// {
//     if(str[left] != str[right])
//     {
//         flag = 0;
//         break;
//     }
//     left++;
//     right--;
// }
// if(flag==1){
//     printf("Pallindrom\n");
// }
// else
// {
//     printf("Not\n");
// }
// return 0;
// }


//  using while + 2 pinters not for loop

// #include <stdio.h>

// int main()
// {
//     char str[6] = "level";
//     int n = 0;
//     int flag = 1;

//     while(str[n]!='\0')
//     {
//         n++;
//     }

//     char left = 0;
//     char right = n-1;

//     while(left<right)
//     {
//         if(str[left]!=str[right])
//         {
//              flag = 0;
//              break;
//         }
//         left++;
//         right--;
//     }

//     if(flag==1)
//     {
//         printf("Pallindrom\n");
//     }
//     else
//     {
//         printf("Not Pallindrom\n");
//     }
//     return 0;
// }
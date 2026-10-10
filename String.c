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






// Vovels counting using if 

// #include <stdio.h>

// int main()
// {

//     char str[6]="madam";
//     int n = 0;
//     int count = 0;

//     while(str[n]!='\0')
//     {
//         n++;
//     }

//     for (int i=0; i<n; i++)
//     {
//         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i'|| str[i] == 'o' || str[i]=='u'|| 
//             str[i]=='A' || str[i]=='E'|| str[i]=='I'||str[i]=='O'|| str[i]=='U')
//         {
//            count++;
//         }
//     }
//     printf("%d ",count);
//     printf("\n");
//     return 0;
// }


// storing vovels in array

// #include <stdio.h>

// int main()
// {
//     char str[]="aeiouAEIOU";
//     char vovel[]="aeiouAEIOU";
//     int count = 0;

//     for(int i=0; str[i]!='\0';i++)
//     {
//           for(int j=0; vovel[j]!='\0';j++)
//           {
//             if(str[i]==vovel[j])
//             {
//               count++;
//               printf("%c ",str[i]);
//               break;
              
//             }
//           }

//     }
//     printf("\n");
//     printf("%d\n",count);
//     return 0;
// }


// Words counting Traversal + State Tracking pattern.


// #include <stdio.h>

// int main()
// {
//     char str[]="I love python";
//     int count = 0;
//     int inword =0;
    
//     for(int i=0; str[i]!='\0'; i++)
//     {
//         if(str[i]!=' ' && inword==0)
//         {
//             count++;
//             inword = 1;
//         }
//         else if(str[i]==' ')
//         {
//             inword=0;
//         }
//     }
//     printf("%d ",count);
//     printf("\n");
//     return 0;
// }


// Count spaces and adjust


// #include <stdio.h>

// int main()
// {
//     char str[]="i love mudhol because that is my taluk and i got for shoping and to attend many functions";
//     int count = 1;
//     for(int i=0; str[i]!='\0';i++)
//     {
//         if(str[i]==' ')
//         {
//             count++; 
//         }
//     }
//     printf("%d ",count);
//     printf("\n");
//     return 0;
// }


// Conver to Lower case to Upper case   ASCII arithmetic (most common)

// #include <stdio.h>

// int main()
// {
//     char str[]="gajanand";

//     for(int i=0; str[i]!='\0';i++)
//     {
//         if(str[i]>='a'&& str[i]<='z')
//         {
//             str[i]=str[i]-32;
//         }
//     }
//     printf("%s\n",str);
//     return 0;
// }

// Using a character difference

// #include <stdio.h>
// int main()
// {
//     char str[]="Gajanand l immannavar";

//     for(int i=0; str[i]!='\0'; i++)
//     {
//         if(str[i] >= 'a' && str[i]<='z')
//         {
//              str[i] = str[i]-('a'-'A');
//         }
//     }
//     printf("%s \n",str);
//     return 0;
// }


// Using a loop and an alphabet mapping

// #include <stdio.h>

// int main()
// {
//     char str[]="mini";
//     char lower[]="abcdefghijklmnopqrstuvwxyz";
//     char Upper[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

//     for(int i=0; str[i]!='\0';i++)
//     {
//         for(int j=0; lower[j]!='\0'; j++)
//         {
//             if(str[i]==lower[j])
//             {
//                 str[i] = Upper[j];
//                 break;
//             }
//             else if(str[i]==Upper[j])
//             {
//                 str[i]=lower[j];
//                 break;
//             }
//         }
//     }
//     printf("%s ",str);
//     printf("\n");
//     return 0;
// }


// Using the built-in toupper()

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[]="GAJANAND";
    for(int i=0; str[i]!='\0';i++)
    {
        str[i] = tolower((unsigned char)str[i]);
    }
    printf("%s ",str);
    printf("\n");
    return 0;
}

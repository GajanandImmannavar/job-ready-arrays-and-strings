// #include <stdio.h>

// int main()
// {
//     char str[]="Gajanand";
//     int n =0;

//     while(str[n]!='\0')
//     {
//         n++;
//     }

//     for(int i=n-1; i>=0; i--)
//     {
//         printf("%c",str[i]);
//     }
//     printf("\n");
//     return 0;
// }




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


// Vowels count


// #include <stdio.h>

// int main()
// {
//     char str[]="Education";
//     char vowel[]="aeiouAEIOU";
//     int count=0;
//     for(int i=0; str[i]!='\0';i++)
//     {
//         for(int j=0; vowel[j]!='\0';j++)
//         {
//             if(str[i]==vowel[j])
//             {
//                 count++;
//             }
//         }
//     }
//     printf("%d\n",count);
//     return 0;
// }

// word count

// #include <stdio.h>
// int main()
// {
//     char str[]="I love You!";
//     int n=0;
//     int count=0;
//     while(str[n]!='\0')
//     {
//         n++;
//     }
//         if(str[n]!=' '|| str[n]!='\0')
//         {
//             count++;
//         }
    
//     printf("%d\n",count);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char str[]="Gajanand hi";
//     int inword=0;
//     int count=0;
//     for(int i=0; str[i]!='\0';i++)
//     {
//         if(str[i]!=' '&& inword==0)
//         {
//             count++;
//             inword=1;
//         }
//         else if(str[i]==' ')
//         {
//              inword=0;
//         }
//     }
//     printf("%d\n",count);
//     return 0;
// }

// Convert Lowercase to Uppercase str[i]-32


// #include <stdio.h>

// int main()
// {
//     char str[]="gajanand l immannavar";
//     for(int i=0; str[i]!='\0';i++)
//     {
//         if(str[i]>='a' && str[i]<='z')
//         {
//             str[i]= str[i]-32;
//         }
//     }
//     printf("%s\n",str);
//     return 0;
// }


//  Upper to Lower

// #include <stdio.h>

// int main()
// {
//     char str[]="I LOVE YOU!";

//     for(int i=0; str[i]!='\0';i++)
//     {
//         if(str[i]>='A'&& str[i]<='Z')
//         {
//             str[i] = str[i]+32;
//         }
//     }

//     printf("%s\n",str);
//     return 0;
// }

// our DSA revision rule
// Conversion	Condition	Operation
// Lowercase → Uppercase	ch >= 'a' && ch <= 'z'	ch = ch - 32
// Uppercase → Lowercase	ch >= 'A' && ch <= 'Z'	ch = ch + 32


// Compare Two Strings

// #include <stdio.h>

// int main()
// {
//     char str[]="Gajanand";
//     char str2[]="Gajanand";
//     int flag = 0;

//     for(int i=0; str[i]!='\0'|| str2[i]!='\0';i++)
//     {
       
//             if(str[i]!=str2[i])
//             {
//                  flag = 1;
//                  break;
//             } 
        
//     }
//     if(flag==1)
//     {
//         printf("Not Equal\n");
//     }
//     else
//     {
//         printf("Equal\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char str1[]="Gajanand";
//     char str2[]="Gajanand";
//     char left =0;
//     char right = 0;
//     int flag = 0;

//     while(str1[left]!='\0'|| str2[right]!='\0')
//     {
//         if(str1[left]!=str2[right])
//         {
//             flag = 1;
//             break;
//         }
//         left++;
//         right++;
//     }
//     if(flag==1)
//     {
//         printf("Not qual\n");
//     }
//     else
//     {
//         printf("Equal\n");
//     }
//     return 0;
// }

// Count Spaces in a String

// #include <stdio.h>

// int main()
// {
//     char string[]="Hi i love python and hmm!     ";
//     int count = 0;

//     for(int i=0; string[i]!='\0';i++)
//     {
//         if(string[i]==' ')
//         {
//           count++;
//         }
//     }
//     printf("%d\n",count);
//     return 0;
// }

// Word counting



// #include <stdio.h>

// int main()
// {
//     char string[]="Hi bro how are you!";
//     int words = 0;
//     int count = 0;

//    for(int i=0; string[i]!='\0';i++)
//    {
//     if(string[i]!=' ' && words==0)
//         {
//             count++;
//             words=1;
//         }
//         else if(string[i]==' ')
//         {
//             words=0;
//         }
//    }
        
    
// printf("%d\n",count);
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     char str[]="gAjAnAnD";

//     for(int i=0; str[i]!='\0';i++)
//     {
//         if(str[i]>='a' && str[i]<='z')
//         {
//             str[i]=str[i]-32;
//         }
//         else if(str[i]>='A' && str[i]<='Z')
//         {
//             str[i]=str[i]+32;
//         }
//     }

//     printf("%s\n",str);
//     return 0;
// }



// Check Whether a String Is a Palindrome






// Count vowels using a different approach


#include <stdio.h>

int main()
{
    char str[]="Gajanand";
    char vowel[]="AEIOUaeiou";
    int count=0;

    for(int i=0; str[i]!='\0';i++)
    {
        for(int j=0; vowel[j]!='\0';j++)
        {
            if(str[i]==vowel[j])
            {
                 count++;
                 break;
            }
        }
    }

    printf("%d\n",count);
    return 0;
}
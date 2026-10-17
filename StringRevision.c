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







// Count vowels using a different approach


// #include <stdio.h>

// int main()
// {
//     char str[]="Gajanand";
//     char vowel[]="AEIOUaeiou";
//     int count=0;

//     for(int i=0; str[i]!='\0';i++)
//     {
//         for(int j=0; vowel[j]!='\0';j++)
//         {
//             if(str[i]==vowel[j])
//             {
//                  count++;
//                  break;
//             }
//         }
//     }

//     printf("%d\n",count);
//     return 0;
// }




// Check Whether a String Is a Palindrome


// #include <stdio.h>

// int main()
// {
//     char str[]="Madam";
//     int flag = 0;
//     int n=0;
    
//     while(str[n]!='\0')
//     {
//         n++;
//     }
//     char left = 0;
//     char right = n-1;

//     for(int i=0; i<n/2; i++)
//     {
//         if(str[left]!=str[right])
//         {
//               flag =1;
//               break;
//         }
//         left++;
//         right--;
//     }
//     if(flag==1)
//     {
//         printf("Not palli\n");
//     }
//     else
//     {
//         printf("Palligram\n");
//     }
//     return 0;
// }



// #include <stdio.h>

// #include <stdbool.h>


// int main()
// {
//     char str[]="madaM";
//     int n =0;
//     bool bollean = true;

//     while(str[n]!='\0')
//     {
//         n++;
//     }
//     for(int i=0; i<n/2; i++)
//     {
//         if(str[i]!=str[n-1-i])
//         {
//             bollean = false;
//             break;
//         }
//     }

//     if(bollean)
//     {
//         printf("Pallindrom\n");
//     }
//     else
//     {
//         printf("Not palli\n");
//     }
//     return 0;
// }


// Reverse a string using two pointers and while

// #include <stdio.h>

// int main()
// {
//     char str[]="Level";
//     int n =0;
//     while(str[n]!='\0')
//     {
//         n++;
//     }
//     char left =0;
//     char right = n-1;
//     for(int i=0; i<n/2; i++)
//     {
//         char temp = str[left];
//         str[left] = str[right];
//         str[right] = temp;
//            left++;
//            right--;
//     }
 
//     printf("%s\n",str);
//     return 0;
// }

// Reverse word using temp
// #include <stdio.h>

// int main()
// {
//     char str[]="Gajanand";
//     int n=0; 
//     while(str[n]!='\0')
//     {
//         n++;
//     }
//     for(int i=0; i<n/2; i++)
//     {
//         char temp = str[i];
//         str[i]=str[n-1-i];
//         str[n-1-i]=temp;
//     }
//     printf("%s\n",str);
//     return 0;
// }


// reverse using loop

// #include <stdio.h>
// int main()
// {
// char str[]="Madam";
// int n=0;
// while(str[n]!='\0')
// {
//     n++;
// }
// for(int i=n-1; i>=0; i--)
// {
//     printf("%c",str[i]);
// }
// printf("\n");
// return 0;
// }


// Word counting

// #include <stdio.h>

// int main()
// {
//     char str[]="Madam hi i am here bye";
//     int count=1;
//     int n =0;
//     while(str[n]!='\0')
//     {
//         n++;
//     }

//     for(int i=0; i<n-1; i++){
//         if(str[i]==' ')
//         {
//             count++;
//         }
//     }
//     printf("%d\n",count);
//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     char str[]="hi bro i brought new bike i am so happy! and hered that you owned new one didn't you?";
//     int inword=0;
//     int count = 0;

//     for(int i=0; str[i]!='\0'; i++)
//     {
//         if(str[i]!=' ' && inword==0)
//         {
//             count++;
//             inword = 1;
//         }
//         else if(str[i]==' ')
//         {

//             inword = 0;
//         }
//     }
//     printf("%d\n",count);
//     return 0;
// }

// Removing Spaces from String (Using Second String)

// #include <stdio.h>

// int main()
// {
//   char str[]="Hi buddy how are you!";
//   char str1[50];


//   int j=0;

  
//   for(int i=0; str[i]!='\0';i++)
//   {
//     if(str[i]!=' ')
//     {
//         str1[j] = str[i];
//         j++;
//     }
    
//   }
//   str[j]='\0';

//   printf("%s\n",str1);
//   return 0;

// }

// Modify the same string (two indexes)

// #include <stdio.h>

// int main()
// {
//     char str[]="hi hello bye!";
//     int j=0;

//     for(int i=0; str[i]!='\0'; i++)
//     {
//         if(str[i]!=' ')
//         {
//             str[j]=str[i];
//             j++;
//         }
//     }
//     str[j]='\0';

//     printf("%s\n",str);
// }


// Using while

// #include <stdio.h>

// int main()
// {
//     char str[]="I love my country i am from Indai";
//     int i=0;
//     int j=0;

//     while(str[i]!='\0')
//     {
//         if(str[i]!=' ')
//         {
//             str[j]=str[i];
//             j++;
//         }
//         i++;
//     }
//     str[j]='\0';
//     printf("%s\n",str);

//     return 0;
    
// }


// #include <stdio.h>

// int main()
// {
//     char str[]="Gajanand@1233";
//     char str1[]="1234567890!@#$%^&*()";

//     int n =0;
//     int m=0;
//     int Sym =0;

//     while(str[n]!='\0' && str1[m]!='\0')
//     {
//         n++;
//         m++;
//     }

//     for(int i=0; i<n; i++)
//     {
//         for (int j=0; j<m; j++)
//         {
//             if(str[i]==str1[j])
//             {
//               Sym++;
//             }
//         }
//     }
//     printf("%d\n",Sym);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char str[]={'{}','[]','()','[]'};
//     char valid[]={'[[[]]]','{{{}}}','[]','{}','((()))','()'};
//     int n=0;
//     int m=0;
//     int flag =0;
//     while(str[n]!='\0' && valid[m]!='\0')
//     {
//         n++;
//         m++;
//     }
//     for(int i=0; i<n; i++)
//     {
//        for(int j=0; j<m; j++)
//        {
//         if(str[i]!=str[j])
//         {
//             flag = 1;
//         }
//        }
//     }

//     if(flag==1)
//     {
//         printf("Not valid\n");
//     }
//     else
//     {
//         printf("Valid\n");
//     }
//     return 0;
// }


// Concatenate two strings

// #include <stdio.h>


// int main()
// {
//     char str1[]="Gajanand ";
//     char str2[]="Immannavar";
//     char result[30];

//     int k=0;
    
//     for(int i=0; str1[i]!='\0'; i++)
//     {
//             result[k++]=str1[i];
//     }
    

//     for(int j=0; str2[j]!='\0'; j++)
//     {   
//           result[k++]=str2[j];
        
//     }
//     result[k]='\0';

//     printf("%s ", result);
//     printf("\n");

//     return 0;

// }

// Space removing frm string copying charester excluding space



// #include <stdio.h>
// int main()
// {
//     char str[]="Gajanand Immannavar";
//     int j=0;

//     for(int i=0; str[i]!='\0'; i++)
//     {
//         if(str[i]!=' ')
//         {
//             str[j]=str[i];
//             j++;
//         }
//     }
//     str[j]='\0';
//     printf("%s\n",str);
//     return 0;
// }


// Shifting charster left when reaching space

// #include <stdio.h>
// int main()
// {
//     char str[]="Gajanand l Immannavar";
//     for(int i=0; str[i]!='\0';i++)
//     {
//         if(str[i]==' ')
//         {
//             for(int j=i; str[j]!='\0'; j++)
//             {
//                 str[j]=str[j+1];
//             }
//             i--;
//         }
//     }
//     printf("%s\n",str);
//     return 0;
// }


// Reverse word in sentence


#include <stdio.h>

int main()
{
    char str[] = "Gajanand L Immannavar";
    int n = 0;

    while(str[n] != '\0')
    {
        n++;
    }

    // Step 1: Reverse the entire string
    int left = 0;
    int right = n - 1;

    while(left < right)
    {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }

    // Step 2: Reverse each word
    int start = 0;

    for(int i = 0; i <= n; i++)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            int l = start;
            int r = i - 1;

            while(l < r)
            {
                char temp = str[l];
                str[l] = str[r];
                str[r] = temp;

                l++;
                r--;
            }

            start = i + 1;
        }
    }

    printf("%s\n", str);

    return 0;
}

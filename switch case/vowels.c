//WAP to check if entered char is vowel or not


#include <stdio.h>

void main()
{
    char x;
    
    printf("Enter an alphabet :");
    scanf("%c",&x);
    
    switch(x)
    {
        case 'a': 
            printf("a is a vowel");
            break;
        case 'e': 
            printf("e is a Vowel");
            break;
        case 'i': 
            printf("i is a Vowel");
            break;
        case 'o': 
            printf("o is a Vowel");
            break;
        case 'u': 
            printf("u is a Vowel");
            break;
        default:
            printf("The alphabet is a consonant");
    }
}

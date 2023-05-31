#define _CRT_SECURE_N0_WARNINGS
#include <stdio.h>

int main()
{
    int a = 10, option = 0, c = 10;

    /////////////////////////////////////////
    //* simple if based on one condition

    if (a > 5)
    {
        printf("a(%d) is greater than 5\n", a);
    }
    if (a > 10)
    {
        printf("a(%d) is greater than 10\n", a);
    }
    else
    {
        printf("a(%d) is less than or equal to 10\n", a);
    }

    //* nested(ic ice deyisken) if example
    if (a >= 10)
    {
        printf("a(%d) is greater than 10 and ", a);
        if ((a % 2) == 0)
            printf("is even\n");
        else
            printf("is odd\n");
    }

    // * equivalent if as a logical expression
    ////////////////////////////////////////////
    if(a >= 10 && (a % 2) == 0) printf("a(%d) is greater than 10 and is even\n",a);

    //* short circuit evalution
    //* if the first part is false the second part is  not evaluated
    /////////////////////////////////////////////////////////////////
    if(a < 0 && (c = 2) > 0) {
        printf("The condition is false, so this will never print\n");
    }
    printf("after short circuit evaluation, c=%d\n",c);

    //* Multi way decision
    ///////////////////////
    printf("Select one of the following options\n");
    printf("1 - to say hello\n");
    printf("2 - to say goodbye\n");
    printf("3 - for coffee\n");
    scanf("%d", &option);

    if(option ==1) 
    {
        printf("Hello There\n");
    }
    else if (option ==2) {
        printf("bye bye\n");
    }
    else if (option == 3) {
        printf("can I have a coffee please?\n");
    }
    else {
        printf("That is not a valid option\n");
    }

        int option2;
        char ch;
        

        /////////////////////////////////////
        //* standart integer based switch with default
        /////////////////////////////////////

        printf("Enter an option from the menu\n");
        printf("1 - to say hello\n");
        printf("2 - to say goodbye\n");
        printf("3 - for coffee\n");
        scanf("%d", &option2);

        switch (option2)
        {
        case 1:
            printf("Hi There\n");
            break;
        
            case 2:
                printf("bye bye\n");
            break;
            case 3: 
                printf("can I have a coffee please?\n");
                break;
                default :
                printf("That is not a valid option\n");

        }    
        /////////////////////////////////////////////////////

        //* char based switch with fall through logic
        /////////////////////////////////////////////////////

        scanf("%*c"); //*discard newline from end of previous input
        printf("Enter a lower case letter or number: ");
        scanf("%c", &ch);
        switch (ch)
        {
        case 'a':
        case 'b':
        case 'i':
        case 'o':
        case 'u':
            printf("That's a vowel\n");
            break;
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            printf("That's a digit\n");
            break;
            default :
            printf("That's a consonant");
        }
        
        return 0;
}
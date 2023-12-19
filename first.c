#include <stdio.h>
#include <math.h>

int age = 10;

char x, y, z;

// datatypes: int, float, double, char

int printStatments()
{
    puts("this is a function call");

    puts("hi my name is Suchir"); // puts appears on each new line, automatically adds a /n
    puts("What is your name?");

    printf("Hi I go to NCSU\n I am a Sophomore\n"); // printf prints on a single line, will only print on multiple lines if a /n is specified

    return (0);
}

int printWithPlaceHolders()
{
    printf("Here is a value: %d+%d=%d\n", 2, 2, 4);
    printf("You are a %s.", "student"); // value, placeholder for a printf
    return (0);
}

void variableDeclaration()
{
    printf("I am %d years old.", age);

    char x, y, z;

    x = 'A';
    y = 'B';
    z = 'C';

    printf("\nThe first letters of the alphabet are %c %c %c", x, y, z);
}

void fileIOwithChar()
{

    int c;
    int b;
    printf("Type a letter: ");
    c = getchar(); // Get an input from IO
    b = getchar();
    printf("You typed ");
    putchar(c); // Place an input from IO
    putchar(b);
    printf("'.\n");
}

void IOwithScanF()
{
    // this can be used with various types can read an int, float, or a char, NO string yet?
    char x;
    printf("Type any char: ");
    scanf("%c", &x);
    printf("Character: %c\n", x);
}

void stringExamples()
{
    // String is a character array, last value is null

    char password[] = "spatula";

    printf("The password is %s\n", password);

    /* Using ScanF to read a string works sometimes
       Does not work well if you are reading a string with spaces, immediately stops at first whitespace
       Also if your string exceeds length then it will through a buffer overflow error
    */
    char name[15];

    printf("Your name? ");
    // scanf("%s", name);
    // printf("You are %s.\n", name);

    /* Better way to read Strings using Fget*/
    char input[64];

    printf("Instructions: ");
    fgets(input, 64, stdin); // string buffer, then max number of characters to read, file to read from in this case STDIN which is terminal
    puts("Thank you! Here are your instructions:");
    puts(input);
}

void mathTest()
{
    // math
    // ++ increment, -- decrement, % modulo, SAME AS JAVA

    float a;
    float b = 5.0;
    printf("Input an integer: ");
    scanf("%f", &a);
    printf("%f / %f = %f\n", a, b, a / b);

    float r;
    r = sqrt(2.0);
    printf("\n %f", r);

    float p;
    p = pow(2.0, 8.0);
    printf("\n %f", p);

    // math
    // ++ increment, -- decrement, % modulo, SAME AS JAVA

    // float a, b;
    printf("Input an float: ");
    scanf("%f", &a);

    printf("Input an float: ");
    scanf("%f", &b);

    printf("%f + %f = %f\n", a, b, a + b);

    printf("%f - %f = %f\n", a, b, a - b);

    printf("%f * %f = %f\n", a, b, a * b);

    printf("%f / %f = %f\n", a, b, a / b);

    printf("%f ^ %f = %f\n", a, b, pow(a, b));

    printf("sqrt %f sqrt %f\n", sqrt(a), sqrt(b));
}

void conditionalIF()
{
    int a;
    printf("Type an integer: ");
    scanf("%d", &a);
    if (a > 10)
    {
        printf("You typed %d. \n", a);
        printf("You are above 10");
    }
    else
    {
        printf("You typed %d. \n", a);
        printf("You are below 10");
    }
}

void conditionalCase()
{
    char letter;
    printf("Select a letter: ");
    scanf("%c", &letter);

    switch (letter)
    {
    case 'A':
        printf("You selected %c the correct answer", letter);
        break;
    case 'B':
        printf("You selected %c the incorrect answer", letter);
        break;
    case 'C':
        printf("You selected %c the incorrect answer", letter);
        break;
    default:
        printf("You selected %c the total wrong answer", letter);
        break;
    }
}

void caseDecisions()
{
    int nums;
    printf("Select a number 1, 2, 3: ");
    scanf("%d", &nums);
    switch (nums)
    {
    case 1:
        printf("Red");
        break;
    case 2:
        printf("Green");
        break;
    case 3:
        printf("Blue");
        break;
    default:
        printf("No color");
        break;
    }
}

void loops()
{
    for (int i = 0; i < 10; i++)
    {
        printf("Counting: %d\n", i);
    }

    int x;

    x = 1;
    while (x <= 10)
    {
        printf("%d\n", x);
        x++;
    }

    char ch;

    ch = 'A';
    do
    {
        putchar(ch);
        ch++;
    }

    while (ch != 'Z');

    putchar('\n');

    for (int i = 1; i <= 20; i++)
    {
        printf("%d\n", i);
    }

    int j = -10;
    while (j <= 10)
    {
        if (j % 2 == 0)
        {
            printf("%d\n", j);
        }
        j++;
    }
}

void evaluate(int a)
{
    if (a > 10)
    {
        printf("%d is above 10", a);
    }
    else if (a < 10)
    {
        printf("%d is below 10", a);
    }
    else
    {
        printf("%d is 10", a);
    }
}
int main()
{
    evaluate(123);
    return (0);
}
#include <stdio.h>

int main()
{
    /** Declare some char arrays to hold input First & Last name. */
    char fname[20], lname[20];

    /** Ask for some user input. */
    printf("Please provide your first name: ");
    /** Use the scanf function to get input from I/O. */
    scanf("%s", fname);
    /** Same for the last name */
    printf("Thanks! Now your last name: ");
    scanf("%s", lname);
    /** Now let's ask for a decimal number*/
    float decimal;
    printf("And your favorite number is? ");
    /** We gotta use a `&` ampersand to reference the variable to the scanf function.*/
    scanf("%f", &decimal);

    /** Our first line of code ever written in vscode. */
    printf("Hello, World! \nYour name is %s %s, which is really cool. \nYour favorite number is %00.3f", fname, lname, decimal);

    return 0;
}
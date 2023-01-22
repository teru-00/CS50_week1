# include <stdio.h> // ----------------------------------- standard input output
# include <cs50.h> // ------------------------------------------- for get_string

int main(void)
{
    string answer = get_string("What's your neme? ");
    printf("Hello, %s!\n", answer);
}
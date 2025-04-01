#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        my_putchar(str[i]);
        i ++;
    }
}


int main(void)
{
    char *emp = "salut";
    my_putstr(emp);
}
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        i ++;
    }
    return i;
}


int main(void)
{
    char *emp = "salut";
    my_strlen(emp);
}
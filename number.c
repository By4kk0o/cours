#include <unistd.h>

void number(char c)
{
  int i;
  i = '0';
  while (i <= '9')
    {
      write(1, &i, 1);
      i++;
    }
}

int main()
{
  number('1');
  return 0;
}

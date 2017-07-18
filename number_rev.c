#include <unistd.h>

void number(char c)
{
  int i;
  i = '9';
  while (i >= '0')
    {
      write(1, &i, 1);
      i--;
    }
}

int main()
{
  number('9');
  return 0;
}

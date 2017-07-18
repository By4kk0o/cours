#include <unistd.h>

void alphabet_rev(char c)
{
  int i;
  i = 122;
  while (i > 96)
    {
      write(1, &i, 1);
      i--;
    }
}

int main()
{
  alphabet_rev('z');
  return 0;
}

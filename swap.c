#include <unistd.h>

void swap(int a, int b)
{
  int save;
  
  save = a;
  a = b;
  b = save;
  write(1, &a, 1);
  write(1, &b, 1);
}

int main()
{
  swap('1', '2');
  return 0;
}

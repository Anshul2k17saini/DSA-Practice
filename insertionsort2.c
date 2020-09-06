#include <stdio.h>

int main()
{
  int n, array[1000], c, d, t;
 
  printf("Enter size of the array");
  scanf("%d", &n);
 
  for (c = 0; c < n; c++) 
  {
    scanf("%d", &array[c]);
  }
 
  for (c = 1 ; c <= n - 1; c++) {
    d = c;
    for(;d>0;)
    {
 
    if (array[d-1] > array[d])
    {

      t          = array[d];
      array[d]   = array[d-1];
      array[d-1] = t;
      
 
    }

     d--;
    }
  }
 
  printf("Sorted list is:");
 
  for (c = 0; c <= n - 1; c++) {
    printf("%d\n", array[c]);
  }
 
  return 0;
}
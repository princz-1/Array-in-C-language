/* int arr[] = {1,2,3,4,5}
For given array, what will the following give ?

A. *(arr+2)
  
B. *(arr+5)
  */


#include <stdio.h>

int main(void) {
  int arr[] = {1,2,3,4,5};
  
  // a. *(arr+2)
printf("%d\n",*(arr+2));
  // b. (arr+5)
  printf("%d",*(arr+5));
  
  return 0;
}

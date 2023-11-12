//Student Marks array 2 x 3
// Basic.2
#include <stdio.h>

int main(void) {
 int marks[2][3];

  marks[0][0] = 98;
  marks[0][1] = 99;
  marks[0][2] = 100;
  
  marks[1][0] = 98;
  marks[1][1] = 99;
  marks[1][2] = 100;

  printf("%d\n",marks[0][0]);
  printf("%d\n",marks[0][1]);
  printf("%d\n",marks[0][2]);
  printf("%d\n",marks[1][0]);
  printf("%d\n",marks[1][1]);
  printf("%d\n",marks[1][2]);
  
  return 0;
}

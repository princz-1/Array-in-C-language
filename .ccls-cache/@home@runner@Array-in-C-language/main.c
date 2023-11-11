// Array Basic Code
#include <stdio.h>

int main(void) {
int marks[3];
  printf("Enter a marks of science :");
  scanf("%d",&marks[0]);

  printf("Enter a marks of Hindi :");
  scanf("%d",&marks[1]);

  printf("Enter a marks of Maths :");
  scanf("%d",&marks[2]);

  printf("Science = %d,Hindi = %d,Maths = %d",marks[0],marks[1],marks[2]);
  return 0;
}
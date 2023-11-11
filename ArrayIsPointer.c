//Traverse an Array

#include <stdio.h>

int main(void) {
int aadhar[5];

  //Input
  int *ptr = &aadhar[0];
  for(int i=0; i<5; i++){
    printf("%d index : ",i);
    //scanf("%d",(ptr+i));
            //OR
    scanf("%d",&aadhar[i]);
  }

  //Output
  for(int i=0;i<5;i++){
    // printf("%d index = %d\n",i,*(ptr+i));
                //OR
    printf("%d index = %d\n",i,aadhar[i]);
  }
  return 0;
}

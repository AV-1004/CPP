#include<stdio.h>
int main()
{ int marks[5]={10,20,30,40,50};

for(int outerloop=0;outerloop<5;outerloop++){
    printf("enter %d index value\n",outerloop);
    scanf("%d",marks[outerloop]);
}
     return 0;
}
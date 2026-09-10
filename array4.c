#include<stdio.h>
int main()
{ int marks[5]={10,20,30,40,50};

for(int outerloop=0;outerloop<sizeof(marks)/sizeof(marks[0]);outerloop++){
printf("%d\n",marks[outerloop]);
}
    return 0;
}
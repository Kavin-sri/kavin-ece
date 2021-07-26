#include<stdio.h>
int main()
{
    int n;
    printf("enter the mark");
    scanf( "%d",&n);


    printf("%s",n>=85&&n<=100?"gradeA" :( n>=70&&n<=84?"gradeB" :(n>=55&&n<=69?"gradeC":(n>=40&&n<=54?"gradeD":(n<40?"gradeF":"invalid") ))));
    return 0;

}

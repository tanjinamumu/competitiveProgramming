#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if(marks>=80 && marks<=100)
    {
        printf("You got A+");
    }
    else if(marks>=70 && marks<=79)
    {
        printf("You got A");
    }
    else if(marks>=60 && marks<=69)
    {
        printf("You got A-");
    }
    else if(marks>=50 && marks<=59){
        printf("You got B");
    }
    else if(marks>=40 && marks<=49)
    {
        printf("You got C");
    }
    else if(marks>=0 && marks<=39){

        printf("You got F");
    }
    else{
        printf("%d is undefined marks", marks);
    }
}

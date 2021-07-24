#include<stdio.h>
int main()
{
    int foods;
    printf("pick a food item of your choice : \n1.Pizza \n2.Burger\n3.Pasta\n4.Freench Fries\n5.Sandwich ");
    printf("\nenter a food item of your choice ");
    scanf("%d",&foods);
    switch(foods)
    {
         case 1:
             printf("Food item-Pizza \nPrice-Rs239");
             break;
         case 2:
             printf("\nFood item-Burger \nPrice-Rs129");
             break;
         case 3:
             printf("\nFood item-Pasta \nPrice-Rs179");
             break;
         case 4:
             printf("\nFood item-Freench Fries\nPrice-Rs99");
             break;
         case 5:
             printf("\nFood item-Sandwich \nPrice-Rs149");
             break;
         default:
            printf("invalid choice");
    }
    return 0;
}

#include<stdio.h>
void main(){
int choice, Quantity,Total,FinalTotal=0;
char order;
start:
    printf(" 1.shahi Biryani\t\t 2800\n 2.Chiken Tikka\t\t\t 1600\n 3.Roasted Chicken\t\t 1200\n");
    printf("please enter your choice...... :  ");
    scanf("%d",&choice);
    if (choice==1)
{
    printf("\n\ndear customer you have selected the shahi biryani gourmet");
} 
else if(choice==2)
{
    printf("\n\ndear customer you have selected the chiken tikka gourmet");
}
else if(choice==3)
{
    printf("\n\ndear customer you have selected the roasted chicken gourmet");
}
    printf("\nPlease enter quantity... :  ");
    scanf("%d",&Quantity);
    if(choice==1)
    {
        Total=Quantity*2800;
        printf("\ntotal amount is %d",Total);

    }
    else if(choice==2)
    {
         Total=Quantity*1600;
        printf("\ntotal amount is %d",Total);

    }
    else if(choice==3)
    {
         Total=Quantity*1200;
        printf("\ntotal amount is %d",Total);

    }
    FinalTotal+=Total;
    printf("\nFinal total = %d",FinalTotal);
    printf("\nDo you want to place more order.....y or n  : ");
    scanf("%s",&order);
    if(order=='y')
    {
        goto start;
    }
    else  
    {
        printf("\nTHANKS FOR YOUR ORDER");
        printf("\nYOUR TOTAL BILL IS %d",FinalTotal);
    }
}   

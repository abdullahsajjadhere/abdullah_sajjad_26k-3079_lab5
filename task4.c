#include <stdio.h>
int main(){

    int R_open, item_availibility, sufficient_balance;

    printf("Is the Resturant Open? (1 for YES, 0 for NO): ");
    scanf("%d",&R_open);

    printf("\nIs the selected Item Available? (1 for YES, 0 for NO): ");
    scanf("%d",&item_availibility);

    printf("\nDoes the Customer has Sufficient Balance? (1 for YES, 0 for NO): ");
    scanf("%d",&sufficient_balance);

    if (R_open==1)
    {
        if (item_availibility==1)
        {
            if (sufficient_balance==1)
            {
                printf("Order placed Successfully!");
            }
            else
            {
                printf("Insufficient balance.");
            } 
        }
        else
        {
            printf("Item is not Currently Available.");
        }  
    }
    else
    {
        printf("Resturant is Closed Right now!");
    }
    return 0;
}

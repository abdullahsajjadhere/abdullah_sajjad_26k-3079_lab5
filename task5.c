#include <stdio.h>
int main(){
    int choice1, choice2,choice3, custom_withdrawl, cash_deposit, sbalance= 25000, cbalance= 7000;
    char pin[40];
     // Ask for PIN
  
    printf("Select an Operation:\n1 for Balance Inquiry\n2 for Cash Withdrawal\n3 for Cash Deposit\n4 for PIN Change");
    printf("\nEnter your Choice: ");
    scanf("%d",&choice1);

    switch (choice1)
    {
    // BALANCE INQUIRY
    case 1:
        printf("\n1 for Saving Account\n2 for Current Account");
        printf("\nEnter your Choice: ");
        scanf("%d",&choice2);
        
        switch (choice2)
        {
        case 1:
            printf("\nBalance= %d",sbalance);
            break;
        case 2:
            printf("\nBalance= %d",cbalance);
            break;
        
        default:
            printf("\nSelect from Given Choices.");
            break;
        }
        break;
    // CASH WITHDRAWL
    case 2:
        printf("\n1 for Saving Account\n2 for Current Account");
        printf("\nEnter your Choice: ");
        scanf("%d",&choice2);
        
        switch (choice2)
        {
        // Saving Account Cash Withdrawl
        case 1:
            printf("\n1 for 100\n2 for 500\n3 for 1000\n4 for 5000\n5 for Custom Withdrawl");
        printf("\nEnter your Choice: ");
        scanf("%d",&choice3);

            switch (choice3)
            {
            case 1:
                if (sbalance>=100)
                {
                    printf("\nWithdrawl of 100 was Successfull!");
                    printf("\nRemaining Balance= %d", sbalance-100);
                }
                else
                    printf("\nInsufficient Balance!");
                break;
            case 2:
                if (sbalance>=500)
                {
                    printf("\nWithdrawl of 500 was Successfull!");
                    printf("\nRemaining Balance= %d", sbalance-500);
                }
                else
                    printf("\nInsufficient Balance!");
                break;
            case 3:
                if (sbalance>=1000)
                {
                    printf("\nWithdrawl of 1000 was Successfull!");
                    printf("\nRemaining Balance= %d", sbalance-1000);
                }
                else
                    printf("\nInsufficient Balance!");
                break;
            case 4:
                if (sbalance>=5000)
                {
                    printf("\nWithdrawl of 5000 was Successfull!");
                    printf("\nRemaining Balance= %d", sbalance-5000);
                }
                else
                    printf("\nInsufficient Balance!");
                break;
            case 5:
                printf("\nEnter Amount: ");
                scanf("%d", &custom_withdrawl);
                if (sbalance>=custom_withdrawl)
                {
                    printf("\nWithdrawl of %d was Successfull!",custom_withdrawl);
                    printf("\nRemaining Balance= %d", sbalance-custom_withdrawl);
                }
                else
                    printf("\nInsufficient Balance!");
                break;
        
            default:
                printf("\nSelect from Given Choices.");
                break;
            }
            break;

        // Current Account Cash Wihtdrawl
        case 2:
            printf("\n1 for 100\n2 for 500\n3 for 1000\n4 for 5000\n5 for Custom Withdrawl");
        printf("\nEnter your Choice: ");
        scanf("%d",&choice3);

            switch (choice3)
            {
            case 1:
                if (cbalance>=100){
                    printf("\nWithdrawl of 100 was Successfull!");
                    printf("\nRemaining Balance= %d", cbalance-100);
                }
                else
                    printf("\nInsufficient Balance!");
                break;
            case 2:
                if (cbalance>=500){
                    printf("\nWithdrawl of 500 was Successfull!");
                    printf("\nRemaining Balance= %d", cbalance-500);
                }
                else
                    printf("\nInsufficient Balance!");
                break;
            case 3:
                if (cbalance>=1000){
                    printf("\nWithdrawl of 1000 was Successfull!");
                    printf("\nRemaining Balance= %d", cbalance-1000);
                }
                else
                    printf("\nInsufficient Balance!");
                break;
            case 4:
                if (cbalance>=5000){
                    printf("\nWithdrawl of 5000 was Successfull!");
                    printf("\nRemaining Balance= %d", cbalance-5000);
                }
                else
                    printf("\nInsufficient Balance!");
                break;
            case 5:
                printf("\nEnter Amount: ");
                scanf("%d", &custom_withdrawl);
                if (cbalance>=custom_withdrawl){
                    printf("\nWithdrawl of %d was Successfull!",custom_withdrawl);
                    printf("\nRemaining Balance= %d", cbalance-custom_withdrawl);
                }
                else
                    printf("\nInsufficient Balance!");
                break;
        
            default:
                printf("\nSelect from Given Choices.");
                break;
            }
            break;
        }
        break;

    // CASH DEPOSIT
    case 3:
        printf("\n1 for Saving Account\n2 for Current Account");
        printf("\nEnter your Choice: ");
        scanf("%d",&choice2);

        switch (choice2)
        {
        case 1:
            printf("\nEnter the Amount you want to Deposit: ");
            scanf("%d",&cash_deposit);
            printf("\nUpdated Balance= %d", sbalance+cash_deposit);            
            break;
        case 2:
            printf("\nEnter the Amount you want to Deposit: ");
            scanf("%d",&cash_deposit);
            printf("\nUpdated Balance= %d", cbalance+cash_deposit);
            break;
        
        default:
            printf("\nSelect from Given Choices.");
            break;
        }
        break;

    // PIN Change
    case 4:
        printf("\nEnter New Pin: ");
        scanf("%s",pin);
        printf("Pin Updated Successfully!");
        break;  
    
    default:
        printf("Select from Given Choices.");
        break;
    }
    return 0;
}

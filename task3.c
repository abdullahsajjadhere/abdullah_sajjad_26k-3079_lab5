#include <stdio.h>
int main(){

    int apt, d_availibility, reg_comp;

    printf("Does the Patient have an Appointment? (1 for YES, 0 for NO): ");
    scanf("%d",&apt);

    printf("\nIs the Doctor Available? (1 for YES, 0 for NO): ");
    scanf("%d",&d_availibility);

    printf("\nIs the Patient's Registration Complete? (1 for YES, 0 for NO): ");
    scanf("%d",&reg_comp);

    if (apt==1)
    {
        if (d_availibility==1)
        {
            if (reg_comp==1)
            {
                printf("Please wait for your Number.");
            }
            else
            {
                printf("Complete Registration First!");
            } 
        }
        else
        {
            printf("The Doctor is not Available right now!\n\tCheck again later.");
        }  
    }
    else
    {
        printf("Please book an Appointment First!");
    }
    return 0;
}

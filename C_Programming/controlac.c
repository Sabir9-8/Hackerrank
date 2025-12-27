
#include <stdio.h>

int main()
{
    int person_count;
    float current_temp;

    while(1) {
        printf("Enter people count (-1 to exit) and temp: ");
        scanf("%d", &person_count);
        //System shut down
        if (person_count == -1) {
            printf("System Shutting Down...\n");
            break;
        }
        scanf("%f", &current_temp);
        if (person_count == 0) {
            // Turn OFF
            printf("Turn AC OFF\n");
        }
        else if (current_temp <= 25) {
            // Room is already cool, regardless of people count.
            // Print "Standby"
            printf("AC Standby - Room is Cool\n");
        }
        else {
            // If we are here, we know: People > 0 AND Temp > 25 (It is hot!)
            // Now just check the crowd size.
            if (person_count < 25) {
                // Normal Mode
                printf("Turn AC ON to 24°C\n");
            }
            else {
                // High Power Mode
                printf("Turn AC ON to 20°C\n");
            }
        }
    }
        

    return 0;
}
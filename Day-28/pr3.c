#include <stdio.h>

int main() {
    int seats[10] = {0}; 
    int choice, seat, i;

    do {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. View Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nSeat Status:\n");
                for(i = 0; i < 10; i++) {
                    printf("Seat %d : %s\n",
                           i + 1,
                           seats[i] ? "Booked" : "Available");
                }
                break;

            case 2:
                printf("Enter seat number (1-10): ");
                scanf("%d", &seat);

                if(seat < 1 || seat > 10) {
                    printf("Invalid seat number.\n");
                }
                else if(seats[seat - 1] == 1) {
                    printf("Seat already booked.\n");
                }
                else {
                    seats[seat - 1] = 1;
                    printf("Ticket booked successfully.\n");
                }
                break;

            case 3:
                printf("Enter seat number to cancel: ");
                scanf("%d", &seat);

                if(seat < 1 || seat > 10) {
                    printf("Invalid seat number.\n");
                }
                else if(seats[seat - 1] == 0) {
                    printf("Seat is not booked.\n");
                }
                else {
                    seats[seat - 1] = 0;
                    printf("Ticket cancelled successfully.\n");
                }
                break;

            case 4:
                printf("Thank you for using the Ticket Booking System.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 4);

    return 0;
}
#include <stdio.h>

int acc;
int pin;
int bal;
int current_i = -1;
int logged_in = 0;
int exit_code = 0;

void a_Login(int arr[][3], int size);
void b_Inquary();
void c_Deposit();
void d_Withdrawal();
void e_Logout();
void f_Exit(int arr[][3], int size);

int main() {

    int N;
    scanf(" %d", &N);
    int arr[N][3];
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf(" %d", &arr[i][j]);
        }
    }
    
    while(1) {
        char menu;
        scanf(" %c", &menu);
        switch(menu) {
            case 'A' : a_Login(arr, N);
                break;
            case 'B' : b_Inquary();
                break;
            case 'C' : c_Deposit(arr, N);
                break;
            case 'D' : d_Withdrawal(arr, N);
                break;
            case 'E' : e_Logout();
                break;
            case 'F' : f_Exit(arr, N);
                if (exit_code) {
                    return 0;
                }
                break;
            default : printf("Invalid choice. Please enter A, B, C, D, E, or F.\n");
                break;
        }
    }
    
    return 0;
}

void a_Login(int arr[][3], int size) {
    int user_acc, user_pin;
    scanf(" %d %d", &user_acc, &user_pin);
    if (logged_in) {
        printf("User %d is already using the ATM.\n", acc);
    }
    else {
        for (int i = 0; i < size; ++i) {
            if(arr[i][0] == user_acc && arr[i][1] == user_pin) {
                acc = user_acc;
                pin = user_pin;
                bal = arr[i][2];
                current_i = i;
                printf("Welcome User %d\n", acc);
                logged_in = 1;
                return;
            }    
        }
        printf("Wrong Credentials!\n");
    }
}
void b_Inquary() {
    if (logged_in) {
        printf("Balance: Rs.%d\n", bal);
    }
    else {
        printf("Login first!\n");
    }
}
void c_Deposit(int arr[][3], int size) {
    int deposit;
    scanf(" %d", &deposit);
    if (logged_in) {
        bal += deposit;
        arr[current_i][2] = bal;
        printf("New Balance: Rs.%d\n", bal);
    }
    else {
        printf("Login first!\n");
    }
}
void d_Withdrawal(int arr[][3], int size) {
    int withdraw;
    scanf(" %d", &withdraw);
    if (logged_in) {
        if (bal >= withdraw) {
            bal -= withdraw;
            arr[current_i][2] = bal;
            printf("New Balance: Rs.%d\n",bal);
        }
        else {
            printf("Insufficient balance!\n");
        }
    }
    else {
        printf("Login first!\n");
    }
}
void e_Logout() {
    if (logged_in) {
        printf("Logged out successfully.\n");
        logged_in = 0;
    }
    else {
        printf("No user is currently logged in.\n");
    }
}
void f_Exit(int arr[][3], int size) {
    if (logged_in) {
        printf("Exiting the ATM without logging out is not allowed.\n");
    }
    else {
        exit_code = 1;
        printf("Exiting ATM. Thank you!\n");
    }
}
#include <stdio.h>
//It tells the user to enter the year and branch details and prints the subjects taught in that year.
int main() {
    int year;
    printf("Enter the year(1/2/3/4):");
    scanf("%d", &year);
    char branch;

    printf("Enter branch code(C/E/M):");
    scanf(" %c", &branch);
    switch(year) {
        case 1 : printf("Physics\nChemistry\nMethematics");
        break;

        case 2 : switch (branch) {
            case 'C' : printf("C Programming\nComputer Organization\nWeb Development");
            break;
            
            case 'E' : printf("Signal Processing\n Local Design\nNetwork Analysis");
            break;

            case 'M' : printf("Thermodyamics\nSolid Mechanics\nHeat Transfer");
            break;
        }
        break;

        case 3 : switch (branch) {
            case 'C' : printf("Object Oriented Programming\nDBMS\nData Structure & Algorithms");
            break;

            case 'E' : printf("Analog Electronics\nEmbeded System\nMicrocontrollers");
            break;

            case 'M' : printf("Applied Mechanics\nMechatronics\nKinematics");
            break;
        }
        break;

        case 4 : {
            char internship;
            printf("Is enrolled into any Internship(Y/N):");
            scanf(" %c", &internship);
            switch(internship) {
                case 'Y' : printf("Enrolled in Internship Program.");
                break;

                case 'N' : switch(branch) {
                    case 'C' : printf("Operating System\nComputer Networks\nComputer Design");
                    break;

                    case 'E' : printf("VLSI Design\nFibre-Optics\nCommunication\nDigital Electronics");
                    break;

                    case 'M' : printf("Mechanism of Materials\nStreangth of Materials\nMaterial Design");
                    break;
                }
                break;
            }
        }
        break;

        default : printf("invalid Input");
        break;
    }
}
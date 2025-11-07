#include <math.h>
#include <stdio.h>

int main(void){
    int mode = 0;
    double num, result = 0.0;
    int repeat;
    


do {// Back to the main manu (do while the first one)
        printf("====dB Calculator MENU ====\n");
        printf("1.Voltage ratio → dB (20 log V2/V1)\n");
        printf("2.dB → Voltage (in-signal V1 or V2)\n");
        printf("3.Power ratio → dB (10 log P2/P1)\n");
        printf("4.dB → Power (in-signal P1 or P2)\n");
        printf("5.Current ratio → dB (20 log I2/I1)\n");
        printf("6.dB → Current (in-signal I1 or I2)\n");
        printf("0.Exit\n");
        printf("Your Choice: \n");
        scanf("%d", &mode);

        // End of sel   ect menu
    
    if (mode >= 1 && mode <= 6) {
        do { // Back to calculation (do while the second one)

            switch (mode) {
                case 1: {
                double v1, v2, dB = 0.0;
                printf("Enter V1\n");
                    while(scanf("%lf", &v1) != 1 || v1 == 0){ 
                    printf("Invalid input! Please input a number: \n");
                    while(getchar() != '\n');
                    }
                
                printf("Enter V2\n");
                    while(scanf("%lf", &v2) != 1 || v2 == 0){
                    printf("Invalid input! Please input a number: \n");
                    while(getchar() != '\n');
                    }
                    
                    dB = 20 * log10(v2 / v1);
                    printf("Output is %.2lf dB\n", dB);
                    break;
                }

                case 2 :{
                    int choice = 0;
                    double v1, v2, dB = 0.0;

                    printf("What do you want to calculate? (1: V1, 2: V2): ");
                    scanf("%d", &choice);

                    if(choice == 1){ // Calculate V1
                    printf("Input V2\n");
                            while(scanf("%lf", &v2) != 1 || v2 == 0){
                    printf("Invalid input! Please input a number: \n");
                            while(getchar() != '\n');
                        }

                    printf("Input dB\n");
                        while(scanf("%lf", &dB) != 1 || dB == 0){
                        printf("Invalid input! Please input a number: \n");
                        while(getchar() != '\n');
                        }

                        v1 = v2 / pow(10, dB / 20);
                        printf("V1 = %.3lf V\n", v1);

                    }
                    else if(choice == 2 ){
                        printf("Input V1\n");
                            while(scanf("%lf", &v1) != 1 || v1 == 0){
                        printf("Invalid input! Please input a number: \n");
                            while(getchar() != '\n');
                        }

                    printf("Input dB\n");
                        while(scanf("%lf", &dB) != 1 || dB == 0){
                        printf("Invalid input! Please input a number: \n");
                        while(getchar() != '\n');
                        }

                        v2 = v1 * pow(10, dB / 20);
                        printf("V2 = %.3lf V\n", v2);

                    }
                    else{
                        printf("Invalid input, please try agaim\n");
                    }
                    break;
                }

                case 3: {
                    double p1, p2, dB = 0.0;
                    printf("Enter P1\n");
                    while(scanf("%lf", &p1) != 1 || p1 == 0){ 
                    printf("Invalid input! Please input a number: \n");
                    while(getchar() != '\n');
                    }
                
                printf("Enter P2\n");
                    while(scanf("%lf", &p2) != 1 || p2 == 0){
                    printf("Invalid input! Please input a number: \n");
                    while(getchar() != '\n');
                    }
                    
                    dB = 10 * log10(p2 / p1);
                    printf("Output is %.2lf dB\n", dB);
                    break;
                }

                case 4:{
                    int choice = 0;
                    double p1, p2, dB = 0.0;

                    printf("What do you want to calculate? (1: P1, 2: P2): ");
                    scanf("%d", &choice);

                    if(choice == 1){ // Calculate P1
                    printf("Input P2\n");
                            while(scanf("%lf", &p2) != 1 || p2 == 0){
                    printf("Invalid input! Please input a number: \n");
                            while(getchar() != '\n');
                        }

                    printf("Input dB\n");
                        while(scanf("%lf", &dB) != 1 || dB == 0){
                        printf("Invalid input! Please input a number: \n");
                        while(getchar() != '\n');
                        }

                        p1 = p2 / pow(10, dB / 10);
                        printf("P1 = %.3lf V\n", p1);

                    }
                    else if(choice == 2 ){
                        printf("Input P1\n");
                            while(scanf("%lf", &p1) != 1 || p1 == 0){
                        printf("Invalid input! Please input a number: \n");
                            while(getchar() != '\n');
                        }

                    printf("Input dB\n");
                        while(scanf("%lf", &dB) != 1 || dB == 0){
                        printf("Invalid input! Please input a number: \n");
                        while(getchar() != '\n');
                        }

                        p2 = p1 * pow(10, dB / 10);
                        printf("P2 = %.3lf P\n", p2);

                    }
                    else{
                        printf("Invalid input, please try agaim\n");
                    }
                    break;
                }

                case 5: {
                    double i1, i2, dB = 0.0;
                    printf("Enter Current1\n");
                    while(scanf("%lf", &i1) != 1 || i1 == 0){ 
                    printf("Invalid input! Please input a number: \n");
                    while(getchar() != '\n');
                    }
                
                    printf("Enter Current2\n");
                    while(scanf("%lf", &i2) != 1 || i2 == 0){
                    printf("Invalid input! Please input a number: \n");
                    while(getchar() != '\n');
                    }
                    
                    dB = 20 * log10(i2 / i1);
                    printf("Output is %.2lf dB\n", dB);
                    break;

                }

                case 6: {
                    int choice = 0;
                    double i1, i2, dB = 0.0;

                    printf("What do you want to calculate? (1: Current1, 2: Current2): ");
                    scanf("%d", &choice);

                    if(choice == 1){ // Calculate CUrrent1
                    printf("Input Current2\n");
                            while(scanf("%lf", &i2) != 1 || i2 == 0){
                        printf("Invalid input! Please input a number: \n");
                            while(getchar() != '\n');
                        }

                    printf("Input dB\n");
                        while(scanf("%lf", &dB) != 1 || dB == 0){
                        printf("Invalid input! Please input a number: \n");
                        while(getchar() != '\n');
                        }

                        i1 = i2 / pow(10, dB / 20);
                        printf("Current1 = %.3lf V\n", i1);

                    }
                    else if(choice == 2 ){
                        printf("Input Current1\n");
                            while(scanf("%lf", &i1) != 1 || i1 == 0){
                        printf("Invalid input! Please input a number: \n");
                            while(getchar() != '\n');
                        }

                    printf("Input dB\n");
                        while(scanf("%lf", &dB) != 1 || dB == 0){
                        printf("Invalid input! Please input a number: \n");
                        while(getchar() != '\n');
                        }

                        i2 = i1 * pow(10, dB / 20);
                        printf("P2 = %.3lf P\n", i2);

                    }
                    else{
                        printf("Invalid input, please try agaim\n");
                    }
                    break;
                    }

                case 0: {
                    printf("Exit the calculator.\n");
                    break;
                    }

            
                    default:{ // If you choose other mode, display error message
                    printf("Invalid mode selected. Please try again.\n");
                    }
                } //Close switch 
                printf("Do you want to repeat this calculation? (1: Yes / 0: Back to menu): ");
            scanf("%d", &repeat);

            } while (repeat == 1);//inner do while
            } else if (mode == 0) {
        printf("Exit the calculator.\n");
            } else {
        printf("Invalid mode selected. Please try again.\n");
    
    }   // outer do while
} while (mode != 0);
}//int main

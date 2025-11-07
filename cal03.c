#include <stdio.h> // made by YUki Thanki 2025-11-03
#include <math.h> // I chose this library to use one-step-ahead math functions

int main(void){
    int mode = 0;
    double num, result = 0.0;
    int repeat;
    do {    // function to repeating or exit calcualator

    // Display calculator menu
    printf("======= Electronic Calculator Menu =======\n");
    printf("1. Simple calculator (+, -, *, /)\n");
    printf("2. Square root calculation\n");
    printf("3. Calculate exponential (e^x)\n");
    printf("4. Calculate Pythagorean theorem\n");
    printf("5. Calculate factorial\n");
    printf("6. Calculate logarithm\n");
    printf("7. Calculate natural logarithm\n");
    printf("0. Exit\n");
    printf("Your choice:\n");
    scanf("%d", &mode);

    
        do{ // function to repeat or exit calculator

            switch (mode) { // If you choose mode 1, open simple calculator
                case 1: {
                    double num1, num2, result = 0.0;
                    char operator;
        
                    printf("Welcome to the simple calculator!\n");
                    printf("Enter calculation (e.g., 3 + 4): ");

                    //Function for prevending enexpected error*1//
           
                    if (scanf("%lf %c %lf", &num1, &operator, &num2) != 3) {
                    printf("Invalid input! Please enter like: 3 + 4\n");

                    while(getchar() != '\n'); // throw away invalid input
                    repeat = 0;   // Thats for safty returning to the variables 
                    break;        // go back to menu.
                    }
                
            
        
                    switch (operator) {
                    case '+' : // addition
                    result = num1 + num2;
                    printf("Result: %.2lf\n", result);
                    break;
            
                    case '-' : // subtraction
                    result = num1 - num2;
                    printf("result: %.2lf\n", result);
                    break;
            
                    case '*' : // multiplication
                    result = num1 * num2;
                    printf("Result: %.2lf\n", result);
                    break;

                    case '/' : // division
                    if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                    } 
                    else {
                    printf("Error: Division by zero is not allowed.\n");
                    repeat = 0;
                    }
                
                
                }
                break;
           // end of mode 1
            }

                case 2: {
                    printf("Enter a number to calculate its square root: ");

                    while(getchar() != '\n');  // clear buffer

                    if (scanf("%lf", &num) != 1) {//if invalid number
                    printf("Invalid input! Please enter a number.\n");
                    while(getchar() != '\n');
                    repeat = 0;
                    } else {
                    double root = sqrt(num);  // After clearing buffer, calculate.
                    printf("The square root of %.2lf is %.2lf\n", num, root);
                    }
                    break;
                }

                case 3: {   // If you choose mode 3, can caliculate exponential.
                    int ch;
                    double base, exponent, result; 
                    // if number is not invalid (prevention of looping)
                    printf("Enter the base: ");
                        if(scanf("%lf", &base) == 1)break; {// it makes it possible to enter next variable.
                        printf("Invalid input! Please enter a number: ");
                            while (getchar() != '\n');  // Clear buffer
                        }
                    scanf("%lf", &base);

                    printf("Enter the exponent: ");
                        if(scanf("%lf", &exponent) == 1)break; {
                        printf("Invalid input! Please enter a number: ");
                            while (getchar() != '\n');  //Clear buffer
                        }
                    scanf("%lf", &exponent);

                    result = pow(base, exponent);
                    printf("%.2lf ^ %.2lf = %.2lf\n", base, exponent, result);
            
                    break;
                }   // end of mode 3

                    case 4: {// mode 4  (pytagorean theorem)
                        double a, b, c;
                        double result = 0.0;

                        printf("Enter the lengths of a: ");
                            if(scanf("%lf", &a) == 1)break; {
                            printf("invalid input! Please enter a number: ");
                                while (getchar() != '\n');
                            }
                        scanf("%lf", &a);

                        printf("Enter the lengths of b : ");
                            if(scanf("%lf", &b) == 1)break; {
                            printf("invalid input! Please enter a number: ");
                                while (getchar() != '\n');
                            }
                        scanf("%lf", &b);
                        c = sqrt(a * a + b * b);
                        printf("The length of the hypotenuse (c) is: %.4lf\n", c);
                    
                        break;  // end of mode 4
                    }

                    case 5: { // factrial mode
                    int n;
                    int result = 1; // Initialize result to 1
                    printf("Enter a non-negative integer to calculate its factorial: ");
                            if(scanf("%d", &n) == 1)break; {
                            printf("invalid input! Please enter a number: ");
                                while (getchar() != '\n');
                            }

                    scanf("%d", &n);
                            if (n < 0) {  // That's because factrial cannot be defined for negative numbers
                            printf("Error: Factorial is not defined for negative numbers.\n");
                            }
                        
                            else {
                            for (int i = 1; i <= n; i++) {
                                result *= i; // Multiply result by i
                            }
                            printf("The factorial of %d is %d\n", n, result);
                            }
                            break;
                        }// exit of mode 5

                    case 6: { // If you choose mode 6 , can calculate logarithm.
                        double log_num, log_result = 0.0;
                        printf("Enter number to calculate:");
                            if(scanf("%lf", &log_num) == 1)break; {
                            printf("invalid input! Please enter a number: ");
                                while (getchar() != '\n');
                            }

                        scanf("%lf", &log_num);
                        if (log_num > 0) {
                            log_result = log10(log_num);
                            printf("The logarithm (base 10) of %.2lf is %.2lf\n", log_num, log_result);
                        } else {
                            printf("Error: Logarithm is undefined for non-positive numbers.\n");
                        }
                        break;
                    }// exit of mode 6

                    case 7: { // If you choose mode 7 , can calculate natural logarithm.
                        double nat_num, nat_result =0.0;
                        printf("Enter number to calculate natural logarithm:");
                            if(scanf("%lf", &nat_num) == 1)break; {
                            printf("invalid input! Please enter a number: ");
                                while (getchar() != '\n');
                            }

                        scanf("%lf", &nat_num);
                        if (nat_num > 0) {
                            nat_result = log(nat_num);
                            printf("The natural logarithm of %.2lf is %.2lf\n", nat_num, nat_result);
                        } else {
                            printf("Error: Natural logarithm is undefined for non-positive numbers.\n");
                        }
                        break;
                    } // exit of mode 7

                    case 0: { // when you choose mode 0 , exit the calculator
                            printf("Exit the calculator. Goodbye!\n");
                    }
                    break;

            default:{ // If you choose other mode, display error message
            printf("Invalid mode selected. Please try again.\n");
            }   
            
    }
        if (mode >= 1 && mode <= 7) { // repeat function for mode 0 to 7
            printf("Do you want to repeat this calculation? (1: Yes / 0: Back to menu): ");
            scanf("%d", &repeat);
        } else {
            repeat = 0;
        }

    } while (repeat == 1); // go back to the second do

} while (mode != 0);// go back to the first do
    return 0;

return 0;
}
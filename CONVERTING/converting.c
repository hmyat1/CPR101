#include "converting.h"
#define _CRT_SECURE NO WARNINGS        //To overcome warnings
#define BUFFER_SIZE 80                 //defining buffer size
#include <stdlib.h>

void converting() {

>> insert here

    void converting() {
    /* Version 1 */
    //>> insert here

        void converting (void) {                //defining the function for converting
            printf ("*** Start of Converting Strings to int Demo ***\n");  // printing the statement
            char intString[BUFFER_SIZE];        //declaring a character array
            int intNumber;                      //declaring an inter type
            do {                                //A do while loop which repeates execution until string 'q' is entered to quit
                printf ("Type an int numeric string (q - to quit) : \n");  //Ask user to enter a numeric string or q to exit
                fgets(intString, BUFFER_SIZE, stdin);   //gets input from user and store it in 'intString'
                intString[strlen(intString) -1] = '\0'; //to determine the length of the input string with a null character
                if (strcmp(intString, "q") != 0){       //condition to check whether the intString variable is not equal to the string "q".
                    intNumber =atoi (intString);        // calling a function to convert string to integer
                    printf("Converted number is %d\n", intNumber);   // printing the converted numbers
                }
            } while (strcmp(intString, "q") != 0);   //checking the string whether it is equal to q or not, if equal to q then the loop exits
            printf("*** End of Converting Strings to int Demo ***\n\n"); //printing the statement
        }
     
 Version 2
>> insert here
    
    
    printf ("*** Start of Converting Strings to double Demo ***\n");     //declares the start of converting to double module
        char doubleString [BUFFER_SIZE];                                 //declaring a character array
        double doubleNumber;                                            //declaring a double type
        do {                                                            // do/whille loop
            printf ("Type the double numeric string (q - to quit): \n");//printing the statement
            fgets (doubleString, BUFFER_SIZE, stdin) ;                  //gets input from user and store it in 'doubleString'
            doubleString [strlen (doubleString) - 1] = '\0';            //to determine the length of the input string with a null character
            if ((strcmp (doubleString, "q") != 0)) {                    //condition to check whether the doubleString variable is not equal to the string "q".
                doubleNumber = atof (doubleString) ;                     // calling a function to convert string to double
                printf ("Converted number is %f\n", doubleNumber);     // printing the converted number
            }
        } while (strcmp (doubleString, "q"') != 0);
                         //checking the string whether it is equal to q or not, if equal to q then the loop exits
        printf ("*** End of Converting Strings to double Demo ***\n\n");// printing the statement
        }


 Version 3
>> insert here
   //V3

    printf("*** Start of Converting Strings to long Demo ***\n");  //declares the start of converting to long module
    char longString[BUFFER_SIZE]; //declaring a character array
    long long longNumber;   //declaring a long type
    do {    // do/whille loop
       printf("Type the long numeric string (q - to quit):\n");  //printing the statement
       fgets(longString, BUFFER_SIZE, stdin);   //gets input from user and store it in 'longString'
       longString[strlen(longString) - 1] = '\0';   //to determine the length of the input string with a null character
       if (strcmp(longString, "q") != 0) {//condition to check whether the longString variable is not equal to the string "q".
       longNumber = atoll(longString);  // calling a function to convert string to long
       printf("Converted number is %lld\n", longNumber);   // printing the converted number
      }
    } while (strcmp(longString, "q") != 0);   //checking the string whether it is equal to q or not, if equal to q then the loop exits
    printf("*** End of Converting Strings to long Demo ***\n\n");  // printing the statement
    }



//v1 + v2 + v3 Added codes to run

//#include "converting.h"
//#include <stdio.h>
//#include <stdlib.h>
//
//#define BUFFER_SIZE 80
//
//void converting() {
//    printf("*** Start of Converting Strings to int Demo ***\n");
//
//    char intString[BUFFER_SIZE];
//    int intNumber;
//
//    do {
//        printf("Type an int numeric string (q - to quit): \n");
//        fgets(intString, BUFFER_SIZE, stdin);
//        intString[strlen(intString) - 1] = '\0';
//
//        if (strcmp(intString, "q") != 0) {
//            intNumber = atoi(intString);
//            printf("Converted number is %d\n", intNumber);
//        }
//    } while (strcmp(intString, "q") != 0);
//
//    printf("*** End of Converting Strings to int Demo ***\n\n");
//
//    printf("*** Start of Converting Strings to double Demo ***\n");
//
//    char doubleString[BUFFER_SIZE];
//    double doubleNumber;
//
//    do {
//        printf("Type the double numeric string (q - to quit): \n");
//        fgets(doubleString, BUFFER_SIZE, stdin);
//        doubleString[strlen(doubleString) - 1] = '\0';
//
//        if (strcmp(doubleString, "q") != 0) {
//            doubleNumber = atof(doubleString);
//            printf("Converted number is %f\n", doubleNumber);
//        }
//    } while (strcmp(doubleString, "q") != 0);
//
//    printf("*** End of Converting Strings to double Demo ***\n\n");
//}
//
            
//    printf("*** Start of Converting Strings to long Demo ***\n");
//    char longString[BUFFER_SIZE];
//    long long longNumber;
//    do {
//    printf("Type the long numeric string (q - to quit):\n");
//    fgets(longString, BUFFER_SIZE, stdin);
//    longString[strlen(longString) - 1] = '\0';
//    if (strcmp(longString, "q") != 0) {
//    longNumber = atoll(longString);
//    printf("Converted number is %lld\n", longNumber);
//    }
//    } while (strcmp(longString, "q") != 0);
//    printf("*** End of Converting Strings to long Demo ***\n\n");
//    }

//int main() {
//    converting();
//    return 0;
//}

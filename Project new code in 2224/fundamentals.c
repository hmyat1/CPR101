#include "fundamentals.h"
FUNDAMENTALS MODULE HEADER #i fndef
FUNDAMENTALS H
#define
FUNDAMENTALS
#include <stdio.h>
H_
#include <stdlib.h> #include <string.h> void fundamentals
void fundamentals() {
/* Version 1 */
>> insert here
    / FUNDAMENTALS MODULE SOURCE #define
    CRT SECURE NO WARNINGS
    #define BUFFER SIZE
    80
    #define NUM INPUT SIZE 10 #include "fundamentals.h"
    void fundamentals (void) {
    // VI
    printf ("*** Start of Indexing Strings Demo ***\n");
    char buffer1 [BUFFER SIZE];
    char numInput [NUM INPUT SIZE];
    size t position;
    do printf ("Type not empty string (q - to quit) : \n");
    fgets (bufferl, BUFFER_SIZE, stdin) ;
    bufferi [strien (buffer1) - 11 = "10';
    if (stremp (buffer1, "q") != 0) (
    printf ("Type the character position within the string: \n"); fgets (numInput, NUM_INPUT_SIZE, stdin) ;
    numInput [strlen (numInput)
    - 11 = 10';
    position = atoi (numInput) ;
    if (position >= strlen (buffer1)) {
    position = strlen (buffer1) - 1;
    print ("Too big... Position reduced to max. availbale\n");
    print ("The character found at §d position is \'Sc\ 'n"
    (int) position, buffer (position]);
    ] while (stremp (bufferl, "q") != 0) ; printf ("*** End of Indexing Strings Demo ***\n\n");

/* Version 2 */
>> insert here
           // V2
           printf(“***start of Measuring strings Demo ***\n™);
           char buffer2 (BUFFER_SIZE];
           do {
           printf ("Type a string (g - to quit) : \n"); fgets (buffer2, BUFFER_ SIZE, stdin) ;
           buffer2[strlen (buffer2) - 11 = 10';
           if (stremp (buffer2, "q") != 0)
           printf ("The length of \'Ss\' is §d characters\n" buffer2, (int) strlen (buffer2));
           } while (stremp (buffer2,
           "g") != 0) ;
           printf ("*** End of Measuring Strinas Demo ***\n\n");

/* Version 3 */
>> insert here
                   // v3
                   printf(“*** start of Copying strings Demo ***\n™);
                   char destination [BUFFER SIZE]:
                   char source [BUFFER SIZE] ;
                   do
                   destination [0] = 10';
                   print ("Destination string is reset to empty\n"); printf ("Type the source string (g - to quit): \n"); fgets (source, BUFFER SIZE, stdin) ;
                   source [strien (source) - 1] =
                   101;
                   if (strcmp (source,
                   "g" ) != 0) {
                   strpy (destination, source);
                   printf ("New destination string is \'8s\ 'In", destination);
                   }
                   } while (stremp (source,
                   "g") != 0) ;
                   printf ("*** End of Copying Strings Demo ***\n\n");

}

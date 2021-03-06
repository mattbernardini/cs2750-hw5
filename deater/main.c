#include "func.h"

int main (int argc, char* argv[]) {
    int totalIntegers = 0, arrayCounter = 0;
    // Loop through all arguments
    for (int i = 1; i < argc; i++) {
        // Handle if the argument is a integer
        if (atoi(argv[i]) != 0) {
            int tempInt = atoi(argv[i]);
            totalIntegers += tempInt;
        } else {
            // We have characters       
            searchForSubstring(arrayCounter++, argv, argv[i]);
        }
    }
    printf("Total integers: %d\n", totalIntegers);
    return 0;
}
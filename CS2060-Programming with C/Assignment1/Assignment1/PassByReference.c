// Matthew Bowker
// CS2060
// February 27, 2013
// Assignment #1: Pass by Reference sort program, sorts three numbers from low to high.

#include <stdio.h>

//Defining our functions
int * sort(int *first, int *second, int *third);
void swap(int pos1, int pos2, int * pointer);

int main() {
    // Variables - three to hold values and three pointers to those values
    int a = 0;
    int b = 0;
    int c = 0;
    int *aPtr = &a;
    int *bPtr = &b;
    int *cPtr = &c;

    //Welcome the user and get input
    printf("Hello and welcome to Matthew's sorting program, version 1.0!  \nPlease enter your first number: ");
    scanf("%d",&a);
    printf("And now your second number: ");
    scanf("%d",&b);
    printf("And now your third number: ");
    scanf("%d",&c);
    printf("Hey, we're sorting the values:\n\tValue 1: %d\n\tValue 2: %d\n\tValue 3: %d\n", *aPtr, *bPtr, *cPtr);
    printf("Processing... ... ... ... ...\n\n");

    //Run the sort function, which returns a pointer
    int *results = sort(aPtr, bPtr, cPtr);

    //Outputting the results to the screen
    printf("All right, here are your numbers from lowest to highest: \n\tValue 1: %d\n\tValue 2: %d\n\tValue 3: %d\n",results[0],results[1],results[2]);

    //Terminating the program and returning to the OS
    printf("---------- END PROGRAM ----------\n\n");
    return 0;
}

void swap(int pos1, int pos2, int * pointer) {
    //Swap function allows us to switch the positions of two items in an array.

    int temporary = pointer[pos1];  //Storing the value of pos1 temporarily
    pointer[pos1] = pointer[pos2];  //Putting the value of pos2 into pos1
    pointer[pos2] = temporary;      //Putting the temporary buffer back
}

int * sort(int *first, int *second, int *third) {
    //This function takes the three values and sorts them

    //Defined an array (because we can only return one value) and a pointer to that array
    int result[3];
    int *resultPtr = &result;

    //Store the values in the array
    resultPtr[0] = *first;
    resultPtr[1] = *second;
    resultPtr[2] = *third;

    //If/else stack that allows us to sort
    if (resultPtr[0] > resultPtr[1]) {
        swap(0,1,resultPtr);
        if (resultPtr[2] > resultPtr[1]){
            swap(1,2,resultPtr);
        }
    }

    if (resultPtr[2] < resultPtr[1]) {
        swap(1,2,resultPtr);
        if (resultPtr[0] > resultPtr[1]) {
            swap(0,1,resultPtr);
        }
    }

    return resultPtr; //Returining back to the main function
}

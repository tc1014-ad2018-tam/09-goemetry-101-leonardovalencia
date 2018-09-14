/*
 * This program is made to swap the order of 3 numbers in an ascending order
 *
 * Author: Marco Leonardo Valencia Martinez
 * September, 13, 2018
 * Mail: a01412017@itesm.mx
 */

// This function will be receiving the variables

void Swap(int *A, int *B) {

    // Temporal value that has the numbers
    int temporal;

    // If A's value is more than B's Value, then tehy change places
    if (*A > *B) {
        temporal = *A;
        *A = *B;
        *B = temporal;
    }
}

int main() {
    int A;
    int B;
    int C;

    // I ask the user to enter 3 numbers they want
    printf("Enter 3 numbers:");
    scanf("%d, %d, %d", &A, &B, &C);

    // I call the function to perform the necessary procedure to change the order
    Swap(&A, &B);
    Swap(&A, &C);
    Swap(&B, &C);
    printf("The numbers are: ");
    printf("%d, %d, %d", A, B, C);
    return 0;
}
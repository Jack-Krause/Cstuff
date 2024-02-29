# include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int f = 1; //X0
    int g = 2; //X1
    int h = 3; //X2
    int i = 4; //X3
    int j = 5; //X5

//    int A[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34};
//    int B[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33};
    int A[30];
    int B[30];


    for (int loop = 0; loop < 30; loop ++) {
        A[loop] = 2 * loop;
        B[loop] = 2 * loop + 1;
    }

    printArray(A, sizeof(A) / sizeof(A[0]));
    printArray(B, sizeof(B) / sizeof(B[0]));
    printf("\n");

    int *x_9 = &A[f * 8]; // lines 1,2 txtbook
    int *x_10 = &B[g * 8]; // lines 3,4 txtbook
    printf("X9 points to A[8]: %d\n", *x_9); // A[8]
    printf("X10 points tp B[16]: %d\n", *x_10); // B[16]

    f = A[f]; // line 5 txt
    printf("f = A[f = 1]: %d\n", f);
    printf("%d\n", A[8]);

    int x_11 = *x_9 + 8; // line 6
    printf("X11 = *X9 + 8: %d\n", x_11);

//    *x_9 = A[x_11];
    x_9 = &A[x_11];
    printf("X9 points to A[X11 = 24]: %d\n", *x_9);

    *x_9 = *x_9 + f;
    printf("increment value pointed to by X9 by f = 2: %d\n", *x_9);

    printf("\n");

    printArray(A, sizeof(A) / sizeof(A[0]));
    printArray(B, sizeof(B) / sizeof(B[0]));

    return 0;
}

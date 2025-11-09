#include <stdio.h>
/* Function declarations */

void inputArray(int *arr, int n);
void displayArray(const int *arr, int n);
int sumArray(const int *arr, int n);
int countPositive(const int *arr, int n);
int countNegative(const int *arr, int n);

int main(void) {
    int arr[100];
    int n, sum, posCount, negCount;

    printf("Enter the number of elements in the array (max 100): ");

    if (scanf("%d", &n) != 1 || n < 0 || n > 100) {
        puts("Invalid size.");
        return 1;
    }

inputArray(arr,n);
printf("\n Array elements are:");
displayArray(arr,n);
sum=sumArray(arr,n);
printf("\nsum of all elements = %d", sum);
posCount = countPositive(arr,n);
negCount = countNegative(arr,n);

printf("\n Number of positive elements=%d",posCount);
printf("\n Number of negative elements=%d",negCount);
return 0;
}
void inputArray(int*arr,int n){
    printf("enter%d elements:\n",n);
    for(int i=0;i)

}

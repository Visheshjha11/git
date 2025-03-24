#include <stdio.h>
// int main(){
//     char i;
//     for(i =1; i<=5; i=i+1){
//         printf("hello!!\n");
//     }
//     return 0;
// }
// int main(){
//     int i;
//     for (i=1; i<=10; i++){
//         printf("%d\n", i);
//     }
//     return 0;
// }
// int main(){
//     int roll1, roll2, roll3, roll4, sum;
//     printf("Enter the roll number: ");
//     scanf("%1d%1d%1d%1d", &roll1, &roll2, &roll3, &roll4);
//     sum = roll1+roll2+roll3+roll4;

//     printf("%d", sum);
//     return 0;
// }
// int main(){
//     int row,col, i,j;

//     printf("Enter the number of rows: ");
//     scanf("%d", &row);
//     printf("Enter the number of columns: ");
//     scanf("%d", &col);
//     printf("\nMultiplication Table:\n");

//     for(int i=1; i <= row; i++){
//         for(int j=1; j<=col; j++);
//             printf("%4d", i*j);
//     }
//     printf("\n");
//     return 0;
// }
// int main(){
//     int rows, cols;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     printf("Enter the number of columns: ");
//     scanf("%d", &cols);

//     printf("\n2D Grid:\n");
//     for(int i = 0; i<rows; i++){
//         for(int j = 0; j <cols; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;

// }
// int main(){
//     int rows, cols;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     for(int i=1; i<=rows; i++){
//         for(int j = 1; j<=i; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;

// }

// int main(){
//     int num;

//     do{
//         printf("Enter a positive number: ");
//         scanf("%d", &num);

//     }while(num<=0);
//     printf("You entered:%d\n ", num);
//     return 0;

// }
//Patterns
//
// int main(){
//     int i, j, rows;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for(i=1; i<=rows; ++i){
//         for(j=1; j<=i; ++j){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// int main(){
//     int i, j, rows;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for(i=1; i<=rows; ++i){
//         for(j=1; j<=i; ++j){
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// int main(){
//     int i,j;
//     char input, alphabet = 'A';
//     printf("Enter an uppercase character you want to print in the last row: ");
//     scanf("%c", &input);
//     for(i=1; i<= (input-'A'+1); ++i){
//         for(j=1; j<=i; ++j){
//             printf("%c ", alphabet);
//         }
//         ++alphabet;
//         printf("\n");
//     }
// }
// int main(){
//     int i, j, row;
//     printf("Enter the number of rows: ");
//     scanf("%d", &row);
//     for(i = row; i>=1; --i){
//         for(j=1; j<=i; ++j){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// #include <stdio.h>

// int main() {
//     int num, i = 1;

//     printf("Enter a number to display its multiplication table: ");
//     scanf("%d", &num);

//     do {
//         printf("%d x %d = %d\n", num, i, num * i);
//         i++;
//     } while (i <= 10);

//     return 0;
// }
//wap for
// 1
// 2 3
// 4 5 6
// int main(){
//     int i, j, rows, number = 1;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for(i=1; i<=rows; i++){
//         for(j=1; j<=i; ++j){
//             printf("%d ", number);
//             ++number;
//         }
//         printf("\n");
//     }
//     return 0;
// }
// int main(){
//     printf("HELLO VRINDA");
//     return 0;
// }
#include <stdio.h>

// 1. Find the maximum and minimum in an array
// int main() {
//     int arr1[100];
//     int i, max, min, n;
//     printf("Total number of elements in the array: ");
//     scanf("%d", &n);
    
//     printf("Enter elements in the array:\n");
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr1[i]);
//     }
    
//     max = arr1[0];
//     min = arr1[0];
    
//     for (i = 1; i < n; i++) {
//         if (arr1[i] > max) {
//             max = arr1[i];
//         }
//         if (arr1[i] < min) {
//             min = arr1[i];
//         }
//     }
    
//     printf("Maximum number in the array is: %d\n", max);
//     printf("Minimum number in the array is: %d\n\n", min);
//     return 0;
// }

// // 2. Sort elements of an array in ascending order
// void sort(int array[], int n) {
//     int x = n - 1;
//     while (x > 0) {
//         int i = 0;
//         while (i < x) {
//             if (array[i] > array[i + 1]) {
//                 int temp = array[i];
//                 array[i] = array[i + 1];
//                 array[i + 1] = temp;
//             }
//             i++;
//         }
//         x--;
//     }
// }

// void output_Array(int array[], int size) {
//     for (int y = 0; y < size; y++)
//         printf("%d ", array[y]);
//     printf("\n");
// }

// int main() {
//     int a[10], p;
//     printf("\nEnter the elements of array: ");
//     for (int i = 0; i < 10; i++) {
//         scanf("%d", &a[i]);
//     }
//     int n = sizeof(a) / sizeof(a[0]);
//     sort(a, n);
//     printf("Sorted array: \n");
//     output_Array(a, n);
//     return 0;
// }

// // 3. Search for a number in an array
// int main() {
//     int array[100], x, i, n;
//     printf("Enter size of the array\n");
//     scanf("%d", &n);
    
//     printf("Enter the elements\n");
//     for (i = 0; i < n; i++)
//         scanf("%d", &array[i]);
    
//     printf("Enter a number to search\n");
//     scanf("%d", &x);
    
//     for (i = 0; i < n; i++) {
//         if (array[i] == x) {
//             printf("%d is present at location %d.\n", x, i + 1);
//             break;
//         }
//     }
    
//     if (i == n)
//         printf("%d does not exist in the array.\n", x);
    
//     return 0;
// }

// // 4. Reverse the elements in an array
// int main() {
//     int i, n, a[100];
//     printf("Enter the size of elements to store in the array: ");
//     scanf("%d", &n);
    
//     printf("Enter the number of elements in the array: ");
//     for (i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }
    
//     printf("\nThe values stored in the array are: \n");
//     for (i = 0; i < n; i++) {
//         printf("%5d", a[i]);
//     }
    
//     printf("\n\nThe values stored in the array in reverse are:\n");
//     for (i = n - 1; i >= 0; i--) {
//         printf("%5d", a[i]);
//     }
//     printf("\n\n");
//     return 0;
// }

// // 5. Print only unique elements in an array
// int main() {
//     int arr1[100], n, ctr = 0;
//     int i, j, k;
    
//     printf("Enter the size of elements to be stored in the array: ");
//     scanf("%d", &n);
    
//     printf("Enter elements in the array: ");
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr1[i]);
//     }
    
//     printf("\nThe unique elements in the array are: \n");
//     for (i = 0; i < n; i++) {
//         ctr = 0;
//         for (j = 0; j < n; j++) {
//             if (i != j && arr1[i] == arr1[j]) {
//                 ctr++;
//             }
//         }
//         if (ctr == 0) {
//             printf("%d ", arr1[i]);
//         }
//     }
//     printf("\n\n");
//     return 0;
// }

// // 6. Insert values in the array at a particular position
void main() {
    int arr1[100], i, n, p, x;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    printf("Enter elements in the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the value to be inserted: ");
    scanf("%d", &x);
    printf("Enter the position of the element: ");
    scanf("%d", &p);
    
    for (i = n; i >= p; i--)
        arr1[i] = arr1[i - 1];
    arr1[p - 1] = x;
    
    printf("\nThe new array is:\n");
    for (i = 0; i <= n; i++)
        printf("%5d", arr1[i]);
    printf("\n\n");
}

// // 7. Perform binary search on an array
// int main() {
//     int c, first, last, middle, n, search, array[100];
    
//     printf("Enter size of the array\n");
//     scanf("%d", &n);
    
//     printf("Enter numbers in the array\n");
//     for (c = 0; c < n; c++)
//         scanf("%d", &array[c]);
    
//     printf("Enter value to find\n");
//     scanf("%d", &search);
    
//     first = 0;
//     last = n - 1;
//     middle = (first + last) / 2;
    
//     while (first <= last) {
//         if (array[middle] < search)
//             first = middle + 1;
//         else if (array[middle] == search) {
//             printf("Element %d found at location %d.\n", search, middle + 1);
//             break;
//         } else
//             last = middle - 1;
//         middle = (first + last) / 2;
//     }
//     if (first > last)
//         printf("Element does not exist in the list.\n");
//     return 0;
// }

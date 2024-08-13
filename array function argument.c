# include <stdio.h>
void printNum(int arr[], int n);
int main() {
  int arr[] = {1,2,3,4,5};
  printNumbers(arr, 5);
  return 0;
}
void printNumbers(int arr[], int n) {
for(int i=0; i<n; i++){
  printf("%d\t", arr[i]);
}
  printf("\n"); 
}

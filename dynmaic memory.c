#include <stdio.h>
#include<stdlib.h>
int main(){
    int n, *arr;
    printf("enter the number of elements:");
    scanf("%d", &n);
    arr = (int*)malloc(n * size of(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    
    }
printf("Enter %d elements :\n",n);
for(int i=0; i<n; i++) {
    scanf("%d", &arr[i]);
}
printf("the elements are:\n")
for(int i=0; i<n; i++) {
    printf("%d" , arr[i]);
}
free(arr);
printf("after free %d",*arr);
return 0;
}
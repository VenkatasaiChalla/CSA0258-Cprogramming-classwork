#include <stdio.h>
int main()
{
    int n;
    int i;
    int largest = -1;
    int secondLargest = -1;
    printf("How many elements you want to enter : ");
    scanf("%d",&n);
    int array[n];
    for(i=0; i < n; i++){
        printf("Enter : ");
        scanf("%d", &array[i]);
    }
    for(i=0; i<n; i++){
      if(array[i] > largest){
        secondLargest = largest;
        largest = array[i];
      }else if(array[i] > secondLargest){
        secondLargest = array[i];
      }
    }
    printf("First largest number is %d\n",largest);
    printf("Second largest number is %d\n",secondLargest);
}
//first you need to declare an array of data
//outter loop will count the itiration 
//and the inner loop will count the index number of the array 
//create a swapping sys make a temp then it will compare and swappe 
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3};
	int i, x, pos=0,temp, n =sizeof(arr) / sizeof(arr[0]);
    for(i=0;i<n-1;i++){
        for(x=0;x<n-1-i;x++){//n-1-i when the outter loop in itiration or index 0 it mean x should bigger  then 9 and the inner loop will continue 9 times.beacuse when the outter loop is increasing it will be arranging the arry thats why the inner loop dont need to do more then that 
            if(arr[x]>arr[x+1]){
                temp=arr[x];
                arr[x]=arr[x+1];
                arr[x+1]=temp;
                pos++;
            }
            
        }
        if(pos==0){//if array is already sorted or full fill the first conditon of outter loop then the pos will not be ++ that means pos=0 when pos=0 we can say it is sorted 
        printf("Array is already sorted");
        printf("\n");
        break;
    }
    
    }
    for (i = 0; i < n; i++)//it will print the full array 
		printf("%d ", arr[i]);
	printf("\n");
}

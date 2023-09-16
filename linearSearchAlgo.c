#include <stdio.h>
int main(){
    while (1)
    {
        int s,i;
        int count=0;
        printf("enter the search number:");
        scanf("%d",&s);
        int a[]={20,4,6,78,90};
        int n = sizeof(a) / sizeof(a[0]);
        for(i=0;i<n;i++)
        {
            if(a[i]==s){
                printf("Data is found  at index number %d",i);
                count++;
                break;
            }
            
        }
        if(count==0){
                printf("data not found\n");
                
            }
        printf("\n");
    }
    
    

}


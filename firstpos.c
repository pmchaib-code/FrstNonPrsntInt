#include <stdio.h>
#include <stdbool.h>

int main(){
    int s;
    printf("enter the size of the array: ");
    scanf("%d",&s);
    int nums[s];

    for (int i=0;i<s;i++){
        printf("arr[%d]= ",i);
        scanf("%d",&nums[i]);
    }
    
    int n=1;
    bool stop=false;

    while (!stop){
        stop=true;
        for (int i=0;i<s;i++){

            if(n==nums[i]){
                n++;
                stop=false;
            }

        }

    }
    
    printf("%d\n",n);
}  
//Count the number of possible triangles

//Count the number of possible triangles

#include<stdio.h>

int countTriangles(int arr[], int n) {
int count = 0;
for(int i = 0 ;i<n;i++){
    for(int j = i+1 ;j<n;j++){
        for(int k = j+1;k<n;k++){
            
            if(arr[i]+arr[j]>arr[k] &&
              arr[i] + arr[k] > arr[j] &&
               arr[j] + arr[k] > arr[i]){
            count++;
            }
        }
    }
    
}
return count;
    
}

int main(){
   int a[4] = {4,6,3,7};
   int count = CheckForTriangle(a,4);
    printf("%d",count);
}
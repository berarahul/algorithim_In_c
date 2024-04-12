#include<stdio.h>


int BinarySearch(int arr[],int n,int target){
        
        int left=0;
        int right=n-1;
        while(left<=right){

            int mid=left+(right-left)/2;
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]<target){
                 left=mid+1;

        }else{
            right=mid-1;
        }

    
}
return -1;
}

int main(){

    printf("Enter the size of the array:: ");
    int n;
    scanf("%d",&n);
  int arr[n];

  printf("Enter the element in Acending  Order::\n");
   for(int i=0;i<n;i++){
    printf("Element %d :",i);
    scanf("%d",&arr[i]);
     
   }
   int target=0;
   printf("Enter the Searching Element\n");
   scanf("%d",&target);
 int result= BinarySearch(arr,n,target);
   if(result!=-1){
     
printf("element %d found at index %d ",target,result);
   }else{
   printf("ELement %d not found",target);

   }

return 0;

}
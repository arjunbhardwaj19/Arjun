#include<stdio.h>
int main(){
    int arr[8] = {10,15,18,23,32,38,43,47};
    int beg=0,end=7,mid,num , found = 0;
    printf("Enter number u want to find in array : ");
    scanf("%d",&num);
    while(beg <= end){
        mid = (beg+end)/2;
        if(arr[mid]==num){
            printf("Given number %d found at %d index",num,mid);
            found = 1 ;
            break; 
        }
        else if(num > arr[mid]){ // agar 'num' bada h arr[mid] se toh 'beg' ko mid se 1 plus kardo.
            beg = mid + 1;
        }
        else if(num < arr[mid]){ // agar 'num' chota h arr[mid] se toh 'end' ko mid se 1 minus kardo.
            end = mid - 1;
        }
    }
    if(found == 0) printf("Number not found");
    return 0;
}
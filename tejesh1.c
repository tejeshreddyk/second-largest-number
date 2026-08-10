#include<stdio.h>
int main()
{
int arr[]={1,2,34,77,55,99};
int size=6;
int max1=arr[0];
int max2=arr[1];
if (max2>max1){
int temp=max1;
max1=max2;
max1=temp;
}
for (int i =2;i<size;i++){
if(arr[i]>max1){
max2=max1;
max1=arr[i];
}
else if(arr[i]>max2 &&arr[i]!=max1){
max2=arr[i];
}
}
printf("second largest no is %d",max2);
return 0;
}

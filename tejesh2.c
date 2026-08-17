#include<stdio.h>
int findfirstrepeated(int arr[],int size){
for (int i=0;i<size;i++){
for (int j=i+1;j<size;j++){
if(arr[i]==arr[j]){
return arr[i];
}
}
}
return -1;
}
int main(){
int arr[]={1,2,5,8,3,1,7};
int size=sizeof(arr)/sizeof(arr[0]);
int result=findfirstrepeated(arr,size);
if (result!=-1){
printf("first repeated element is:%d",result);
}
else{
printf("no repeatedelements found");
}
return 0;
}


#include<string.h>
void merge(int input[],int start,int mid,int end)
{
    
    int temp[end-start+1];
    int i=start,j=mid+1,k=0;
    while(i<=mid && j<=end)
    {
        if(input[i]<=input[j])
        {
            temp[k++]=input[i++];
        }
        else
        {
            temp[k++]=input[j++];
        }
    }
    while(i<=mid)
    {
        temp[k++]=input[i++];
    }
    while(j<=end)
    {
        temp[k++]=input[j++];
    }
     int m=0;
    for(i=start;i<=end;i++)
    {
        input[i]=temp[m++];
    }
}
void mergeSort(int input[],int start,int end)
{
    if(start>=end){
        return;
    }
    int mid=(start+end)/2;
    mergeSort(input,start,mid);
    mergeSort(input,mid+1,end);
    merge(input,start,mid,end);
    
}
void mergeSort(int input[], int size){
	
        mergeSort(input, 0, size-1);    
}

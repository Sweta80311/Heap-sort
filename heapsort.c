#include<stdio.h>
#include<stdlib.h>
void heapSort(int a[],int n)
{
//printf("\nm\n");
int temp,i;
for(i=n/2-1;i>=0;i--)
{
heapify(a,n,i);
}
for(i=n-1;i>=0;i--)
{
temp=a[0];
a[0]=a[i];
a[i]=temp;
heapify(a,i,0);
}
}
void heapify(int a[],int n, int i)
{
//printf("\ny\n");
int largest=i,temp;
int l=(2*i)+1;
int r=(2*i)+2;
if(l<n && a[l]>a[largest])
largest=l;
if(r<n && a[r]>a[largest])
largest=r;
if(largest!=i)
{
temp=a[i];
a[i]=a[largest];
a[largest]=temp;
heapify(a,n,largest);
}
//heapify(a,n,largest);
}
void Element(int a[],int n)
{
for(int i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
void main()
{
int a[10],n,i;
printf("enter no element\n");
scanf("%d",&n);
printf("Enter element\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
Element(a,n);
printf("\n");
heapSort(a,n);
Element(a,n);
}

#include<iostream>
using namespace std;
int main(){
int a[50],n,i,j,temp,element,f,l,mid;
cout<<"enter size";
cin>>n;
for(i=0;i<n;i++){
cin>>a[i];}
for(i=0;i<n-1;i++){
for(j=0;j<n-i-1;j++){
if(a[j]>a[j+1]){
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
for(i=0;i<n;i++){
    cout<<a[i];}
cout<<"enter element";
cin>>element;
f=0;
l=n-1;

while(f<=l){
        mid=(f+l)/2;
if(a[mid]==element){
    cout<<"found"<<element;

}
else if(a[mid]>element)
{
    l=mid-1;
    }
    else {
       f=mid+1;
       }}
if(f>l)
    cout<<"not found";
}

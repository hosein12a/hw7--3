#include <iostream>


#include <iostream> 
using namespace std; 
 
 
int main() { 
int n,i; 
cout<<"please enter n= "; 
cin>>n; 
for( i=2;i<=n/2;i++){ 
 if (n%i==0) 
 cout<<i<<"\t"; 
} 
}
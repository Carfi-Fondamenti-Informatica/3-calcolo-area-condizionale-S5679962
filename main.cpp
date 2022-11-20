#include <iostream>
using namespace std;

int main(){
float a=0;
float b=0;
int opzione=0;
cin>>a>>b>>opzione;
if(opzione<0||opzione>2){
cout<<"opzione non valida"<<endl;
return 0;
}
switch(opzione){
   case 0:
cout<<(a*b)/2<<endl;
break;
   case 1:
 cout<<a*a<<endl;
 break;
   case 2:
  cout<<a*b<<endl;
 break;
 }
 


   return 0;
}

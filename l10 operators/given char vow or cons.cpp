#include <iostream>
using namespace std;
 char name = ' ';
int main(){
     cout<<"Enter the character :  ";
     cin>>name;
     if(name >= '0' && name<='9')
     cout<<"This is not a character its a number bro";

     else if(name=='a' || name=='e' || name== 'i' || name== 'o' || name== 'u')
     cout<<"This is vowel";
     else
     cout<<"Consonant";
     
return 0;
}
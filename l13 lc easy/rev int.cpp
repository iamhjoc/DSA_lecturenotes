        #include <iostream>
        #include <climits>
using namespace std;

int main() {
    int i , rem ,ans =0;
    cout<<"Enter the integer : ";
    cin>>  i;
    while(i != 0)// after few iteration i /10 will give 0 so if 0 loop stops 
    { 
      rem =  i%10;
      i/=10;
      if (ans>INT_MAX/10 || ans<INT_MIN/10)
      {
        return 0;
      }
      ans= ans*10 + rem;  //ans = ans * 10 + rem l12 logic and rem is n%10 
      

       }

    cout<<"Reversed integer : "<<ans;


    
    return 0;
}

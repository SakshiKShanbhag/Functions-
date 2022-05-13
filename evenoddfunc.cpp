#include<iostream>
using namespace std;

//1 =>even
//0 =>odd
    bool isEvenOdd(int n){
        
       //odd
        if(n&1)
        {
            return 0;
        }
        //even
        return 1;
    }




int main(){
    int n;
  cin>>n;
if(isEvenOdd(n)){
 cout<<"numebr is even"<<endl;
}
else{
 cout<<"number is oddd"<<endl;}
 return 0;
}
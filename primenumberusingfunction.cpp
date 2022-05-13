#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i =2;i<n;i++){
        //division hogaya ,means n is not prime
        //1 --return karoge toh prime no , 0---return karog etoh not prime
        if(n%i==0){
            return 0;
        }


    }return 1;
}

int main(){
    int n;
    cin>>n;

    if (isPrime(n)){
        cout<<"the number is prime no"<<endl;
    }
    else cout<<"not a prime no"<<endl;
    return 0;
}
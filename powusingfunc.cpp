/* first type 
#include<iostream>
using namespace std;

int power(int a, int b){
    int ans=1;
    for(int i=1;i<=b;i++){
    ans=ans*a;
}
return ans;
}


int main(){
    int a,b;
   
    cin>>a>>b;
    
    int answer = power(a,b);
    cout<<"answer is"<<answer<<endl;

    int c,d;
   
    cin>>c>>d;
    
    answer = power(c,d);
    cout<<"answer is"<<answer<<endl;
    return 0;
}




 //2nd type 
 /*
#include<iostream>
using namespace std;

int power(){
     int a,b;
   
    cin>>a>>b;
    int ans=1;
    for(int i=1;i<=b;i++){
    ans=ans*a;
}
return ans;
}


int main(){
   
    
    int answer = power();
    cout<<"answer is"<<answer<<endl;

    return 0;
}
*/
//here it works even if take other parameters no worry,it doesnt have to be of same name 
#include<iostream>
using namespace std;

int power(int num1, int num2){
    int ans=1;
    for(int i=1;i<=num2;i++){
    ans=ans*num1;
}
return ans;
}


int main(){
    int a,b;
   
    cin>>a>>b;
    
    int answer = power(a,b);
    cout<<"answer is"<<answer<<endl;

    int c,d;
   
    cin>>c>>d;
    
    answer = power(c,d);
    cout<<"answer is"<<answer<<endl;
    return 0;
}
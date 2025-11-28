#include<iostream>
using namespace std;
int main()
{
   int age;
   cout<<"tell me your age"<<endl;
   cin>>age;  

   //***************** 1.Selection control structure: If else -if ladder******************
   if((age<18) && (age>0)){
    cout<<"you cannot come to my party"<<endl;
   }
   else if(age==18){
    cout<<"you can come to a party and you will get a kid pass"<<endl;
   }
   else if(age<1){
    cout<<"you are not yet born"<<endl;
       
   }
   else{
    cout<<"you can come to the party"<<endl;
   } 

//**********************2.Switch case*********************
// switch (age)
// {
// case 18:
// cout<<"you are 18"<<endl;
//     break;
// case 2 :
// cout<<"you are 2"<<endl; 
// break;

// default:
// cout<<"do not match"<<endl;
//     break;
// }
// cout<<"done with switch case";
    return 0; 
}         



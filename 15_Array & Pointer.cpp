   #include <iostream>
using namespace std;
int main(){
    // ---->example 1 for array
    int marks[4] = {22,23,24,25};
//     int mathmarks[4];
//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;  
//     cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl; 

// ---->example 2 for array
//     cout<<"these are math marks"<<endl;
//     mathmarks[0] = 1;
//     mathmarks[1] = 2;
//     mathmarks[2] = 3;
//     mathmarks[3] = 4;

//     cout<<mathmarks[0]<<endl;
//     cout<<mathmarks[1]<<endl;
//     cout<<mathmarks[2]<<endl;
//     cout<<mathmarks[3]<<endl; 

// ***************** Array by using for loop*****************
//     for (int i = 0; i < 4; i++)
//     {
//         cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
//     }  
//         return 0;   
// }  
  
// #include<iostream> 
// using namespace std;

// int main(){
//     int marks[4] = {1,2,3,4};
//     int i = 0; 

// ***************** Array by using  while loop*****************
//     while(i<4){
//         cout<<"the given value "<<i<<" is "<<marks[i]<<endl;
//         i++;  
//     }  

// ***************** Array by using do while loop*****************
    // do
    // {
    //     cout<<marks[i]<<endl; 
    //     i++;
    // } while (i<4); 

// ***************** Array by using  pointer*****************
    int *p = marks;
cout<<"The value of marks[0] is "<<*p<<endl;

cout<<"The value of *p is "<<*p<<endl;
cout<<"The value of *(p+1) is "<<*(p+1)<<endl;     
cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
cout<<"The value of *(p+3) is "<<*(p+3)<<endl; 
     
    
     return 0;   
}    
   

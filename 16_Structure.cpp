#include<iostream>
using namespace std;
struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
};
int main(){
    struct employee dilip;
    dilip.eId = 1;
    dilip.favChar = 'd';
    dilip.salary = 12000000;
    cout<<"the value is "<<dilip.eId<<endl;
    cout<<"the value is "<<dilip.favChar<<endl;
    cout<<"the value is "<<dilip.salary<<endl;
    return 0;  
} 

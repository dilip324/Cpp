#include<iostream>
using namespace std;

// ------------>>Enum
enum weekdays{monday , Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
int main() {
    enum weekdays today;
    today = Friday;
    cout<<today; 
    return 0; 
}

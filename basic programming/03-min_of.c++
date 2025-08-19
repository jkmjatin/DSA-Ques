// objective: check minimum value among 2 given numbers

// given numbers: 30 and 31

#include<iostream>

using namespace std;

int main(){
    int num1, num2;
    
    num1 = 30; //given
    num2 = 31; //given
    
    if(num1 > num2){
        cout << num1 << " > " << num2 << endl;
    }
    else {
        cout << num1 << " < " << num2 << endl;
    }
    return 0;
}
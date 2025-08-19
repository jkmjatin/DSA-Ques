// objective: check if a given number is even or odd

// given number: 33

#include<iostream>

using namespace std;

int main(){
    int num;

    num = 33; //given

    if (num%2 == 0){
        cout << "Given number is even" << endl;
    }
    else{
        cout << "Given number is odd" << endl;
    }

    return 0;
}
// objective: find the sum of numbers from 1 to n

// n = 5

#include<iostream>

using namespace std;

int main(){
    int n, count, sum;

    n = 5; //given
    count = 0;
    sum = 0;

    while(count < n){
        count += 1;
        sum += count;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
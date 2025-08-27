//
//  task3.cpp
//  Lab 1
//
//  Created by Asrorbek Qalandarov on 27/08/25.
//

#include "task3.hpp"
#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n){
    if(n==1){
        return false;
    }
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0){
            return false;
        }
    }
    
    return true;
}

int main(){
    int num;
    
    cout << "Enter a number:" << endl;
    cin >> num;
    
    for (int i = 0; i <= num; i++) {
        if(isPrime(i)){
            cout << i << " ";
        }
    }
    
    return 0;
}

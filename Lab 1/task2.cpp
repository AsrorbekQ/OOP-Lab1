//
//  task2.cpp
//  Lab 1
//
//  Created by Asrorbek Qalandarov on 27/08/25.
//
#include <iostream>
#include <vector>
using namespace std;

int main1 (int argc, const char * argv[]) {

    int arr[] = {};
    int steps;
    cout << "Input → 5 followed by 10 25 7 30 18" << endl;
    cin >> steps;
    
    for (int i = 0; i < steps; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < steps; i++) {
        if (arr[0] < arr[i]) {
            arr[0] = arr[i];
        }
    }
    
    
    cout << "Largest number: " << arr[0] << endl;
    
    return 0;
}


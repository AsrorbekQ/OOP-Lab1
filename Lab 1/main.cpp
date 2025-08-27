//

#include <iostream>

using namespace std;

int humain(int argc, const char * argv[]) {

    int inpt;
    cout << "Enter the number to calculate sum of the digits: " << endl;
    cin >> inpt;
    
    int sum = 0;
    
    while (inpt != 0) {
        sum = sum + (inpt % 10);
        inpt /= 10;
    }
    
    cout << "Sum of digits: " << sum << endl;
    
    return 0;
    
}

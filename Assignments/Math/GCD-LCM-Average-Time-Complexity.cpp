                                
#include <iostream>
#include <algorithm>//for using min()

using namespace std;


//Average Time Complexity is O(min(n1, n2))

int findGcd(int n1, int n2) {
    // Initialize gcd to 1 ( can't be 0 or negative)
    int gcd = 1;

    // Iterate from 1 up to the minimum of n1 and n2
    for(int i = 1; i <= min(n1, n2); i++) {
        // Check if i is a common factor of both n1 and n2
        if(n1 % i == 0 && n2 % i == 0) {
            // Update gcd to the current common factor i.e i
            gcd = i;
        }
    }

    // Return the greatest common divisor (gcd)
    return gcd;
}


int main() {
    int n1 = 20, n2 = 15;

    int gcd = findGcd(n1, n2);

    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;
    cout << "LCM of " << n1 << " and " << n2 << " is: " << (n1*n2)/gcd << endl;
    return 0;
    
    /*
    Output : 
    GCD of 20 and 15 is: 5
    LCM of 20 and 15 is: 60
    */
    
}
                                
                            
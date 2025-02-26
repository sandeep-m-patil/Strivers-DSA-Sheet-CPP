                                
#include <iostream>
#include <algorithm>//for using min()

using namespace std;

//Best Time Complexity is O(log(min(n1, n2)))

int findGcd(int n1, int n2) {
    if (n2 == 0) {
        return n1; // Base case: when b becomes 0, return a
    }
    return findGcd(n2, n1 % n2); // Recursive call with (b, a % b)
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
    
                                
                            
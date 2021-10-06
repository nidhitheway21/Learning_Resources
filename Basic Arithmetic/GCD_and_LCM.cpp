#include <iostream>
using namespace std;

// finding GCD and LCM using The Euclidean algorithm

int GCD_using_loop(int a, int b) {
    int temp;

    while (b) {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int GCD_using_recursion(int a, int b) {
    if (b == 0)
        return a;
    else
        return GCD_using_recursion(b, a % b);
}

int LCM(int a, int b) {
    return (a * b) / GCD_using_loop(a, b);
}

int main(int argc, char* argv[]) {
	// a must be greater than b
	int a = 98, b = 76;
	
	int loop_gcd = GCD_using_loop(a, b);
	int recursion_gcd = GCD_using_recursion(a, b);
	int lcm = LCM(a, b);
	
	cout << "GCD using loop: " << loop_gcd << '\n';
	cout << "GCD using recursion: " << recursion_gcd << '\n';
	cout << "LCM: " << lcm << '\n';
	
	return 0;
}

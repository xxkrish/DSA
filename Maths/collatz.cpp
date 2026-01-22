#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using boost::multiprecision::cpp_int;

int main() {
    cpp_int n;

    cout << "Enter number: " << flush;
    if (!(cin >> n)) {
        cerr << "No input received (stdin closed). Run in Terminal.\n";
        return 1;
    }

    if (n <= 0) {
        cerr << "Please enter a positive integer.\n";
        return 1;
    }

    long long count = 0;
    while (n != 1) {
        if ((n & 1) == 0) n >>= 1;     // faster than n%2 and n/=2
        else n = 3 * n + 1;
        count++;
    }

    cout << count << "\n";
    return 0;
}

#include <iostream>

using namespace std;
//declare a variable and integer 
bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int limit;
//obtain from the user
    cout << "Enter the limit: ";
    cin >> limit;

    cout << "Prime numbers up to " << limit << ": ";
//loop will run till limit
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
    
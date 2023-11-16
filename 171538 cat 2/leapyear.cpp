#include <iostream>

using namespace std;
//declare a varialbe and integer
bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int limit;
//acquire limit from the user
    cout << "Enter the limit: ";
    cin >> limit;
//loop will run till limit
    cout << "Prime numbers up to " << limit << " are: ";
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false; // 1以下は素数ではない
    }
    if (num <= 3) {
        return true; // 2と3は素数
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false; // 2または3で割り切れる数は素数ではない
    }
    
    // 素数かどうかを確認
    for (int i = 5; i <= sqrt(num); i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    //素数でない場合のメッセージを詳しく変更
    if (!isPrime(num)) {
    cout << num << " is not a prime number. Please try again with a different number.\n";
    } else {
        cout << num << " is not a prime number.\n";
    }
    
    return 0;
}

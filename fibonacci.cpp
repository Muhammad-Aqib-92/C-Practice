#include<iostream>
using namespace std;

int fibonacci(int num, int arr[]) {
    
    if (arr[num] != -1)
        return arr[num];


    if (num == 0) {
        arr[num] = 0;  
        return arr[num];
    }
    if (num == 1) {
        arr[num] = 1;  
        return arr[num];
    }

 
    arr[num] = fibonacci(num - 1, arr) + fibonacci(num - 2, arr);
    return arr[num];
}

int main() {
    int n;
    cout << "Enter a number to get the Fibonacci number: ";
    cin >> n;

  
    int arr[n + 1];  

    for (int i = 0; i <= n; i++) {
        arr[i] = -1;  
    }

    cout << "The Fibonacci number of " << n << " is: " << fibonacci(n, arr) << endl;

   
    cout << "Fibonacci sequence up to " << n << ": ";
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

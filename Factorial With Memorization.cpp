#include<iostream>
using namespace std;

int calculate(int num)
{
    if(num == 1)
    {
        return 1;
    }
    return num + calculate(num - 1);
}
int factorial(int num)
{
    if(num == 1)
    {
        return 1;
    }
    return num * factorial(num - 1);
}

int factorial(int num, int arr[])
{
    if(arr[num] != -1)
    {
        return arr[num];
    }

    if(num == 1)
    {
        arr[num] = 1;
        return arr[num];
    }
    if(num == 2)
    {
        arr[num] = 2;
        return arr[num];
    }

    arr[num] = num * factorial(num - 1, arr);
    return arr[num];
}




int main()
{
    int n ;
    cout << "Enter a number you want to get factorial: ";
    cin >> n;
    //cout << "The sum of numbers from 1 to " << num << " is: " << calculate(num) << endl;

    int arr[n + 1] ;
    for(int i = 0; i <= n; i++)
    {
        arr[i] = -1;
    }
    cout << "The factorial of " << n << " is: " << factorial(n,arr) << endl;

    

}
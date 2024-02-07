#include<iostream>
using namespace std;

int main() {
    int T;
    cout << "Enter the number of test cases: ";
    cin >> T;

    for (int t = 0; t < T; t++) 
    {
        int n;
        cout << "Enter the size of the array: ";
        cin >> n;

        int arr[n];
        cout << "Enter the array elements: ";
        for (int i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }

        int K;
        cout << "Enter the key element: ";
        cin >> K;
        int count = 0;

        for (int i = 0; i < n ; i++) 
        {
            for (int j = i + 1; j < n; j++) 
            {
                if (arr[j] - arr[i] == K) 
                {
                    count++;
                }
            }
        }

        cout << "Number of pairs with difference " << K << ": " << count << endl;
    }

    return 0;
}

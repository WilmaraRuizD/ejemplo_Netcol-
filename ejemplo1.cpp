/ C++ program for the above approach
#include <iostream>
using namespace std;
 
// Function to find the smallest number
// which doesn't divides any integer in
// the given array arr[]
void smallestNumber(int arr[], int len)
{
        for (int j = 0; j < len; j++) {
 
            // If any array element
            // is divisible by j
            if (arr[j] % i == 0) {
 
                flag = false;
                break;
            }
        }
 
        if (flag) {
 
            // Smallest integer
            ans = i;
            break;
        }
    }
 
    // Print the answer
    cout << ans;
}
 
// Driver Code
int main()
{
    int arr[] = { 3, 2, 6, 9, 2 };
    int N = sizeof(arr)
/ sizeof(arr[0]);
 
    // Function Call
    smallestNumber(arr, N);
 
    return 0;
}
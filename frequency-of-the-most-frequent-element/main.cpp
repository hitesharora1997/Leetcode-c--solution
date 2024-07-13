// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum possible
// frequency of a most frequent element
// after at most K increment operations
void maxFrequency(int arr[], int N, int K)
{
	// Sort the input array
	sort(arr, arr + N);

	int start = 0, end = 0;

	// Stores the sum of sliding
	// window and the maximum possible
	// frequency of any array element
	int sum = 0, res = 0;

	// Traverse the array
	for (end = 0; end < N; end++) {

		// Add the current element
		// to the window
		sum += arr[end];

		// Decrease the window size

		// If it is not possible to make the
		// array elements in the window equal
		while ((end - start + 1) * arr[end] - sum > K) {
            cout << "end: " << end << endl;
            cout << "end[]: " << arr[end] << endl;
            cout << "start: " << start << endl;
            cout << "sum :" << sum << endl;

            cout << "P: " << (end - start + 1) * arr[end] - sum << endl;

			// Update the value of sum
			sum -= arr[start];
            cout << "sum :" << sum << endl;

			// Increment the value of start
			start++;
		}

		// Update the maximum possible frequency
		res = max(res, end - start + 1);
	}

	// Print the frequency of
	// the most frequent array
	// element after K increments
	cout << res << endl;
}

// Driver code
int main()
{
	int arr[] = { 1, 4, 8, 13 };
	int N = 4;
	int K = 5;
	maxFrequency(arr, N, K);
	return 0;
}

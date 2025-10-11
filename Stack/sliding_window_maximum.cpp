#include <bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& arr, int k) {
    int n = arr.size();
    deque<int> dq;
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        // Remove indices outside current window
        if (!dq.empty() && dq.front() == i - k)
            dq.pop_front();

        // Maintain decreasing order
        while (!dq.empty() && arr[dq.back()] < arr[i])
            dq.pop_back();

        dq.push_back(i);

        // Store the max (front of deque)
        if (i >= k - 1)
            ans.push_back(arr[dq.front()]);
    }

    return ans;
}

int main() {
    cout << "Enter the number of elements: ";
    int n, k;
    cin >> n;
    
    cout << "Enter the window size: ";
    cin >> k;
    
    cout << "Enter the elements: ";
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    vector<int> ans = maxSlidingWindow(arr, k);
    
    cout << "Max of each sliding window: ";
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;

    return 0;
}

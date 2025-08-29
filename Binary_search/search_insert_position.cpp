#include<bits/stdc++.h>
using namespace std;


int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int mid=start+(end-start)/2;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(nums[mid]>=target)
              end=mid-1;
            else
              start=mid+1;  
        }
        return start;
    }  
int main() {  
    vector<int> arr = {1, 3, 5, 6};  
    int k = 5;  
    cout << searchInsert(arr, k) << endl;  
    return 0;  
}
        
    
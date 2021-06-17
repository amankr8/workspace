#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int> &nums, int k) {
        int sum = 0, count = 0;
        map<int, int> m{{0, 1}};
        for(int i=0; i<nums.size(); i++) {
            sum += nums[i];
            if(m.count(sum-k)) count += m[sum-k];
            if(m.count(sum)) m[sum]++;
            else m[sum] = 1;
        }
        return count;
    }
};
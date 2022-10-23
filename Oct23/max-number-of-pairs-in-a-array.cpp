/*You are given a 0-indexed integer array nums. In one operation, you may do the following:

Choose two integers in nums that are equal.
Remove both integers from nums, forming a pair.
The operation is done on nums as many times as possible.

Return a 0-indexed integer array answer of size 2 where answer[0] is the number of pairs 
that are formed and answer[1] is the number of leftover integers in nums after doing the operation as many times as possible.*/

//Divide and Modulo by 2
class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map <int,int> mp;
        for(auto i:nums)
            mp[i]++;
        vector<int> ans(2,0);
        for(int i=0;i<mp.size();i++){
            ans[0]+=mp[i]/2;
            ans[1]+=mp[i]%2;
        }
        return ans;
    }
};

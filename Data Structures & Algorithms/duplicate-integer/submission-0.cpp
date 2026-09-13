class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_set<int>hashy;
       for (int num:nums){
        if (hashy.count(num))
        return true;
        hashy.insert(num);
        }
        return false;
    }
};
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> m;
        for(auto i: nums){
            if(m[i]!=0){
                return true;
            }
            m[i]++;
        }
        return false;
        
    }
};
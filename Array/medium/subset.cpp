class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> output;
        vector<int> v;
        output.push_back(v);
        for (int i = 0; i < nums.size(); i++)
        {
            int m = output.size();
            for (int j = 0; j < m; j++)
            {
                v = output[j];
                v.push_back(nums[i]);
                output.push_back(v);
            }
        }
        return output;
    }
};
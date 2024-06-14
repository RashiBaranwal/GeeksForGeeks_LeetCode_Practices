class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
         int maxNum = *max_element(nums.begin(), nums.end());
        vector<int> vec(maxNum + nums.size() + 1, 0);

        for (int num : nums)
            vec[num] += 1;

        int moves = 0;
        for (int i = 0; i < vec.size(); ++i)
        {
            if (vec[i] > 1)
            {
                vec[i + 1] += vec[i] - 1;
                moves += vec[i] - 1;
            }
        }
        return moves;
    }
};
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int index1 = 0;
        int index2 = 0;
        vector<int> v;
        while(index1 < m && index2 < n)
        {
            if(nums1[index1] < nums2[index2])
            {
                v.push_back(nums1[index1]);
                index1++;
            }
            else
            {
                v.push_back(nums2[index2]);
                index2++;
            }
        }
        while(index1 < m)
        {
            v.push_back(nums1[index1]);
            index1++;
        }
        while(index2 < n)
        {
            v.push_back(nums2[index2]);
            index2++;
        }
        nums1.clear();
        nums1.assign(v.begin(),v.end());
    }
};
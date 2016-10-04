class Solution {
public:
    /**
     * @param nums an integer array
     * @return nothing, do this in-place
     */
    void moveZeroes(vector<int>& nums) {
        // Write your code here
        int n = nums.size();
        int count = 0;
        if (n == 1 && nums[0] == 0)
            return;
            else if (n == 0)
                return;
                else {
                    for (int i = 0; i < n;) {
                        if ( nums[i] == 0) {
                            count++;
                            if (nums.size()==1) {
                                for (int j = 0; j < n-1; j++) {
                                    nums.push_back(0);
                                }
                                return;
                            } else nums.erase(nums.begin()+i);
                            
                        } else i++;
                    }
                    
                    
                    for (int j = 0; j < count; j++) {
                        nums.push_back(0);
                    }
                    return;
                }
    }
};

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
                                nums.insert(nums.end(),n-1,0);
                                return;
                            } else nums.erase(nums.begin()+i);
                            
                        } else i++;
                    }
                    
                    
                  nums.insert(nums.end(),count,0);
                    }
                    return;
                }
    }
};

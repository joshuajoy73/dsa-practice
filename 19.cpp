
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result = {-1, -1};


        int left = search(nums, target, true);
        if (left == -1) {
            return result;  
        }

       
        int right = search(nums, target, false);

        result[0] = left;
        result[1] = right;

        return result;
    }

private:
    int search(const vector<int>& nums, int target, bool findLeftmost) {
        int left = 0, right = nums.size() - 1;
        int result = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                result = mid;

                if (findLeftmost) {
                    right = mid - 1;  
                } else {
                    left = mid + 1;   
                }
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return result;
    }
};

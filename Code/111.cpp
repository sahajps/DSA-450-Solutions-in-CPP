// All the integers of nums are unique.
// nums is sorted and rotated between 1 and n times.
class Solution {
public:
    int findMin(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        while(i<j){
            int mid=(i+j)/2;
            if(nums[mid]>nums[(mid+1)%(nums.size()-1)]){
                return mid;
            }
            else if(nums[mid]>nums[j]){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return -1;
    }
};

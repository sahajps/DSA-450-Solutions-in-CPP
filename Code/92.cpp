class Solution {
public:
    int binsearch(vector<int>& nums,int target,int i,int j){
        int mid;
        while(j>=i){
            mid=(i+j)/2;
            //cout<<mid<<endl;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]<target){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return -1;
    }
    //###########################################################//
    int search(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1,mid;
        if(nums[nums.size()-1]>nums[0]){
            return binsearch(nums,target,0,nums.size()-1);
        }
        
        while(j-i>1){
            mid=(i+j)/2;
            if(nums[mid]<nums[i]){
                j=mid;
            }
            else{
                i=mid;
            }
        }
        if(nums[i]<nums[j]) mid=i;
        else mid=j;
        //cout<<mid<<endl;
        if(nums[nums.size()-1]>=target){
            return binsearch(nums,target,mid,nums.size()-1);
        }
        else{
            return binsearch(nums,target,0,mid-1);
        }
        
    }
};

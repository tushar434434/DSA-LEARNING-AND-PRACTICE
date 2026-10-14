/*class Solution {
public:
    int search(vector<int>& nums, int k) {
       for(int i=0;i<nums.size();i++){
        if (nums[i]==k){
            return i;
        }
       }
    return -1;}
};*/
class Solution {
public:
    int search(vector<int>& nums, int k) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==k) return mid;
            if(nums[low]<=nums[mid]){
                if(k>=nums[low] && k<=nums[mid]){
                    high=mid-1;
                }
                else low=mid+1;
            }
            else{
                if(nums[mid]<=k && k<=nums[high]){
                low=mid+1;
            }
            else {
                high=mid-1;
            }
            }
        }
 return -1;
    }
};
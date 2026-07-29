class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans=merge(nums1,nums2);
        int n=ans.size();
        if(n%2==0){
        
            return ((ans[n/2]+ans[n/2-1])/2.0);
        }
        else {
            return ans[n/2];
        }
    }
    public:
     vector<int> merge(vector<int>& arr1,vector<int>& arr2){
        vector<int>ans;
        int p1=0;
        int p2=0;
        int p3=0;
        while(p1<arr1.size() || p2<arr2.size()){
            int val1= p1<arr1.size()? arr1[p1] : INT_MAX;
            int val2= p2<arr2.size() ? arr2[p2] : INT_MAX;
            if(val1<val2){
                ans.push_back(val1);
                p1++;
            }
            else{
                ans.push_back(val2);
                p2++;
            }
            p3++;
        }
        return ans;
    }
};

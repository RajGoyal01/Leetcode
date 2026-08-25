class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       vector<int>combine;
       for(int x:nums1) combine.push_back(x);
       for(int x:nums2) combine.push_back(x);

       sort(combine.begin(),combine.end());
       
       int n=combine.size();
       if(n%2==1){
        return combine[n/2];
       }
       else{
         return (combine[n/2]+combine[n/2-1])/2.0;
       }
    }
};
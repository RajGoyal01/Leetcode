class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
    unordered_map<int,int>frequency;
    unordered_map<int,int>frequency_count;
     for (int num : nums) {
        frequency[num]++; 
      }  
     for (auto& [num, count] : frequency) {
       frequency_count[count]++;
      }
      for(int num :nums){
        if(frequency_count[frequency[num]]==1){
            return num;
        }
      }
      return -1;
    }
};
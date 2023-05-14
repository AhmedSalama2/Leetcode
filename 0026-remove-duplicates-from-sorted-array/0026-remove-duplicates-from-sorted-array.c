int removeDuplicates(int* nums, int numsSize){
    int i;
    int ans;
    if (numsSize==1){
        return 1;
    }
    for(i=1;i<numsSize;++i){
        int k=i;
        ans=numsSize;
        while(nums[i-1]>=nums[k]){
            --ans;
            if(k==(numsSize-1)){
                return ans;
            }
            ++k; 
        }
        nums[i]=nums[k];
    }
    return ans;

}
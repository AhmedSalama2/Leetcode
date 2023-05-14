int removeElement(int* nums, int numsSize, int val){
    int i;
    int k=numsSize;
    int temp;
    for(i=0;i<numsSize;++i){
        if(numsSize==1){
            if(nums[0]==val){
                return 0;
            }
            else{
                return 1;
            }
        }
        if(nums[i]==val){
            while(1){
                if(nums[numsSize-1]!=val){
                    temp=nums[numsSize-1];
                    nums[numsSize-1]=nums[i];
                    nums[i]=temp;
                    break;
                }
                --numsSize;
                if(numsSize-i==0){
                    return numsSize;
                }
            }
            --numsSize;
            if(numsSize-i==0){
                return numsSize;
            }
        }
    }
    return numsSize;
}
#include"stdlib.h"
int cmp(const void*x,const void*y){
    return (*(int*)x-*(int*)y);
}
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int i,j=0;
    for(i=0;i<nums1Size;++i){
        if(!n){
            break;
        }
        if(!nums1[i]){
            if(nums2[j]){
                nums1[i]=nums2[j];
            }
            j++;
            if(j==nums2Size){
                break;
            }
        }
    }
   qsort(nums1,nums1Size,sizeof(int),cmp);

}
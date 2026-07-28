/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
        for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[j]==target-nums[i]){
            int* a=malloc (sizeof(int)*2);
            a[0]=i;
            a[1]=j;
            *returnSize = 2;
            //return 2 values i and j
            return a;

            }
            
        }
    }
    // no value should be return if no solution found
    *returnSize =0;
    return malloc(sizeof(int)*0);
}
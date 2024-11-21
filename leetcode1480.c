
int* runningSum(int* nums, int numsSize, int* returnSize){
    int * result = (int*) malloc(sizeof(int)*numsSize);

    *returnSize = numsSize;

    result [0] =  nums[0];
    int sum  = 0;
    int j= 0;
    for(int i = 1; i<numsSize; i++){
      result[i] = result[i-1] + nums[i];
    }

    return result;
}
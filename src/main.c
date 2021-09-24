#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    
    int i1;
    int i2;
    int return_defined = 0;
    
    returnSize[0] = 2;
    
    int *res;
    
    res = (int*) malloc (2*sizeof(int));
    
    for (i1=0; i1<numsSize-1; i1++){
        for (i2=i1+1;i2<numsSize;i2++){
            if (target==nums[i1]+nums[i2] && return_defined==0){
                res[0]= i1;
                res[1]= i2;
                return_defined=1;
                break;
            }
        }
        if (return_defined==1){
            break;
        }  
    }
    return res;   
}

void print_array (int* array, int array_size){
    int i=0;
    
    printf("ARRAY =");
    for (i=0; i<array_size; i++){
        printf(" %d", array[i]);
    }
    printf("\n");
}

int main(){

    int nums[] = {2,7,11,4};
    int numsSize = 4;
    int target = 9;
    int *res;
    int *returnSize;

    returnSize = (int*) malloc (sizeof(int));

    res= twoSum(nums, numsSize, target, returnSize);

    print_array(res, returnSize[0]);

    return 0;

}
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* res){
    int i1;
    int i2;

    res = (int*) malloc (2*sizeof(int));
    
    for (i1=0; i1<numsSize; i1++){
        for (i2=0;i2<numsSize;i2++){
            if (target==nums[i1]+nums[i2]){
                res[0]= i1;
                res[0]= i2;
            }
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

    print_array(nums, 4);

    res= twoSum(nums, numsSize, target, res);

    res[0]=1;

    print_array(res, 2);

    return 0;

}
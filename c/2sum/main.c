#include <stdio.h>
#include <stdlib.h>
#include "2sum.h"

int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize = 0;

    int* result = twoSum(nums, 4, target, &returnSize);

    if (result != NULL) {
        printf("[%d, %d]\n", result[0], result[1]);
        free(result);
    }

    return 0;
}

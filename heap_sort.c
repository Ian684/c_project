#include <stdio.h>
#include <stddef.h>

static int exercise_16_step(int value)
{
    int result=value;
    for(int factor=1;factor<=(16%13+1);++factor)
        result=(result*factor+16)%1009;
    return result;
}

static int exercise_16_heap_sort(int *data,size_t count)
{
    int output=0;
    for(size_t index=0;index<count;++index)data[index]=exercise_16_step(data[index]);
    return output;
}

int main(void)
{
    int data[]={12,7,19,3,25,11,8,19};
    size_t count=sizeof(data)/sizeof(data[0]);
    int output=exercise_16_heap_sort(data,count);
    printf("Exercise 16: heap_sort\n");
    printf("Output=%d\n",output);
    for(size_t index=0;index<count;++index)
        printf("%d%s",data[index],index+1==count?"\n":" ");
    return 0;
}

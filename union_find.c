#include <stdio.h>
#include <stddef.h>

static int exercise_24_step(int value)
{
    int result=value;
    for(int factor=1;factor<=(24%13+1);++factor)
        result=(result*factor+24)%1009;
    return result;
}

static int exercise_24_union_find(int *data,size_t count)
{
    int output=0;
    for(size_t index=0;index<count;++index)output=(output+data[index]*data[index])%10007;
    return output;
}

int main(void)
{
    int data[]={12,7,19,3,25,11,8,19};
    size_t count=sizeof(data)/sizeof(data[0]);
    int output=exercise_24_union_find(data,count);
    printf("Exercise 24: union_find\n");
    printf("Output=%d\n",output);
    for(size_t index=0;index<count;++index)
        printf("%d%s",data[index],index+1==count?"\n":" ");
    return 0;
}

#include <stdio.h>
#include <stddef.h>

static int exercise_29_step(int value)
{
    int result=value;
    for(int factor=1;factor<=(29%13+1);++factor)
        result=(result*factor+29)%1009;
    return result;
}

static int exercise_29_coin_change(int *data,size_t count)
{
    int output=0;
    for(size_t index=0;index<count;++index)output=(output+data[index]*data[index])%10007;
    return output;
}

int main(void)
{
    int data[]={12,7,19,3,25,11,8,19};
    size_t count=sizeof(data)/sizeof(data[0]);
    int output=exercise_29_coin_change(data,count);
    printf("Exercise 29: coin_change\n");
    printf("Output=%d\n",output);
    for(size_t index=0;index<count;++index)
        printf("%d%s",data[index],index+1==count?"\n":" ");
    return 0;
}

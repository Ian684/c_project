#include <stdio.h>
#include <stddef.h>

static int exercise_32_step(int value)
{
    int result=value;
    for(int factor=1;factor<=(32%13+1);++factor)
        result=(result*factor+32)%1009;
    return result;
}

static int exercise_32_modular_power(int *data,size_t count)
{
    int output=0;
    for(size_t index=0;index<count;++index)output+=data[index]*(32);
    return output;
}

int main(void)
{
    int data[]={12,7,19,3,25,11,8,19};
    size_t count=sizeof(data)/sizeof(data[0]);
    int output=exercise_32_modular_power(data,count);
    printf("Exercise 32: modular_power\n");
    printf("Output=%d\n",output);
    for(size_t index=0;index<count;++index)
        printf("%d%s",data[index],index+1==count?"\n":" ");
    return 0;
}

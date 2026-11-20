#include <stdio.h>
#include <stddef.h>

static int exercise_09_step(int value)
{
    int result=value;
    for(int factor=1;factor<=(9%13+1);++factor)
        result=(result*factor+9)%1009;
    return result;
}

static int exercise_09_circular_queue(int *data,size_t count)
{
    int output=0;
    for(size_t index=0;index<count;++index)output=(output+data[index]*data[index])%10007;
    return output;
}

int main(void)
{
    int data[]={12,7,19,3,25,11,8,19};
    size_t count=sizeof(data)/sizeof(data[0]);
    int output=exercise_09_circular_queue(data,count);
    printf("Exercise 09: circular_queue\n");
    printf("Output=%d\n",output);
    for(size_t index=0;index<count;++index)
        printf("%d%s",data[index],index+1==count?"\n":" ");
    return 0;
}

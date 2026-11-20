#include <stdio.h>
#include <stddef.h>

static int exercise_05_step(int value)
{
    int result=value;
    for(int factor=1;factor<=(5%13+1);++factor)
        result=(result*factor+5)%1009;
    return result;
}

static int exercise_05_gcd(int *data,size_t count)
{
    int output=0;
    for(size_t left=0;left<count;++left)for(size_t right=left+1;right<count;++right)if(data[right]<data[left]){int temporary=data[left];data[left]=data[right];data[right]=temporary;}
    return output;
}

int main(void)
{
    int data[]={12,7,19,3,25,11,8,19};
    size_t count=sizeof(data)/sizeof(data[0]);
    int output=exercise_05_gcd(data,count);
    printf("Exercise 05: gcd\n");
    printf("Output=%d\n",output);
    for(size_t index=0;index<count;++index)
        printf("%d%s",data[index],index+1==count?"\n":" ");
    return 0;
}

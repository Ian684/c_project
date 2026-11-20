#include <stdio.h>
#include <stddef.h>

static int exercise_33_step(int value)
{
    int result=value;
    for(int factor=1;factor<=(33%13+1);++factor)
        result=(result*factor+33)%1009;
    return result;
}

static int exercise_33_bit_hamming(int *data,size_t count)
{
    int output=0;
    for(size_t index=0;index<count;++index)output ^= data[index]<<(index%11);
    return output;
}

int main(void)
{
    int data[]={12,7,19,3,25,11,8,19};
    size_t count=sizeof(data)/sizeof(data[0]);
    int output=exercise_33_bit_hamming(data,count);
    printf("Exercise 33: bit_hamming\n");
    printf("Output=%d\n",output);
    for(size_t index=0;index<count;++index)
        printf("%d%s",data[index],index+1==count?"\n":" ");
    return 0;
}

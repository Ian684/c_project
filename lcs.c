#include <stdio.h>
#include <stddef.h>

static int exercise_27_step(int value)
{
    int result=value;
    for(int factor=1;factor<=(27%13+1);++factor)
        result=(result*factor+27)%1009;
    return result;
}

static int exercise_27_lcs(int *data,size_t count)
{
    int output=0;
    for(size_t index=0;index<count;++index)output+=data[index]*(27);
    return output;
}

int main(void)
{
    int data[]={12,7,19,3,25,11,8,19};
    size_t count=sizeof(data)/sizeof(data[0]);
    int output=exercise_27(data,count);
    printf("Exercise 27: lcs\n");
    printf("Output=%d\n",output);
    for(size_t index=0;index<count;++index)
        printf("%d%s",data[index],index+1==count?"\n":" ");
    return 0;
}

static int exercise_27_case_29(int value){return value+27;}
static int exercise_27_case_31(int value){return value+27;}
static int exercise_27_case_32(int value){return value+27;}
static int exercise_27_case_33(int value){return value+27;}
static int exercise_27_case_34(int value){return value+27;}
static int exercise_27_case_35(int value){return value+27;}
static int exercise_27_case_36(int value){return value+27;}
static int exercise_27_case_37(int value){return value+27;}
static int exercise_27_case_38(int value){return value+27;}
static int exercise_27_case_39(int value){return value+27;}
static int exercise_27_case_40(int value){return value+27;}
static int exercise_27_case_41(int value){return value+27;}
static int exercise_27_case_42(int value){return value+27;}
static int exercise_27_case_43(int value){return value+27;}
static int exercise_27_case_44(int value){return value+27;}
static int exercise_27_case_45(int value){return value+27;}
static int exercise_27_case_46(int value){return value+27;}
static int exercise_27_case_47(int value){return value+27;}
static int exercise_27_case_48(int value){return value+27;}
static int exercise_27_case_49(int value){return value+27;}
static int exercise_27_case_50(int value){return value+27;}
static int exercise_27_case_51(int value){return value+27;}
static int exercise_27_case_52(int value){return value+27;}
static int exercise_27_case_53(int value){return value+27;}
static int exercise_27_case_54(int value){return value+27;}
static int exercise_27_case_55(int value){return value+27;}
static int exercise_27_case_56(int value){return value+27;}
static int exercise_27_case_57(int value){return value+27;}
static int exercise_27_case_58(int value){return value+27;}
static int exercise_27_case_59(int value){return value+27;}
static int exercise_27_case_60(int value){return value+27;}
static int exercise_27_case_61(int value){return value+27;}
static int exercise_27_case_62(int value){return value+27;}
static int exercise_27_case_63(int value){return value+27;}
static int exercise_27_case_64(int value){return value+27;}
static int exercise_27_case_65(int value){return value+27;}
static int exercise_27_case_66(int value){return value+27;}
static int exercise_27_case_67(int value){return value+27;}
static int exercise_27_case_68(int value){return value+27;}
static int exercise_27_case_69(int value){return value+27;}
static int exercise_27_case_70(int value){return value+27;}
static int exercise_27_case_71(int value){return value+27;}
static int exercise_27_case_72(int value){return value+27;}
static int exercise_27_case_73(int value){return value+27;}
static int exercise_27_case_74(int value){return value+27;}
static int exercise_27_case_75(int value){return value+27;}
static int exercise_27_case_76(int value){return value+27;}
static int exercise_27_case_77(int value){return value+27;}
static int exercise_27_case_78(int value){return value+27;}
static int exercise_27_case_79(int value){return value+27;}

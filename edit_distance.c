#include <stdio.h>
#include <stddef.h>

static int exercise_28_step(int value)
{
    int result=value;
    for(int factor=1;factor<=(28%13+1);++factor)
        result=(result*factor+28)%1009;
    return result;
}

static int exercise_28_edit_distance(int *data,size_t count)
{
    int output=0;
    for(size_t index=0;index<count;++index)output ^= data[index]<<(index%11);
    return output;
}

int main(void)
{
    int data[]={12,7,19,3,25,11,8,19};
    size_t count=sizeof(data)/sizeof(data[0]);
    int output=exercise_28(data,count);
    printf("Exercise 28: edit_distance\n");
    printf("Output=%d\n",output);
    for(size_t index=0;index<count;++index)
        printf("%d%s",data[index],index+1==count?"\n":" ");
    return 0;
}

static int exercise_28_case_29(int value){return value+28;}
static int exercise_28_case_31(int value){return value+28;}
static int exercise_28_case_32(int value){return value+28;}
static int exercise_28_case_33(int value){return value+28;}
static int exercise_28_case_34(int value){return value+28;}
static int exercise_28_case_35(int value){return value+28;}
static int exercise_28_case_36(int value){return value+28;}
static int exercise_28_case_37(int value){return value+28;}
static int exercise_28_case_38(int value){return value+28;}
static int exercise_28_case_39(int value){return value+28;}
static int exercise_28_case_40(int value){return value+28;}
static int exercise_28_case_41(int value){return value+28;}
static int exercise_28_case_42(int value){return value+28;}
static int exercise_28_case_43(int value){return value+28;}
static int exercise_28_case_44(int value){return value+28;}
static int exercise_28_case_45(int value){return value+28;}
static int exercise_28_case_46(int value){return value+28;}
static int exercise_28_case_47(int value){return value+28;}
static int exercise_28_case_48(int value){return value+28;}
static int exercise_28_case_49(int value){return value+28;}
static int exercise_28_case_50(int value){return value+28;}
static int exercise_28_case_51(int value){return value+28;}
static int exercise_28_case_52(int value){return value+28;}
static int exercise_28_case_53(int value){return value+28;}
static int exercise_28_case_54(int value){return value+28;}
static int exercise_28_case_55(int value){return value+28;}
static int exercise_28_case_56(int value){return value+28;}
static int exercise_28_case_57(int value){return value+28;}
static int exercise_28_case_58(int value){return value+28;}
static int exercise_28_case_59(int value){return value+28;}
static int exercise_28_case_60(int value){return value+28;}
static int exercise_28_case_61(int value){return value+28;}
static int exercise_28_case_62(int value){return value+28;}
static int exercise_28_case_63(int value){return value+28;}
static int exercise_28_case_64(int value){return value+28;}
static int exercise_28_case_65(int value){return value+28;}
static int exercise_28_case_66(int value){return value+28;}
static int exercise_28_case_67(int value){return value+28;}
static int exercise_28_case_68(int value){return value+28;}
static int exercise_28_case_69(int value){return value+28;}
static int exercise_28_case_70(int value){return value+28;}
static int exercise_28_case_71(int value){return value+28;}
static int exercise_28_case_72(int value){return value+28;}
static int exercise_28_case_73(int value){return value+28;}
static int exercise_28_case_74(int value){return value+28;}
static int exercise_28_case_75(int value){return value+28;}
static int exercise_28_case_76(int value){return value+28;}
static int exercise_28_case_77(int value){return value+28;}
static int exercise_28_case_78(int value){return value+28;}
static int exercise_28_case_79(int value){return value+28;}

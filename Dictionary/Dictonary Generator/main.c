#include <stdio.h>
#include <stdlib.h>
#define ONE 2
#define TWO 1
#define THREE 3
#define FOUR 2
#define FIVE 3
#define SIX 3
#define SEVEN 3
#define EIGHT 3
#define NINE 3
#define MAX_LENGTH 10
int main()
{
    FILE * fp;
    fp = fopen ("Dictionary1.txt", "w+");
    char first[ONE] = "Cc";
    char second [TWO] = "^";
    char third[THREE] = "yY!";
    char fourth[FOUR] = "pP";
    char fifth[FIVE] = "tT2";
    //char sixth [6] = "gG8oO0";
    char sixth [SIX]     = "oO0";//"gG8";
    char seventh [SEVEN] = "gG8";//"rR^";
    char eighth [EIGHT]  = "rR^";//"aA1";
    char ninth [NINE] = "aA1";//".";

    char word[MAX_LENGTH];
    for(int i1=0;i1<ONE;i1++)
    {
        for(int i2=0;i2<TWO;i2++)
        {
            for(int i3=0;i3<THREE;i3++)
            {
                for(int i4=0;i4<FOUR;i4++)
                {
                    for(int i5=0;i5<FIVE;i5++)
                    {
                        for(int i6=0;i6<SIX;i6++)
                        {
                            for(int i7=0;i7<SEVEN;i7++)
                            {
                                for(int i8=0;i8<EIGHT;i8++)
                                {
                                    for(int i9=0;i9<NINE;i9++)
                                    {
                                       sprintf(word,"%c%c%c%c%c%c%c%c%c",first[i1],second[i2],third[i3],fourth[i4],fifth[i5],sixth[i6],seventh[i7],eighth[i8],ninth[i9]);
                                       //fprintf(fp,"%s",first[i1]);
                                       //fprintf(fp,"%s",second[i2]);
                                       //fprintf(fp,"%s",third[i3]);
                                       fprintf(fp,"%s\n",word);
                                       printf("%s\n",word);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    fclose(fp);
    return 0;
}

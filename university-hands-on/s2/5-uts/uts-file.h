#include <stdio.h>

#define ABS_FILE 2
#define SRT_FILE 3
#define OPR_WRITE "wb"
#define OPR_READ "rb"

FILE *afl, *sfl;

FILE *configure_file(int fnum, char opr[])
{
    switch (fnum)
    {
        case ABS_FILE :
        {
            afl = fopen("UTS1.dat", opr);
            return afl;
            break;
        }
        case SRT_FILE : 
        {
            sfl = fopen("UTS2.dat", opr);
            return sfl;
            break;
        }
        default :
        return NULL;
        break;
    }
}

void input_abs_file(int num)
{
    putw(num, afl);
}

int read_abs_file()
{
    return getw(afl);
}

void input_srt_file(int num)
{
    putw(num, sfl);
}

int read_srt_file()
{
    return getw(sfl);
}

void close_file(int fnum)
{
    switch (fnum)
    {
        case ABS_FILE :
        {
            fclose(afl);
            break;
        }
        case SRT_FILE : 
        {
            fclose(sfl);
            break;
        }
        default :
        {
            break;
        }
    }
}

void close_all_files()
{
    fclose(afl);
    fclose(sfl);
}
// File handler

#include "character-program-file-registry.h"

#define SUCCESS 1
#define FAILED 0

FILE *fl;

int configure_file_content(char fn[], char opr[])
{
    fl = fopen(fn, opr);
    if (fl == NULL)
    {
        return FAILED;
    }
    return SUCCESS;
}

// create file and its content.
int create_file(char fn[])
{
    int rt;
    rt = configure_file_content(fn, "w");
    register_new_file(fn);
    return rt;
}

void insert_file_content(char rcd)
{
    fputc(rcd, fl);
}

char read_file_content()
{
    return fgetc(fl);
}

void manipulate_file_content(FILE *flc)
{

}

void close_file_content()
{
    fclose(fl);
}
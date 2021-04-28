// File handler

#include "character-program-file-registry.h"
#include "character-program-util.h"

#define SUCCESS 1
#define FAILED 0

FILE *fl;

// create file and its content.
int create_file(char fn[])
{
    fl = fopen(fn, "w");
    if (fl == NULL)
    {
        return FAILED;
    }
    register_new_file(fn);
    return SUCCESS;
}

void insert_file_content(char rcd)
{
    fputc(rcd, fl);
}

void read_file_content(char flc)
{
    fl = fopen(flc, "r");
    if (fl == NULL)
    {

    }
}

void manipulate_file_content(FILE *flc)
{

}

void close_file_content()
{
    fclose(fl);
}
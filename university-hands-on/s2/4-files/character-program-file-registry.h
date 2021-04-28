#ifndef CHARACTER_PROGRAM_FILE_REGISTRY_H
#define CHARACTER_PROGRAM_FILE_REGISTRY_H

#include <string.h>
#include <stdio.h>

#define MAX_NAME_SIZE 100

FILE *fr;
char bfr[100];

FILE *configure_file_registry(char command[])
{
    fr = fopen("fls/FILE-REGISTRY.DAT", command);
}

void register_new_file(char fn[])
{
    memcpy(bfr, fn, 100);
    if (configure_file_registry("ab") != NULL)
    {
        // handle something
    }
    fwrite(&bfr, MAX_NAME_SIZE, 1, fr);
    fclose(fr);
}

int retretive_registered_file()
{
    return fread(&bfr, MAX_NAME_SIZE, 1, fr);
}

void close_file_registry()
{
    fclose(fr);
}

#endif
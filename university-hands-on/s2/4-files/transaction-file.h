#include "transaction-model.h"

FILE *fl;

FILE *configure_file(char operation[])
{
    fl = fopen("fls/DATA.DAT", operation);
}

int read_transaction_data(struct product_data data)
{
    fread(&data, sizeof(data), 1, fl);
}

void save_transaction_data(struct product_data data)
{
    fwrite(&data, sizeof(data), 1, fl);
}

void close_file()
{
    fclose(fl);
}


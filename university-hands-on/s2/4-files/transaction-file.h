#include "transaction-model.h"

FILE *fl;

FILE *configure_file(char operation[])
{
    fl = fopen("fls/DATA.DAT", operation);
}

int read_transaction_data()
{
    return fread(&product, sizeof(product), 1, fl);
}

void save_transaction_data(struct Product data)
{
    fwrite(&data, sizeof(data), 1, fl);
}



void close_file()
{
    fclose(fl);
}

int get_total_record()
{
    fl = fopen("fls/DATA-RECORD-LOG.DAT", "rb");
    if (fl == NULL)
    {
        return 0;
    }
    return getw(fl);
}

void update_total_record(int new_record)
{
    fl = fopen("fls/DATA-RECORD-LOG.DAT", "wb");
    if (fl == NULL)
    {
        return;
    }
    putw(new_record, fl);
}

void increase_record_total()
{
    update_total_record(get_total_record() + 1);
}
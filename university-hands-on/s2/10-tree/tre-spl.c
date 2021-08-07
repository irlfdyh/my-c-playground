/** 
* Tree sample
*/

#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *kiri;
    struct node *kanan;
};

// fungsi untuk menambahkan node baru
void tambah(struct node **root, int databaru)
{
    if ((*root) == NULL)
    {
        struct node *baru;
        baru = (struct node *)malloc(sizeof(struct node));
        baru->data = databaru;
        baru->kiri = NULL;
        baru->kanan = NULL;
        (*root) = baru;
        (*root)->kiri = NULL;
        (*root)->kanan = NULL;
        printf("\nData bertambah!\n");
    }
    else if (databaru < (*root)->data)
    {
        tambah(&(*root)->kiri, databaru);
    }
    else if (databaru > (*root)->data)
    {
        tambah(&(*root)->kanan, databaru);
    }
    else if (databaru == (*root)->data)
    {
        printf("\nData sudah ada!\n");
    }
}

void pre_order(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        pre_order(root->kiri);
        pre_order(root->kanan);
    }
}

void in_order(struct node *root)
{
    if (root != NULL)
    {
        in_order(root->kiri);
        printf("%d ", root->data);
        in_order(root->kanan);
    }
}

void post_order(struct node *root)
{
    if (root != NULL)
    {
        post_order(root->kiri);
        post_order(root->kanan);
        printf("%d ", root->data);
    }
}

int main()
{
    int pil, data;
    struct node *pohon;
    pohon = NULL;

    do
    {
        printf("CONTOH PROGRAM TREE\n");
        printf("\nMENU PILIHAN");
        printf("\n----------------------\n");
        printf("1. Tambah\n");
        printf("2. Lihat pre-order\n");
        printf("3. Lihat in-order\n");
        printf("4. Lihat post-order\n");
        printf("2. Lihat pre-order\n");
        printf("2. Lihat pre-order\n");
        printf("2. Lihat pre-order\n");
    } while(pil != 5);

    return 0;
}
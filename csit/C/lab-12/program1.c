#include <stdio.h>
void main()
{
    struct book
    {
        int id;
        int price;
        char name[20];
    };
    struct book b = {1, 1000, "One Piece"};
    printf("name is %s\n id is %d \n and price is %d", b.name, b.id, b.price);
}
#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_1[30];          // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_4 = 6;               // Tag.BODY
    entity_2 = 41;              // Tag.BODY
    while(entity_2 < entity_4){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_2] = 'O';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER
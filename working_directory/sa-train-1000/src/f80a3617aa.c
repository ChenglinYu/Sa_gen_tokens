#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    entity_2 = 48;              // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 56;              // Tag.BODY
    char entity_3[10];          // Tag.BODY
    while(entity_2 < entity_8){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_2] = 'q';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER
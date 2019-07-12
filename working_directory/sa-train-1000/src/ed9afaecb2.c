#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    entity_1 = 48;              // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_8[30];          // Tag.BODY
    char entity_2[38];          // Tag.BODY
    entity_5 = 24;              // Tag.BODY
    entity_3 = 20;              // Tag.BODY
    while(entity_3 < entity_1){ // Tag.BODY
    entity_8[entity_5] = 'r';   // Tag.BUFWRITE_TAUT_SAFE
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_3] = 'M';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER
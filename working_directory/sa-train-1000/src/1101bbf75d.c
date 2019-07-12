#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_8 = 13;              // Tag.BODY
    entity_9 = 8;               // Tag.BODY
    char entity_5[14];          // Tag.BODY
    while(entity_8 < entity_9){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_5[entity_8] = 'r';   // Tag.BUFWRITE_COND_SAFE
    entity_1 = 34;              // Tag.BODY
    char entity_6[5];           // Tag.BODY
    entity_6[entity_1] = '0';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER
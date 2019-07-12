#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_1[19];          // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_3 = 54;              // Tag.BODY
    entity_7 = 20;              // Tag.BODY
    while(entity_3 < entity_7){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_9[29];          // Tag.BODY
    entity_1[entity_3] = 'd';   // Tag.BUFWRITE_COND_UNSAFE
    entity_0 = 69;              // Tag.BODY
    entity_9[entity_0] = 'K';   // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_5[45];          // Tag.BODY
    entity_6 = 33;              // Tag.BODY
    entity_5[entity_6] = 'u';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER
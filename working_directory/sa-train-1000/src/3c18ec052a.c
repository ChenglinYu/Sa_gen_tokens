#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_1[36];          // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_5 = 34;              // Tag.BODY
    entity_3 = 56;              // Tag.BODY
    while(entity_5 < entity_3){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_7[1];           // Tag.BODY
    entity_1[entity_5] = 'N';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_6;               // Tag.BODY
    entity_6 = 13;              // Tag.BODY
    entity_7[entity_6] = 'd';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER
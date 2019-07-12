#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_1[36];          // Tag.BODY
    int entity_4;               // Tag.BODY
    char entity_5[38];          // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_8[87];          // Tag.BODY
    entity_0 = 43;              // Tag.BODY
    entity_7 = 95;              // Tag.BODY
    entity_3 = 23;              // Tag.BODY
    entity_4 = 40;              // Tag.BODY
    while(entity_7 < entity_0){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    entity_5[entity_4] = 'L';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8[entity_3] = 'F';   // Tag.BUFWRITE_TAUT_SAFE
    }                           // Tag.BODY
    entity_1[entity_7] = 'R';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER
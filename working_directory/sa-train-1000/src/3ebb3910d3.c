#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    char entity_7[28];          // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 17;              // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_2[33];          // Tag.BODY
    entity_1 = 46;              // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_8[9];           // Tag.BODY
    entity_9 = 75;              // Tag.BODY
    entity_3 = 77;              // Tag.BODY
    while(entity_9 < entity_5){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_3] = 's';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_9] = '5';   // Tag.BUFWRITE_COND_UNSAFE
    entity_8[entity_1] = 'v';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER
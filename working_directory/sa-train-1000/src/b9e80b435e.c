#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    entity_1 = 75;              // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_8[61];          // Tag.BODY
    entity_5 = 50;              // Tag.BODY
    while(entity_1 < entity_5){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_7[84];          // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_0[11];          // Tag.BODY
    entity_6 = 79;              // Tag.BODY
    entity_9 = 35;              // Tag.BODY
    entity_7[entity_6] = 'u';   // Tag.BUFWRITE_TAUT_SAFE
    entity_8[entity_1] = 'O';   // Tag.BUFWRITE_COND_UNSAFE
    entity_0[entity_9] = 'N';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER
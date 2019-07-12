#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_4[98];          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = 9;               // Tag.BODY
    char entity_7[94];          // Tag.BODY
    char entity_3[94];          // Tag.BODY
    entity_2 = 33;              // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_8 = 57;              // Tag.BODY
    entity_4[entity_8] = 'J';   // Tag.BUFWRITE_TAUT_SAFE
    entity_9 = 7;               // Tag.BODY
    while(entity_2 < entity_6){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_2] = 'e';   // Tag.BUFWRITE_COND_SAFE
    entity_7[entity_9] = 'K';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER
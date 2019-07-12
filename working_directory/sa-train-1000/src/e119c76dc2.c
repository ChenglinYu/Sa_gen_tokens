#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_8;             // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_6[95];        // Tag.BODY
    entity_9 = 73;            // Tag.BODY
    entity_8 = 90;            // Tag.BODY
    entity_4 = 62;            // Tag.BODY
    char entity_1[98];        // Tag.BODY
    entity_6[entity_8] = 'g'; // Tag.BUFWRITE_TAUT_SAFE
    if(entity_4 < entity_9){  // Tag.BODY
    entity_4 = 12;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 33;            // Tag.BODY
    }                         // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_1[entity_4] = 'W'; // Tag.BUFWRITE_COND_SAFE
    char entity_2[61];        // Tag.BODY
    entity_5 = 88;            // Tag.BODY
    entity_2[entity_5] = 'K'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
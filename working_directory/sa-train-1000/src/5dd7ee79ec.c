#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_7[94];        // Tag.BODY
    int entity_3;             // Tag.BODY
    int entity_5;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_9 = 85;            // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_8[43];        // Tag.BODY
    entity_6 = 68;            // Tag.BODY
    entity_5 = 2;             // Tag.BODY
    entity_3 = 44;            // Tag.BODY
    char entity_4[19];        // Tag.BODY
    entity_4[entity_5] = 'K'; // Tag.BUFWRITE_TAUT_SAFE
    if(entity_3 < entity_9){  // Tag.BODY
    entity_3 = 94;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 26;            // Tag.BODY
    entity_7[entity_6] = 'f'; // Tag.BUFWRITE_TAUT_SAFE
    }                         // Tag.BODY
    entity_8[entity_3] = 'i'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
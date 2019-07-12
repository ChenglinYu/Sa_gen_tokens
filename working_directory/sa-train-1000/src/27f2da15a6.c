#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_7[68];        // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 93;            // Tag.BODY
    entity_0 = 10;            // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    char entity_8[18];        // Tag.BODY
    entity_8[entity_0] = 'u'; // Tag.BUFWRITE_TAUT_SAFE
    if(entity_1 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 6;             // Tag.BODY
    }                         // Tag.BODY
    char entity_4[70];        // Tag.BODY
    entity_7[entity_1] = 'F'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_5;             // Tag.BODY
    entity_5 = 89;            // Tag.BODY
    entity_4[entity_5] = '1'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
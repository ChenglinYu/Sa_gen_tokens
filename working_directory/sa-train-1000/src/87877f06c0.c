#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    char entity_5[90];        // Tag.BODY
    char entity_7[99];        // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_6 = 69;            // Tag.BODY
    entity_4 = 96;            // Tag.BODY
    entity_9 = 89;            // Tag.BODY
    if(entity_6 < entity_9){  // Tag.BODY
    entity_6 = 91;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 20;            // Tag.BODY
    }                         // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_5[entity_6] = '8'; // Tag.BUFWRITE_COND_UNSAFE
    entity_8 = 28;            // Tag.BODY
    char entity_0[47];        // Tag.BODY
    entity_0[entity_8] = 'J'; // Tag.BUFWRITE_TAUT_SAFE
    entity_7[entity_4] = 's'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
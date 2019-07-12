#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_5[94];        // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 76;            // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = 30;            // Tag.BODY
    entity_2 = 79;            // Tag.BODY
    char entity_9[61];        // Tag.BODY
    if(entity_8 < entity_2){  // Tag.BODY
    entity_8 = 32;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9[entity_1] = '9'; // Tag.BUFWRITE_TAUT_SAFE
    entity_8 = 67;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_8] = 'g'; // Tag.BUFWRITE_COND_SAFE
    int entity_6;             // Tag.BODY
    entity_6 = 39;            // Tag.BODY
    char entity_4[90];        // Tag.BODY
    entity_4[entity_6] = 'm'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
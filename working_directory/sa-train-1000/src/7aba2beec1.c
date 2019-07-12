#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    char entity_7[72];        // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_6 = 84;            // Tag.BODY
    entity_5 = 60;            // Tag.BODY
    if(entity_6 < entity_5){  // Tag.BODY
    entity_6 = 71;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 86;            // Tag.BODY
    }                         // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 16;            // Tag.BODY
    entity_7[entity_6] = 'H'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_1[70];        // Tag.BODY
    entity_1[entity_4] = '6'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
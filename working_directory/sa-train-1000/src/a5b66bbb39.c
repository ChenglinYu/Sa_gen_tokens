#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    char entity_4[98];        // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = 82;            // Tag.BODY
    entity_0 = 59;            // Tag.BODY
    if(entity_0 < entity_7){  // Tag.BODY
    entity_0 = 27;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 48;            // Tag.BODY
    }                         // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_5[68];        // Tag.BODY
    char entity_9[89];        // Tag.BODY
    entity_4[entity_0] = 'A'; // Tag.BUFWRITE_COND_SAFE
    int entity_1;             // Tag.BODY
    entity_1 = 44;            // Tag.BODY
    entity_9[entity_1] = 'L'; // Tag.BUFWRITE_TAUT_SAFE
    entity_6 = 90;            // Tag.BODY
    entity_5[entity_6] = '7'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
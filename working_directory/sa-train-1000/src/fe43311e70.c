#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_1[90];        // Tag.BODY
    entity_5 = 1;             // Tag.BODY
    char entity_2[84];        // Tag.BODY
    entity_7 = 77;            // Tag.BODY
    if(entity_0 < entity_5){  // Tag.BODY
    entity_2[entity_7] = 'm'; // Tag.BUFWRITE_TAUT_SAFE
    } else {                  // Tag.BODY
    entity_0 = 43;            // Tag.BODY
    }                         // Tag.BODY
    char entity_9[3];         // Tag.BODY
    entity_1[entity_0] = 'X'; // Tag.BUFWRITE_COND_SAFE
    int entity_3;             // Tag.BODY
    entity_3 = 46;            // Tag.BODY
    entity_9[entity_3] = 's'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
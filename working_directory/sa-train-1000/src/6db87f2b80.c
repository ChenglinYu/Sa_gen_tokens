#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 22;            // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_7[36];        // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    char entity_3[54];        // Tag.BODY
    entity_4 = 11;            // Tag.BODY
    if(entity_5 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 27;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_5] = 'd'; // Tag.BUFWRITE_COND_SAFE
    entity_3[entity_4] = 'n'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
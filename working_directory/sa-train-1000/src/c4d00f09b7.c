#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_2[61];        // Tag.BODY
    int entity_9;             // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_7[71];        // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    entity_9 = 68;            // Tag.BODY
    entity_0 = 31;            // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_5[32];        // Tag.BODY
    entity_4 = 68;            // Tag.BODY
    if(entity_8 < entity_0){  // Tag.BODY
    entity_5[entity_9] = 'd'; // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                  // Tag.BODY
    entity_8 = 88;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_8] = 'r'; // Tag.BUFWRITE_COND_UNSAFE
    entity_7[entity_4] = 'H'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    char entity_5[37];        // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    char entity_4[71];        // Tag.BODY
    entity_6 = 59;            // Tag.BODY
    entity_9 = 89;            // Tag.BODY
    if(entity_1 < entity_6){  // Tag.BODY
    entity_5[entity_9] = 'F'; // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                  // Tag.BODY
    entity_1 = 7;             // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_1] = '2'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
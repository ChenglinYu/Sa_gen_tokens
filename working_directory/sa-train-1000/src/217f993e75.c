#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    char entity_9[44];        // Tag.BODY
    int entity_3;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    entity_3 = 52;            // Tag.BODY
    char entity_7[47];        // Tag.BODY
    entity_6 = 67;            // Tag.BODY
    if(entity_5 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_7[entity_6] = 'd'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5 = 3;             // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_5] = 'q'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
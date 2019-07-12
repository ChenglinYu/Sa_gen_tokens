#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_7;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_8 = 60;            // Tag.BODY
    entity_5 = 32;            // Tag.BODY
    entity_7 = 30;            // Tag.BODY
    char entity_6[78];        // Tag.BODY
    char entity_9[9];         // Tag.BODY
    if(entity_5 < entity_7){  // Tag.BODY
    entity_5 = 40;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 95;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_5] = 's'; // Tag.BUFWRITE_COND_UNSAFE
    entity_9[entity_8] = 'q'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
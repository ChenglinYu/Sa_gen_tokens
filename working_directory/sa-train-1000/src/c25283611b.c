#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    entity_3 = 22;            // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    char entity_9[33];        // Tag.BODY
    if(entity_8 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 2;             // Tag.BODY
    }                         // Tag.BODY
    char entity_4[1];         // Tag.BODY
    entity_9[entity_8] = 'R'; // Tag.BUFWRITE_COND_SAFE
    int entity_5;             // Tag.BODY
    entity_5 = 22;            // Tag.BODY
    entity_4[entity_5] = 'd'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    char entity_4[84];        // Tag.BODY
    char entity_9[50];        // Tag.BODY
    entity_8 = 75;            // Tag.BODY
    int entity_0;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 6;             // Tag.BODY
    entity_4[entity_8] = 'l'; // Tag.BUFWRITE_TAUT_SAFE
    entity_0 = rand();        // Tag.BODY
    if(entity_0 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 51;            // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_0] = 'Y'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_8[52];        // Tag.BODY
    char entity_9[62];        // Tag.BODY
    entity_0 = 76;            // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_5 = 10;            // Tag.BODY
    entity_6 = 10;            // Tag.BODY
    if(entity_5 < entity_0){  // Tag.BODY
    entity_5 = 44;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 66;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_5] = 'w'; // Tag.BUFWRITE_COND_SAFE
    entity_9[entity_6] = 'v'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
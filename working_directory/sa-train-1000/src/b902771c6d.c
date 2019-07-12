#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_5 = 83;            // Tag.BODY
    char entity_8[41];        // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_4[36];        // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    entity_9 = 39;            // Tag.BODY
    if(entity_0 < entity_9){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 49;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_0] = 'R'; // Tag.BUFWRITE_COND_UNSAFE
    entity_4[entity_5] = 'q'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
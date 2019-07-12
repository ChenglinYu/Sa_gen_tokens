#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_6[52];        // Tag.BODY
    char entity_0[27];        // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_9 = 87;            // Tag.BODY
    entity_5 = 87;            // Tag.BODY
    if(entity_2 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 83;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_2] = 'l'; // Tag.BUFWRITE_COND_UNSAFE
    entity_6[entity_9] = 'X'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
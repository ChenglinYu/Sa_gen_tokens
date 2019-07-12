#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_6[25];        // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_0[92];        // Tag.BODY
    entity_8 = 4;             // Tag.BODY
    int entity_7;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_7 = rand();        // Tag.BODY
    entity_0[entity_8] = 'j'; // Tag.BUFWRITE_TAUT_SAFE
    entity_9 = 12;            // Tag.BODY
    if(entity_7 < entity_9){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 86;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_7] = 'I'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_3;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    entity_3 = 13;            // Tag.BODY
    char entity_9[17];        // Tag.BODY
    entity_4 = 32;            // Tag.BODY
    char entity_5[59];        // Tag.BODY
    if(entity_0 < entity_4){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 74;            // Tag.BODY
    }                         // Tag.BODY
    char entity_8[36];        // Tag.BODY
    entity_5[entity_3] = 'G'; // Tag.BUFWRITE_TAUT_SAFE
    int entity_6;             // Tag.BODY
    entity_9[entity_0] = 'H'; // Tag.BUFWRITE_COND_UNSAFE
    entity_6 = 21;            // Tag.BODY
    entity_8[entity_6] = 'T'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
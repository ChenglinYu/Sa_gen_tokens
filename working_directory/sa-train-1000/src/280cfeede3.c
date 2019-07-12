#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    char entity_0[46];        // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_3[11];        // Tag.BODY
    entity_7 = 49;            // Tag.BODY
    entity_6 = 77;            // Tag.BODY
    if(entity_5 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 75;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_5] = 'b'; // Tag.BUFWRITE_COND_UNSAFE
    entity_0[entity_6] = 'P'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
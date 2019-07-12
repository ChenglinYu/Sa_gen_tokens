#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_9 = 73;            // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_2[74];        // Tag.BODY
    char entity_7[39];        // Tag.BODY
    entity_3 = 88;            // Tag.BODY
    if(entity_4 < entity_3){  // Tag.BODY
    entity_2[entity_9] = 'J'; // Tag.BUFWRITE_TAUT_SAFE
    } else {                  // Tag.BODY
    entity_4 = 12;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_4] = 'o'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
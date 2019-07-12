#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_9[98];        // Tag.BODY
    entity_8 = 37;            // Tag.BODY
    entity_7 = rand();        // Tag.BODY
    if(entity_7 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 11;            // Tag.BODY
    }                         // Tag.BODY
    char entity_1[50];        // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_9[entity_7] = 'R'; // Tag.BUFWRITE_COND_SAFE
    entity_2 = 96;            // Tag.BODY
    entity_1[entity_2] = '2'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
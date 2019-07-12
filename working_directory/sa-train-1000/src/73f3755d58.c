#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_9[28];        // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_7[24];        // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_1 = 32;            // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    entity_6 = 3;             // Tag.BODY
    if(entity_5 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 76;            // Tag.BODY
    entity_7[entity_6] = 'N'; // Tag.BUFWRITE_TAUT_SAFE
    }                         // Tag.BODY
    entity_9[entity_5] = '0'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
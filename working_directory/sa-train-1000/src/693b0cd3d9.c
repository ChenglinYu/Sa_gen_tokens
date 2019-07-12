#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    char entity_8[50];        // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_5 = 30;            // Tag.BODY
    entity_0 = 27;            // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    char entity_9[19];        // Tag.BODY
    if(entity_1 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 57;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_0] = 'X'; // Tag.BUFWRITE_TAUT_SAFE
    char entity_7[79];        // Tag.BODY
    entity_9[entity_1] = 'T'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_3;             // Tag.BODY
    entity_3 = 58;            // Tag.BODY
    entity_7[entity_3] = 'z'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_9;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_9 = 84;            // Tag.BODY
    entity_6 = 36;            // Tag.BODY
    char entity_7[33];        // Tag.BODY
    entity_0 = 70;            // Tag.BODY
    char entity_1[36];        // Tag.BODY
    entity_1[entity_6] = 'L'; // Tag.BUFWRITE_TAUT_UNSAFE
    if(entity_9 < entity_0){  // Tag.BODY
    entity_9 = 45;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 15;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_9] = 'D'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
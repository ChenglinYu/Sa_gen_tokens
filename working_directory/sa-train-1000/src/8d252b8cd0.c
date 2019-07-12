#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_0[1];         // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_5[19];        // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_6 = 77;            // Tag.BODY
    entity_9 = 5;             // Tag.BODY
    entity_1 = 45;            // Tag.BODY
    if(entity_9 < entity_6){  // Tag.BODY
    entity_9 = 90;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0[entity_1] = 'x'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9 = 60;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_9] = 'L'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
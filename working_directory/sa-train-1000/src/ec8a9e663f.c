#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_5[37];        // Tag.BODY
    entity_1 = 81;            // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    if(entity_0 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 76;            // Tag.BODY
    }                         // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 85;            // Tag.BODY
    entity_5[entity_0] = 'J'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_9[40];        // Tag.BODY
    entity_9[entity_3] = 'O'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
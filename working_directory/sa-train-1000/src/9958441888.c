#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    entity_5 = 27;            // Tag.BODY
    char entity_8[57];        // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_8[entity_5] = 'Z'; // Tag.BUFWRITE_TAUT_SAFE
    entity_1 = 98;            // Tag.BODY
    char entity_9[88];        // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    if(entity_2 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 80;            // Tag.BODY
    }                         // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_9[entity_2] = 'D'; // Tag.BUFWRITE_COND_UNSAFE
    entity_7 = 14;            // Tag.BODY
    char entity_4[72];        // Tag.BODY
    entity_4[entity_7] = 's'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
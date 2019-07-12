#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    char entity_5[12];        // Tag.BODY
    char entity_1[36];        // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_6 = 84;            // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    entity_2 = 29;            // Tag.BODY
    entity_1[entity_2] = 'h'; // Tag.BUFWRITE_TAUT_SAFE
    if(entity_9 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 99;            // Tag.BODY
    }                         // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_7[72];        // Tag.BODY
    entity_4 = 39;            // Tag.BODY
    entity_5[entity_9] = 'T'; // Tag.BUFWRITE_COND_UNSAFE
    entity_7[entity_4] = 'K'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
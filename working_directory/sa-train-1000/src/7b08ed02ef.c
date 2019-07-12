#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = rand();        // Tag.BODY
    entity_2 = 9;             // Tag.BODY
    char entity_5[40];        // Tag.BODY
    if(entity_3 < entity_2){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 73;            // Tag.BODY
    }                         // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_5[entity_3] = 'F'; // Tag.BUFWRITE_COND_UNSAFE
    entity_6 = 25;            // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_9 = 60;            // Tag.BODY
    char entity_1[26];        // Tag.BODY
    entity_1[entity_6] = 'S'; // Tag.BUFWRITE_TAUT_SAFE
    char entity_4[34];        // Tag.BODY
    entity_4[entity_9] = 'U'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_8 = 20;            // Tag.BODY
    entity_1 = 33;            // Tag.BODY
    char entity_0[86];        // Tag.BODY
    if(entity_8 < entity_1){  // Tag.BODY
    entity_8 = 40;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 71;            // Tag.BODY
    }                         // Tag.BODY
    char entity_2[51];        // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_0[entity_8] = 'a'; // Tag.BUFWRITE_COND_SAFE
    int entity_5;             // Tag.BODY
    entity_5 = 54;            // Tag.BODY
    entity_2[entity_5] = 'e'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_4 = 63;            // Tag.BODY
    char entity_6[69];        // Tag.BODY
    entity_6[entity_4] = 'P'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    char entity_7[41];        // Tag.BODY
    entity_5 = 42;            // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 89;            // Tag.BODY
    if(entity_5 < entity_0){  // Tag.BODY
    entity_5 = 99;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 62;            // Tag.BODY
    }                         // Tag.BODY
    char entity_1[51];        // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_2[33];        // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_4 = 83;            // Tag.BODY
    entity_1[entity_4] = 'm'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6 = 39;            // Tag.BODY
    entity_2[entity_6] = '9'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7[entity_5] = 'I'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
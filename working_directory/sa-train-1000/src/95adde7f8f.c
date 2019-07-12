#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    char entity_2[26];        // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_1 = 54;            // Tag.BODY
    char entity_8[52];        // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_0 = 64;            // Tag.BODY
    entity_4 = 34;            // Tag.BODY
    if(entity_0 < entity_1){  // Tag.BODY
    entity_0 = 81;            // Tag.BODY
    entity_2[entity_4] = 'S'; // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                  // Tag.BODY
    entity_0 = 9;             // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_0] = 'u'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    entity_7 = 10;            // Tag.BODY
    char entity_5[1];         // Tag.BODY
    int entity_4;             // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_1[66];        // Tag.BODY
    entity_4 = 21;            // Tag.BODY
    entity_9 = 79;            // Tag.BODY
    entity_5[entity_9] = 'K'; // Tag.BUFWRITE_TAUT_UNSAFE
    if(entity_4 < entity_7){  // Tag.BODY
    entity_4 = 70;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 56;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_4] = 'A'; // Tag.BUFWRITE_COND_SAFE
    int entity_6;             // Tag.BODY
    entity_6 = 56;            // Tag.BODY
    char entity_2[52];        // Tag.BODY
    entity_2[entity_6] = 'u'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
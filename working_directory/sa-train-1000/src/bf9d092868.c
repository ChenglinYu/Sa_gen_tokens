#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 41;            // Tag.BODY
    char entity_6[14];        // Tag.BODY
    if(entity_2 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 75;            // Tag.BODY
    }                         // Tag.BODY
    int entity_3;             // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_1[12];        // Tag.BODY
    entity_3 = 14;            // Tag.BODY
    entity_6[entity_2] = '4'; // Tag.BUFWRITE_COND_UNSAFE
    entity_0 = 90;            // Tag.BODY
    char entity_7[56];        // Tag.BODY
    entity_1[entity_0] = 'W'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7[entity_3] = 'r'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_4[99];        // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 54;            // Tag.BODY
    char entity_7[13];        // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_1 = 54;            // Tag.BODY
    entity_6 = 53;            // Tag.BODY
    if(entity_1 < entity_0){  // Tag.BODY
    entity_4[entity_6] = 'R'; // Tag.BUFWRITE_TAUT_SAFE
    entity_1 = 5;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 46;            // Tag.BODY
    }                         // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = 77;            // Tag.BODY
    entity_7[entity_1] = '9'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_9[48];        // Tag.BODY
    entity_9[entity_5] = '4'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
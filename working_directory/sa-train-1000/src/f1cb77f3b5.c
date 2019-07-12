#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_5[22];        // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_7[72];        // Tag.BODY
    entity_1 = 91;            // Tag.BODY
    entity_2 = 64;            // Tag.BODY
    entity_4 = 13;            // Tag.BODY
    if(entity_2 < entity_4){  // Tag.BODY
    entity_2 = 68;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 58;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_1] = 'G'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7[entity_2] = 'T'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
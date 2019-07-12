#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = 55;            // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    char entity_0[96];        // Tag.BODY
    entity_0[entity_1] = 'O'; // Tag.BUFWRITE_TAUT_SAFE
    char entity_7[5];         // Tag.BODY
    entity_6 = 93;            // Tag.BODY
    if(entity_5 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 10;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_5] = 'h'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_3;             // Tag.BODY
    char entity_8[28];        // Tag.BODY
    entity_3 = 34;            // Tag.BODY
    entity_8[entity_3] = 'B'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    entity_1 = 1;             // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_4[63];        // Tag.BODY
    entity_3 = 80;            // Tag.BODY
    if(entity_1 < entity_3){  // Tag.BODY
    entity_1 = 48;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 5;             // Tag.BODY
    }                         // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_7[56];        // Tag.BODY
    entity_4[entity_1] = 'T'; // Tag.BUFWRITE_COND_SAFE
    entity_2 = 49;            // Tag.BODY
    entity_7[entity_2] = 'L'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
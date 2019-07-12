#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_4[44];        // Tag.BODY
    entity_1 = 34;            // Tag.BODY
    if(entity_6 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 2;             // Tag.BODY
    }                         // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 69;            // Tag.BODY
    entity_4[entity_6] = 'F'; // Tag.BUFWRITE_COND_SAFE
    char entity_7[94];        // Tag.BODY
    entity_7[entity_3] = 'l'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
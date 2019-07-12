#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    char entity_7[78];        // Tag.BODY
    char entity_9[92];        // Tag.BODY
    entity_1 = 13;            // Tag.BODY
    int entity_5;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 26;            // Tag.BODY
    entity_5 = 73;            // Tag.BODY
    if(entity_1 < entity_6){  // Tag.BODY
    entity_1 = 30;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 55;            // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_5] = 'E'; // Tag.BUFWRITE_TAUT_SAFE
    entity_7[entity_1] = 'V'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER
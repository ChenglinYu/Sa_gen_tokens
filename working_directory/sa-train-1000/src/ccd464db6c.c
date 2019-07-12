#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_0 = 79;                                       // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_6[89];                                   // Tag.BODY
    entity_9 = 5;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_3[82];                                   // Tag.BODY
    entity_3[entity_9] = 'f';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_8 = rand();                                   // Tag.BODY
    if (entity_8 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8 = 34;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 76; entity_5 < entity_8; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_5] = '6';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
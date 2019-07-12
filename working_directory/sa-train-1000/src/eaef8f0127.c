#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    char entity_3[65];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_8 = 5;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    if (entity_7 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 76;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 23; entity_0 < entity_7; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_0] = 'C';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_9;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_9 = 95;                                       // Tag.BODY
    entity_1 = 41;                                       // Tag.BODY
    char entity_4[58];                                   // Tag.BODY
    entity_4[entity_1] = 'y';                            // Tag.BUFWRITE_TAUT_SAFE
    char entity_2[67];                                   // Tag.BODY
    entity_2[entity_9] = 'S';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
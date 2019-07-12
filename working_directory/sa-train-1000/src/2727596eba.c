#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_2[62];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_8[56];                                   // Tag.BODY
    entity_4 = 95;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_9 = 14;                                       // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    if (entity_0 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 41;                                       // Tag.BODY
    entity_2[entity_4] = 'z';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    for(entity_6 = 95; entity_6 < entity_0; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_3[98];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_8[entity_6] = 'f';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_5 = 32;                                       // Tag.BODY
    entity_3[entity_5] = 'F';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
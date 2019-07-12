#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_6[7];                                    // Tag.BODY
    entity_3 = 63;                                       // Tag.BODY
    char entity_9[81];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_8[89];                                   // Tag.BODY
    entity_0 = 93;                                       // Tag.BODY
    entity_7 = 95;                                       // Tag.BODY
    if (entity_4 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 97;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 64; entity_5 < entity_4; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_3] = 'f';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_9[entity_5] = 'D';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_6[entity_7] = 'k';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
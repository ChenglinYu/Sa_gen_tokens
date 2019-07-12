#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_9[1];                                    // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_0 = 61;                                       // Tag.BODY
    char entity_3[5];                                    // Tag.BODY
    entity_8 = 85;                                       // Tag.BODY
    entity_3[entity_0] = 'X';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_4 = 35; entity_4 < entity_8; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_4] = 'z';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_7;                                        // Tag.BODY
    char entity_6[89];                                   // Tag.BODY
    entity_7 = 79;                                       // Tag.BODY
    entity_6[entity_7] = 'V';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
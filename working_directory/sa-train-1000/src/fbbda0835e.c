#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_1[98];                                   // Tag.BODY
    entity_9 = 97;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_3[37];                                   // Tag.BODY
    char entity_0[53];                                   // Tag.BODY
    entity_3[entity_9] = 'N';                            // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_7;                                        // Tag.BODY
    entity_5 = 78;                                       // Tag.BODY
    entity_0[entity_5] = 'e';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7 = 34;                                       // Tag.BODY
    for(entity_4 = 13; entity_4 < entity_7; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_4] = 'G';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
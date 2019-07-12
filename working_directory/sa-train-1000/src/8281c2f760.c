#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    char entity_4[98];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_6[51];                                   // Tag.BODY
    char entity_2[45];                                   // Tag.BODY
    entity_9 = 49;                                       // Tag.BODY
    entity_4[entity_9] = 'V';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_1 = 61;                                       // Tag.BODY
    entity_0 = 55;                                       // Tag.BODY
    for(entity_3 = 63; entity_3 < entity_1; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_0] = '7';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_3] = '9';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    char entity_6[16];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_1[11];                                   // Tag.BODY
    entity_8 = 76;                                       // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_0 = 39;                                       // Tag.BODY
    for(entity_9 = 18; entity_9 < entity_0; entity_9++){ // Tag.BODY
    entity_1[entity_8] = 'V';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    char entity_2[78];                                   // Tag.BODY
    entity_6[entity_9] = 'Z';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_3;                                        // Tag.BODY
    entity_3 = 46;                                       // Tag.BODY
    entity_2[entity_3] = 'S';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
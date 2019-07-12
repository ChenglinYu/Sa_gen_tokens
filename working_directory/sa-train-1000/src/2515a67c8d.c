#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    char entity_0[27];                                   // Tag.BODY
    entity_4 = 43;                                       // Tag.BODY
    int entity_3;                                        // Tag.BODY
    for(entity_3 = 70; entity_3 < entity_4; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_9[78];                                   // Tag.BODY
    char entity_7[68];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_0[entity_3] = 'T';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_1 = 15;                                       // Tag.BODY
    entity_5 = 4;                                        // Tag.BODY
    entity_7[entity_1] = 'Z';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_9[entity_5] = 'K';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_2[64];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_0 = 98;                                       // Tag.BODY
    for(entity_9 = 68; entity_9 < entity_0; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_2[entity_9] = 'z';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_6[46];                                   // Tag.BODY
    entity_7 = 81;                                       // Tag.BODY
    entity_6[entity_7] = 'j';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
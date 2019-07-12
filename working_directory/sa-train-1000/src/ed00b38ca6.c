#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_9 = 72;                                       // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_3[45];                                   // Tag.BODY
    entity_0 = 67;                                       // Tag.BODY
    char entity_5[79];                                   // Tag.BODY
    for(entity_7 = 50; entity_7 < entity_0; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_5[entity_9] = 'q';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_1 = 65;                                       // Tag.BODY
    entity_3[entity_7] = 'B';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_4[64];                                   // Tag.BODY
    entity_4[entity_1] = 'w';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
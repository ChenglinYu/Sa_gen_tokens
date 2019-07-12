#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_5[90];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_9[55];                                   // Tag.BODY
    entity_1 = 88;                                       // Tag.BODY
    entity_5[entity_1] = 'Y';                            // Tag.BUFWRITE_TAUT_SAFE
    int entity_3;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_3 = 87;                                       // Tag.BODY
    for(entity_2 = 34; entity_2 < entity_3; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_8 = 21;                                       // Tag.BODY
    char entity_7[90];                                   // Tag.BODY
    entity_7[entity_8] = 'w';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_9[entity_2] = 'E';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
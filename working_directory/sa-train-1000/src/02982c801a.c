#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    char entity_8[2];                                    // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_3 = 30;                                       // Tag.BODY
    char entity_2[39];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_0 = 94;                                       // Tag.BODY
    entity_8[entity_0] = '6';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_9 = 17; entity_9 < entity_3; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_9] = 'E';                            // Tag.BUFWRITE_COND_SAFE
    char entity_5[15];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_7 = 21;                                       // Tag.BODY
    entity_5[entity_7] = 'l';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
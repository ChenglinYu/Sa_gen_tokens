#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    entity_2 = 78;                                       // Tag.BODY
    char entity_3[18];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    for(entity_8 = 85; entity_8 < entity_2; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_1[82];                                   // Tag.BODY
    entity_4 = 79;                                       // Tag.BODY
    entity_3[entity_8] = 'V';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_7[85];                                   // Tag.BODY
    entity_7[entity_4] = 'c';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_0 = 67;                                       // Tag.BODY
    entity_1[entity_0] = 'Q';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
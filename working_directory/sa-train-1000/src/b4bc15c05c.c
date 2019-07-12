#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    char entity_3[65];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_6 = 79;                                       // Tag.BODY
    for(entity_7 = 88; entity_7 < entity_6; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_9[25];                                   // Tag.BODY
    entity_3[entity_7] = '2';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_8 = 28;                                       // Tag.BODY
    entity_9[entity_8] = 'f';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
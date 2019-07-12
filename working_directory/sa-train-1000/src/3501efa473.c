#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_2 = 67;                                       // Tag.BODY
    entity_7 = 37;                                       // Tag.BODY
    char entity_6[63];                                   // Tag.BODY
    char entity_5[39];                                   // Tag.BODY
    entity_5[entity_7] = 'Z';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_1 = 87; entity_1 < entity_2; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_1] = '4';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
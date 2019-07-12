#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_6 = 79;                                       // Tag.BODY
    char entity_0[70];                                   // Tag.BODY
    for(entity_7 = 96; entity_7 < entity_6; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_1 = 9;                                        // Tag.BODY
    entity_0[entity_7] = 'h';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_5[55];                                   // Tag.BODY
    entity_5[entity_1] = 'n';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
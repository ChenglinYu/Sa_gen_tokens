#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_7 = 69;                                       // Tag.BODY
    char entity_2[27];                                   // Tag.BODY
    entity_5 = 24;                                       // Tag.BODY
    char entity_0[81];                                   // Tag.BODY
    for(entity_6 = 33; entity_6 < entity_7; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_5] = 'g';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_2[entity_6] = 'z';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
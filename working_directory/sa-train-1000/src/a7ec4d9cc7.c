#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    char entity_3[62];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_6 = 30;                                       // Tag.BODY
    entity_4 = 42;                                       // Tag.BODY
    char entity_0[77];                                   // Tag.BODY
    entity_0[entity_6] = 'G';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_5 = 95; entity_5 < entity_4; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_5] = 'P';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
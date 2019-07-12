#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    char entity_2[44];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_4[84];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_5 = 29;                                       // Tag.BODY
    entity_2[entity_5] = 'f';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_1 = 55;                                       // Tag.BODY
    for(entity_0 = 40; entity_0 < entity_1; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_0] = 'z';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
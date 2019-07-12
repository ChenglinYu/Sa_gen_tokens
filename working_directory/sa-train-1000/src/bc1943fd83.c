#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_2[65];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_3[32];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_5 = 68;                                       // Tag.BODY
    entity_7 = 1;                                        // Tag.BODY
    for(entity_1 = 47; entity_1 < entity_5; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_7] = '6';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_2[entity_1] = '5';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
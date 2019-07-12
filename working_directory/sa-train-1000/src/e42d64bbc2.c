#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    entity_1 = 92;                                       // Tag.BODY
    char entity_2[94];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    for(entity_8 = 87; entity_8 < entity_1; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_0 = 35;                                       // Tag.BODY
    entity_2[entity_8] = 'H';                            // Tag.BUFWRITE_COND_SAFE
    char entity_5[96];                                   // Tag.BODY
    entity_5[entity_0] = 'C';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
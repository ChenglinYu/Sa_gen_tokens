#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_9[71];                                   // Tag.BODY
    entity_7 = 3;                                        // Tag.BODY
    entity_0 = 64;                                       // Tag.BODY
    char entity_8[17];                                   // Tag.BODY
    for(entity_2 = 96; entity_2 < entity_0; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_2] = 'Y';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_8[entity_7] = 'C';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
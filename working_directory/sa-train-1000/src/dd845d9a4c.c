#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    char entity_3[6];                                    // Tag.BODY
    entity_0 = 90;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    for(entity_5 = 18; entity_5 < entity_0; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_3[entity_5] = 'T';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_9[79];                                   // Tag.BODY
    entity_2 = 71;                                       // Tag.BODY
    entity_9[entity_2] = 'F';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
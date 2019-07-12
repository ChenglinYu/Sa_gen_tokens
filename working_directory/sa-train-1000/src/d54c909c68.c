#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_6[60];                                   // Tag.BODY
    entity_2 = 30;                                       // Tag.BODY
    for(entity_1 = 60; entity_1 < entity_2; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_9[58];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_6[entity_1] = 'm';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_4 = 41;                                       // Tag.BODY
    entity_9[entity_4] = 'f';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
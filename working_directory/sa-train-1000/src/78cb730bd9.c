#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    char entity_3[24];                                   // Tag.BODY
    entity_9 = 56;                                       // Tag.BODY
    int entity_7;                                        // Tag.BODY
    for(entity_7 = 78; entity_7 < entity_9; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_7] = 'A';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
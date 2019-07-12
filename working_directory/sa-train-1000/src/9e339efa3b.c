#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_6[58];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_4 = 82;                                       // Tag.BODY
    for(entity_1 = 52; entity_1 < entity_4; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_1] = 'X';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
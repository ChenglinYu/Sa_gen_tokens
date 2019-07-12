#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_4[21];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = 92;                                       // Tag.BODY
    int entity_8;                                        // Tag.BODY
    for(entity_8 = 29; entity_8 < entity_6; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_8] = 'p';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
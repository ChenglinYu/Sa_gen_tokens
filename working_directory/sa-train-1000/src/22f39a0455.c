#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    char entity_5[59];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 92;                                       // Tag.BODY
    for(entity_4 = 51; entity_4 < entity_3; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_4] = 'y';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
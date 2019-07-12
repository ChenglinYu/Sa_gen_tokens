#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    char entity_5[5];                                    // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_0 = 89;                                       // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    if (entity_4 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 25;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 21; entity_8 < entity_4; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_8] = 'l';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
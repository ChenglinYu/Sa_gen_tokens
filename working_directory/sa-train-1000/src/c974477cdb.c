#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_1[27];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_7 = 62;                                       // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    if (entity_0 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 39;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 37; entity_8 < entity_0; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_8] = 'W';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_1[93];                                   // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_2 = 85;                                       // Tag.BODY
    if (entity_3 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 18;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 98; entity_0 < entity_3; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_0] = '2';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER
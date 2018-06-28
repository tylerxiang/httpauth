#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define USERLEN 33
#define REALMLEN 256

typedef struct httpauth_t{
    char username[USERLEN],password[USERLEN];
    char realm[REALMLEN],nonce[REALMLEN];
}httpauth_t;

void to_hex(char *in,int len,unsigned char *out);
void md5(const uint8_t *initial_msg, size_t initial_len, uint8_t *digest);

int httpauth_set_user_pwd(httpauth_t *auth,char* username,char* password);
int httpauth_set_realm_nonce(httpauth_t *auth,char* realm,char* nonce);
int httpauth_get_response(httpauth_t *auth,char *cmd,char *url,char *response);


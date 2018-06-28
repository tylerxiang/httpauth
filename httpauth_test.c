#include "httpauth.h"

void disp(char* s1,unsigned char* s2)
{
	int i,len;
	printf("%d~~~%s\n",strlen(s1),s1);
	
	printf("%d==>%s\n",strlen(s2),s2);
}

int main(int argc, char **argv) {
	char * user ="admin" ;
	char * password ="123456" ;
	char * realm = "LIVE555 Streaming Media";
	char * nonce ="213d8479345cb52cee152187ed8f16d9" ;
	char * cmd = "DESCRIBE";
	char * url ="rtsp://192.168.100.123:554/mpeg4cif" ;
	char response[33];

	httpauth_t auth;
	httpauth_set_user_pwd(&auth,user,password);
	httpauth_set_realm_nonce(&auth,realm,nonce);
	httpauth_get_response(&auth,cmd,url,response);

	printf("%s\n",response );

	return 0;
}

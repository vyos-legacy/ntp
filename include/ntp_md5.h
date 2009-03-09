/*
 * ntp_md5.h: deal with md5.h headers
 */

#ifdef OPENSSL
# include <openssl/md5.h>
#define MD5Init MD5_Init
#define MD5Update MD5_Update
#define MD5Final MD5_Final
#elif defined(HAVE_MD5_H)
# include <md5.h>
#else
# include "rsa_md5.h"
#endif

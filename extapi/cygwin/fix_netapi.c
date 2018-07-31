#include <_mingw_unicode.h>
#include <wtypes.h>
#include <winioctl.h>
#include "dsgetdc.h"

/************************************************************
 *  DsEnumerateDomainTrustsA (NETAPI32.@)
 */
DWORD WINAPI DsEnumerateDomainTrustsA(LPSTR server, ULONG flags, PDS_DOMAIN_TRUSTSA* domains, PULONG count)
{
    FIXME("(%s, 0x%04x, %p, %p): stub\n", debugstr_a(server), flags, domains, count);
    return ERROR_NO_LOGON_SERVERS;
}

/************************************************************
 *  DsEnumerateDomainTrustsW (NETAPI32.@)
 */
DWORD WINAPI DsEnumerateDomainTrustsW(LPWSTR server, ULONG flags, PDS_DOMAIN_TRUSTSW* domains, PULONG count)
{
    FIXME("(%s, 0x%04x, %p, %p): stub\n", debugstr_w(server), flags, domains, count);
    return ERROR_NO_LOGON_SERVERS;
}



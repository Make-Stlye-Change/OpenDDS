/*
 * Distributed under the DDS License.
 * See: http://www.DDS.org/license.html
 */

#ifndef OPENDDS_SECURITY_SSL_UTILS_H
#define OPENDDS_SECURITY_SSL_UTILS_H

#include <string>

namespace OpenDDS {
  namespace Security {
    namespace SSL {

      enum URI_SCHEME
      {
        URI_UNKNOWN,
        URI_FILE,
        URI_DATA,
        URI_PKCS11,
      };

      URI_SCHEME extract_uri_info(const std::string& uri, std::string& path);

    }
  }
}

#endif

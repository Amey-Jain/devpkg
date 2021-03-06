#ifndef __COMMAND_H__
#define __COMMAND_H__

#include <apr_pools.h>

#define DEPENDS_PATH "/tmp/DEPENDS"
#define TAR_GZ_SRC "/tmp/pkg-src.tar.gz"
#define TAR_BZ2_SRC "/tmp/pkg-src.tar.bz2"
#define BUILD_DIR "/tmp/pkg-build"
#define GIT_PATH "*.git"
#define DEPEND_PATH "*DEPENDS"
#define TAR_GZ_PATH "*.tar.gz"
#define TAR_BZ2_PATH "*.tar.bz2"
#define CONFIG_SCRIPT "/tmp/pkg-build/configure"

enum CommandType {
  COMMAND_NONE, COMMAND_INSTALL, COMMAND_LIST, COMMAND_FETCH,
  COMMAND_INIT, COMMAND_BUILD
};


int Command_fetch(apr_pool_t *p, const char *url, int fetch_only);

int Command_install(apr_pool_t *p, const char *url, const char *configure_opts,
		    const char *make_opts, const char *install_opts);

int Command_depends(apr_pool_t *p, const char *path);

int Command_build(apr_pool_t *p, const char *url, const char *configure_opts,
		  const char *make_opts, const char *install_opts);

#endif

#ifndef _BURP_XATTR_H
#define _BURP_XATTR_H

#ifdef HAVE_XATTR
#if defined(HAVE_LINUX_OS) \
 || defined(HAVE_FREEBSD_OS) \
 || defined(HAVE_NETBSD_OS) \
 || defined(HAVE_DARWIN_OS)
extern int has_xattr(const char *path);
extern int get_xattr(struct asfd *asfd, const char *path,
	char **xattrtext, size_t *xlen, struct cntr *cntr);
extern int set_xattr(struct asfd *asfd, const char *path,
	const char *xattrtext, size_t xlen, char metacmd, struct cntr *cntr);
#endif
#endif

#endif

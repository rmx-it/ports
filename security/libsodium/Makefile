# $FreeBSD$

PORTNAME=	libsodium
PORTVERSION=	1.0.3
CATEGORIES=	security
MASTER_SITES=	http://download.libsodium.org/libsodium/releases/ \
		https://github.com/jedisct1/libsodium/releases/download/1.0.3/

MAINTAINER=	vsevolod@FreeBSD.org
COMMENT=	Library to build higher-level cryptographic tools

LICENSE=	ISCL

GNU_CONFIGURE=	yes
USES=		libtool pathfix pkgconfig
USE_LDCONFIG=	yes

CONFIGURE_ARGS+=	--enable-blocking-random
INSTALL_TARGET?=	install-strip

OPTIONS_DEFINE=	DOCS

.include <bsd.port.pre.mk>

.if ${OPSYS} == FreeBSD && ${ARCH} == i386 && ${OSVERSION} < 1000036
# resolve undefined reference to __stack_chk_fail_local
LDFLAGS+=	-lssp_nonshared -Wl,--no-undefined
.endif

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/AUTHORS ${STAGEDIR}${DOCSDIR}/
	${INSTALL_DATA} ${WRKSRC}/README.markdown ${STAGEDIR}${DOCSDIR}/
	${INSTALL_DATA} ${WRKSRC}/THANKS ${STAGEDIR}${DOCSDIR}/

regression-test: build
	@(cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_FLAGS} \
		${MAKEFILE} ${MAKE_ARGS} check)

.include <bsd.port.post.mk>

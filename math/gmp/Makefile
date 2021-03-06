# Created by: Ying-Chieh Liao <ijliao@FreeBSD.org>
# $FreeBSD$

PORTNAME=	gmp
PORTVERSION=	5.1.3
PORTREVISION=	2
CATEGORIES=	math devel
MASTER_SITES=	GNU

MAINTAINER=	ale@FreeBSD.org
COMMENT=	Free library for arbitrary precision arithmetic

LICENSE=	LGPL3

OPTIONS_DEFINE=	CPU_OPTS
CPU_OPTS_DESC=	Enable assembly optimizations for your CPU

USES=		libtool:keepla makeinfo tar:xz
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	MAKEINFO="makeinfo --no-split"
CONFIGURE_ARGS=	--prefix=${PREFIX} \
		--infodir=${PREFIX}/info \
		--mandir=${PREFIX}/man \
		--enable-cxx
USE_LDCONFIG=	yes

INFO=		gmp

.include <bsd.port.pre.mk>

.if ! ${PORT_OPTIONS:MCPU_OPTS}
CONFIGURE_ARGS+=--build=${ARCH}-portbld-freebsd${OSREL}
.elif ${ARCH:S/64//} != ${ARCH}
.if ${ARCH} == powerpc64
CONFIGURE_ENV+=	ABI="mode64"
.else
CONFIGURE_ENV+=	ABI="64"
.endif
.else
CONFIGURE_ENV+=	ABI="32"
.endif

post-extract:
	@${RM} -f ${WRKSRC}/doc/gmp.info*

post-patch:
	@${REINPLACE_CMD} "s/\(athlon64\-\*\-\*\)/amd64-*-* | \1/;s/\(x86_64)\)/amd64 | \1/" \
		${WRKSRC}/configure

regression-test check: build
	@cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE} check

.include <bsd.port.post.mk>

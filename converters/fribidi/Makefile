# Created by: ijliao
# $FreeBSD$

PORTNAME=	fribidi
PORTVERSION=	0.19.2
PORTREVISION=	3
CATEGORIES=	converters
MASTER_SITES=	http://fribidi.org/download/

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Free Implementation of the Unicode Bidirectional Algorithm

USES=		gmake libtool pathfix
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--without-glib
INSTALL_TARGET=	install-strip

.if !defined(WITH_DEBUG)
CONFIGURE_ARGS+=--disable-debug
.endif

post-patch:
	@${SED} -e 's|%%LOCALBASE%%|${LOCALBASE}|g' < \
	    	${FILESDIR}/fribidi-config > ${WRKDIR}/fribidi-config

post-install:
	${INSTALL_SCRIPT} ${WRKDIR}/fribidi-config ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>

# Created by: Muhammad Moinur Rahman <5u623l20@gmail.com>
# $FreeBSD$

PORTNAME=	ndpi
PORTVERSION=	1.6
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	SF/ntop/nDPI
DISTNAME=	nDPI-${PORTVERSION}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	NTOP-maintained superset of the popular OpenDPI library

LICENSE=	GPLv3

LIB_DEPENDS=	libjson-c.so:${PORTSDIR}/devel/json-c

CONFIGURE_ARGS=	--with-pic
CPPFLAGS+=	-I${LOCALBASE}/include/json-c
LDFLAGS+=	-L${LOCALBASE}/lib
LIBS+=		-ljson-c
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USES=	 	autoreconf libtool pathfix pkgconfig compiler:c++11-lang
WRKSRC=		${WRKDIR}/nDPI-${PORTVERSION}
INSTALL_TARGET=	install-strip

PLIST_SUB=	MAJOR_VER=${PORTVERSION}.0

post-patch:
	${REINPLACE_CMD} 's|$$(libdir)|$$(libdir)data|' \
		${WRKSRC}/Makefile.am

.include <bsd.port.mk>

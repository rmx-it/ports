# Created by: Marco Molteni <molter@gufi.org>
# $FreeBSD$

PORTNAME=	gpsdrive
PORTVERSION=	2.09
PORTREVISION=	16
CATEGORIES=	astro geography
MASTER_SITES=	http://www.gpsdrive.de/packages/ \
		LOCAL/beech

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GPS navigation system

LICENSE=	GPLv2 # or later
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libpcre.so:${PORTSDIR}/devel/pcre
RUN_DEPENDS=	bash:${PORTSDIR}/shells/bash

USES=		gmake libtool perl5 pkgconfig shebangfix
SHEBANG_FILES=	src/gpsfetchmap.pl src/geocache2way src/gpssmswatch \
		src/gpspoint2gpsdrive.pl src/gpsreplay src/wpcvt
USE_GNOME=	gtk20
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-garmin
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib -lgmodule-2.0 -lm
INSTALL_TARGET=	install-strip
MAKE_JOBS_UNSAFE=	yes

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_USES=	gettext
NLS_USES_OFF=	gettext-tools

.include <bsd.port.options.mk>

post-patch:
	@${REINPLACE_CMD} 's/test "$$CC" = "gcc"/false/' ${WRKSRC}/configure
.if empty(PORT_OPTIONS:MNLS)
	@${REINPLACE_CMD} 's|SUBDIRS = src po man|SUBDIRS = src man|' \
		${WRKSRC}/Makefile.in
.endif

.include <bsd.port.mk>

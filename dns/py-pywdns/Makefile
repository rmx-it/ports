# $FreeBSD$

PORTNAME=	pywdns
PORTVERSION=	0.6.0
CATEGORIES=	dns python
MASTER_SITES=	FARSIGHT LOCAL/truckman/farsight
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	truckman@FreeBSD.org
COMMENT=	Python wrapper for dns/wdns

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

LIB_DEPENDS=	libwdns.so:${PORTSDIR}/dns/wdns

USE_PYTHON=	distutils autoplist
USES=		pkgconfig python

post-patch:
	${REINPLACE_CMD} -e "1s+ python+ ${PYTHON_CMD}+" ${WRKSRC}/gen_pywdns_constants

post-install:
	${STRIP_CMD} ${STAGEDIR}/${PYTHON_SITELIBDIR}/wdns.so

.include <bsd.port.mk>

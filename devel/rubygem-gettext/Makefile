# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD$

PORTNAME=	gettext
PORTVERSION=	3.1.6
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	knu@FreeBSD.org
COMMENT=	Ruby implementation of the gettext library

LICENSE=	RUBY LGPL3
LICENSE_COMB=	dual

RUN_DEPENDS=	rubygem-locale>=2.0.5:${PORTSDIR}/devel/rubygem-locale \
		rubygem-text>=1.3.0:${PORTSDIR}/textproc/rubygem-text

USES=	shebangfix
NO_ARCH=	yes

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
SHEBANG_FILES=	samples/*.rb samples/cgi/*.rb
PLIST_FILES=	bin/rmsgcat bin/rmsgfmt bin/rmsginit bin/rmsgmerge bin/rxgettext

.include <bsd.port.mk>

# Created by: Masanori Kiriake <seiken@nbs.co.jp>
# $FreeBSD$

PORTNAME=	ack
PORTVERSION=	1.39
PORTREVISION=	1
CATEGORIES=	japanese converters
MASTER_SITES=	http://ftp.vector.co.jp/pack/unix/util/text/conv/code/
DISTNAME=	${PORTNAME}${PORTVERSION:S/.//}
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Kanji code converter

CONFLICTS_INSTALL=	p5-ack-[0-9]* ack-[0-9]*

ALL_TARGET=	ack
CFLAGS+=	-Wno-error=return-type

PLIST_FILES=	bin/ack man/ja/man1/ack.1.gz

post-patch:
	@${REINPLACE_CMD} -E 's,(BINARY|MANUAL)),DESTDIR)$$(&,' \
		${WRKSRC}/Makefile

.include <bsd.port.mk>

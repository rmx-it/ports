# $FreeBSD$

PORTNAME=	google-api-python-client
PORTVERSION=	1.4.1
#PORTREVISION=	0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Google API Client Library for Python

LICENSE=	APACHE20

#BUILD_DEPENDS=	${PKGNAMEPREFIX}oauth2client>=1.4.6:${PORTSDIR}/security/py-oauth2client
RUN_DEPENDS=	${PKGNAMEPREFIX}httplib2>=0.8:${PORTSDIR}/www/py-httplib2 \
		${PKGNAMEPREFIX}oauth2client>=1.4.6:${PORTSDIR}/security/py-oauth2client \
		${PYTHON_PKGNAMEPREFIX}six>=1.6.1:${PORTSDIR}/devel/py-six \
		${PKGNAMEPREFIX}uritemplate>=0.6:${PORTSDIR}/net/py-uritemplate

DJANGO_DESC=	Use the library with Django
DJANGO_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django>=1.3:${PORTSDIR}/www/py-django

GAE_DESC=	Use the library with Google App Engine
GAE_RUN_DEPENDS=	google-appengine>=1.4.3:${PORTSDIR}/www/google-appengine

OPTIONS_DEFINE=	DJANGO GAE WEBTEST

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

WEBTEST_DESC=	Use WebTest helper to test WSGI apps
WEBTEST_RUN_DEPENDS=	${PKGNAMEPREFIX}WebTest>=1.3.3:${PORTSDIR}/www/py-WebTest \
			${PKGNAMEPREFIX}openssl>=0.13:${PORTSDIR}/security/py-openssl

.include <bsd.port.mk>

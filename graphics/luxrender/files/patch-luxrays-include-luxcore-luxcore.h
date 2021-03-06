--- ../luxrender-luxrays-7c7127ee1fa4/include/luxcore/luxcore.h.orig	2015-01-20 22:45:32.000000000 +0000
+++ ../luxrender-luxrays-7c7127ee1fa4/include/luxcore/luxcore.h
@@ -63,7 +63,7 @@
  */
 namespace luxcore {
 
-CPP_EXPORT CPP_API void (*LuxCore_LogHandler)(const char *msg); // LuxCore Log Handler
+extern CPP_API void (*LuxCore_LogHandler)(const char *msg); // LuxCore Log Handler
 
 #define LC_LOG(a) { if (luxcore::LuxCore_LogHandler) { std::stringstream _LUXCORE_LOG_LOCAL_SS; _LUXCORE_LOG_LOCAL_SS << a; luxcore::LuxCore_LogHandler(_LUXCORE_LOG_LOCAL_SS.str().c_str()); } }
 
@@ -603,7 +603,7 @@ public:
 	 * 
 	 * \return the default Properties.
 	 */
-	static const luxrays::Properties &GetDefaultProperties();
+	const luxrays::Properties &GetDefaultProperties();
 
 	friend class RenderSession;
 

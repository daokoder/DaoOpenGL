#include"dao_opengl.h"

DaoVmSpace *__daoVmSpace = NULL;
#ifdef __cplusplus
extern "C"{
#endif
static void dao__glAccum( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glAlphaFunc( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glAreTexturesResident( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glArrayElement( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glBegin( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glBindTexture( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glBitmap( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glBlendColor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glBlendEquation( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glBlendEquationSeparate( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glBlendFunc( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glCallList( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glCallLists( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glClear( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glClearAccum( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glClearColor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glClearDepth( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glClearIndex( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glClearStencil( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glClipPlane( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor3b( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor3bv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor3d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor3dv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor3f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor3fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor3i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor3iv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor3s( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor3sv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor3ub( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor3ubv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor3ui( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor3uiv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor3us( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor3usv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor4b( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor4bv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor4d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor4dv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor4f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor4fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor4i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor4iv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor4s( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor4sv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor4ub( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor4ubv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor4ui( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor4uiv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor4us( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColor4usv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColorMask( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColorMaterial( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColorPointer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColorSubTable( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColorTable( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColorTableParameterfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glColorTableParameteriv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glConvolutionFilter1D( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glConvolutionFilter2D( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glConvolutionParameterf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glConvolutionParameterfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glConvolutionParameteri( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glConvolutionParameteriv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glCopyColorSubTable( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glCopyColorTable( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glCopyConvolutionFilter1D( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glCopyConvolutionFilter2D( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glCopyPixels( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glCopyTexImage1D( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glCopyTexImage2D( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glCopyTexSubImage1D( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glCopyTexSubImage2D( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glCopyTexSubImage3D( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glCullFace( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glDeleteLists( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glDeleteTextures( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glDepthFunc( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glDepthMask( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glDepthRange( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glDisable( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glDisableClientState( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glDrawArrays( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glDrawBuffer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glDrawElements( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glDrawPixels( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glDrawRangeElements( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glEdgeFlag( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glEdgeFlagPointer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glEdgeFlagv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glEnable( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glEnableClientState( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glEnd( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glEndList( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glEvalCoord1d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glEvalCoord1dv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glEvalCoord1f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glEvalCoord1fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glEvalCoord2d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glEvalCoord2dv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glEvalCoord2f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glEvalCoord2fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glEvalMesh1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glEvalMesh2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glEvalPoint1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glEvalPoint2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glFeedbackBuffer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glFinish( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glFlush( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glFogf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glFogfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glFogi( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glFogiv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glFrontFace( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glFrustum( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGenLists( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGenTextures( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetBooleanv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetClipPlane( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetColorTable( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetColorTableParameterfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetColorTableParameteriv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetConvolutionFilter( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetConvolutionParameterfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetConvolutionParameteriv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetDoublev( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetError( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetFloatv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetHistogram( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetHistogramParameterfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetHistogramParameteriv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetIntegerv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetLightfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetLightiv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetMapdv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetMapfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetMapiv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetMaterialfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetMaterialiv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetMinmax( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetMinmaxParameterfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetMinmaxParameteriv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetPixelMapfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetPixelMapuiv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetPixelMapusv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetPolygonStipple( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetSeparableFilter( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetString( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetTexEnvfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetTexEnviv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetTexGendv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetTexGenfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetTexGeniv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetTexImage( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetTexLevelParameterfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetTexLevelParameteriv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetTexParameterfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetTexParameteriv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glHint( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glHistogram( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glIndexMask( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glIndexPointer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glIndexd( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glIndexdv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glIndexf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glIndexfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glIndexi( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glIndexiv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glIndexs( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glIndexsv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glIndexub( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glIndexubv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glInitNames( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glInterleavedArrays( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glIsEnabled( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glIsList( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glIsTexture( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glLightModelf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glLightModelfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glLightModeli( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glLightModeliv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glLightf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glLightfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glLighti( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glLightiv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glLineStipple( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glLineWidth( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glListBase( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glLoadIdentity( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glLoadMatrixd( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glLoadMatrixf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glLoadName( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glLogicOp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMap1d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMap1f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMap2d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMap2f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMapGrid1d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMapGrid1f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMapGrid2d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMapGrid2f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMaterialf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMaterialfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMateriali( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMaterialiv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMatrixMode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMinmax( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultMatrixd( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultMatrixf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glNewList( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glNormal3b( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glNormal3bv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glNormal3d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glNormal3dv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glNormal3f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glNormal3fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glNormal3i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glNormal3iv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glNormal3s( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glNormal3sv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glNormalPointer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glOrtho( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glPassThrough( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glPixelMapfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glPixelMapuiv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glPixelMapusv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glPixelStoref( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glPixelStorei( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glPixelTransferf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glPixelTransferi( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glPixelZoom( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glPointSize( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glPolygonMode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glPolygonOffset( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glPolygonStipple( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glPopAttrib( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glPopClientAttrib( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glPopMatrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glPopName( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glPrioritizeTextures( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glPushAttrib( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glPushClientAttrib( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glPushMatrix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glPushName( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRasterPos2d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRasterPos2dv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRasterPos2f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRasterPos2fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRasterPos2i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRasterPos2iv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRasterPos2s( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRasterPos2sv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRasterPos3d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRasterPos3dv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRasterPos3f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRasterPos3fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRasterPos3i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRasterPos3iv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRasterPos3s( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRasterPos3sv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRasterPos4d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRasterPos4dv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRasterPos4f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRasterPos4fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRasterPos4i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRasterPos4iv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRasterPos4s( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRasterPos4sv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glReadBuffer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glReadPixels( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRectd( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRectdv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRectf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRectfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRecti( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRectiv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRects( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRectsv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRenderMode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glResetHistogram( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glResetMinmax( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRotated( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glRotatef( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glScaled( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glScalef( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glScissor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glSelectBuffer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glSeparableFilter2D( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glShadeModel( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glStencilFunc( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glStencilMask( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glStencilOp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord1d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord1dv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord1f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord1fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord1i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord1iv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord1s( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord1sv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord2d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord2dv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord2f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord2fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord2i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord2iv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord2s( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord2sv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord3d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord3dv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord3f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord3fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord3i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord3iv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord3s( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord3sv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord4d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord4dv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord4f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord4fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord4i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord4iv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord4s( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoord4sv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexCoordPointer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexEnvf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexEnvfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexEnvi( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexEnviv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexGend( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexGendv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexGenf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexGenfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexGeni( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexGeniv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexImage1D( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexImage2D( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexImage3D( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexParameterf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexParameterfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexParameteri( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexParameteriv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexSubImage1D( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexSubImage2D( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTexSubImage3D( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTranslated( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glTranslatef( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertex2d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertex2dv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertex2f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertex2fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertex2i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertex2iv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertex2s( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertex2sv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertex3d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertex3dv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertex3f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertex3fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertex3i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertex3iv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertex3s( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertex3sv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertex4d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertex4dv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertex4f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertex4fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertex4i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertex4iv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertex4s( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertex4sv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexPointer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glViewport( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glSampleCoverage( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glLoadTransposeMatrixf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glLoadTransposeMatrixd( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultTransposeMatrixf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultTransposeMatrixd( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glCompressedTexImage3D( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glCompressedTexImage2D( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glCompressedTexImage1D( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glCompressedTexSubImage3D( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glCompressedTexSubImage2D( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glCompressedTexSubImage1D( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetCompressedTexImage( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glActiveTexture( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glClientActiveTexture( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord1d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord1dv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord1f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord1fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord1i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord1iv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord1s( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord1sv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord2d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord2dv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord2f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord2fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord2i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord2iv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord2s( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord2sv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord3d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord3dv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord3f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord3fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord3i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord3iv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord3s( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord3sv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord4d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord4dv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord4f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord4fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord4i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord4iv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord4s( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiTexCoord4sv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glFogCoordf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glFogCoordfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glFogCoordd( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glFogCoorddv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glFogCoordPointer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glSecondaryColor3b( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glSecondaryColor3bv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glSecondaryColor3d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glSecondaryColor3dv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glSecondaryColor3f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glSecondaryColor3fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glSecondaryColor3i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glSecondaryColor3iv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glSecondaryColor3s( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glSecondaryColor3sv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glSecondaryColor3ub( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glSecondaryColor3ubv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glSecondaryColor3ui( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glSecondaryColor3uiv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glSecondaryColor3us( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glSecondaryColor3usv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glSecondaryColorPointer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glPointParameterf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glPointParameterfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glPointParameteri( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glPointParameteriv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glBlendFuncSeparate( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMultiDrawArrays( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glWindowPos2d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glWindowPos2dv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glWindowPos2f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glWindowPos2fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glWindowPos2i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glWindowPos2iv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glWindowPos2s( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glWindowPos2sv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glWindowPos3d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glWindowPos3dv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glWindowPos3f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glWindowPos3fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glWindowPos3i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glWindowPos3iv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glWindowPos3s( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glWindowPos3sv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGenQueries( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glDeleteQueries( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glIsQuery( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glBeginQuery( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glEndQuery( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetQueryiv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetQueryObjectiv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetQueryObjectuiv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glBindBuffer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glDeleteBuffers( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGenBuffers( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glIsBuffer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glBufferData( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glBufferSubData( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetBufferSubData( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glMapBuffer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glUnmapBuffer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetBufferParameteriv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glDrawBuffers( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib1d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib1dv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib1f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib1fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib1s( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib1sv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib2d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib2dv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib2f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib2fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib2s( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib2sv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib3d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib3dv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib3f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib3fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib3s( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib3sv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib4Nbv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib4Niv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib4Nsv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib4Nub( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib4Nubv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib4Nuiv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib4Nusv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib4bv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib4d( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib4dv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib4f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib4fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib4iv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib4s( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib4sv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib4ubv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib4uiv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttrib4usv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glVertexAttribPointer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glEnableVertexAttribArray( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glDisableVertexAttribArray( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetVertexAttribdv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetVertexAttribfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetVertexAttribiv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glDeleteShader( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glDetachShader( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glCreateShader( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glCompileShader( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glCreateProgram( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glAttachShader( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glLinkProgram( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glUseProgram( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glDeleteProgram( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glValidateProgram( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glUniform1f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glUniform2f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glUniform3f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glUniform4f( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glUniform1i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glUniform2i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glUniform3i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glUniform4i( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glUniform1fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glUniform2fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glUniform3fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glUniform4fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glUniform1iv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glUniform2iv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glUniform3iv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glUniform4iv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glUniformMatrix2fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glUniformMatrix3fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glUniformMatrix4fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glIsShader( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glIsProgram( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetShaderiv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetProgramiv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetAttachedShaders( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetShaderInfoLog( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetProgramInfoLog( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetUniformLocation( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetActiveUniform( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetUniformfv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetUniformiv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetShaderSource( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glBindAttribLocation( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetActiveAttrib( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glGetAttribLocation( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glStencilFuncSeparate( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glStencilOpSeparate( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glStencilMaskSeparate( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glUniformMatrix2x3fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glUniformMatrix3x2fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glUniformMatrix2x4fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glUniformMatrix4x2fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glUniformMatrix3x4fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__glUniformMatrix4x3fv( DaoProcess *_proc, DaoValue *_p[], int _n );
static DaoFuncItem dao__Funcs[] = 
{
  { dao__glAccum, "glAccum( op: int, value: float )" },
  { dao__glAlphaFunc, "glAlphaFunc( func: int, ref: float )" },
  { dao__glAreTexturesResident, "glAreTexturesResident( n: int, textures: array<int>, residences: string )=>int" },
  { dao__glArrayElement, "glArrayElement( i: int )" },
  { dao__glBegin, "glBegin( mode: int )" },
  { dao__glBindTexture, "glBindTexture( target: int, texture: int )" },
  { dao__glBitmap, "glBitmap( width: int, height: int, xorig: float, yorig: float, xmove: float, ymove: float, bitmap: string )" },
  { dao__glBlendColor, "glBlendColor( red: float, green: float, blue: float, alpha: float )" },
  { dao__glBlendEquation, "glBlendEquation( mode: int )" },
  { dao__glBlendEquationSeparate, "glBlendEquationSeparate( modeRGB: int, modeAlpha: int )" },
  { dao__glBlendFunc, "glBlendFunc( sfactor: int, dfactor: int )" },
  { dao__glCallList, "glCallList( list: int )" },
  { dao__glCallLists, "glCallLists( n: int, type: int, lists: cdata )" },
  { dao__glClear, "glClear( mask: int )" },
  { dao__glClearAccum, "glClearAccum( red: float, green: float, blue: float, alpha: float )" },
  { dao__glClearColor, "glClearColor( red: float, green: float, blue: float, alpha: float )" },
  { dao__glClearDepth, "glClearDepth( depth: double )" },
  { dao__glClearIndex, "glClearIndex( c: float )" },
  { dao__glClearStencil, "glClearStencil( s: int )" },
  { dao__glClipPlane, "glClipPlane( plane: int, equation: array<double> )" },
  { dao__glColor3b, "glColor3b( red: int, green: int, blue: int )" },
  { dao__glColor3bv, "glColor3bv( v: array<int> )" },
  { dao__glColor3d, "glColor3d( red: double, green: double, blue: double )" },
  { dao__glColor3dv, "glColor3dv( v: array<double> )" },
  { dao__glColor3f, "glColor3f( red: float, green: float, blue: float )" },
  { dao__glColor3fv, "glColor3fv( v: array<float> )" },
  { dao__glColor3i, "glColor3i( red: int, green: int, blue: int )" },
  { dao__glColor3iv, "glColor3iv( v: array<int> )" },
  { dao__glColor3s, "glColor3s( red: int, green: int, blue: int )" },
  { dao__glColor3sv, "glColor3sv( v: array<int> )" },
  { dao__glColor3ub, "glColor3ub( red: int, green: int, blue: int )" },
  { dao__glColor3ubv, "glColor3ubv( v: array<int> )" },
  { dao__glColor3ui, "glColor3ui( red: int, green: int, blue: int )" },
  { dao__glColor3uiv, "glColor3uiv( v: array<int> )" },
  { dao__glColor3us, "glColor3us( red: int, green: int, blue: int )" },
  { dao__glColor3usv, "glColor3usv( v: array<int> )" },
  { dao__glColor4b, "glColor4b( red: int, green: int, blue: int, alpha: int )" },
  { dao__glColor4bv, "glColor4bv( v: array<int> )" },
  { dao__glColor4d, "glColor4d( red: double, green: double, blue: double, alpha: double )" },
  { dao__glColor4dv, "glColor4dv( v: array<double> )" },
  { dao__glColor4f, "glColor4f( red: float, green: float, blue: float, alpha: float )" },
  { dao__glColor4fv, "glColor4fv( v: array<float> )" },
  { dao__glColor4i, "glColor4i( red: int, green: int, blue: int, alpha: int )" },
  { dao__glColor4iv, "glColor4iv( v: array<int> )" },
  { dao__glColor4s, "glColor4s( red: int, green: int, blue: int, alpha: int )" },
  { dao__glColor4sv, "glColor4sv( v: array<int> )" },
  { dao__glColor4ub, "glColor4ub( red: int, green: int, blue: int, alpha: int )" },
  { dao__glColor4ubv, "glColor4ubv( v: array<int> )" },
  { dao__glColor4ui, "glColor4ui( red: int, green: int, blue: int, alpha: int )" },
  { dao__glColor4uiv, "glColor4uiv( v: array<int> )" },
  { dao__glColor4us, "glColor4us( red: int, green: int, blue: int, alpha: int )" },
  { dao__glColor4usv, "glColor4usv( v: array<int> )" },
  { dao__glColorMask, "glColorMask( red: int, green: int, blue: int, alpha: int )" },
  { dao__glColorMaterial, "glColorMaterial( face: int, mode: int )" },
  { dao__glColorPointer, "glColorPointer( size: int, type: int, stride: int, pointer: cdata )" },
  { dao__glColorSubTable, "glColorSubTable( target: int, start: int, count: int, format: int, type: int, data: cdata )" },
  { dao__glColorTable, "glColorTable( target: int, internalformat: int, width: int, format: int, type: int, table: cdata )" },
  { dao__glColorTableParameterfv, "glColorTableParameterfv( target: int, pname: int, params: array<float> )" },
  { dao__glColorTableParameteriv, "glColorTableParameteriv( target: int, pname: int, params: array<int> )" },
  { dao__glConvolutionFilter1D, "glConvolutionFilter1D( target: int, internalformat: int, width: int, format: int, type: int, image: cdata )" },
  { dao__glConvolutionFilter2D, "glConvolutionFilter2D( target: int, internalformat: int, width: int, height: int, format: int, type: int, image: cdata )" },
  { dao__glConvolutionParameterf, "glConvolutionParameterf( target: int, pname: int, params: float )" },
  { dao__glConvolutionParameterfv, "glConvolutionParameterfv( target: int, pname: int, params: array<float> )" },
  { dao__glConvolutionParameteri, "glConvolutionParameteri( target: int, pname: int, params: int )" },
  { dao__glConvolutionParameteriv, "glConvolutionParameteriv( target: int, pname: int, params: array<int> )" },
  { dao__glCopyColorSubTable, "glCopyColorSubTable( target: int, start: int, x: int, y: int, width: int )" },
  { dao__glCopyColorTable, "glCopyColorTable( target: int, internalformat: int, x: int, y: int, width: int )" },
  { dao__glCopyConvolutionFilter1D, "glCopyConvolutionFilter1D( target: int, internalformat: int, x: int, y: int, width: int )" },
  { dao__glCopyConvolutionFilter2D, "glCopyConvolutionFilter2D( target: int, internalformat: int, x: int, y: int, width: int, height: int )" },
  { dao__glCopyPixels, "glCopyPixels( x: int, y: int, width: int, height: int, type: int )" },
  { dao__glCopyTexImage1D, "glCopyTexImage1D( target: int, level: int, internalformat: int, x: int, y: int, width: int, border: int )" },
  { dao__glCopyTexImage2D, "glCopyTexImage2D( target: int, level: int, internalformat: int, x: int, y: int, width: int, height: int, border: int )" },
  { dao__glCopyTexSubImage1D, "glCopyTexSubImage1D( target: int, level: int, xoffset: int, x: int, y: int, width: int )" },
  { dao__glCopyTexSubImage2D, "glCopyTexSubImage2D( target: int, level: int, xoffset: int, yoffset: int, x: int, y: int, width: int, height: int )" },
  { dao__glCopyTexSubImage3D, "glCopyTexSubImage3D( target: int, level: int, xoffset: int, yoffset: int, zoffset: int, x: int, y: int, width: int, height: int )" },
  { dao__glCullFace, "glCullFace( mode: int )" },
  { dao__glDeleteLists, "glDeleteLists( list: int, range: int )" },
  { dao__glDeleteTextures, "glDeleteTextures( n: int, textures: array<int> )" },
  { dao__glDepthFunc, "glDepthFunc( func: int )" },
  { dao__glDepthMask, "glDepthMask( flag: int )" },
  { dao__glDepthRange, "glDepthRange( zNear: double, zFar: double )" },
  { dao__glDisable, "glDisable( cap: int )" },
  { dao__glDisableClientState, "glDisableClientState( array: int )" },
  { dao__glDrawArrays, "glDrawArrays( mode: int, first: int, count: int )" },
  { dao__glDrawBuffer, "glDrawBuffer( mode: int )" },
  { dao__glDrawElements, "glDrawElements( mode: int, count: int, type: int, indices: cdata )" },
  { dao__glDrawPixels, "glDrawPixels( width: int, height: int, format: int, type: int, pixels: cdata )" },
  { dao__glDrawRangeElements, "glDrawRangeElements( mode: int, start: int, end: int, count: int, type: int, indices: cdata )" },
  { dao__glEdgeFlag, "glEdgeFlag( flag: int )" },
  { dao__glEdgeFlagPointer, "glEdgeFlagPointer( stride: int, pointer: cdata )" },
  { dao__glEdgeFlagv, "glEdgeFlagv( flag: string )" },
  { dao__glEnable, "glEnable( cap: int )" },
  { dao__glEnableClientState, "glEnableClientState( array: int )" },
  { dao__glEnd, "glEnd(  )" },
  { dao__glEndList, "glEndList(  )" },
  { dao__glEvalCoord1d, "glEvalCoord1d( u: double )" },
  { dao__glEvalCoord1dv, "glEvalCoord1dv( u: array<double> )" },
  { dao__glEvalCoord1f, "glEvalCoord1f( u: float )" },
  { dao__glEvalCoord1fv, "glEvalCoord1fv( u: array<float> )" },
  { dao__glEvalCoord2d, "glEvalCoord2d( u: double, v: double )" },
  { dao__glEvalCoord2dv, "glEvalCoord2dv( u: array<double> )" },
  { dao__glEvalCoord2f, "glEvalCoord2f( u: float, v: float )" },
  { dao__glEvalCoord2fv, "glEvalCoord2fv( u: array<float> )" },
  { dao__glEvalMesh1, "glEvalMesh1( mode: int, i1: int, i2: int )" },
  { dao__glEvalMesh2, "glEvalMesh2( mode: int, i1: int, i2: int, j1: int, j2: int )" },
  { dao__glEvalPoint1, "glEvalPoint1( i: int )" },
  { dao__glEvalPoint2, "glEvalPoint2( i: int, j: int )" },
  { dao__glFeedbackBuffer, "glFeedbackBuffer( size: int, type: int, buffer: float )=>float" },
  { dao__glFinish, "glFinish(  )" },
  { dao__glFlush, "glFlush(  )" },
  { dao__glFogf, "glFogf( pname: int, param: float )" },
  { dao__glFogfv, "glFogfv( pname: int, params: array<float> )" },
  { dao__glFogi, "glFogi( pname: int, param: int )" },
  { dao__glFogiv, "glFogiv( pname: int, params: array<int> )" },
  { dao__glFrontFace, "glFrontFace( mode: int )" },
  { dao__glFrustum, "glFrustum( left: double, right: double, bottom: double, top: double, zNear: double, zFar: double )" },
  { dao__glGenLists, "glGenLists( range: int )=>int" },
  { dao__glGenTextures, "glGenTextures( n: int, textures: int )=>int" },
  { dao__glGetBooleanv, "glGetBooleanv( pname: int, params: string )" },
  { dao__glGetClipPlane, "glGetClipPlane( plane: int, equation: double )=>double" },
  { dao__glGetColorTable, "glGetColorTable( target: int, format: int, type: int, table: cdata )" },
  { dao__glGetColorTableParameterfv, "glGetColorTableParameterfv( target: int, pname: int, params: float )=>float" },
  { dao__glGetColorTableParameteriv, "glGetColorTableParameteriv( target: int, pname: int, params: int )=>int" },
  { dao__glGetConvolutionFilter, "glGetConvolutionFilter( target: int, format: int, type: int, image: cdata )" },
  { dao__glGetConvolutionParameterfv, "glGetConvolutionParameterfv( target: int, pname: int, params: float )=>float" },
  { dao__glGetConvolutionParameteriv, "glGetConvolutionParameteriv( target: int, pname: int, params: int )=>int" },
  { dao__glGetDoublev, "glGetDoublev( pname: int, params: double )=>double" },
  { dao__glGetError, "glGetError(  )=>int" },
  { dao__glGetFloatv, "glGetFloatv( pname: int, params: float )=>float" },
  { dao__glGetHistogram, "glGetHistogram( target: int, reset: int, format: int, type: int, values: cdata )" },
  { dao__glGetHistogramParameterfv, "glGetHistogramParameterfv( target: int, pname: int, params: float )=>float" },
  { dao__glGetHistogramParameteriv, "glGetHistogramParameteriv( target: int, pname: int, params: int )=>int" },
  { dao__glGetIntegerv, "glGetIntegerv( pname: int, params: int )=>int" },
  { dao__glGetLightfv, "glGetLightfv( light: int, pname: int, params: float )=>float" },
  { dao__glGetLightiv, "glGetLightiv( light: int, pname: int, params: int )=>int" },
  { dao__glGetMapdv, "glGetMapdv( target: int, query: int, v: double )=>double" },
  { dao__glGetMapfv, "glGetMapfv( target: int, query: int, v: float )=>float" },
  { dao__glGetMapiv, "glGetMapiv( target: int, query: int, v: int )=>int" },
  { dao__glGetMaterialfv, "glGetMaterialfv( face: int, pname: int, params: float )=>float" },
  { dao__glGetMaterialiv, "glGetMaterialiv( face: int, pname: int, params: int )=>int" },
  { dao__glGetMinmax, "glGetMinmax( target: int, reset: int, format: int, type: int, values: cdata )" },
  { dao__glGetMinmaxParameterfv, "glGetMinmaxParameterfv( target: int, pname: int, params: float )=>float" },
  { dao__glGetMinmaxParameteriv, "glGetMinmaxParameteriv( target: int, pname: int, params: int )=>int" },
  { dao__glGetPixelMapfv, "glGetPixelMapfv( map: int, values: float )=>float" },
  { dao__glGetPixelMapuiv, "glGetPixelMapuiv( map: int, values: int )=>int" },
  { dao__glGetPixelMapusv, "glGetPixelMapusv( map: int, values: int )=>int" },
  { dao__glGetPolygonStipple, "glGetPolygonStipple( mask: string )" },
  { dao__glGetSeparableFilter, "glGetSeparableFilter( target: int, format: int, type: int, row: cdata, column: cdata, span: cdata )" },
  { dao__glGetString, "glGetString( name: int )=>string" },
  { dao__glGetTexEnvfv, "glGetTexEnvfv( target: int, pname: int, params: float )=>float" },
  { dao__glGetTexEnviv, "glGetTexEnviv( target: int, pname: int, params: int )=>int" },
  { dao__glGetTexGendv, "glGetTexGendv( coord: int, pname: int, params: double )=>double" },
  { dao__glGetTexGenfv, "glGetTexGenfv( coord: int, pname: int, params: float )=>float" },
  { dao__glGetTexGeniv, "glGetTexGeniv( coord: int, pname: int, params: int )=>int" },
  { dao__glGetTexImage, "glGetTexImage( target: int, level: int, format: int, type: int, pixels: cdata )" },
  { dao__glGetTexLevelParameterfv, "glGetTexLevelParameterfv( target: int, level: int, pname: int, params: float )=>float" },
  { dao__glGetTexLevelParameteriv, "glGetTexLevelParameteriv( target: int, level: int, pname: int, params: int )=>int" },
  { dao__glGetTexParameterfv, "glGetTexParameterfv( target: int, pname: int, params: float )=>float" },
  { dao__glGetTexParameteriv, "glGetTexParameteriv( target: int, pname: int, params: int )=>int" },
  { dao__glHint, "glHint( target: int, mode: int )" },
  { dao__glHistogram, "glHistogram( target: int, width: int, internalformat: int, sink: int )" },
  { dao__glIndexMask, "glIndexMask( mask: int )" },
  { dao__glIndexPointer, "glIndexPointer( type: int, stride: int, pointer: cdata )" },
  { dao__glIndexd, "glIndexd( c: double )" },
  { dao__glIndexdv, "glIndexdv( c: array<double> )" },
  { dao__glIndexf, "glIndexf( c: float )" },
  { dao__glIndexfv, "glIndexfv( c: array<float> )" },
  { dao__glIndexi, "glIndexi( c: int )" },
  { dao__glIndexiv, "glIndexiv( c: array<int> )" },
  { dao__glIndexs, "glIndexs( c: int )" },
  { dao__glIndexsv, "glIndexsv( c: array<int> )" },
  { dao__glIndexub, "glIndexub( c: int )" },
  { dao__glIndexubv, "glIndexubv( c: array<int> )" },
  { dao__glInitNames, "glInitNames(  )" },
  { dao__glInterleavedArrays, "glInterleavedArrays( format: int, stride: int, pointer: cdata )" },
  { dao__glIsEnabled, "glIsEnabled( cap: int )=>int" },
  { dao__glIsList, "glIsList( list: int )=>int" },
  { dao__glIsTexture, "glIsTexture( texture: int )=>int" },
  { dao__glLightModelf, "glLightModelf( pname: int, param: float )" },
  { dao__glLightModelfv, "glLightModelfv( pname: int, params: array<float> )" },
  { dao__glLightModeli, "glLightModeli( pname: int, param: int )" },
  { dao__glLightModeliv, "glLightModeliv( pname: int, params: array<int> )" },
  { dao__glLightf, "glLightf( light: int, pname: int, param: float )" },
  { dao__glLightfv, "glLightfv( light: int, pname: int, params: array<float> )" },
  { dao__glLighti, "glLighti( light: int, pname: int, param: int )" },
  { dao__glLightiv, "glLightiv( light: int, pname: int, params: array<int> )" },
  { dao__glLineStipple, "glLineStipple( factor: int, pattern: int )" },
  { dao__glLineWidth, "glLineWidth( width: float )" },
  { dao__glListBase, "glListBase( base: int )" },
  { dao__glLoadIdentity, "glLoadIdentity(  )" },
  { dao__glLoadMatrixd, "glLoadMatrixd( m: array<double> )" },
  { dao__glLoadMatrixf, "glLoadMatrixf( m: array<float> )" },
  { dao__glLoadName, "glLoadName( name: int )" },
  { dao__glLogicOp, "glLogicOp( opcode: int )" },
  { dao__glMap1d, "glMap1d( target: int, u1: double, u2: double, stride: int, order: int, points: array<double> )" },
  { dao__glMap1f, "glMap1f( target: int, u1: float, u2: float, stride: int, order: int, points: array<float> )" },
  { dao__glMap2d, "glMap2d( target: int, u1: double, u2: double, ustride: int, uorder: int, v1: double, v2: double, vstride: int, vorder: int, points: array<double> )" },
  { dao__glMap2f, "glMap2f( target: int, u1: float, u2: float, ustride: int, uorder: int, v1: float, v2: float, vstride: int, vorder: int, points: array<float> )" },
  { dao__glMapGrid1d, "glMapGrid1d( un: int, u1: double, u2: double )" },
  { dao__glMapGrid1f, "glMapGrid1f( un: int, u1: float, u2: float )" },
  { dao__glMapGrid2d, "glMapGrid2d( un: int, u1: double, u2: double, vn: int, v1: double, v2: double )" },
  { dao__glMapGrid2f, "glMapGrid2f( un: int, u1: float, u2: float, vn: int, v1: float, v2: float )" },
  { dao__glMaterialf, "glMaterialf( face: int, pname: int, param: float )" },
  { dao__glMaterialfv, "glMaterialfv( face: int, pname: int, params: array<float> )" },
  { dao__glMateriali, "glMateriali( face: int, pname: int, param: int )" },
  { dao__glMaterialiv, "glMaterialiv( face: int, pname: int, params: array<int> )" },
  { dao__glMatrixMode, "glMatrixMode( mode: int )" },
  { dao__glMinmax, "glMinmax( target: int, internalformat: int, sink: int )" },
  { dao__glMultMatrixd, "glMultMatrixd( m: array<double> )" },
  { dao__glMultMatrixf, "glMultMatrixf( m: array<float> )" },
  { dao__glNewList, "glNewList( list: int, mode: int )" },
  { dao__glNormal3b, "glNormal3b( nx: int, ny: int, nz: int )" },
  { dao__glNormal3bv, "glNormal3bv( v: array<int> )" },
  { dao__glNormal3d, "glNormal3d( nx: double, ny: double, nz: double )" },
  { dao__glNormal3dv, "glNormal3dv( v: array<double> )" },
  { dao__glNormal3f, "glNormal3f( nx: float, ny: float, nz: float )" },
  { dao__glNormal3fv, "glNormal3fv( v: array<float> )" },
  { dao__glNormal3i, "glNormal3i( nx: int, ny: int, nz: int )" },
  { dao__glNormal3iv, "glNormal3iv( v: array<int> )" },
  { dao__glNormal3s, "glNormal3s( nx: int, ny: int, nz: int )" },
  { dao__glNormal3sv, "glNormal3sv( v: array<int> )" },
  { dao__glNormalPointer, "glNormalPointer( type: int, stride: int, pointer: cdata )" },
  { dao__glOrtho, "glOrtho( left: double, right: double, bottom: double, top: double, zNear: double, zFar: double )" },
  { dao__glPassThrough, "glPassThrough( token: float )" },
  { dao__glPixelMapfv, "glPixelMapfv( map: int, mapsize: int, values: array<float> )" },
  { dao__glPixelMapuiv, "glPixelMapuiv( map: int, mapsize: int, values: array<int> )" },
  { dao__glPixelMapusv, "glPixelMapusv( map: int, mapsize: int, values: array<int> )" },
  { dao__glPixelStoref, "glPixelStoref( pname: int, param: float )" },
  { dao__glPixelStorei, "glPixelStorei( pname: int, param: int )" },
  { dao__glPixelTransferf, "glPixelTransferf( pname: int, param: float )" },
  { dao__glPixelTransferi, "glPixelTransferi( pname: int, param: int )" },
  { dao__glPixelZoom, "glPixelZoom( xfactor: float, yfactor: float )" },
  { dao__glPointSize, "glPointSize( size: float )" },
  { dao__glPolygonMode, "glPolygonMode( face: int, mode: int )" },
  { dao__glPolygonOffset, "glPolygonOffset( factor: float, units: float )" },
  { dao__glPolygonStipple, "glPolygonStipple( mask: string )" },
  { dao__glPopAttrib, "glPopAttrib(  )" },
  { dao__glPopClientAttrib, "glPopClientAttrib(  )" },
  { dao__glPopMatrix, "glPopMatrix(  )" },
  { dao__glPopName, "glPopName(  )" },
  { dao__glPrioritizeTextures, "glPrioritizeTextures( n: int, textures: array<int>, priorities: array<float> )" },
  { dao__glPushAttrib, "glPushAttrib( mask: int )" },
  { dao__glPushClientAttrib, "glPushClientAttrib( mask: int )" },
  { dao__glPushMatrix, "glPushMatrix(  )" },
  { dao__glPushName, "glPushName( name: int )" },
  { dao__glRasterPos2d, "glRasterPos2d( x: double, y: double )" },
  { dao__glRasterPos2dv, "glRasterPos2dv( v: array<double> )" },
  { dao__glRasterPos2f, "glRasterPos2f( x: float, y: float )" },
  { dao__glRasterPos2fv, "glRasterPos2fv( v: array<float> )" },
  { dao__glRasterPos2i, "glRasterPos2i( x: int, y: int )" },
  { dao__glRasterPos2iv, "glRasterPos2iv( v: array<int> )" },
  { dao__glRasterPos2s, "glRasterPos2s( x: int, y: int )" },
  { dao__glRasterPos2sv, "glRasterPos2sv( v: array<int> )" },
  { dao__glRasterPos3d, "glRasterPos3d( x: double, y: double, z: double )" },
  { dao__glRasterPos3dv, "glRasterPos3dv( v: array<double> )" },
  { dao__glRasterPos3f, "glRasterPos3f( x: float, y: float, z: float )" },
  { dao__glRasterPos3fv, "glRasterPos3fv( v: array<float> )" },
  { dao__glRasterPos3i, "glRasterPos3i( x: int, y: int, z: int )" },
  { dao__glRasterPos3iv, "glRasterPos3iv( v: array<int> )" },
  { dao__glRasterPos3s, "glRasterPos3s( x: int, y: int, z: int )" },
  { dao__glRasterPos3sv, "glRasterPos3sv( v: array<int> )" },
  { dao__glRasterPos4d, "glRasterPos4d( x: double, y: double, z: double, w: double )" },
  { dao__glRasterPos4dv, "glRasterPos4dv( v: array<double> )" },
  { dao__glRasterPos4f, "glRasterPos4f( x: float, y: float, z: float, w: float )" },
  { dao__glRasterPos4fv, "glRasterPos4fv( v: array<float> )" },
  { dao__glRasterPos4i, "glRasterPos4i( x: int, y: int, z: int, w: int )" },
  { dao__glRasterPos4iv, "glRasterPos4iv( v: array<int> )" },
  { dao__glRasterPos4s, "glRasterPos4s( x: int, y: int, z: int, w: int )" },
  { dao__glRasterPos4sv, "glRasterPos4sv( v: array<int> )" },
  { dao__glReadBuffer, "glReadBuffer( mode: int )" },
  { dao__glReadPixels, "glReadPixels( x: int, y: int, width: int, height: int, format: int, type: int, pixels: cdata )" },
  { dao__glRectd, "glRectd( x1: double, y1: double, x2: double, y2: double )" },
  { dao__glRectdv, "glRectdv( v1: array<double>, v2: array<double> )" },
  { dao__glRectf, "glRectf( x1: float, y1: float, x2: float, y2: float )" },
  { dao__glRectfv, "glRectfv( v1: array<float>, v2: array<float> )" },
  { dao__glRecti, "glRecti( x1: int, y1: int, x2: int, y2: int )" },
  { dao__glRectiv, "glRectiv( v1: array<int>, v2: array<int> )" },
  { dao__glRects, "glRects( x1: int, y1: int, x2: int, y2: int )" },
  { dao__glRectsv, "glRectsv( v1: array<int>, v2: array<int> )" },
  { dao__glRenderMode, "glRenderMode( mode: int )=>int" },
  { dao__glResetHistogram, "glResetHistogram( target: int )" },
  { dao__glResetMinmax, "glResetMinmax( target: int )" },
  { dao__glRotated, "glRotated( angle: double, x: double, y: double, z: double )" },
  { dao__glRotatef, "glRotatef( angle: float, x: float, y: float, z: float )" },
  { dao__glScaled, "glScaled( x: double, y: double, z: double )" },
  { dao__glScalef, "glScalef( x: float, y: float, z: float )" },
  { dao__glScissor, "glScissor( x: int, y: int, width: int, height: int )" },
  { dao__glSelectBuffer, "glSelectBuffer( size: int, buffer: int )=>int" },
  { dao__glSeparableFilter2D, "glSeparableFilter2D( target: int, internalformat: int, width: int, height: int, format: int, type: int, row: cdata, column: cdata )" },
  { dao__glShadeModel, "glShadeModel( mode: int )" },
  { dao__glStencilFunc, "glStencilFunc( func: int, ref: int, mask: int )" },
  { dao__glStencilMask, "glStencilMask( mask: int )" },
  { dao__glStencilOp, "glStencilOp( fail: int, zfail: int, zpass: int )" },
  { dao__glTexCoord1d, "glTexCoord1d( s: double )" },
  { dao__glTexCoord1dv, "glTexCoord1dv( v: array<double> )" },
  { dao__glTexCoord1f, "glTexCoord1f( s: float )" },
  { dao__glTexCoord1fv, "glTexCoord1fv( v: array<float> )" },
  { dao__glTexCoord1i, "glTexCoord1i( s: int )" },
  { dao__glTexCoord1iv, "glTexCoord1iv( v: array<int> )" },
  { dao__glTexCoord1s, "glTexCoord1s( s: int )" },
  { dao__glTexCoord1sv, "glTexCoord1sv( v: array<int> )" },
  { dao__glTexCoord2d, "glTexCoord2d( s: double, t: double )" },
  { dao__glTexCoord2dv, "glTexCoord2dv( v: array<double> )" },
  { dao__glTexCoord2f, "glTexCoord2f( s: float, t: float )" },
  { dao__glTexCoord2fv, "glTexCoord2fv( v: array<float> )" },
  { dao__glTexCoord2i, "glTexCoord2i( s: int, t: int )" },
  { dao__glTexCoord2iv, "glTexCoord2iv( v: array<int> )" },
  { dao__glTexCoord2s, "glTexCoord2s( s: int, t: int )" },
  { dao__glTexCoord2sv, "glTexCoord2sv( v: array<int> )" },
  { dao__glTexCoord3d, "glTexCoord3d( s: double, t: double, r: double )" },
  { dao__glTexCoord3dv, "glTexCoord3dv( v: array<double> )" },
  { dao__glTexCoord3f, "glTexCoord3f( s: float, t: float, r: float )" },
  { dao__glTexCoord3fv, "glTexCoord3fv( v: array<float> )" },
  { dao__glTexCoord3i, "glTexCoord3i( s: int, t: int, r: int )" },
  { dao__glTexCoord3iv, "glTexCoord3iv( v: array<int> )" },
  { dao__glTexCoord3s, "glTexCoord3s( s: int, t: int, r: int )" },
  { dao__glTexCoord3sv, "glTexCoord3sv( v: array<int> )" },
  { dao__glTexCoord4d, "glTexCoord4d( s: double, t: double, r: double, q: double )" },
  { dao__glTexCoord4dv, "glTexCoord4dv( v: array<double> )" },
  { dao__glTexCoord4f, "glTexCoord4f( s: float, t: float, r: float, q: float )" },
  { dao__glTexCoord4fv, "glTexCoord4fv( v: array<float> )" },
  { dao__glTexCoord4i, "glTexCoord4i( s: int, t: int, r: int, q: int )" },
  { dao__glTexCoord4iv, "glTexCoord4iv( v: array<int> )" },
  { dao__glTexCoord4s, "glTexCoord4s( s: int, t: int, r: int, q: int )" },
  { dao__glTexCoord4sv, "glTexCoord4sv( v: array<int> )" },
  { dao__glTexCoordPointer, "glTexCoordPointer( size: int, type: int, stride: int, pointer: cdata )" },
  { dao__glTexEnvf, "glTexEnvf( target: int, pname: int, param: float )" },
  { dao__glTexEnvfv, "glTexEnvfv( target: int, pname: int, params: array<float> )" },
  { dao__glTexEnvi, "glTexEnvi( target: int, pname: int, param: int )" },
  { dao__glTexEnviv, "glTexEnviv( target: int, pname: int, params: array<int> )" },
  { dao__glTexGend, "glTexGend( coord: int, pname: int, param: double )" },
  { dao__glTexGendv, "glTexGendv( coord: int, pname: int, params: array<double> )" },
  { dao__glTexGenf, "glTexGenf( coord: int, pname: int, param: float )" },
  { dao__glTexGenfv, "glTexGenfv( coord: int, pname: int, params: array<float> )" },
  { dao__glTexGeni, "glTexGeni( coord: int, pname: int, param: int )" },
  { dao__glTexGeniv, "glTexGeniv( coord: int, pname: int, params: array<int> )" },
  { dao__glTexImage1D, "glTexImage1D( target: int, level: int, internalformat: int, width: int, border: int, format: int, type: int, pixels: cdata )" },
  { dao__glTexImage2D, "glTexImage2D( target: int, level: int, internalformat: int, width: int, height: int, border: int, format: int, type: int, pixels: cdata )" },
  { dao__glTexImage3D, "glTexImage3D( target: int, level: int, internalformat: int, width: int, height: int, depth: int, border: int, format: int, type: int, pixels: cdata )" },
  { dao__glTexParameterf, "glTexParameterf( target: int, pname: int, param: float )" },
  { dao__glTexParameterfv, "glTexParameterfv( target: int, pname: int, params: array<float> )" },
  { dao__glTexParameteri, "glTexParameteri( target: int, pname: int, param: int )" },
  { dao__glTexParameteriv, "glTexParameteriv( target: int, pname: int, params: array<int> )" },
  { dao__glTexSubImage1D, "glTexSubImage1D( target: int, level: int, xoffset: int, width: int, format: int, type: int, pixels: cdata )" },
  { dao__glTexSubImage2D, "glTexSubImage2D( target: int, level: int, xoffset: int, yoffset: int, width: int, height: int, format: int, type: int, pixels: cdata )" },
  { dao__glTexSubImage3D, "glTexSubImage3D( target: int, level: int, xoffset: int, yoffset: int, zoffset: int, width: int, height: int, depth: int, format: int, type: int, pixels: cdata )" },
  { dao__glTranslated, "glTranslated( x: double, y: double, z: double )" },
  { dao__glTranslatef, "glTranslatef( x: float, y: float, z: float )" },
  { dao__glVertex2d, "glVertex2d( x: double, y: double )" },
  { dao__glVertex2dv, "glVertex2dv( v: array<double> )" },
  { dao__glVertex2f, "glVertex2f( x: float, y: float )" },
  { dao__glVertex2fv, "glVertex2fv( v: array<float> )" },
  { dao__glVertex2i, "glVertex2i( x: int, y: int )" },
  { dao__glVertex2iv, "glVertex2iv( v: array<int> )" },
  { dao__glVertex2s, "glVertex2s( x: int, y: int )" },
  { dao__glVertex2sv, "glVertex2sv( v: array<int> )" },
  { dao__glVertex3d, "glVertex3d( x: double, y: double, z: double )" },
  { dao__glVertex3dv, "glVertex3dv( v: array<double> )" },
  { dao__glVertex3f, "glVertex3f( x: float, y: float, z: float )" },
  { dao__glVertex3fv, "glVertex3fv( v: array<float> )" },
  { dao__glVertex3i, "glVertex3i( x: int, y: int, z: int )" },
  { dao__glVertex3iv, "glVertex3iv( v: array<int> )" },
  { dao__glVertex3s, "glVertex3s( x: int, y: int, z: int )" },
  { dao__glVertex3sv, "glVertex3sv( v: array<int> )" },
  { dao__glVertex4d, "glVertex4d( x: double, y: double, z: double, w: double )" },
  { dao__glVertex4dv, "glVertex4dv( v: array<double> )" },
  { dao__glVertex4f, "glVertex4f( x: float, y: float, z: float, w: float )" },
  { dao__glVertex4fv, "glVertex4fv( v: array<float> )" },
  { dao__glVertex4i, "glVertex4i( x: int, y: int, z: int, w: int )" },
  { dao__glVertex4iv, "glVertex4iv( v: array<int> )" },
  { dao__glVertex4s, "glVertex4s( x: int, y: int, z: int, w: int )" },
  { dao__glVertex4sv, "glVertex4sv( v: array<int> )" },
  { dao__glVertexPointer, "glVertexPointer( size: int, type: int, stride: int, pointer: cdata )" },
  { dao__glViewport, "glViewport( x: int, y: int, width: int, height: int )" },
  { dao__glSampleCoverage, "glSampleCoverage( value: float, invert: int )" },
  { dao__glLoadTransposeMatrixf, "glLoadTransposeMatrixf( m: array<float> )" },
  { dao__glLoadTransposeMatrixd, "glLoadTransposeMatrixd( m: array<double> )" },
  { dao__glMultTransposeMatrixf, "glMultTransposeMatrixf( m: array<float> )" },
  { dao__glMultTransposeMatrixd, "glMultTransposeMatrixd( m: array<double> )" },
  { dao__glCompressedTexImage3D, "glCompressedTexImage3D( target: int, level: int, internalformat: int, width: int, height: int, depth: int, border: int, imageSize: int, data: cdata )" },
  { dao__glCompressedTexImage2D, "glCompressedTexImage2D( target: int, level: int, internalformat: int, width: int, height: int, border: int, imageSize: int, data: cdata )" },
  { dao__glCompressedTexImage1D, "glCompressedTexImage1D( target: int, level: int, internalformat: int, width: int, border: int, imageSize: int, data: cdata )" },
  { dao__glCompressedTexSubImage3D, "glCompressedTexSubImage3D( target: int, level: int, xoffset: int, yoffset: int, zoffset: int, width: int, height: int, depth: int, format: int, imageSize: int, data: cdata )" },
  { dao__glCompressedTexSubImage2D, "glCompressedTexSubImage2D( target: int, level: int, xoffset: int, yoffset: int, width: int, height: int, format: int, imageSize: int, data: cdata )" },
  { dao__glCompressedTexSubImage1D, "glCompressedTexSubImage1D( target: int, level: int, xoffset: int, width: int, format: int, imageSize: int, data: cdata )" },
  { dao__glGetCompressedTexImage, "glGetCompressedTexImage( target: int, lod: int, img: cdata )" },
  { dao__glActiveTexture, "glActiveTexture( texture: int )" },
  { dao__glClientActiveTexture, "glClientActiveTexture( texture: int )" },
  { dao__glMultiTexCoord1d, "glMultiTexCoord1d( target: int, s: double )" },
  { dao__glMultiTexCoord1dv, "glMultiTexCoord1dv( target: int, v: array<double> )" },
  { dao__glMultiTexCoord1f, "glMultiTexCoord1f( target: int, s: float )" },
  { dao__glMultiTexCoord1fv, "glMultiTexCoord1fv( target: int, v: array<float> )" },
  { dao__glMultiTexCoord1i, "glMultiTexCoord1i( target: int, s: int )" },
  { dao__glMultiTexCoord1iv, "glMultiTexCoord1iv( target: int, v: array<int> )" },
  { dao__glMultiTexCoord1s, "glMultiTexCoord1s( target: int, s: int )" },
  { dao__glMultiTexCoord1sv, "glMultiTexCoord1sv( target: int, v: array<int> )" },
  { dao__glMultiTexCoord2d, "glMultiTexCoord2d( target: int, s: double, t: double )" },
  { dao__glMultiTexCoord2dv, "glMultiTexCoord2dv( target: int, v: array<double> )" },
  { dao__glMultiTexCoord2f, "glMultiTexCoord2f( target: int, s: float, t: float )" },
  { dao__glMultiTexCoord2fv, "glMultiTexCoord2fv( target: int, v: array<float> )" },
  { dao__glMultiTexCoord2i, "glMultiTexCoord2i( target: int, s: int, t: int )" },
  { dao__glMultiTexCoord2iv, "glMultiTexCoord2iv( target: int, v: array<int> )" },
  { dao__glMultiTexCoord2s, "glMultiTexCoord2s( target: int, s: int, t: int )" },
  { dao__glMultiTexCoord2sv, "glMultiTexCoord2sv( target: int, v: array<int> )" },
  { dao__glMultiTexCoord3d, "glMultiTexCoord3d( target: int, s: double, t: double, r: double )" },
  { dao__glMultiTexCoord3dv, "glMultiTexCoord3dv( target: int, v: array<double> )" },
  { dao__glMultiTexCoord3f, "glMultiTexCoord3f( target: int, s: float, t: float, r: float )" },
  { dao__glMultiTexCoord3fv, "glMultiTexCoord3fv( target: int, v: array<float> )" },
  { dao__glMultiTexCoord3i, "glMultiTexCoord3i( target: int, s: int, t: int, r: int )" },
  { dao__glMultiTexCoord3iv, "glMultiTexCoord3iv( target: int, v: array<int> )" },
  { dao__glMultiTexCoord3s, "glMultiTexCoord3s( target: int, s: int, t: int, r: int )" },
  { dao__glMultiTexCoord3sv, "glMultiTexCoord3sv( target: int, v: array<int> )" },
  { dao__glMultiTexCoord4d, "glMultiTexCoord4d( target: int, s: double, t: double, r: double, q: double )" },
  { dao__glMultiTexCoord4dv, "glMultiTexCoord4dv( target: int, v: array<double> )" },
  { dao__glMultiTexCoord4f, "glMultiTexCoord4f( target: int, s: float, t: float, r: float, q: float )" },
  { dao__glMultiTexCoord4fv, "glMultiTexCoord4fv( target: int, v: array<float> )" },
  { dao__glMultiTexCoord4i, "glMultiTexCoord4i( target: int, s: int, t: int, r: int, q: int )" },
  { dao__glMultiTexCoord4iv, "glMultiTexCoord4iv( target: int, v: array<int> )" },
  { dao__glMultiTexCoord4s, "glMultiTexCoord4s( target: int, s: int, t: int, r: int, q: int )" },
  { dao__glMultiTexCoord4sv, "glMultiTexCoord4sv( target: int, v: array<int> )" },
  { dao__glFogCoordf, "glFogCoordf( coord: float )" },
  { dao__glFogCoordfv, "glFogCoordfv( coord: array<float> )" },
  { dao__glFogCoordd, "glFogCoordd( coord: double )" },
  { dao__glFogCoorddv, "glFogCoorddv( coord: array<double> )" },
  { dao__glFogCoordPointer, "glFogCoordPointer( type: int, stride: int, pointer: cdata )" },
  { dao__glSecondaryColor3b, "glSecondaryColor3b( red: int, green: int, blue: int )" },
  { dao__glSecondaryColor3bv, "glSecondaryColor3bv( v: array<int> )" },
  { dao__glSecondaryColor3d, "glSecondaryColor3d( red: double, green: double, blue: double )" },
  { dao__glSecondaryColor3dv, "glSecondaryColor3dv( v: array<double> )" },
  { dao__glSecondaryColor3f, "glSecondaryColor3f( red: float, green: float, blue: float )" },
  { dao__glSecondaryColor3fv, "glSecondaryColor3fv( v: array<float> )" },
  { dao__glSecondaryColor3i, "glSecondaryColor3i( red: int, green: int, blue: int )" },
  { dao__glSecondaryColor3iv, "glSecondaryColor3iv( v: array<int> )" },
  { dao__glSecondaryColor3s, "glSecondaryColor3s( red: int, green: int, blue: int )" },
  { dao__glSecondaryColor3sv, "glSecondaryColor3sv( v: array<int> )" },
  { dao__glSecondaryColor3ub, "glSecondaryColor3ub( red: int, green: int, blue: int )" },
  { dao__glSecondaryColor3ubv, "glSecondaryColor3ubv( v: array<int> )" },
  { dao__glSecondaryColor3ui, "glSecondaryColor3ui( red: int, green: int, blue: int )" },
  { dao__glSecondaryColor3uiv, "glSecondaryColor3uiv( v: array<int> )" },
  { dao__glSecondaryColor3us, "glSecondaryColor3us( red: int, green: int, blue: int )" },
  { dao__glSecondaryColor3usv, "glSecondaryColor3usv( v: array<int> )" },
  { dao__glSecondaryColorPointer, "glSecondaryColorPointer( size: int, type: int, stride: int, pointer: cdata )" },
  { dao__glPointParameterf, "glPointParameterf( pname: int, param: float )" },
  { dao__glPointParameterfv, "glPointParameterfv( pname: int, params: array<float> )" },
  { dao__glPointParameteri, "glPointParameteri( pname: int, param: int )" },
  { dao__glPointParameteriv, "glPointParameteriv( pname: int, params: array<int> )" },
  { dao__glBlendFuncSeparate, "glBlendFuncSeparate( srcRGB: int, dstRGB: int, srcAlpha: int, dstAlpha: int )" },
  { dao__glMultiDrawArrays, "glMultiDrawArrays( mode: int, first: array<int>, count: array<int>, primcount: int )" },
  { dao__glWindowPos2d, "glWindowPos2d( x: double, y: double )" },
  { dao__glWindowPos2dv, "glWindowPos2dv( v: array<double> )" },
  { dao__glWindowPos2f, "glWindowPos2f( x: float, y: float )" },
  { dao__glWindowPos2fv, "glWindowPos2fv( v: array<float> )" },
  { dao__glWindowPos2i, "glWindowPos2i( x: int, y: int )" },
  { dao__glWindowPos2iv, "glWindowPos2iv( v: array<int> )" },
  { dao__glWindowPos2s, "glWindowPos2s( x: int, y: int )" },
  { dao__glWindowPos2sv, "glWindowPos2sv( v: array<int> )" },
  { dao__glWindowPos3d, "glWindowPos3d( x: double, y: double, z: double )" },
  { dao__glWindowPos3dv, "glWindowPos3dv( v: array<double> )" },
  { dao__glWindowPos3f, "glWindowPos3f( x: float, y: float, z: float )" },
  { dao__glWindowPos3fv, "glWindowPos3fv( v: array<float> )" },
  { dao__glWindowPos3i, "glWindowPos3i( x: int, y: int, z: int )" },
  { dao__glWindowPos3iv, "glWindowPos3iv( v: array<int> )" },
  { dao__glWindowPos3s, "glWindowPos3s( x: int, y: int, z: int )" },
  { dao__glWindowPos3sv, "glWindowPos3sv( v: array<int> )" },
  { dao__glGenQueries, "glGenQueries( n: int, ids: int )=>int" },
  { dao__glDeleteQueries, "glDeleteQueries( n: int, ids: array<int> )" },
  { dao__glIsQuery, "glIsQuery( id: int )=>int" },
  { dao__glBeginQuery, "glBeginQuery( target: int, id: int )" },
  { dao__glEndQuery, "glEndQuery( target: int )" },
  { dao__glGetQueryiv, "glGetQueryiv( target: int, pname: int, params: int )=>int" },
  { dao__glGetQueryObjectiv, "glGetQueryObjectiv( id: int, pname: int, params: int )=>int" },
  { dao__glGetQueryObjectuiv, "glGetQueryObjectuiv( id: int, pname: int, params: int )=>int" },
  { dao__glBindBuffer, "glBindBuffer( target: int, buffer: int )" },
  { dao__glDeleteBuffers, "glDeleteBuffers( n: int, buffers: array<int> )" },
  { dao__glGenBuffers, "glGenBuffers( n: int, buffers: int )=>int" },
  { dao__glIsBuffer, "glIsBuffer( buffer: int )=>int" },
  { dao__glBufferData, "glBufferData( target: int, size: int, data: cdata, usage: int )" },
  { dao__glBufferSubData, "glBufferSubData( target: int, offset: int, size: int, data: cdata )" },
  { dao__glGetBufferSubData, "glGetBufferSubData( target: int, offset: int, size: int, data: cdata )" },
  { dao__glMapBuffer, "glMapBuffer( target: int, access: int )=>cdata" },
  { dao__glUnmapBuffer, "glUnmapBuffer( target: int )=>int" },
  { dao__glGetBufferParameteriv, "glGetBufferParameteriv( target: int, pname: int, params: int )=>int" },
  { dao__glDrawBuffers, "glDrawBuffers( n: int, bufs: array<int> )" },
  { dao__glVertexAttrib1d, "glVertexAttrib1d( index: int, x: double )" },
  { dao__glVertexAttrib1dv, "glVertexAttrib1dv( index: int, v: array<double> )" },
  { dao__glVertexAttrib1f, "glVertexAttrib1f( index: int, x: float )" },
  { dao__glVertexAttrib1fv, "glVertexAttrib1fv( index: int, v: array<float> )" },
  { dao__glVertexAttrib1s, "glVertexAttrib1s( index: int, x: int )" },
  { dao__glVertexAttrib1sv, "glVertexAttrib1sv( index: int, v: array<int> )" },
  { dao__glVertexAttrib2d, "glVertexAttrib2d( index: int, x: double, y: double )" },
  { dao__glVertexAttrib2dv, "glVertexAttrib2dv( index: int, v: array<double> )" },
  { dao__glVertexAttrib2f, "glVertexAttrib2f( index: int, x: float, y: float )" },
  { dao__glVertexAttrib2fv, "glVertexAttrib2fv( index: int, v: array<float> )" },
  { dao__glVertexAttrib2s, "glVertexAttrib2s( index: int, x: int, y: int )" },
  { dao__glVertexAttrib2sv, "glVertexAttrib2sv( index: int, v: array<int> )" },
  { dao__glVertexAttrib3d, "glVertexAttrib3d( index: int, x: double, y: double, z: double )" },
  { dao__glVertexAttrib3dv, "glVertexAttrib3dv( index: int, v: array<double> )" },
  { dao__glVertexAttrib3f, "glVertexAttrib3f( index: int, x: float, y: float, z: float )" },
  { dao__glVertexAttrib3fv, "glVertexAttrib3fv( index: int, v: array<float> )" },
  { dao__glVertexAttrib3s, "glVertexAttrib3s( index: int, x: int, y: int, z: int )" },
  { dao__glVertexAttrib3sv, "glVertexAttrib3sv( index: int, v: array<int> )" },
  { dao__glVertexAttrib4Nbv, "glVertexAttrib4Nbv( index: int, v: array<int> )" },
  { dao__glVertexAttrib4Niv, "glVertexAttrib4Niv( index: int, v: array<int> )" },
  { dao__glVertexAttrib4Nsv, "glVertexAttrib4Nsv( index: int, v: array<int> )" },
  { dao__glVertexAttrib4Nub, "glVertexAttrib4Nub( index: int, x: int, y: int, z: int, w: int )" },
  { dao__glVertexAttrib4Nubv, "glVertexAttrib4Nubv( index: int, v: array<int> )" },
  { dao__glVertexAttrib4Nuiv, "glVertexAttrib4Nuiv( index: int, v: array<int> )" },
  { dao__glVertexAttrib4Nusv, "glVertexAttrib4Nusv( index: int, v: array<int> )" },
  { dao__glVertexAttrib4bv, "glVertexAttrib4bv( index: int, v: array<int> )" },
  { dao__glVertexAttrib4d, "glVertexAttrib4d( index: int, x: double, y: double, z: double, w: double )" },
  { dao__glVertexAttrib4dv, "glVertexAttrib4dv( index: int, v: array<double> )" },
  { dao__glVertexAttrib4f, "glVertexAttrib4f( index: int, x: float, y: float, z: float, w: float )" },
  { dao__glVertexAttrib4fv, "glVertexAttrib4fv( index: int, v: array<float> )" },
  { dao__glVertexAttrib4iv, "glVertexAttrib4iv( index: int, v: array<int> )" },
  { dao__glVertexAttrib4s, "glVertexAttrib4s( index: int, x: int, y: int, z: int, w: int )" },
  { dao__glVertexAttrib4sv, "glVertexAttrib4sv( index: int, v: array<int> )" },
  { dao__glVertexAttrib4ubv, "glVertexAttrib4ubv( index: int, v: array<int> )" },
  { dao__glVertexAttrib4uiv, "glVertexAttrib4uiv( index: int, v: array<int> )" },
  { dao__glVertexAttrib4usv, "glVertexAttrib4usv( index: int, v: array<int> )" },
  { dao__glVertexAttribPointer, "glVertexAttribPointer( index: int, size: int, type: int, normalized: int, stride: int, pointer: cdata )" },
  { dao__glEnableVertexAttribArray, "glEnableVertexAttribArray( index: int )" },
  { dao__glDisableVertexAttribArray, "glDisableVertexAttribArray( index: int )" },
  { dao__glGetVertexAttribdv, "glGetVertexAttribdv( index: int, pname: int, params: double )=>double" },
  { dao__glGetVertexAttribfv, "glGetVertexAttribfv( index: int, pname: int, params: float )=>float" },
  { dao__glGetVertexAttribiv, "glGetVertexAttribiv( index: int, pname: int, params: int )=>int" },
  { dao__glDeleteShader, "glDeleteShader( shader: int )" },
  { dao__glDetachShader, "glDetachShader( program: int, shader: int )" },
  { dao__glCreateShader, "glCreateShader( type: int )=>int" },
  { dao__glCompileShader, "glCompileShader( shader: int )" },
  { dao__glCreateProgram, "glCreateProgram(  )=>int" },
  { dao__glAttachShader, "glAttachShader( program: int, shader: int )" },
  { dao__glLinkProgram, "glLinkProgram( program: int )" },
  { dao__glUseProgram, "glUseProgram( program: int )" },
  { dao__glDeleteProgram, "glDeleteProgram( program: int )" },
  { dao__glValidateProgram, "glValidateProgram( program: int )" },
  { dao__glUniform1f, "glUniform1f( location: int, v0: float )" },
  { dao__glUniform2f, "glUniform2f( location: int, v0: float, v1: float )" },
  { dao__glUniform3f, "glUniform3f( location: int, v0: float, v1: float, v2: float )" },
  { dao__glUniform4f, "glUniform4f( location: int, v0: float, v1: float, v2: float, v3: float )" },
  { dao__glUniform1i, "glUniform1i( location: int, v0: int )" },
  { dao__glUniform2i, "glUniform2i( location: int, v0: int, v1: int )" },
  { dao__glUniform3i, "glUniform3i( location: int, v0: int, v1: int, v2: int )" },
  { dao__glUniform4i, "glUniform4i( location: int, v0: int, v1: int, v2: int, v3: int )" },
  { dao__glUniform1fv, "glUniform1fv( location: int, count: int, value: array<float> )" },
  { dao__glUniform2fv, "glUniform2fv( location: int, count: int, value: array<float> )" },
  { dao__glUniform3fv, "glUniform3fv( location: int, count: int, value: array<float> )" },
  { dao__glUniform4fv, "glUniform4fv( location: int, count: int, value: array<float> )" },
  { dao__glUniform1iv, "glUniform1iv( location: int, count: int, value: array<int> )" },
  { dao__glUniform2iv, "glUniform2iv( location: int, count: int, value: array<int> )" },
  { dao__glUniform3iv, "glUniform3iv( location: int, count: int, value: array<int> )" },
  { dao__glUniform4iv, "glUniform4iv( location: int, count: int, value: array<int> )" },
  { dao__glUniformMatrix2fv, "glUniformMatrix2fv( location: int, count: int, transpose: int, value: array<float> )" },
  { dao__glUniformMatrix3fv, "glUniformMatrix3fv( location: int, count: int, transpose: int, value: array<float> )" },
  { dao__glUniformMatrix4fv, "glUniformMatrix4fv( location: int, count: int, transpose: int, value: array<float> )" },
  { dao__glIsShader, "glIsShader( shader: int )=>int" },
  { dao__glIsProgram, "glIsProgram( program: int )=>int" },
  { dao__glGetShaderiv, "glGetShaderiv( shader: int, pname: int, params: int )=>int" },
  { dao__glGetProgramiv, "glGetProgramiv( program: int, pname: int, params: int )=>int" },
  { dao__glGetAttachedShaders, "glGetAttachedShaders( program: int, maxCount: int, count: int, shaders: int )=>tuple<int,int>" },
  { dao__glGetShaderInfoLog, "glGetShaderInfoLog( shader: int, bufSize: int, length: int, infoLog: string )=>int" },
  { dao__glGetProgramInfoLog, "glGetProgramInfoLog( program: int, bufSize: int, length: int, infoLog: string )=>int" },
  { dao__glGetUniformLocation, "glGetUniformLocation( program: int, name: string )=>int" },
  { dao__glGetActiveUniform, "glGetActiveUniform( program: int, index: int, bufSize: int, length: int, size: int, type: int, name: string )=>tuple<int,int,int>" },
  { dao__glGetUniformfv, "glGetUniformfv( program: int, location: int, params: float )=>float" },
  { dao__glGetUniformiv, "glGetUniformiv( program: int, location: int, params: int )=>int" },
  { dao__glGetShaderSource, "glGetShaderSource( shader: int, bufSize: int, length: int, source: string )=>int" },
  { dao__glBindAttribLocation, "glBindAttribLocation( program: int, index: int, name: string )" },
  { dao__glGetActiveAttrib, "glGetActiveAttrib( program: int, index: int, bufSize: int, length: int, size: int, type: int, name: string )=>tuple<int,int,int>" },
  { dao__glGetAttribLocation, "glGetAttribLocation( program: int, name: string )=>int" },
  { dao__glStencilFuncSeparate, "glStencilFuncSeparate( face: int, func: int, ref: int, mask: int )" },
  { dao__glStencilOpSeparate, "glStencilOpSeparate( face: int, fail: int, zfail: int, zpass: int )" },
  { dao__glStencilMaskSeparate, "glStencilMaskSeparate( face: int, mask: int )" },
  { dao__glUniformMatrix2x3fv, "glUniformMatrix2x3fv( location: int, count: int, transpose: int, value: float )" },
  { dao__glUniformMatrix3x2fv, "glUniformMatrix3x2fv( location: int, count: int, transpose: int, value: float )" },
  { dao__glUniformMatrix2x4fv, "glUniformMatrix2x4fv( location: int, count: int, transpose: int, value: float )" },
  { dao__glUniformMatrix4x2fv, "glUniformMatrix4x2fv( location: int, count: int, transpose: int, value: float )" },
  { dao__glUniformMatrix3x4fv, "glUniformMatrix3x4fv( location: int, count: int, transpose: int, value: float )" },
  { dao__glUniformMatrix4x3fv, "glUniformMatrix4x3fv( location: int, count: int, transpose: int, value: float )" },
  { NULL, NULL }
};
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glAccum( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int op = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  float value = (float) DaoValue_TryGetFloat( _p[1] );

  glAccum( op, value );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glAlphaFunc( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int func = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  float ref = (float) DaoValue_TryGetFloat( _p[1] );

  glAlphaFunc( func, ref );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glAreTexturesResident( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int n = (int) DaoValue_TryGetInteger( _p[0] );
  unsigned char* residences = (unsigned char*) DaoValue_TryGetChars( _p[2] );
  const unsigned int* textures = (const unsigned int*) DaoArray_ToUInt( (DaoArray*)_p[1] );

  GLboolean _glAreTexturesResident = glAreTexturesResident( n, textures, residences );
  DaoProcess_PutInteger( _proc, (daoint) _glAreTexturesResident );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glArrayElement( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int i = (int) DaoValue_TryGetInteger( _p[0] );

  glArrayElement( i );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glBegin( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int mode = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glBegin( mode );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glBindTexture( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int texture = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  glBindTexture( target, texture );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glBitmap( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int width = (int) DaoValue_TryGetInteger( _p[0] );
  int height = (int) DaoValue_TryGetInteger( _p[1] );
  float xorig = (float) DaoValue_TryGetFloat( _p[2] );
  float yorig = (float) DaoValue_TryGetFloat( _p[3] );
  float xmove = (float) DaoValue_TryGetFloat( _p[4] );
  float ymove = (float) DaoValue_TryGetFloat( _p[5] );
  const unsigned char* bitmap = (const unsigned char*) DaoValue_TryGetChars( _p[6] );

  glBitmap( width, height, xorig, yorig, xmove, ymove, bitmap );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glBlendColor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float red = (float) DaoValue_TryGetFloat( _p[0] );
  float green = (float) DaoValue_TryGetFloat( _p[1] );
  float blue = (float) DaoValue_TryGetFloat( _p[2] );
  float alpha = (float) DaoValue_TryGetFloat( _p[3] );

  glBlendColor( red, green, blue, alpha );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glBlendEquation( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int mode = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glBlendEquation( mode );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glBlendEquationSeparate( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int modeRGB = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int modeAlpha = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  glBlendEquationSeparate( modeRGB, modeAlpha );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glBlendFunc( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int sfactor = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int dfactor = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  glBlendFunc( sfactor, dfactor );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glCallList( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int list = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glCallList( list );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glCallLists( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int n = (int) DaoValue_TryGetInteger( _p[0] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  const void* lists = (const void*) DaoValue_TryGetCdata( _p[2] );

  glCallLists( n, type, lists );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glClear( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int mask = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glClear( mask );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glClearAccum( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float red = (float) DaoValue_TryGetFloat( _p[0] );
  float green = (float) DaoValue_TryGetFloat( _p[1] );
  float blue = (float) DaoValue_TryGetFloat( _p[2] );
  float alpha = (float) DaoValue_TryGetFloat( _p[3] );

  glClearAccum( red, green, blue, alpha );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glClearColor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float red = (float) DaoValue_TryGetFloat( _p[0] );
  float green = (float) DaoValue_TryGetFloat( _p[1] );
  float blue = (float) DaoValue_TryGetFloat( _p[2] );
  float alpha = (float) DaoValue_TryGetFloat( _p[3] );

  glClearColor( red, green, blue, alpha );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glClearDepth( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double depth = (double) DaoValue_TryGetDouble( _p[0] );

  glClearDepth( depth );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glClearIndex( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float c = (float) DaoValue_TryGetFloat( _p[0] );

  glClearIndex( c );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glClearStencil( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int s = (int) DaoValue_TryGetInteger( _p[0] );

  glClearStencil( s );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glClipPlane( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int plane = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const double* equation = (const double*) DaoArray_ToDouble( (DaoArray*)_p[1] );

  glClipPlane( plane, equation );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor3b( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  signed char red = (signed char) DaoValue_TryGetInteger( _p[0] );
  signed char green = (signed char) DaoValue_TryGetInteger( _p[1] );
  signed char blue = (signed char) DaoValue_TryGetInteger( _p[2] );

  glColor3b( red, green, blue );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor3bv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const signed char* v = (const signed char*) DaoArray_ToSByte( (DaoArray*)_p[0] );

  glColor3bv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor3d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double red = (double) DaoValue_TryGetDouble( _p[0] );
  double green = (double) DaoValue_TryGetDouble( _p[1] );
  double blue = (double) DaoValue_TryGetDouble( _p[2] );

  glColor3d( red, green, blue );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor3dv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const double* v = (const double*) DaoArray_ToDouble( (DaoArray*)_p[0] );

  glColor3dv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor3f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float red = (float) DaoValue_TryGetFloat( _p[0] );
  float green = (float) DaoValue_TryGetFloat( _p[1] );
  float blue = (float) DaoValue_TryGetFloat( _p[2] );

  glColor3f( red, green, blue );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor3fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const float* v = (const float*) DaoArray_ToFloat( (DaoArray*)_p[0] );

  glColor3fv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor3i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int red = (int) DaoValue_TryGetInteger( _p[0] );
  int green = (int) DaoValue_TryGetInteger( _p[1] );
  int blue = (int) DaoValue_TryGetInteger( _p[2] );

  glColor3i( red, green, blue );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor3iv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const int* v = (const int*) DaoArray_ToSInt( (DaoArray*)_p[0] );

  glColor3iv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor3s( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  short red = (short) DaoValue_TryGetInteger( _p[0] );
  short green = (short) DaoValue_TryGetInteger( _p[1] );
  short blue = (short) DaoValue_TryGetInteger( _p[2] );

  glColor3s( red, green, blue );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor3sv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const short* v = (const short*) DaoArray_ToSShort( (DaoArray*)_p[0] );

  glColor3sv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor3ub( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned char red = (unsigned char) DaoValue_TryGetInteger( _p[0] );
  unsigned char green = (unsigned char) DaoValue_TryGetInteger( _p[1] );
  unsigned char blue = (unsigned char) DaoValue_TryGetInteger( _p[2] );

  glColor3ub( red, green, blue );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor3ubv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const unsigned char* v = (const unsigned char*) DaoArray_ToUByte( (DaoArray*)_p[0] );

  glColor3ubv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor3ui( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int red = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int green = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  unsigned int blue = (unsigned int) DaoValue_TryGetInteger( _p[2] );

  glColor3ui( red, green, blue );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor3uiv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const unsigned int* v = (const unsigned int*) DaoArray_ToUInt( (DaoArray*)_p[0] );

  glColor3uiv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor3us( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned short red = (unsigned short) DaoValue_TryGetInteger( _p[0] );
  unsigned short green = (unsigned short) DaoValue_TryGetInteger( _p[1] );
  unsigned short blue = (unsigned short) DaoValue_TryGetInteger( _p[2] );

  glColor3us( red, green, blue );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor3usv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const unsigned short* v = (const unsigned short*) DaoArray_ToUShort( (DaoArray*)_p[0] );

  glColor3usv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor4b( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  signed char red = (signed char) DaoValue_TryGetInteger( _p[0] );
  signed char green = (signed char) DaoValue_TryGetInteger( _p[1] );
  signed char blue = (signed char) DaoValue_TryGetInteger( _p[2] );
  signed char alpha = (signed char) DaoValue_TryGetInteger( _p[3] );

  glColor4b( red, green, blue, alpha );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor4bv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const signed char* v = (const signed char*) DaoArray_ToSByte( (DaoArray*)_p[0] );

  glColor4bv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor4d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double red = (double) DaoValue_TryGetDouble( _p[0] );
  double green = (double) DaoValue_TryGetDouble( _p[1] );
  double blue = (double) DaoValue_TryGetDouble( _p[2] );
  double alpha = (double) DaoValue_TryGetDouble( _p[3] );

  glColor4d( red, green, blue, alpha );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor4dv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const double* v = (const double*) DaoArray_ToDouble( (DaoArray*)_p[0] );

  glColor4dv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor4f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float red = (float) DaoValue_TryGetFloat( _p[0] );
  float green = (float) DaoValue_TryGetFloat( _p[1] );
  float blue = (float) DaoValue_TryGetFloat( _p[2] );
  float alpha = (float) DaoValue_TryGetFloat( _p[3] );

  glColor4f( red, green, blue, alpha );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor4fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const float* v = (const float*) DaoArray_ToFloat( (DaoArray*)_p[0] );

  glColor4fv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor4i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int red = (int) DaoValue_TryGetInteger( _p[0] );
  int green = (int) DaoValue_TryGetInteger( _p[1] );
  int blue = (int) DaoValue_TryGetInteger( _p[2] );
  int alpha = (int) DaoValue_TryGetInteger( _p[3] );

  glColor4i( red, green, blue, alpha );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor4iv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const int* v = (const int*) DaoArray_ToSInt( (DaoArray*)_p[0] );

  glColor4iv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor4s( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  short red = (short) DaoValue_TryGetInteger( _p[0] );
  short green = (short) DaoValue_TryGetInteger( _p[1] );
  short blue = (short) DaoValue_TryGetInteger( _p[2] );
  short alpha = (short) DaoValue_TryGetInteger( _p[3] );

  glColor4s( red, green, blue, alpha );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor4sv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const short* v = (const short*) DaoArray_ToSShort( (DaoArray*)_p[0] );

  glColor4sv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor4ub( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned char red = (unsigned char) DaoValue_TryGetInteger( _p[0] );
  unsigned char green = (unsigned char) DaoValue_TryGetInteger( _p[1] );
  unsigned char blue = (unsigned char) DaoValue_TryGetInteger( _p[2] );
  unsigned char alpha = (unsigned char) DaoValue_TryGetInteger( _p[3] );

  glColor4ub( red, green, blue, alpha );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor4ubv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const unsigned char* v = (const unsigned char*) DaoArray_ToUByte( (DaoArray*)_p[0] );

  glColor4ubv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor4ui( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int red = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int green = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  unsigned int blue = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  unsigned int alpha = (unsigned int) DaoValue_TryGetInteger( _p[3] );

  glColor4ui( red, green, blue, alpha );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor4uiv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const unsigned int* v = (const unsigned int*) DaoArray_ToUInt( (DaoArray*)_p[0] );

  glColor4uiv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor4us( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned short red = (unsigned short) DaoValue_TryGetInteger( _p[0] );
  unsigned short green = (unsigned short) DaoValue_TryGetInteger( _p[1] );
  unsigned short blue = (unsigned short) DaoValue_TryGetInteger( _p[2] );
  unsigned short alpha = (unsigned short) DaoValue_TryGetInteger( _p[3] );

  glColor4us( red, green, blue, alpha );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColor4usv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const unsigned short* v = (const unsigned short*) DaoArray_ToUShort( (DaoArray*)_p[0] );

  glColor4usv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColorMask( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned char red = (unsigned char) DaoValue_TryGetInteger( _p[0] );
  unsigned char green = (unsigned char) DaoValue_TryGetInteger( _p[1] );
  unsigned char blue = (unsigned char) DaoValue_TryGetInteger( _p[2] );
  unsigned char alpha = (unsigned char) DaoValue_TryGetInteger( _p[3] );

  glColorMask( red, green, blue, alpha );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColorMaterial( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int face = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int mode = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  glColorMaterial( face, mode );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColorPointer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int size = (int) DaoValue_TryGetInteger( _p[0] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int stride = (int) DaoValue_TryGetInteger( _p[2] );
  const void* pointer = (const void*) DaoValue_TryGetCdata( _p[3] );

  glColorPointer( size, type, stride, pointer );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColorSubTable( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int start = (int) DaoValue_TryGetInteger( _p[1] );
  int count = (int) DaoValue_TryGetInteger( _p[2] );
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[3] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[4] );
  const void* data = (const void*) DaoValue_TryGetCdata( _p[5] );

  glColorSubTable( target, start, count, format, type, data );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColorTable( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int internalformat = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int width = (int) DaoValue_TryGetInteger( _p[2] );
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[3] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[4] );
  const void* table = (const void*) DaoValue_TryGetCdata( _p[5] );

  glColorTable( target, internalformat, width, format, type, table );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColorTableParameterfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  const float* params = (const float*) DaoArray_ToFloat( (DaoArray*)_p[2] );

  glColorTableParameterfv( target, pname, params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glColorTableParameteriv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  const int* params = (const int*) DaoArray_ToSInt( (DaoArray*)_p[2] );

  glColorTableParameteriv( target, pname, params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glConvolutionFilter1D( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int internalformat = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int width = (int) DaoValue_TryGetInteger( _p[2] );
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[3] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[4] );
  const void* image = (const void*) DaoValue_TryGetCdata( _p[5] );

  glConvolutionFilter1D( target, internalformat, width, format, type, image );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glConvolutionFilter2D( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int internalformat = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int width = (int) DaoValue_TryGetInteger( _p[2] );
  int height = (int) DaoValue_TryGetInteger( _p[3] );
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[4] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[5] );
  const void* image = (const void*) DaoValue_TryGetCdata( _p[6] );

  glConvolutionFilter2D( target, internalformat, width, height, format, type, image );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glConvolutionParameterf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  float params = (float) DaoValue_TryGetFloat( _p[2] );

  glConvolutionParameterf( target, pname, params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glConvolutionParameterfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  const float* params = (const float*) DaoArray_ToFloat( (DaoArray*)_p[2] );

  glConvolutionParameterfv( target, pname, params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glConvolutionParameteri( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int params = (int) DaoValue_TryGetInteger( _p[2] );

  glConvolutionParameteri( target, pname, params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glConvolutionParameteriv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  const int* params = (const int*) DaoArray_ToSInt( (DaoArray*)_p[2] );

  glConvolutionParameteriv( target, pname, params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glCopyColorSubTable( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int start = (int) DaoValue_TryGetInteger( _p[1] );
  int x = (int) DaoValue_TryGetInteger( _p[2] );
  int y = (int) DaoValue_TryGetInteger( _p[3] );
  int width = (int) DaoValue_TryGetInteger( _p[4] );

  glCopyColorSubTable( target, start, x, y, width );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glCopyColorTable( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int internalformat = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int x = (int) DaoValue_TryGetInteger( _p[2] );
  int y = (int) DaoValue_TryGetInteger( _p[3] );
  int width = (int) DaoValue_TryGetInteger( _p[4] );

  glCopyColorTable( target, internalformat, x, y, width );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glCopyConvolutionFilter1D( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int internalformat = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int x = (int) DaoValue_TryGetInteger( _p[2] );
  int y = (int) DaoValue_TryGetInteger( _p[3] );
  int width = (int) DaoValue_TryGetInteger( _p[4] );

  glCopyConvolutionFilter1D( target, internalformat, x, y, width );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glCopyConvolutionFilter2D( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int internalformat = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int x = (int) DaoValue_TryGetInteger( _p[2] );
  int y = (int) DaoValue_TryGetInteger( _p[3] );
  int width = (int) DaoValue_TryGetInteger( _p[4] );
  int height = (int) DaoValue_TryGetInteger( _p[5] );

  glCopyConvolutionFilter2D( target, internalformat, x, y, width, height );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glCopyPixels( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int x = (int) DaoValue_TryGetInteger( _p[0] );
  int y = (int) DaoValue_TryGetInteger( _p[1] );
  int width = (int) DaoValue_TryGetInteger( _p[2] );
  int height = (int) DaoValue_TryGetInteger( _p[3] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[4] );

  glCopyPixels( x, y, width, height, type );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glCopyTexImage1D( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int level = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned int internalformat = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  int x = (int) DaoValue_TryGetInteger( _p[3] );
  int y = (int) DaoValue_TryGetInteger( _p[4] );
  int width = (int) DaoValue_TryGetInteger( _p[5] );
  int border = (int) DaoValue_TryGetInteger( _p[6] );

  glCopyTexImage1D( target, level, internalformat, x, y, width, border );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glCopyTexImage2D( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int level = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned int internalformat = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  int x = (int) DaoValue_TryGetInteger( _p[3] );
  int y = (int) DaoValue_TryGetInteger( _p[4] );
  int width = (int) DaoValue_TryGetInteger( _p[5] );
  int height = (int) DaoValue_TryGetInteger( _p[6] );
  int border = (int) DaoValue_TryGetInteger( _p[7] );

  glCopyTexImage2D( target, level, internalformat, x, y, width, height, border );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glCopyTexSubImage1D( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int level = (int) DaoValue_TryGetInteger( _p[1] );
  int xoffset = (int) DaoValue_TryGetInteger( _p[2] );
  int x = (int) DaoValue_TryGetInteger( _p[3] );
  int y = (int) DaoValue_TryGetInteger( _p[4] );
  int width = (int) DaoValue_TryGetInteger( _p[5] );

  glCopyTexSubImage1D( target, level, xoffset, x, y, width );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glCopyTexSubImage2D( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int level = (int) DaoValue_TryGetInteger( _p[1] );
  int xoffset = (int) DaoValue_TryGetInteger( _p[2] );
  int yoffset = (int) DaoValue_TryGetInteger( _p[3] );
  int x = (int) DaoValue_TryGetInteger( _p[4] );
  int y = (int) DaoValue_TryGetInteger( _p[5] );
  int width = (int) DaoValue_TryGetInteger( _p[6] );
  int height = (int) DaoValue_TryGetInteger( _p[7] );

  glCopyTexSubImage2D( target, level, xoffset, yoffset, x, y, width, height );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glCopyTexSubImage3D( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int level = (int) DaoValue_TryGetInteger( _p[1] );
  int xoffset = (int) DaoValue_TryGetInteger( _p[2] );
  int yoffset = (int) DaoValue_TryGetInteger( _p[3] );
  int zoffset = (int) DaoValue_TryGetInteger( _p[4] );
  int x = (int) DaoValue_TryGetInteger( _p[5] );
  int y = (int) DaoValue_TryGetInteger( _p[6] );
  int width = (int) DaoValue_TryGetInteger( _p[7] );
  int height = (int) DaoValue_TryGetInteger( _p[8] );

  glCopyTexSubImage3D( target, level, xoffset, yoffset, zoffset, x, y, width, height );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glCullFace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int mode = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glCullFace( mode );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glDeleteLists( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int list = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int range = (int) DaoValue_TryGetInteger( _p[1] );

  glDeleteLists( list, range );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glDeleteTextures( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int n = (int) DaoValue_TryGetInteger( _p[0] );
  const unsigned int* textures = (const unsigned int*) DaoArray_ToUInt( (DaoArray*)_p[1] );

  glDeleteTextures( n, textures );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glDepthFunc( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int func = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glDepthFunc( func );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glDepthMask( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned char flag = (unsigned char) DaoValue_TryGetInteger( _p[0] );

  glDepthMask( flag );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glDepthRange( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double zNear = (double) DaoValue_TryGetDouble( _p[0] );
  double zFar = (double) DaoValue_TryGetDouble( _p[1] );

  glDepthRange( zNear, zFar );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glDisable( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int cap = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glDisable( cap );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glDisableClientState( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int array = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glDisableClientState( array );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glDrawArrays( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int mode = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int first = (int) DaoValue_TryGetInteger( _p[1] );
  int count = (int) DaoValue_TryGetInteger( _p[2] );

  glDrawArrays( mode, first, count );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glDrawBuffer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int mode = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glDrawBuffer( mode );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glDrawElements( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int mode = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int count = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  const void* indices = (const void*) DaoValue_TryGetCdata( _p[3] );

  glDrawElements( mode, count, type, indices );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glDrawPixels( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int width = (int) DaoValue_TryGetInteger( _p[0] );
  int height = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[3] );
  const void* pixels = (const void*) DaoValue_TryGetCdata( _p[4] );

  glDrawPixels( width, height, format, type, pixels );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glDrawRangeElements( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int mode = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int start = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  unsigned int end = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  int count = (int) DaoValue_TryGetInteger( _p[3] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[4] );
  const void* indices = (const void*) DaoValue_TryGetCdata( _p[5] );

  glDrawRangeElements( mode, start, end, count, type, indices );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glEdgeFlag( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned char flag = (unsigned char) DaoValue_TryGetInteger( _p[0] );

  glEdgeFlag( flag );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glEdgeFlagPointer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int stride = (int) DaoValue_TryGetInteger( _p[0] );
  const void* pointer = (const void*) DaoValue_TryGetCdata( _p[1] );

  glEdgeFlagPointer( stride, pointer );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glEdgeFlagv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const unsigned char* flag = (const unsigned char*) DaoValue_TryGetChars( _p[0] );

  glEdgeFlagv( flag );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glEnable( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int cap = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glEnable( cap );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glEnableClientState( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int array = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glEnableClientState( array );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glEnd( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  glEnd(  );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glEndList( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  glEndList(  );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glEvalCoord1d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double u = (double) DaoValue_TryGetDouble( _p[0] );

  glEvalCoord1d( u );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glEvalCoord1dv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const double* u = (const double*) DaoArray_ToDouble( (DaoArray*)_p[0] );

  glEvalCoord1dv( u );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glEvalCoord1f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float u = (float) DaoValue_TryGetFloat( _p[0] );

  glEvalCoord1f( u );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glEvalCoord1fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const float* u = (const float*) DaoArray_ToFloat( (DaoArray*)_p[0] );

  glEvalCoord1fv( u );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glEvalCoord2d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double u = (double) DaoValue_TryGetDouble( _p[0] );
  double v = (double) DaoValue_TryGetDouble( _p[1] );

  glEvalCoord2d( u, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glEvalCoord2dv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const double* u = (const double*) DaoArray_ToDouble( (DaoArray*)_p[0] );

  glEvalCoord2dv( u );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glEvalCoord2f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float u = (float) DaoValue_TryGetFloat( _p[0] );
  float v = (float) DaoValue_TryGetFloat( _p[1] );

  glEvalCoord2f( u, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glEvalCoord2fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const float* u = (const float*) DaoArray_ToFloat( (DaoArray*)_p[0] );

  glEvalCoord2fv( u );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glEvalMesh1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int mode = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int i1 = (int) DaoValue_TryGetInteger( _p[1] );
  int i2 = (int) DaoValue_TryGetInteger( _p[2] );

  glEvalMesh1( mode, i1, i2 );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glEvalMesh2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int mode = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int i1 = (int) DaoValue_TryGetInteger( _p[1] );
  int i2 = (int) DaoValue_TryGetInteger( _p[2] );
  int j1 = (int) DaoValue_TryGetInteger( _p[3] );
  int j2 = (int) DaoValue_TryGetInteger( _p[4] );

  glEvalMesh2( mode, i1, i2, j1, j2 );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glEvalPoint1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int i = (int) DaoValue_TryGetInteger( _p[0] );

  glEvalPoint1( i );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glEvalPoint2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int i = (int) DaoValue_TryGetInteger( _p[0] );
  int j = (int) DaoValue_TryGetInteger( _p[1] );

  glEvalPoint2( i, j );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glFeedbackBuffer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int size = (int) DaoValue_TryGetInteger( _p[0] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  float buffer = (float) DaoValue_TryGetFloat( _p[2] );

  glFeedbackBuffer( size, type, &buffer );
  DaoProcess_PutFloat( _proc, (float) buffer );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glFinish( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  glFinish(  );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glFlush( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  glFlush(  );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glFogf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  float param = (float) DaoValue_TryGetFloat( _p[1] );

  glFogf( pname, param );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glFogfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const float* params = (const float*) DaoArray_ToFloat( (DaoArray*)_p[1] );

  glFogfv( pname, params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glFogi( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int param = (int) DaoValue_TryGetInteger( _p[1] );

  glFogi( pname, param );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glFogiv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const int* params = (const int*) DaoArray_ToSInt( (DaoArray*)_p[1] );

  glFogiv( pname, params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glFrontFace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int mode = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glFrontFace( mode );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glFrustum( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double left = (double) DaoValue_TryGetDouble( _p[0] );
  double right = (double) DaoValue_TryGetDouble( _p[1] );
  double bottom = (double) DaoValue_TryGetDouble( _p[2] );
  double top = (double) DaoValue_TryGetDouble( _p[3] );
  double zNear = (double) DaoValue_TryGetDouble( _p[4] );
  double zFar = (double) DaoValue_TryGetDouble( _p[5] );

  glFrustum( left, right, bottom, top, zNear, zFar );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGenLists( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int range = (int) DaoValue_TryGetInteger( _p[0] );

  GLuint _glGenLists = glGenLists( range );
  DaoProcess_PutInteger( _proc, (daoint) _glGenLists );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGenTextures( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int n = (int) DaoValue_TryGetInteger( _p[0] );
  unsigned int textures = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  glGenTextures( n, &textures );
  DaoProcess_PutInteger( _proc, (daoint) textures );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetBooleanv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned char* params = (unsigned char*) DaoValue_TryGetChars( _p[1] );

  glGetBooleanv( pname, params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetClipPlane( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int plane = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  double equation = (double) DaoValue_TryGetDouble( _p[1] );

  glGetClipPlane( plane, &equation );
  DaoProcess_PutDouble( _proc, (double) equation );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetColorTable( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  void* table = (void*) DaoValue_TryGetCdata( _p[3] );

  glGetColorTable( target, format, type, table );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetColorTableParameterfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  float params = (float) DaoValue_TryGetFloat( _p[2] );

  glGetColorTableParameterfv( target, pname, &params );
  DaoProcess_PutFloat( _proc, (float) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetColorTableParameteriv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int params = (int) DaoValue_TryGetInteger( _p[2] );

  glGetColorTableParameteriv( target, pname, &params );
  DaoProcess_PutInteger( _proc, (daoint) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetConvolutionFilter( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  void* image = (void*) DaoValue_TryGetCdata( _p[3] );

  glGetConvolutionFilter( target, format, type, image );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetConvolutionParameterfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  float params = (float) DaoValue_TryGetFloat( _p[2] );

  glGetConvolutionParameterfv( target, pname, &params );
  DaoProcess_PutFloat( _proc, (float) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetConvolutionParameteriv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int params = (int) DaoValue_TryGetInteger( _p[2] );

  glGetConvolutionParameteriv( target, pname, &params );
  DaoProcess_PutInteger( _proc, (daoint) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetDoublev( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  double params = (double) DaoValue_TryGetDouble( _p[1] );

  glGetDoublev( pname, &params );
  DaoProcess_PutDouble( _proc, (double) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetError( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  GLenum _glGetError = glGetError(  );
  DaoProcess_PutInteger( _proc, (daoint) _glGetError );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetFloatv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  float params = (float) DaoValue_TryGetFloat( _p[1] );

  glGetFloatv( pname, &params );
  DaoProcess_PutFloat( _proc, (float) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetHistogram( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned char reset = (unsigned char) DaoValue_TryGetInteger( _p[1] );
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[3] );
  void* values = (void*) DaoValue_TryGetCdata( _p[4] );

  glGetHistogram( target, reset, format, type, values );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetHistogramParameterfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  float params = (float) DaoValue_TryGetFloat( _p[2] );

  glGetHistogramParameterfv( target, pname, &params );
  DaoProcess_PutFloat( _proc, (float) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetHistogramParameteriv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int params = (int) DaoValue_TryGetInteger( _p[2] );

  glGetHistogramParameteriv( target, pname, &params );
  DaoProcess_PutInteger( _proc, (daoint) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetIntegerv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int params = (int) DaoValue_TryGetInteger( _p[1] );

  glGetIntegerv( pname, &params );
  DaoProcess_PutInteger( _proc, (daoint) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetLightfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int light = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  float params = (float) DaoValue_TryGetFloat( _p[2] );

  glGetLightfv( light, pname, &params );
  DaoProcess_PutFloat( _proc, (float) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetLightiv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int light = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int params = (int) DaoValue_TryGetInteger( _p[2] );

  glGetLightiv( light, pname, &params );
  DaoProcess_PutInteger( _proc, (daoint) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetMapdv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int query = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  double v = (double) DaoValue_TryGetDouble( _p[2] );

  glGetMapdv( target, query, &v );
  DaoProcess_PutDouble( _proc, (double) v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetMapfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int query = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  float v = (float) DaoValue_TryGetFloat( _p[2] );

  glGetMapfv( target, query, &v );
  DaoProcess_PutFloat( _proc, (float) v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetMapiv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int query = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int v = (int) DaoValue_TryGetInteger( _p[2] );

  glGetMapiv( target, query, &v );
  DaoProcess_PutInteger( _proc, (daoint) v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetMaterialfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int face = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  float params = (float) DaoValue_TryGetFloat( _p[2] );

  glGetMaterialfv( face, pname, &params );
  DaoProcess_PutFloat( _proc, (float) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetMaterialiv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int face = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int params = (int) DaoValue_TryGetInteger( _p[2] );

  glGetMaterialiv( face, pname, &params );
  DaoProcess_PutInteger( _proc, (daoint) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetMinmax( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned char reset = (unsigned char) DaoValue_TryGetInteger( _p[1] );
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[3] );
  void* values = (void*) DaoValue_TryGetCdata( _p[4] );

  glGetMinmax( target, reset, format, type, values );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetMinmaxParameterfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  float params = (float) DaoValue_TryGetFloat( _p[2] );

  glGetMinmaxParameterfv( target, pname, &params );
  DaoProcess_PutFloat( _proc, (float) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetMinmaxParameteriv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int params = (int) DaoValue_TryGetInteger( _p[2] );

  glGetMinmaxParameteriv( target, pname, &params );
  DaoProcess_PutInteger( _proc, (daoint) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetPixelMapfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int map = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  float values = (float) DaoValue_TryGetFloat( _p[1] );

  glGetPixelMapfv( map, &values );
  DaoProcess_PutFloat( _proc, (float) values );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetPixelMapuiv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int map = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int values = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  glGetPixelMapuiv( map, &values );
  DaoProcess_PutInteger( _proc, (daoint) values );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetPixelMapusv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int map = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned short values = (unsigned short) DaoValue_TryGetInteger( _p[1] );

  glGetPixelMapusv( map, &values );
  DaoProcess_PutInteger( _proc, (daoint) values );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetPolygonStipple( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned char* mask = (unsigned char*) DaoValue_TryGetChars( _p[0] );

  glGetPolygonStipple( mask );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetSeparableFilter( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  void* row = (void*) DaoValue_TryGetCdata( _p[3] );
  void* column = (void*) DaoValue_TryGetCdata( _p[4] );
  void* span = (void*) DaoValue_TryGetCdata( _p[5] );

  glGetSeparableFilter( target, format, type, row, column, span );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetString( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int name = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  const unsigned char* _glGetString = glGetString( name );
  DaoProcess_PutChars( _proc, (char*) _glGetString );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetTexEnvfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  float params = (float) DaoValue_TryGetFloat( _p[2] );

  glGetTexEnvfv( target, pname, &params );
  DaoProcess_PutFloat( _proc, (float) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetTexEnviv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int params = (int) DaoValue_TryGetInteger( _p[2] );

  glGetTexEnviv( target, pname, &params );
  DaoProcess_PutInteger( _proc, (daoint) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetTexGendv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int coord = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  double params = (double) DaoValue_TryGetDouble( _p[2] );

  glGetTexGendv( coord, pname, &params );
  DaoProcess_PutDouble( _proc, (double) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetTexGenfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int coord = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  float params = (float) DaoValue_TryGetFloat( _p[2] );

  glGetTexGenfv( coord, pname, &params );
  DaoProcess_PutFloat( _proc, (float) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetTexGeniv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int coord = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int params = (int) DaoValue_TryGetInteger( _p[2] );

  glGetTexGeniv( coord, pname, &params );
  DaoProcess_PutInteger( _proc, (daoint) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetTexImage( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int level = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[3] );
  void* pixels = (void*) DaoValue_TryGetCdata( _p[4] );

  glGetTexImage( target, level, format, type, pixels );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetTexLevelParameterfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int level = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  float params = (float) DaoValue_TryGetFloat( _p[3] );

  glGetTexLevelParameterfv( target, level, pname, &params );
  DaoProcess_PutFloat( _proc, (float) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetTexLevelParameteriv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int level = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  int params = (int) DaoValue_TryGetInteger( _p[3] );

  glGetTexLevelParameteriv( target, level, pname, &params );
  DaoProcess_PutInteger( _proc, (daoint) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetTexParameterfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  float params = (float) DaoValue_TryGetFloat( _p[2] );

  glGetTexParameterfv( target, pname, &params );
  DaoProcess_PutFloat( _proc, (float) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetTexParameteriv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int params = (int) DaoValue_TryGetInteger( _p[2] );

  glGetTexParameteriv( target, pname, &params );
  DaoProcess_PutInteger( _proc, (daoint) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glHint( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int mode = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  glHint( target, mode );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glHistogram( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int width = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned int internalformat = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  unsigned char sink = (unsigned char) DaoValue_TryGetInteger( _p[3] );

  glHistogram( target, width, internalformat, sink );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glIndexMask( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int mask = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glIndexMask( mask );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glIndexPointer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int stride = (int) DaoValue_TryGetInteger( _p[1] );
  const void* pointer = (const void*) DaoValue_TryGetCdata( _p[2] );

  glIndexPointer( type, stride, pointer );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glIndexd( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double c = (double) DaoValue_TryGetDouble( _p[0] );

  glIndexd( c );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glIndexdv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const double* c = (const double*) DaoArray_ToDouble( (DaoArray*)_p[0] );

  glIndexdv( c );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glIndexf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float c = (float) DaoValue_TryGetFloat( _p[0] );

  glIndexf( c );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glIndexfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const float* c = (const float*) DaoArray_ToFloat( (DaoArray*)_p[0] );

  glIndexfv( c );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glIndexi( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int c = (int) DaoValue_TryGetInteger( _p[0] );

  glIndexi( c );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glIndexiv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const int* c = (const int*) DaoArray_ToSInt( (DaoArray*)_p[0] );

  glIndexiv( c );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glIndexs( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  short c = (short) DaoValue_TryGetInteger( _p[0] );

  glIndexs( c );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glIndexsv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const short* c = (const short*) DaoArray_ToSShort( (DaoArray*)_p[0] );

  glIndexsv( c );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glIndexub( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned char c = (unsigned char) DaoValue_TryGetInteger( _p[0] );

  glIndexub( c );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glIndexubv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const unsigned char* c = (const unsigned char*) DaoArray_ToUByte( (DaoArray*)_p[0] );

  glIndexubv( c );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glInitNames( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  glInitNames(  );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glInterleavedArrays( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int stride = (int) DaoValue_TryGetInteger( _p[1] );
  const void* pointer = (const void*) DaoValue_TryGetCdata( _p[2] );

  glInterleavedArrays( format, stride, pointer );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glIsEnabled( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int cap = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  GLboolean _glIsEnabled = glIsEnabled( cap );
  DaoProcess_PutInteger( _proc, (daoint) _glIsEnabled );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glIsList( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int list = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  GLboolean _glIsList = glIsList( list );
  DaoProcess_PutInteger( _proc, (daoint) _glIsList );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glIsTexture( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int texture = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  GLboolean _glIsTexture = glIsTexture( texture );
  DaoProcess_PutInteger( _proc, (daoint) _glIsTexture );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glLightModelf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  float param = (float) DaoValue_TryGetFloat( _p[1] );

  glLightModelf( pname, param );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glLightModelfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const float* params = (const float*) DaoArray_ToFloat( (DaoArray*)_p[1] );

  glLightModelfv( pname, params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glLightModeli( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int param = (int) DaoValue_TryGetInteger( _p[1] );

  glLightModeli( pname, param );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glLightModeliv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const int* params = (const int*) DaoArray_ToSInt( (DaoArray*)_p[1] );

  glLightModeliv( pname, params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glLightf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int light = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  float param = (float) DaoValue_TryGetFloat( _p[2] );

  glLightf( light, pname, param );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glLightfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int light = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  const float* params = (const float*) DaoArray_ToFloat( (DaoArray*)_p[2] );

  glLightfv( light, pname, params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glLighti( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int light = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int param = (int) DaoValue_TryGetInteger( _p[2] );

  glLighti( light, pname, param );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glLightiv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int light = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  const int* params = (const int*) DaoArray_ToSInt( (DaoArray*)_p[2] );

  glLightiv( light, pname, params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glLineStipple( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int factor = (int) DaoValue_TryGetInteger( _p[0] );
  unsigned short pattern = (unsigned short) DaoValue_TryGetInteger( _p[1] );

  glLineStipple( factor, pattern );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glLineWidth( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float width = (float) DaoValue_TryGetFloat( _p[0] );

  glLineWidth( width );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glListBase( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int base = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glListBase( base );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glLoadIdentity( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  glLoadIdentity(  );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glLoadMatrixd( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const double* m = (const double*) DaoArray_ToDouble( (DaoArray*)_p[0] );

  glLoadMatrixd( m );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glLoadMatrixf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const float* m = (const float*) DaoArray_ToFloat( (DaoArray*)_p[0] );

  glLoadMatrixf( m );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glLoadName( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int name = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glLoadName( name );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glLogicOp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int opcode = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glLogicOp( opcode );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMap1d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  double u1 = (double) DaoValue_TryGetDouble( _p[1] );
  double u2 = (double) DaoValue_TryGetDouble( _p[2] );
  int stride = (int) DaoValue_TryGetInteger( _p[3] );
  int order = (int) DaoValue_TryGetInteger( _p[4] );
  const double* points = (const double*) DaoArray_ToDouble( (DaoArray*)_p[5] );

  glMap1d( target, u1, u2, stride, order, points );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMap1f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  float u1 = (float) DaoValue_TryGetFloat( _p[1] );
  float u2 = (float) DaoValue_TryGetFloat( _p[2] );
  int stride = (int) DaoValue_TryGetInteger( _p[3] );
  int order = (int) DaoValue_TryGetInteger( _p[4] );
  const float* points = (const float*) DaoArray_ToFloat( (DaoArray*)_p[5] );

  glMap1f( target, u1, u2, stride, order, points );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMap2d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  double u1 = (double) DaoValue_TryGetDouble( _p[1] );
  double u2 = (double) DaoValue_TryGetDouble( _p[2] );
  int ustride = (int) DaoValue_TryGetInteger( _p[3] );
  int uorder = (int) DaoValue_TryGetInteger( _p[4] );
  double v1 = (double) DaoValue_TryGetDouble( _p[5] );
  double v2 = (double) DaoValue_TryGetDouble( _p[6] );
  int vstride = (int) DaoValue_TryGetInteger( _p[7] );
  int vorder = (int) DaoValue_TryGetInteger( _p[8] );
  const double* points = (const double*) DaoArray_ToDouble( (DaoArray*)_p[9] );

  glMap2d( target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMap2f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  float u1 = (float) DaoValue_TryGetFloat( _p[1] );
  float u2 = (float) DaoValue_TryGetFloat( _p[2] );
  int ustride = (int) DaoValue_TryGetInteger( _p[3] );
  int uorder = (int) DaoValue_TryGetInteger( _p[4] );
  float v1 = (float) DaoValue_TryGetFloat( _p[5] );
  float v2 = (float) DaoValue_TryGetFloat( _p[6] );
  int vstride = (int) DaoValue_TryGetInteger( _p[7] );
  int vorder = (int) DaoValue_TryGetInteger( _p[8] );
  const float* points = (const float*) DaoArray_ToFloat( (DaoArray*)_p[9] );

  glMap2f( target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMapGrid1d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int un = (int) DaoValue_TryGetInteger( _p[0] );
  double u1 = (double) DaoValue_TryGetDouble( _p[1] );
  double u2 = (double) DaoValue_TryGetDouble( _p[2] );

  glMapGrid1d( un, u1, u2 );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMapGrid1f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int un = (int) DaoValue_TryGetInteger( _p[0] );
  float u1 = (float) DaoValue_TryGetFloat( _p[1] );
  float u2 = (float) DaoValue_TryGetFloat( _p[2] );

  glMapGrid1f( un, u1, u2 );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMapGrid2d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int un = (int) DaoValue_TryGetInteger( _p[0] );
  double u1 = (double) DaoValue_TryGetDouble( _p[1] );
  double u2 = (double) DaoValue_TryGetDouble( _p[2] );
  int vn = (int) DaoValue_TryGetInteger( _p[3] );
  double v1 = (double) DaoValue_TryGetDouble( _p[4] );
  double v2 = (double) DaoValue_TryGetDouble( _p[5] );

  glMapGrid2d( un, u1, u2, vn, v1, v2 );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMapGrid2f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int un = (int) DaoValue_TryGetInteger( _p[0] );
  float u1 = (float) DaoValue_TryGetFloat( _p[1] );
  float u2 = (float) DaoValue_TryGetFloat( _p[2] );
  int vn = (int) DaoValue_TryGetInteger( _p[3] );
  float v1 = (float) DaoValue_TryGetFloat( _p[4] );
  float v2 = (float) DaoValue_TryGetFloat( _p[5] );

  glMapGrid2f( un, u1, u2, vn, v1, v2 );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMaterialf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int face = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  float param = (float) DaoValue_TryGetFloat( _p[2] );

  glMaterialf( face, pname, param );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMaterialfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int face = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  const float* params = (const float*) DaoArray_ToFloat( (DaoArray*)_p[2] );

  glMaterialfv( face, pname, params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMateriali( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int face = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int param = (int) DaoValue_TryGetInteger( _p[2] );

  glMateriali( face, pname, param );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMaterialiv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int face = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  const int* params = (const int*) DaoArray_ToSInt( (DaoArray*)_p[2] );

  glMaterialiv( face, pname, params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMatrixMode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int mode = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glMatrixMode( mode );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMinmax( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int internalformat = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  unsigned char sink = (unsigned char) DaoValue_TryGetInteger( _p[2] );

  glMinmax( target, internalformat, sink );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultMatrixd( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const double* m = (const double*) DaoArray_ToDouble( (DaoArray*)_p[0] );

  glMultMatrixd( m );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultMatrixf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const float* m = (const float*) DaoArray_ToFloat( (DaoArray*)_p[0] );

  glMultMatrixf( m );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glNewList( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int list = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int mode = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  glNewList( list, mode );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glNormal3b( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  signed char nx = (signed char) DaoValue_TryGetInteger( _p[0] );
  signed char ny = (signed char) DaoValue_TryGetInteger( _p[1] );
  signed char nz = (signed char) DaoValue_TryGetInteger( _p[2] );

  glNormal3b( nx, ny, nz );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glNormal3bv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const signed char* v = (const signed char*) DaoArray_ToSByte( (DaoArray*)_p[0] );

  glNormal3bv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glNormal3d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double nx = (double) DaoValue_TryGetDouble( _p[0] );
  double ny = (double) DaoValue_TryGetDouble( _p[1] );
  double nz = (double) DaoValue_TryGetDouble( _p[2] );

  glNormal3d( nx, ny, nz );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glNormal3dv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const double* v = (const double*) DaoArray_ToDouble( (DaoArray*)_p[0] );

  glNormal3dv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glNormal3f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float nx = (float) DaoValue_TryGetFloat( _p[0] );
  float ny = (float) DaoValue_TryGetFloat( _p[1] );
  float nz = (float) DaoValue_TryGetFloat( _p[2] );

  glNormal3f( nx, ny, nz );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glNormal3fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const float* v = (const float*) DaoArray_ToFloat( (DaoArray*)_p[0] );

  glNormal3fv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glNormal3i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int nx = (int) DaoValue_TryGetInteger( _p[0] );
  int ny = (int) DaoValue_TryGetInteger( _p[1] );
  int nz = (int) DaoValue_TryGetInteger( _p[2] );

  glNormal3i( nx, ny, nz );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glNormal3iv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const int* v = (const int*) DaoArray_ToSInt( (DaoArray*)_p[0] );

  glNormal3iv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glNormal3s( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  short nx = (short) DaoValue_TryGetInteger( _p[0] );
  short ny = (short) DaoValue_TryGetInteger( _p[1] );
  short nz = (short) DaoValue_TryGetInteger( _p[2] );

  glNormal3s( nx, ny, nz );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glNormal3sv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const short* v = (const short*) DaoArray_ToSShort( (DaoArray*)_p[0] );

  glNormal3sv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glNormalPointer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int stride = (int) DaoValue_TryGetInteger( _p[1] );
  const void* pointer = (const void*) DaoValue_TryGetCdata( _p[2] );

  glNormalPointer( type, stride, pointer );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glOrtho( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double left = (double) DaoValue_TryGetDouble( _p[0] );
  double right = (double) DaoValue_TryGetDouble( _p[1] );
  double bottom = (double) DaoValue_TryGetDouble( _p[2] );
  double top = (double) DaoValue_TryGetDouble( _p[3] );
  double zNear = (double) DaoValue_TryGetDouble( _p[4] );
  double zFar = (double) DaoValue_TryGetDouble( _p[5] );

  glOrtho( left, right, bottom, top, zNear, zFar );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glPassThrough( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float token = (float) DaoValue_TryGetFloat( _p[0] );

  glPassThrough( token );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glPixelMapfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int map = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int mapsize = (int) DaoValue_TryGetInteger( _p[1] );
  const float* values = (const float*) DaoArray_ToFloat( (DaoArray*)_p[2] );

  glPixelMapfv( map, mapsize, values );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glPixelMapuiv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int map = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int mapsize = (int) DaoValue_TryGetInteger( _p[1] );
  const unsigned int* values = (const unsigned int*) DaoArray_ToUInt( (DaoArray*)_p[2] );

  glPixelMapuiv( map, mapsize, values );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glPixelMapusv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int map = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int mapsize = (int) DaoValue_TryGetInteger( _p[1] );
  const unsigned short* values = (const unsigned short*) DaoArray_ToUShort( (DaoArray*)_p[2] );

  glPixelMapusv( map, mapsize, values );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glPixelStoref( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  float param = (float) DaoValue_TryGetFloat( _p[1] );

  glPixelStoref( pname, param );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glPixelStorei( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int param = (int) DaoValue_TryGetInteger( _p[1] );

  glPixelStorei( pname, param );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glPixelTransferf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  float param = (float) DaoValue_TryGetFloat( _p[1] );

  glPixelTransferf( pname, param );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glPixelTransferi( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int param = (int) DaoValue_TryGetInteger( _p[1] );

  glPixelTransferi( pname, param );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glPixelZoom( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float xfactor = (float) DaoValue_TryGetFloat( _p[0] );
  float yfactor = (float) DaoValue_TryGetFloat( _p[1] );

  glPixelZoom( xfactor, yfactor );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glPointSize( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float size = (float) DaoValue_TryGetFloat( _p[0] );

  glPointSize( size );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glPolygonMode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int face = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int mode = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  glPolygonMode( face, mode );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glPolygonOffset( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float factor = (float) DaoValue_TryGetFloat( _p[0] );
  float units = (float) DaoValue_TryGetFloat( _p[1] );

  glPolygonOffset( factor, units );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glPolygonStipple( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const unsigned char* mask = (const unsigned char*) DaoValue_TryGetChars( _p[0] );

  glPolygonStipple( mask );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glPopAttrib( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  glPopAttrib(  );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glPopClientAttrib( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  glPopClientAttrib(  );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glPopMatrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  glPopMatrix(  );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glPopName( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  glPopName(  );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glPrioritizeTextures( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int n = (int) DaoValue_TryGetInteger( _p[0] );
  const float* priorities = (const float*) DaoArray_ToFloat( (DaoArray*)_p[2] );
  const unsigned int* textures = (const unsigned int*) DaoArray_ToUInt( (DaoArray*)_p[1] );

  glPrioritizeTextures( n, textures, priorities );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glPushAttrib( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int mask = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glPushAttrib( mask );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glPushClientAttrib( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int mask = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glPushClientAttrib( mask );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glPushMatrix( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  glPushMatrix(  );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glPushName( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int name = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glPushName( name );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRasterPos2d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double x = (double) DaoValue_TryGetDouble( _p[0] );
  double y = (double) DaoValue_TryGetDouble( _p[1] );

  glRasterPos2d( x, y );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRasterPos2dv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const double* v = (const double*) DaoArray_ToDouble( (DaoArray*)_p[0] );

  glRasterPos2dv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRasterPos2f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float x = (float) DaoValue_TryGetFloat( _p[0] );
  float y = (float) DaoValue_TryGetFloat( _p[1] );

  glRasterPos2f( x, y );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRasterPos2fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const float* v = (const float*) DaoArray_ToFloat( (DaoArray*)_p[0] );

  glRasterPos2fv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRasterPos2i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int x = (int) DaoValue_TryGetInteger( _p[0] );
  int y = (int) DaoValue_TryGetInteger( _p[1] );

  glRasterPos2i( x, y );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRasterPos2iv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const int* v = (const int*) DaoArray_ToSInt( (DaoArray*)_p[0] );

  glRasterPos2iv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRasterPos2s( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  short x = (short) DaoValue_TryGetInteger( _p[0] );
  short y = (short) DaoValue_TryGetInteger( _p[1] );

  glRasterPos2s( x, y );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRasterPos2sv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const short* v = (const short*) DaoArray_ToSShort( (DaoArray*)_p[0] );

  glRasterPos2sv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRasterPos3d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double x = (double) DaoValue_TryGetDouble( _p[0] );
  double y = (double) DaoValue_TryGetDouble( _p[1] );
  double z = (double) DaoValue_TryGetDouble( _p[2] );

  glRasterPos3d( x, y, z );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRasterPos3dv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const double* v = (const double*) DaoArray_ToDouble( (DaoArray*)_p[0] );

  glRasterPos3dv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRasterPos3f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float x = (float) DaoValue_TryGetFloat( _p[0] );
  float y = (float) DaoValue_TryGetFloat( _p[1] );
  float z = (float) DaoValue_TryGetFloat( _p[2] );

  glRasterPos3f( x, y, z );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRasterPos3fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const float* v = (const float*) DaoArray_ToFloat( (DaoArray*)_p[0] );

  glRasterPos3fv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRasterPos3i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int x = (int) DaoValue_TryGetInteger( _p[0] );
  int y = (int) DaoValue_TryGetInteger( _p[1] );
  int z = (int) DaoValue_TryGetInteger( _p[2] );

  glRasterPos3i( x, y, z );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRasterPos3iv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const int* v = (const int*) DaoArray_ToSInt( (DaoArray*)_p[0] );

  glRasterPos3iv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRasterPos3s( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  short x = (short) DaoValue_TryGetInteger( _p[0] );
  short y = (short) DaoValue_TryGetInteger( _p[1] );
  short z = (short) DaoValue_TryGetInteger( _p[2] );

  glRasterPos3s( x, y, z );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRasterPos3sv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const short* v = (const short*) DaoArray_ToSShort( (DaoArray*)_p[0] );

  glRasterPos3sv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRasterPos4d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double x = (double) DaoValue_TryGetDouble( _p[0] );
  double y = (double) DaoValue_TryGetDouble( _p[1] );
  double z = (double) DaoValue_TryGetDouble( _p[2] );
  double w = (double) DaoValue_TryGetDouble( _p[3] );

  glRasterPos4d( x, y, z, w );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRasterPos4dv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const double* v = (const double*) DaoArray_ToDouble( (DaoArray*)_p[0] );

  glRasterPos4dv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRasterPos4f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float x = (float) DaoValue_TryGetFloat( _p[0] );
  float y = (float) DaoValue_TryGetFloat( _p[1] );
  float z = (float) DaoValue_TryGetFloat( _p[2] );
  float w = (float) DaoValue_TryGetFloat( _p[3] );

  glRasterPos4f( x, y, z, w );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRasterPos4fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const float* v = (const float*) DaoArray_ToFloat( (DaoArray*)_p[0] );

  glRasterPos4fv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRasterPos4i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int x = (int) DaoValue_TryGetInteger( _p[0] );
  int y = (int) DaoValue_TryGetInteger( _p[1] );
  int z = (int) DaoValue_TryGetInteger( _p[2] );
  int w = (int) DaoValue_TryGetInteger( _p[3] );

  glRasterPos4i( x, y, z, w );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRasterPos4iv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const int* v = (const int*) DaoArray_ToSInt( (DaoArray*)_p[0] );

  glRasterPos4iv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRasterPos4s( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  short x = (short) DaoValue_TryGetInteger( _p[0] );
  short y = (short) DaoValue_TryGetInteger( _p[1] );
  short z = (short) DaoValue_TryGetInteger( _p[2] );
  short w = (short) DaoValue_TryGetInteger( _p[3] );

  glRasterPos4s( x, y, z, w );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRasterPos4sv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const short* v = (const short*) DaoArray_ToSShort( (DaoArray*)_p[0] );

  glRasterPos4sv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glReadBuffer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int mode = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glReadBuffer( mode );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glReadPixels( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int x = (int) DaoValue_TryGetInteger( _p[0] );
  int y = (int) DaoValue_TryGetInteger( _p[1] );
  int width = (int) DaoValue_TryGetInteger( _p[2] );
  int height = (int) DaoValue_TryGetInteger( _p[3] );
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[4] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[5] );
  void* pixels = (void*) DaoValue_TryGetCdata( _p[6] );

  glReadPixels( x, y, width, height, format, type, pixels );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRectd( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double x1 = (double) DaoValue_TryGetDouble( _p[0] );
  double y1 = (double) DaoValue_TryGetDouble( _p[1] );
  double x2 = (double) DaoValue_TryGetDouble( _p[2] );
  double y2 = (double) DaoValue_TryGetDouble( _p[3] );

  glRectd( x1, y1, x2, y2 );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRectdv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const double* v2 = (const double*) DaoArray_ToDouble( (DaoArray*)_p[1] );
  const double* v1 = (const double*) DaoArray_ToDouble( (DaoArray*)_p[0] );

  glRectdv( v1, v2 );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRectf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float x1 = (float) DaoValue_TryGetFloat( _p[0] );
  float y1 = (float) DaoValue_TryGetFloat( _p[1] );
  float x2 = (float) DaoValue_TryGetFloat( _p[2] );
  float y2 = (float) DaoValue_TryGetFloat( _p[3] );

  glRectf( x1, y1, x2, y2 );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRectfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const float* v2 = (const float*) DaoArray_ToFloat( (DaoArray*)_p[1] );
  const float* v1 = (const float*) DaoArray_ToFloat( (DaoArray*)_p[0] );

  glRectfv( v1, v2 );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRecti( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int x1 = (int) DaoValue_TryGetInteger( _p[0] );
  int y1 = (int) DaoValue_TryGetInteger( _p[1] );
  int x2 = (int) DaoValue_TryGetInteger( _p[2] );
  int y2 = (int) DaoValue_TryGetInteger( _p[3] );

  glRecti( x1, y1, x2, y2 );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRectiv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const int* v2 = (const int*) DaoArray_ToSInt( (DaoArray*)_p[1] );
  const int* v1 = (const int*) DaoArray_ToSInt( (DaoArray*)_p[0] );

  glRectiv( v1, v2 );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRects( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  short x1 = (short) DaoValue_TryGetInteger( _p[0] );
  short y1 = (short) DaoValue_TryGetInteger( _p[1] );
  short x2 = (short) DaoValue_TryGetInteger( _p[2] );
  short y2 = (short) DaoValue_TryGetInteger( _p[3] );

  glRects( x1, y1, x2, y2 );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRectsv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const short* v2 = (const short*) DaoArray_ToSShort( (DaoArray*)_p[1] );
  const short* v1 = (const short*) DaoArray_ToSShort( (DaoArray*)_p[0] );

  glRectsv( v1, v2 );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRenderMode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int mode = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  GLint _glRenderMode = glRenderMode( mode );
  DaoProcess_PutInteger( _proc, (daoint) _glRenderMode );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glResetHistogram( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glResetHistogram( target );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glResetMinmax( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glResetMinmax( target );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRotated( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double angle = (double) DaoValue_TryGetDouble( _p[0] );
  double x = (double) DaoValue_TryGetDouble( _p[1] );
  double y = (double) DaoValue_TryGetDouble( _p[2] );
  double z = (double) DaoValue_TryGetDouble( _p[3] );

  glRotated( angle, x, y, z );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glRotatef( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float angle = (float) DaoValue_TryGetFloat( _p[0] );
  float x = (float) DaoValue_TryGetFloat( _p[1] );
  float y = (float) DaoValue_TryGetFloat( _p[2] );
  float z = (float) DaoValue_TryGetFloat( _p[3] );

  glRotatef( angle, x, y, z );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glScaled( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double x = (double) DaoValue_TryGetDouble( _p[0] );
  double y = (double) DaoValue_TryGetDouble( _p[1] );
  double z = (double) DaoValue_TryGetDouble( _p[2] );

  glScaled( x, y, z );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glScalef( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float x = (float) DaoValue_TryGetFloat( _p[0] );
  float y = (float) DaoValue_TryGetFloat( _p[1] );
  float z = (float) DaoValue_TryGetFloat( _p[2] );

  glScalef( x, y, z );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glScissor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int x = (int) DaoValue_TryGetInteger( _p[0] );
  int y = (int) DaoValue_TryGetInteger( _p[1] );
  int width = (int) DaoValue_TryGetInteger( _p[2] );
  int height = (int) DaoValue_TryGetInteger( _p[3] );

  glScissor( x, y, width, height );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glSelectBuffer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int size = (int) DaoValue_TryGetInteger( _p[0] );
  unsigned int buffer = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  glSelectBuffer( size, &buffer );
  DaoProcess_PutInteger( _proc, (daoint) buffer );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glSeparableFilter2D( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int internalformat = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int width = (int) DaoValue_TryGetInteger( _p[2] );
  int height = (int) DaoValue_TryGetInteger( _p[3] );
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[4] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[5] );
  const void* row = (const void*) DaoValue_TryGetCdata( _p[6] );
  const void* column = (const void*) DaoValue_TryGetCdata( _p[7] );

  glSeparableFilter2D( target, internalformat, width, height, format, type, row, column );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glShadeModel( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int mode = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glShadeModel( mode );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glStencilFunc( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int func = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int ref = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned int mask = (unsigned int) DaoValue_TryGetInteger( _p[2] );

  glStencilFunc( func, ref, mask );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glStencilMask( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int mask = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glStencilMask( mask );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glStencilOp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int fail = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int zfail = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  unsigned int zpass = (unsigned int) DaoValue_TryGetInteger( _p[2] );

  glStencilOp( fail, zfail, zpass );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord1d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double s = (double) DaoValue_TryGetDouble( _p[0] );

  glTexCoord1d( s );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord1dv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const double* v = (const double*) DaoArray_ToDouble( (DaoArray*)_p[0] );

  glTexCoord1dv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord1f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float s = (float) DaoValue_TryGetFloat( _p[0] );

  glTexCoord1f( s );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord1fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const float* v = (const float*) DaoArray_ToFloat( (DaoArray*)_p[0] );

  glTexCoord1fv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord1i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int s = (int) DaoValue_TryGetInteger( _p[0] );

  glTexCoord1i( s );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord1iv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const int* v = (const int*) DaoArray_ToSInt( (DaoArray*)_p[0] );

  glTexCoord1iv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord1s( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  short s = (short) DaoValue_TryGetInteger( _p[0] );

  glTexCoord1s( s );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord1sv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const short* v = (const short*) DaoArray_ToSShort( (DaoArray*)_p[0] );

  glTexCoord1sv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord2d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double s = (double) DaoValue_TryGetDouble( _p[0] );
  double t = (double) DaoValue_TryGetDouble( _p[1] );

  glTexCoord2d( s, t );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord2dv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const double* v = (const double*) DaoArray_ToDouble( (DaoArray*)_p[0] );

  glTexCoord2dv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord2f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float s = (float) DaoValue_TryGetFloat( _p[0] );
  float t = (float) DaoValue_TryGetFloat( _p[1] );

  glTexCoord2f( s, t );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord2fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const float* v = (const float*) DaoArray_ToFloat( (DaoArray*)_p[0] );

  glTexCoord2fv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord2i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int s = (int) DaoValue_TryGetInteger( _p[0] );
  int t = (int) DaoValue_TryGetInteger( _p[1] );

  glTexCoord2i( s, t );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord2iv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const int* v = (const int*) DaoArray_ToSInt( (DaoArray*)_p[0] );

  glTexCoord2iv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord2s( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  short s = (short) DaoValue_TryGetInteger( _p[0] );
  short t = (short) DaoValue_TryGetInteger( _p[1] );

  glTexCoord2s( s, t );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord2sv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const short* v = (const short*) DaoArray_ToSShort( (DaoArray*)_p[0] );

  glTexCoord2sv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord3d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double s = (double) DaoValue_TryGetDouble( _p[0] );
  double t = (double) DaoValue_TryGetDouble( _p[1] );
  double r = (double) DaoValue_TryGetDouble( _p[2] );

  glTexCoord3d( s, t, r );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord3dv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const double* v = (const double*) DaoArray_ToDouble( (DaoArray*)_p[0] );

  glTexCoord3dv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord3f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float s = (float) DaoValue_TryGetFloat( _p[0] );
  float t = (float) DaoValue_TryGetFloat( _p[1] );
  float r = (float) DaoValue_TryGetFloat( _p[2] );

  glTexCoord3f( s, t, r );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord3fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const float* v = (const float*) DaoArray_ToFloat( (DaoArray*)_p[0] );

  glTexCoord3fv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord3i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int s = (int) DaoValue_TryGetInteger( _p[0] );
  int t = (int) DaoValue_TryGetInteger( _p[1] );
  int r = (int) DaoValue_TryGetInteger( _p[2] );

  glTexCoord3i( s, t, r );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord3iv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const int* v = (const int*) DaoArray_ToSInt( (DaoArray*)_p[0] );

  glTexCoord3iv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord3s( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  short s = (short) DaoValue_TryGetInteger( _p[0] );
  short t = (short) DaoValue_TryGetInteger( _p[1] );
  short r = (short) DaoValue_TryGetInteger( _p[2] );

  glTexCoord3s( s, t, r );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord3sv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const short* v = (const short*) DaoArray_ToSShort( (DaoArray*)_p[0] );

  glTexCoord3sv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord4d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double s = (double) DaoValue_TryGetDouble( _p[0] );
  double t = (double) DaoValue_TryGetDouble( _p[1] );
  double r = (double) DaoValue_TryGetDouble( _p[2] );
  double q = (double) DaoValue_TryGetDouble( _p[3] );

  glTexCoord4d( s, t, r, q );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord4dv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const double* v = (const double*) DaoArray_ToDouble( (DaoArray*)_p[0] );

  glTexCoord4dv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord4f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float s = (float) DaoValue_TryGetFloat( _p[0] );
  float t = (float) DaoValue_TryGetFloat( _p[1] );
  float r = (float) DaoValue_TryGetFloat( _p[2] );
  float q = (float) DaoValue_TryGetFloat( _p[3] );

  glTexCoord4f( s, t, r, q );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord4fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const float* v = (const float*) DaoArray_ToFloat( (DaoArray*)_p[0] );

  glTexCoord4fv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord4i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int s = (int) DaoValue_TryGetInteger( _p[0] );
  int t = (int) DaoValue_TryGetInteger( _p[1] );
  int r = (int) DaoValue_TryGetInteger( _p[2] );
  int q = (int) DaoValue_TryGetInteger( _p[3] );

  glTexCoord4i( s, t, r, q );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord4iv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const int* v = (const int*) DaoArray_ToSInt( (DaoArray*)_p[0] );

  glTexCoord4iv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord4s( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  short s = (short) DaoValue_TryGetInteger( _p[0] );
  short t = (short) DaoValue_TryGetInteger( _p[1] );
  short r = (short) DaoValue_TryGetInteger( _p[2] );
  short q = (short) DaoValue_TryGetInteger( _p[3] );

  glTexCoord4s( s, t, r, q );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoord4sv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const short* v = (const short*) DaoArray_ToSShort( (DaoArray*)_p[0] );

  glTexCoord4sv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexCoordPointer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int size = (int) DaoValue_TryGetInteger( _p[0] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int stride = (int) DaoValue_TryGetInteger( _p[2] );
  const void* pointer = (const void*) DaoValue_TryGetCdata( _p[3] );

  glTexCoordPointer( size, type, stride, pointer );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexEnvf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  float param = (float) DaoValue_TryGetFloat( _p[2] );

  glTexEnvf( target, pname, param );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexEnvfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  const float* params = (const float*) DaoArray_ToFloat( (DaoArray*)_p[2] );

  glTexEnvfv( target, pname, params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexEnvi( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int param = (int) DaoValue_TryGetInteger( _p[2] );

  glTexEnvi( target, pname, param );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexEnviv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  const int* params = (const int*) DaoArray_ToSInt( (DaoArray*)_p[2] );

  glTexEnviv( target, pname, params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexGend( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int coord = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  double param = (double) DaoValue_TryGetDouble( _p[2] );

  glTexGend( coord, pname, param );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexGendv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int coord = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  const double* params = (const double*) DaoArray_ToDouble( (DaoArray*)_p[2] );

  glTexGendv( coord, pname, params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexGenf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int coord = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  float param = (float) DaoValue_TryGetFloat( _p[2] );

  glTexGenf( coord, pname, param );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexGenfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int coord = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  const float* params = (const float*) DaoArray_ToFloat( (DaoArray*)_p[2] );

  glTexGenfv( coord, pname, params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexGeni( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int coord = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int param = (int) DaoValue_TryGetInteger( _p[2] );

  glTexGeni( coord, pname, param );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexGeniv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int coord = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  const int* params = (const int*) DaoArray_ToSInt( (DaoArray*)_p[2] );

  glTexGeniv( coord, pname, params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexImage1D( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int level = (int) DaoValue_TryGetInteger( _p[1] );
  int internalformat = (int) DaoValue_TryGetInteger( _p[2] );
  int width = (int) DaoValue_TryGetInteger( _p[3] );
  int border = (int) DaoValue_TryGetInteger( _p[4] );
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[5] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[6] );
  const void* pixels = (const void*) DaoValue_TryGetCdata( _p[7] );

  glTexImage1D( target, level, internalformat, width, border, format, type, pixels );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexImage2D( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int level = (int) DaoValue_TryGetInteger( _p[1] );
  int internalformat = (int) DaoValue_TryGetInteger( _p[2] );
  int width = (int) DaoValue_TryGetInteger( _p[3] );
  int height = (int) DaoValue_TryGetInteger( _p[4] );
  int border = (int) DaoValue_TryGetInteger( _p[5] );
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[6] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[7] );
  const void* pixels = (const void*) DaoValue_TryGetCdata( _p[8] );

  glTexImage2D( target, level, internalformat, width, height, border, format, type, pixels );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexImage3D( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int level = (int) DaoValue_TryGetInteger( _p[1] );
  int internalformat = (int) DaoValue_TryGetInteger( _p[2] );
  int width = (int) DaoValue_TryGetInteger( _p[3] );
  int height = (int) DaoValue_TryGetInteger( _p[4] );
  int depth = (int) DaoValue_TryGetInteger( _p[5] );
  int border = (int) DaoValue_TryGetInteger( _p[6] );
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[7] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[8] );
  const void* pixels = (const void*) DaoValue_TryGetCdata( _p[9] );

  glTexImage3D( target, level, internalformat, width, height, depth, border, format, type, pixels );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexParameterf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  float param = (float) DaoValue_TryGetFloat( _p[2] );

  glTexParameterf( target, pname, param );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexParameterfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  const float* params = (const float*) DaoArray_ToFloat( (DaoArray*)_p[2] );

  glTexParameterfv( target, pname, params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexParameteri( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int param = (int) DaoValue_TryGetInteger( _p[2] );

  glTexParameteri( target, pname, param );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexParameteriv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  const int* params = (const int*) DaoArray_ToSInt( (DaoArray*)_p[2] );

  glTexParameteriv( target, pname, params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexSubImage1D( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int level = (int) DaoValue_TryGetInteger( _p[1] );
  int xoffset = (int) DaoValue_TryGetInteger( _p[2] );
  int width = (int) DaoValue_TryGetInteger( _p[3] );
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[4] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[5] );
  const void* pixels = (const void*) DaoValue_TryGetCdata( _p[6] );

  glTexSubImage1D( target, level, xoffset, width, format, type, pixels );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexSubImage2D( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int level = (int) DaoValue_TryGetInteger( _p[1] );
  int xoffset = (int) DaoValue_TryGetInteger( _p[2] );
  int yoffset = (int) DaoValue_TryGetInteger( _p[3] );
  int width = (int) DaoValue_TryGetInteger( _p[4] );
  int height = (int) DaoValue_TryGetInteger( _p[5] );
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[6] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[7] );
  const void* pixels = (const void*) DaoValue_TryGetCdata( _p[8] );

  glTexSubImage2D( target, level, xoffset, yoffset, width, height, format, type, pixels );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTexSubImage3D( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int level = (int) DaoValue_TryGetInteger( _p[1] );
  int xoffset = (int) DaoValue_TryGetInteger( _p[2] );
  int yoffset = (int) DaoValue_TryGetInteger( _p[3] );
  int zoffset = (int) DaoValue_TryGetInteger( _p[4] );
  int width = (int) DaoValue_TryGetInteger( _p[5] );
  int height = (int) DaoValue_TryGetInteger( _p[6] );
  int depth = (int) DaoValue_TryGetInteger( _p[7] );
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[8] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[9] );
  const void* pixels = (const void*) DaoValue_TryGetCdata( _p[10] );

  glTexSubImage3D( target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTranslated( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double x = (double) DaoValue_TryGetDouble( _p[0] );
  double y = (double) DaoValue_TryGetDouble( _p[1] );
  double z = (double) DaoValue_TryGetDouble( _p[2] );

  glTranslated( x, y, z );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glTranslatef( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float x = (float) DaoValue_TryGetFloat( _p[0] );
  float y = (float) DaoValue_TryGetFloat( _p[1] );
  float z = (float) DaoValue_TryGetFloat( _p[2] );

  glTranslatef( x, y, z );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertex2d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double x = (double) DaoValue_TryGetDouble( _p[0] );
  double y = (double) DaoValue_TryGetDouble( _p[1] );

  glVertex2d( x, y );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertex2dv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const double* v = (const double*) DaoArray_ToDouble( (DaoArray*)_p[0] );

  glVertex2dv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertex2f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float x = (float) DaoValue_TryGetFloat( _p[0] );
  float y = (float) DaoValue_TryGetFloat( _p[1] );

  glVertex2f( x, y );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertex2fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const float* v = (const float*) DaoArray_ToFloat( (DaoArray*)_p[0] );

  glVertex2fv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertex2i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int x = (int) DaoValue_TryGetInteger( _p[0] );
  int y = (int) DaoValue_TryGetInteger( _p[1] );

  glVertex2i( x, y );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertex2iv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const int* v = (const int*) DaoArray_ToSInt( (DaoArray*)_p[0] );

  glVertex2iv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertex2s( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  short x = (short) DaoValue_TryGetInteger( _p[0] );
  short y = (short) DaoValue_TryGetInteger( _p[1] );

  glVertex2s( x, y );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertex2sv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const short* v = (const short*) DaoArray_ToSShort( (DaoArray*)_p[0] );

  glVertex2sv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertex3d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double x = (double) DaoValue_TryGetDouble( _p[0] );
  double y = (double) DaoValue_TryGetDouble( _p[1] );
  double z = (double) DaoValue_TryGetDouble( _p[2] );

  glVertex3d( x, y, z );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertex3dv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const double* v = (const double*) DaoArray_ToDouble( (DaoArray*)_p[0] );

  glVertex3dv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertex3f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float x = (float) DaoValue_TryGetFloat( _p[0] );
  float y = (float) DaoValue_TryGetFloat( _p[1] );
  float z = (float) DaoValue_TryGetFloat( _p[2] );

  glVertex3f( x, y, z );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertex3fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const float* v = (const float*) DaoArray_ToFloat( (DaoArray*)_p[0] );

  glVertex3fv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertex3i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int x = (int) DaoValue_TryGetInteger( _p[0] );
  int y = (int) DaoValue_TryGetInteger( _p[1] );
  int z = (int) DaoValue_TryGetInteger( _p[2] );

  glVertex3i( x, y, z );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertex3iv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const int* v = (const int*) DaoArray_ToSInt( (DaoArray*)_p[0] );

  glVertex3iv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertex3s( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  short x = (short) DaoValue_TryGetInteger( _p[0] );
  short y = (short) DaoValue_TryGetInteger( _p[1] );
  short z = (short) DaoValue_TryGetInteger( _p[2] );

  glVertex3s( x, y, z );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertex3sv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const short* v = (const short*) DaoArray_ToSShort( (DaoArray*)_p[0] );

  glVertex3sv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertex4d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double x = (double) DaoValue_TryGetDouble( _p[0] );
  double y = (double) DaoValue_TryGetDouble( _p[1] );
  double z = (double) DaoValue_TryGetDouble( _p[2] );
  double w = (double) DaoValue_TryGetDouble( _p[3] );

  glVertex4d( x, y, z, w );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertex4dv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const double* v = (const double*) DaoArray_ToDouble( (DaoArray*)_p[0] );

  glVertex4dv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertex4f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float x = (float) DaoValue_TryGetFloat( _p[0] );
  float y = (float) DaoValue_TryGetFloat( _p[1] );
  float z = (float) DaoValue_TryGetFloat( _p[2] );
  float w = (float) DaoValue_TryGetFloat( _p[3] );

  glVertex4f( x, y, z, w );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertex4fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const float* v = (const float*) DaoArray_ToFloat( (DaoArray*)_p[0] );

  glVertex4fv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertex4i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int x = (int) DaoValue_TryGetInteger( _p[0] );
  int y = (int) DaoValue_TryGetInteger( _p[1] );
  int z = (int) DaoValue_TryGetInteger( _p[2] );
  int w = (int) DaoValue_TryGetInteger( _p[3] );

  glVertex4i( x, y, z, w );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertex4iv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const int* v = (const int*) DaoArray_ToSInt( (DaoArray*)_p[0] );

  glVertex4iv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertex4s( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  short x = (short) DaoValue_TryGetInteger( _p[0] );
  short y = (short) DaoValue_TryGetInteger( _p[1] );
  short z = (short) DaoValue_TryGetInteger( _p[2] );
  short w = (short) DaoValue_TryGetInteger( _p[3] );

  glVertex4s( x, y, z, w );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertex4sv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const short* v = (const short*) DaoArray_ToSShort( (DaoArray*)_p[0] );

  glVertex4sv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexPointer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int size = (int) DaoValue_TryGetInteger( _p[0] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int stride = (int) DaoValue_TryGetInteger( _p[2] );
  const void* pointer = (const void*) DaoValue_TryGetCdata( _p[3] );

  glVertexPointer( size, type, stride, pointer );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glViewport( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int x = (int) DaoValue_TryGetInteger( _p[0] );
  int y = (int) DaoValue_TryGetInteger( _p[1] );
  int width = (int) DaoValue_TryGetInteger( _p[2] );
  int height = (int) DaoValue_TryGetInteger( _p[3] );

  glViewport( x, y, width, height );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glSampleCoverage( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float value = (float) DaoValue_TryGetFloat( _p[0] );
  unsigned char invert = (unsigned char) DaoValue_TryGetInteger( _p[1] );

  glSampleCoverage( value, invert );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glLoadTransposeMatrixf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const float* m = (const float*) DaoArray_ToFloat( (DaoArray*)_p[0] );

  glLoadTransposeMatrixf( m );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glLoadTransposeMatrixd( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const double* m = (const double*) DaoArray_ToDouble( (DaoArray*)_p[0] );

  glLoadTransposeMatrixd( m );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultTransposeMatrixf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const float* m = (const float*) DaoArray_ToFloat( (DaoArray*)_p[0] );

  glMultTransposeMatrixf( m );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultTransposeMatrixd( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const double* m = (const double*) DaoArray_ToDouble( (DaoArray*)_p[0] );

  glMultTransposeMatrixd( m );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glCompressedTexImage3D( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int level = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned int internalformat = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  int width = (int) DaoValue_TryGetInteger( _p[3] );
  int height = (int) DaoValue_TryGetInteger( _p[4] );
  int depth = (int) DaoValue_TryGetInteger( _p[5] );
  int border = (int) DaoValue_TryGetInteger( _p[6] );
  int imageSize = (int) DaoValue_TryGetInteger( _p[7] );
  const void* data = (const void*) DaoValue_TryGetCdata( _p[8] );

  glCompressedTexImage3D( target, level, internalformat, width, height, depth, border, imageSize, data );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glCompressedTexImage2D( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int level = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned int internalformat = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  int width = (int) DaoValue_TryGetInteger( _p[3] );
  int height = (int) DaoValue_TryGetInteger( _p[4] );
  int border = (int) DaoValue_TryGetInteger( _p[5] );
  int imageSize = (int) DaoValue_TryGetInteger( _p[6] );
  const void* data = (const void*) DaoValue_TryGetCdata( _p[7] );

  glCompressedTexImage2D( target, level, internalformat, width, height, border, imageSize, data );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glCompressedTexImage1D( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int level = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned int internalformat = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  int width = (int) DaoValue_TryGetInteger( _p[3] );
  int border = (int) DaoValue_TryGetInteger( _p[4] );
  int imageSize = (int) DaoValue_TryGetInteger( _p[5] );
  const void* data = (const void*) DaoValue_TryGetCdata( _p[6] );

  glCompressedTexImage1D( target, level, internalformat, width, border, imageSize, data );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glCompressedTexSubImage3D( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int level = (int) DaoValue_TryGetInteger( _p[1] );
  int xoffset = (int) DaoValue_TryGetInteger( _p[2] );
  int yoffset = (int) DaoValue_TryGetInteger( _p[3] );
  int zoffset = (int) DaoValue_TryGetInteger( _p[4] );
  int width = (int) DaoValue_TryGetInteger( _p[5] );
  int height = (int) DaoValue_TryGetInteger( _p[6] );
  int depth = (int) DaoValue_TryGetInteger( _p[7] );
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[8] );
  int imageSize = (int) DaoValue_TryGetInteger( _p[9] );
  const void* data = (const void*) DaoValue_TryGetCdata( _p[10] );

  glCompressedTexSubImage3D( target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glCompressedTexSubImage2D( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int level = (int) DaoValue_TryGetInteger( _p[1] );
  int xoffset = (int) DaoValue_TryGetInteger( _p[2] );
  int yoffset = (int) DaoValue_TryGetInteger( _p[3] );
  int width = (int) DaoValue_TryGetInteger( _p[4] );
  int height = (int) DaoValue_TryGetInteger( _p[5] );
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[6] );
  int imageSize = (int) DaoValue_TryGetInteger( _p[7] );
  const void* data = (const void*) DaoValue_TryGetCdata( _p[8] );

  glCompressedTexSubImage2D( target, level, xoffset, yoffset, width, height, format, imageSize, data );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glCompressedTexSubImage1D( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int level = (int) DaoValue_TryGetInteger( _p[1] );
  int xoffset = (int) DaoValue_TryGetInteger( _p[2] );
  int width = (int) DaoValue_TryGetInteger( _p[3] );
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[4] );
  int imageSize = (int) DaoValue_TryGetInteger( _p[5] );
  const void* data = (const void*) DaoValue_TryGetCdata( _p[6] );

  glCompressedTexSubImage1D( target, level, xoffset, width, format, imageSize, data );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetCompressedTexImage( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int lod = (int) DaoValue_TryGetInteger( _p[1] );
  void* img = (void*) DaoValue_TryGetCdata( _p[2] );

  glGetCompressedTexImage( target, lod, img );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glActiveTexture( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int texture = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glActiveTexture( texture );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glClientActiveTexture( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int texture = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glClientActiveTexture( texture );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord1d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  double s = (double) DaoValue_TryGetDouble( _p[1] );

  glMultiTexCoord1d( target, s );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord1dv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const double* v = (const double*) DaoArray_ToDouble( (DaoArray*)_p[1] );

  glMultiTexCoord1dv( target, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord1f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  float s = (float) DaoValue_TryGetFloat( _p[1] );

  glMultiTexCoord1f( target, s );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord1fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const float* v = (const float*) DaoArray_ToFloat( (DaoArray*)_p[1] );

  glMultiTexCoord1fv( target, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord1i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int s = (int) DaoValue_TryGetInteger( _p[1] );

  glMultiTexCoord1i( target, s );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord1iv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const int* v = (const int*) DaoArray_ToSInt( (DaoArray*)_p[1] );

  glMultiTexCoord1iv( target, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord1s( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  short s = (short) DaoValue_TryGetInteger( _p[1] );

  glMultiTexCoord1s( target, s );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord1sv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const short* v = (const short*) DaoArray_ToSShort( (DaoArray*)_p[1] );

  glMultiTexCoord1sv( target, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord2d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  double s = (double) DaoValue_TryGetDouble( _p[1] );
  double t = (double) DaoValue_TryGetDouble( _p[2] );

  glMultiTexCoord2d( target, s, t );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord2dv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const double* v = (const double*) DaoArray_ToDouble( (DaoArray*)_p[1] );

  glMultiTexCoord2dv( target, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord2f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  float s = (float) DaoValue_TryGetFloat( _p[1] );
  float t = (float) DaoValue_TryGetFloat( _p[2] );

  glMultiTexCoord2f( target, s, t );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord2fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const float* v = (const float*) DaoArray_ToFloat( (DaoArray*)_p[1] );

  glMultiTexCoord2fv( target, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord2i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int s = (int) DaoValue_TryGetInteger( _p[1] );
  int t = (int) DaoValue_TryGetInteger( _p[2] );

  glMultiTexCoord2i( target, s, t );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord2iv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const int* v = (const int*) DaoArray_ToSInt( (DaoArray*)_p[1] );

  glMultiTexCoord2iv( target, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord2s( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  short s = (short) DaoValue_TryGetInteger( _p[1] );
  short t = (short) DaoValue_TryGetInteger( _p[2] );

  glMultiTexCoord2s( target, s, t );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord2sv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const short* v = (const short*) DaoArray_ToSShort( (DaoArray*)_p[1] );

  glMultiTexCoord2sv( target, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord3d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  double s = (double) DaoValue_TryGetDouble( _p[1] );
  double t = (double) DaoValue_TryGetDouble( _p[2] );
  double r = (double) DaoValue_TryGetDouble( _p[3] );

  glMultiTexCoord3d( target, s, t, r );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord3dv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const double* v = (const double*) DaoArray_ToDouble( (DaoArray*)_p[1] );

  glMultiTexCoord3dv( target, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord3f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  float s = (float) DaoValue_TryGetFloat( _p[1] );
  float t = (float) DaoValue_TryGetFloat( _p[2] );
  float r = (float) DaoValue_TryGetFloat( _p[3] );

  glMultiTexCoord3f( target, s, t, r );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord3fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const float* v = (const float*) DaoArray_ToFloat( (DaoArray*)_p[1] );

  glMultiTexCoord3fv( target, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord3i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int s = (int) DaoValue_TryGetInteger( _p[1] );
  int t = (int) DaoValue_TryGetInteger( _p[2] );
  int r = (int) DaoValue_TryGetInteger( _p[3] );

  glMultiTexCoord3i( target, s, t, r );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord3iv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const int* v = (const int*) DaoArray_ToSInt( (DaoArray*)_p[1] );

  glMultiTexCoord3iv( target, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord3s( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  short s = (short) DaoValue_TryGetInteger( _p[1] );
  short t = (short) DaoValue_TryGetInteger( _p[2] );
  short r = (short) DaoValue_TryGetInteger( _p[3] );

  glMultiTexCoord3s( target, s, t, r );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord3sv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const short* v = (const short*) DaoArray_ToSShort( (DaoArray*)_p[1] );

  glMultiTexCoord3sv( target, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord4d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  double s = (double) DaoValue_TryGetDouble( _p[1] );
  double t = (double) DaoValue_TryGetDouble( _p[2] );
  double r = (double) DaoValue_TryGetDouble( _p[3] );
  double q = (double) DaoValue_TryGetDouble( _p[4] );

  glMultiTexCoord4d( target, s, t, r, q );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord4dv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const double* v = (const double*) DaoArray_ToDouble( (DaoArray*)_p[1] );

  glMultiTexCoord4dv( target, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord4f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  float s = (float) DaoValue_TryGetFloat( _p[1] );
  float t = (float) DaoValue_TryGetFloat( _p[2] );
  float r = (float) DaoValue_TryGetFloat( _p[3] );
  float q = (float) DaoValue_TryGetFloat( _p[4] );

  glMultiTexCoord4f( target, s, t, r, q );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord4fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const float* v = (const float*) DaoArray_ToFloat( (DaoArray*)_p[1] );

  glMultiTexCoord4fv( target, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord4i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int s = (int) DaoValue_TryGetInteger( _p[1] );
  int t = (int) DaoValue_TryGetInteger( _p[2] );
  int r = (int) DaoValue_TryGetInteger( _p[3] );
  int q = (int) DaoValue_TryGetInteger( _p[4] );

  glMultiTexCoord4i( target, s, t, r, q );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord4iv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const int* v = (const int*) DaoArray_ToSInt( (DaoArray*)_p[1] );

  glMultiTexCoord4iv( target, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord4s( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  short s = (short) DaoValue_TryGetInteger( _p[1] );
  short t = (short) DaoValue_TryGetInteger( _p[2] );
  short r = (short) DaoValue_TryGetInteger( _p[3] );
  short q = (short) DaoValue_TryGetInteger( _p[4] );

  glMultiTexCoord4s( target, s, t, r, q );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiTexCoord4sv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const short* v = (const short*) DaoArray_ToSShort( (DaoArray*)_p[1] );

  glMultiTexCoord4sv( target, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glFogCoordf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float coord = (float) DaoValue_TryGetFloat( _p[0] );

  glFogCoordf( coord );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glFogCoordfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const float* coord = (const float*) DaoArray_ToFloat( (DaoArray*)_p[0] );

  glFogCoordfv( coord );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glFogCoordd( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double coord = (double) DaoValue_TryGetDouble( _p[0] );

  glFogCoordd( coord );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glFogCoorddv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const double* coord = (const double*) DaoArray_ToDouble( (DaoArray*)_p[0] );

  glFogCoorddv( coord );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glFogCoordPointer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int stride = (int) DaoValue_TryGetInteger( _p[1] );
  const void* pointer = (const void*) DaoValue_TryGetCdata( _p[2] );

  glFogCoordPointer( type, stride, pointer );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glSecondaryColor3b( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  signed char red = (signed char) DaoValue_TryGetInteger( _p[0] );
  signed char green = (signed char) DaoValue_TryGetInteger( _p[1] );
  signed char blue = (signed char) DaoValue_TryGetInteger( _p[2] );

  glSecondaryColor3b( red, green, blue );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glSecondaryColor3bv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const signed char* v = (const signed char*) DaoArray_ToSByte( (DaoArray*)_p[0] );

  glSecondaryColor3bv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glSecondaryColor3d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double red = (double) DaoValue_TryGetDouble( _p[0] );
  double green = (double) DaoValue_TryGetDouble( _p[1] );
  double blue = (double) DaoValue_TryGetDouble( _p[2] );

  glSecondaryColor3d( red, green, blue );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glSecondaryColor3dv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const double* v = (const double*) DaoArray_ToDouble( (DaoArray*)_p[0] );

  glSecondaryColor3dv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glSecondaryColor3f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float red = (float) DaoValue_TryGetFloat( _p[0] );
  float green = (float) DaoValue_TryGetFloat( _p[1] );
  float blue = (float) DaoValue_TryGetFloat( _p[2] );

  glSecondaryColor3f( red, green, blue );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glSecondaryColor3fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const float* v = (const float*) DaoArray_ToFloat( (DaoArray*)_p[0] );

  glSecondaryColor3fv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glSecondaryColor3i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int red = (int) DaoValue_TryGetInteger( _p[0] );
  int green = (int) DaoValue_TryGetInteger( _p[1] );
  int blue = (int) DaoValue_TryGetInteger( _p[2] );

  glSecondaryColor3i( red, green, blue );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glSecondaryColor3iv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const int* v = (const int*) DaoArray_ToSInt( (DaoArray*)_p[0] );

  glSecondaryColor3iv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glSecondaryColor3s( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  short red = (short) DaoValue_TryGetInteger( _p[0] );
  short green = (short) DaoValue_TryGetInteger( _p[1] );
  short blue = (short) DaoValue_TryGetInteger( _p[2] );

  glSecondaryColor3s( red, green, blue );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glSecondaryColor3sv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const short* v = (const short*) DaoArray_ToSShort( (DaoArray*)_p[0] );

  glSecondaryColor3sv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glSecondaryColor3ub( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned char red = (unsigned char) DaoValue_TryGetInteger( _p[0] );
  unsigned char green = (unsigned char) DaoValue_TryGetInteger( _p[1] );
  unsigned char blue = (unsigned char) DaoValue_TryGetInteger( _p[2] );

  glSecondaryColor3ub( red, green, blue );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glSecondaryColor3ubv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const unsigned char* v = (const unsigned char*) DaoArray_ToUByte( (DaoArray*)_p[0] );

  glSecondaryColor3ubv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glSecondaryColor3ui( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int red = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int green = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  unsigned int blue = (unsigned int) DaoValue_TryGetInteger( _p[2] );

  glSecondaryColor3ui( red, green, blue );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glSecondaryColor3uiv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const unsigned int* v = (const unsigned int*) DaoArray_ToUInt( (DaoArray*)_p[0] );

  glSecondaryColor3uiv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glSecondaryColor3us( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned short red = (unsigned short) DaoValue_TryGetInteger( _p[0] );
  unsigned short green = (unsigned short) DaoValue_TryGetInteger( _p[1] );
  unsigned short blue = (unsigned short) DaoValue_TryGetInteger( _p[2] );

  glSecondaryColor3us( red, green, blue );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glSecondaryColor3usv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const unsigned short* v = (const unsigned short*) DaoArray_ToUShort( (DaoArray*)_p[0] );

  glSecondaryColor3usv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glSecondaryColorPointer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int size = (int) DaoValue_TryGetInteger( _p[0] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int stride = (int) DaoValue_TryGetInteger( _p[2] );
  const void* pointer = (const void*) DaoValue_TryGetCdata( _p[3] );

  glSecondaryColorPointer( size, type, stride, pointer );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glPointParameterf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  float param = (float) DaoValue_TryGetFloat( _p[1] );

  glPointParameterf( pname, param );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glPointParameterfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const float* params = (const float*) DaoArray_ToFloat( (DaoArray*)_p[1] );

  glPointParameterfv( pname, params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glPointParameteri( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int param = (int) DaoValue_TryGetInteger( _p[1] );

  glPointParameteri( pname, param );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glPointParameteriv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const int* params = (const int*) DaoArray_ToSInt( (DaoArray*)_p[1] );

  glPointParameteriv( pname, params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glBlendFuncSeparate( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int srcRGB = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int dstRGB = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  unsigned int srcAlpha = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  unsigned int dstAlpha = (unsigned int) DaoValue_TryGetInteger( _p[3] );

  glBlendFuncSeparate( srcRGB, dstRGB, srcAlpha, dstAlpha );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMultiDrawArrays( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int mode = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int primcount = (int) DaoValue_TryGetInteger( _p[3] );
  const int* count = (const int*) DaoArray_ToSInt( (DaoArray*)_p[2] );
  const int* first = (const int*) DaoArray_ToSInt( (DaoArray*)_p[1] );

  glMultiDrawArrays( mode, first, count, primcount );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glWindowPos2d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double x = (double) DaoValue_TryGetDouble( _p[0] );
  double y = (double) DaoValue_TryGetDouble( _p[1] );

  glWindowPos2d( x, y );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glWindowPos2dv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const double* v = (const double*) DaoArray_ToDouble( (DaoArray*)_p[0] );

  glWindowPos2dv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glWindowPos2f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float x = (float) DaoValue_TryGetFloat( _p[0] );
  float y = (float) DaoValue_TryGetFloat( _p[1] );

  glWindowPos2f( x, y );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glWindowPos2fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const float* v = (const float*) DaoArray_ToFloat( (DaoArray*)_p[0] );

  glWindowPos2fv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glWindowPos2i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int x = (int) DaoValue_TryGetInteger( _p[0] );
  int y = (int) DaoValue_TryGetInteger( _p[1] );

  glWindowPos2i( x, y );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glWindowPos2iv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const int* v = (const int*) DaoArray_ToSInt( (DaoArray*)_p[0] );

  glWindowPos2iv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glWindowPos2s( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  short x = (short) DaoValue_TryGetInteger( _p[0] );
  short y = (short) DaoValue_TryGetInteger( _p[1] );

  glWindowPos2s( x, y );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glWindowPos2sv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const short* v = (const short*) DaoArray_ToSShort( (DaoArray*)_p[0] );

  glWindowPos2sv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glWindowPos3d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double x = (double) DaoValue_TryGetDouble( _p[0] );
  double y = (double) DaoValue_TryGetDouble( _p[1] );
  double z = (double) DaoValue_TryGetDouble( _p[2] );

  glWindowPos3d( x, y, z );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glWindowPos3dv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const double* v = (const double*) DaoArray_ToDouble( (DaoArray*)_p[0] );

  glWindowPos3dv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glWindowPos3f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float x = (float) DaoValue_TryGetFloat( _p[0] );
  float y = (float) DaoValue_TryGetFloat( _p[1] );
  float z = (float) DaoValue_TryGetFloat( _p[2] );

  glWindowPos3f( x, y, z );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glWindowPos3fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const float* v = (const float*) DaoArray_ToFloat( (DaoArray*)_p[0] );

  glWindowPos3fv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glWindowPos3i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int x = (int) DaoValue_TryGetInteger( _p[0] );
  int y = (int) DaoValue_TryGetInteger( _p[1] );
  int z = (int) DaoValue_TryGetInteger( _p[2] );

  glWindowPos3i( x, y, z );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glWindowPos3iv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const int* v = (const int*) DaoArray_ToSInt( (DaoArray*)_p[0] );

  glWindowPos3iv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glWindowPos3s( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  short x = (short) DaoValue_TryGetInteger( _p[0] );
  short y = (short) DaoValue_TryGetInteger( _p[1] );
  short z = (short) DaoValue_TryGetInteger( _p[2] );

  glWindowPos3s( x, y, z );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glWindowPos3sv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const short* v = (const short*) DaoArray_ToSShort( (DaoArray*)_p[0] );

  glWindowPos3sv( v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGenQueries( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int n = (int) DaoValue_TryGetInteger( _p[0] );
  unsigned int ids = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  glGenQueries( n, &ids );
  DaoProcess_PutInteger( _proc, (daoint) ids );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glDeleteQueries( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int n = (int) DaoValue_TryGetInteger( _p[0] );
  const unsigned int* ids = (const unsigned int*) DaoArray_ToUInt( (DaoArray*)_p[1] );

  glDeleteQueries( n, ids );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glIsQuery( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int id = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  GLboolean _glIsQuery = glIsQuery( id );
  DaoProcess_PutInteger( _proc, (daoint) _glIsQuery );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glBeginQuery( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int id = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  glBeginQuery( target, id );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glEndQuery( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glEndQuery( target );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetQueryiv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int params = (int) DaoValue_TryGetInteger( _p[2] );

  glGetQueryiv( target, pname, &params );
  DaoProcess_PutInteger( _proc, (daoint) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetQueryObjectiv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int id = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int params = (int) DaoValue_TryGetInteger( _p[2] );

  glGetQueryObjectiv( id, pname, &params );
  DaoProcess_PutInteger( _proc, (daoint) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetQueryObjectuiv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int id = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  unsigned int params = (unsigned int) DaoValue_TryGetInteger( _p[2] );

  glGetQueryObjectuiv( id, pname, &params );
  DaoProcess_PutInteger( _proc, (daoint) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glBindBuffer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int buffer = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  glBindBuffer( target, buffer );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glDeleteBuffers( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int n = (int) DaoValue_TryGetInteger( _p[0] );
  const unsigned int* buffers = (const unsigned int*) DaoArray_ToUInt( (DaoArray*)_p[1] );

  glDeleteBuffers( n, buffers );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGenBuffers( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int n = (int) DaoValue_TryGetInteger( _p[0] );
  unsigned int buffers = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  glGenBuffers( n, &buffers );
  DaoProcess_PutInteger( _proc, (daoint) buffers );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glIsBuffer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int buffer = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  GLboolean _glIsBuffer = glIsBuffer( buffer );
  DaoProcess_PutInteger( _proc, (daoint) _glIsBuffer );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glBufferData( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  long size = (long) DaoValue_TryGetInteger( _p[1] );
  const void* data = (const void*) DaoValue_TryGetCdata( _p[2] );
  unsigned int usage = (unsigned int) DaoValue_TryGetInteger( _p[3] );

  glBufferData( target, size, data, usage );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glBufferSubData( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  long offset = (long) DaoValue_TryGetInteger( _p[1] );
  long size = (long) DaoValue_TryGetInteger( _p[2] );
  const void* data = (const void*) DaoValue_TryGetCdata( _p[3] );

  glBufferSubData( target, offset, size, data );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetBufferSubData( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  long offset = (long) DaoValue_TryGetInteger( _p[1] );
  long size = (long) DaoValue_TryGetInteger( _p[2] );
  void* data = (void*) DaoValue_TryGetCdata( _p[3] );

  glGetBufferSubData( target, offset, size, data );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glMapBuffer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int access = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  void* _glMapBuffer = glMapBuffer( target, access );
  DaoProcess_WrapCdata( _proc, (void*) _glMapBuffer, NULL );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glUnmapBuffer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  GLboolean _glUnmapBuffer = glUnmapBuffer( target );
  DaoProcess_PutInteger( _proc, (daoint) _glUnmapBuffer );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetBufferParameteriv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int target = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int params = (int) DaoValue_TryGetInteger( _p[2] );

  glGetBufferParameteriv( target, pname, &params );
  DaoProcess_PutInteger( _proc, (daoint) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glDrawBuffers( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int n = (int) DaoValue_TryGetInteger( _p[0] );
  const unsigned int* bufs = (const unsigned int*) DaoArray_ToUInt( (DaoArray*)_p[1] );

  glDrawBuffers( n, bufs );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib1d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  double x = (double) DaoValue_TryGetDouble( _p[1] );

  glVertexAttrib1d( index, x );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib1dv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const double* v = (const double*) DaoArray_ToDouble( (DaoArray*)_p[1] );

  glVertexAttrib1dv( index, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib1f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  float x = (float) DaoValue_TryGetFloat( _p[1] );

  glVertexAttrib1f( index, x );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib1fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const float* v = (const float*) DaoArray_ToFloat( (DaoArray*)_p[1] );

  glVertexAttrib1fv( index, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib1s( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  short x = (short) DaoValue_TryGetInteger( _p[1] );

  glVertexAttrib1s( index, x );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib1sv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const short* v = (const short*) DaoArray_ToSShort( (DaoArray*)_p[1] );

  glVertexAttrib1sv( index, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib2d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  double x = (double) DaoValue_TryGetDouble( _p[1] );
  double y = (double) DaoValue_TryGetDouble( _p[2] );

  glVertexAttrib2d( index, x, y );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib2dv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const double* v = (const double*) DaoArray_ToDouble( (DaoArray*)_p[1] );

  glVertexAttrib2dv( index, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib2f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  float x = (float) DaoValue_TryGetFloat( _p[1] );
  float y = (float) DaoValue_TryGetFloat( _p[2] );

  glVertexAttrib2f( index, x, y );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib2fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const float* v = (const float*) DaoArray_ToFloat( (DaoArray*)_p[1] );

  glVertexAttrib2fv( index, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib2s( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  short x = (short) DaoValue_TryGetInteger( _p[1] );
  short y = (short) DaoValue_TryGetInteger( _p[2] );

  glVertexAttrib2s( index, x, y );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib2sv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const short* v = (const short*) DaoArray_ToSShort( (DaoArray*)_p[1] );

  glVertexAttrib2sv( index, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib3d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  double x = (double) DaoValue_TryGetDouble( _p[1] );
  double y = (double) DaoValue_TryGetDouble( _p[2] );
  double z = (double) DaoValue_TryGetDouble( _p[3] );

  glVertexAttrib3d( index, x, y, z );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib3dv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const double* v = (const double*) DaoArray_ToDouble( (DaoArray*)_p[1] );

  glVertexAttrib3dv( index, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib3f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  float x = (float) DaoValue_TryGetFloat( _p[1] );
  float y = (float) DaoValue_TryGetFloat( _p[2] );
  float z = (float) DaoValue_TryGetFloat( _p[3] );

  glVertexAttrib3f( index, x, y, z );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib3fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const float* v = (const float*) DaoArray_ToFloat( (DaoArray*)_p[1] );

  glVertexAttrib3fv( index, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib3s( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  short x = (short) DaoValue_TryGetInteger( _p[1] );
  short y = (short) DaoValue_TryGetInteger( _p[2] );
  short z = (short) DaoValue_TryGetInteger( _p[3] );

  glVertexAttrib3s( index, x, y, z );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib3sv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const short* v = (const short*) DaoArray_ToSShort( (DaoArray*)_p[1] );

  glVertexAttrib3sv( index, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib4Nbv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const signed char* v = (const signed char*) DaoArray_ToSByte( (DaoArray*)_p[1] );

  glVertexAttrib4Nbv( index, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib4Niv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const int* v = (const int*) DaoArray_ToSInt( (DaoArray*)_p[1] );

  glVertexAttrib4Niv( index, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib4Nsv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const short* v = (const short*) DaoArray_ToSShort( (DaoArray*)_p[1] );

  glVertexAttrib4Nsv( index, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib4Nub( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned char x = (unsigned char) DaoValue_TryGetInteger( _p[1] );
  unsigned char y = (unsigned char) DaoValue_TryGetInteger( _p[2] );
  unsigned char z = (unsigned char) DaoValue_TryGetInteger( _p[3] );
  unsigned char w = (unsigned char) DaoValue_TryGetInteger( _p[4] );

  glVertexAttrib4Nub( index, x, y, z, w );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib4Nubv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const unsigned char* v = (const unsigned char*) DaoArray_ToUByte( (DaoArray*)_p[1] );

  glVertexAttrib4Nubv( index, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib4Nuiv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const unsigned int* v = (const unsigned int*) DaoArray_ToUInt( (DaoArray*)_p[1] );

  glVertexAttrib4Nuiv( index, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib4Nusv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const unsigned short* v = (const unsigned short*) DaoArray_ToUShort( (DaoArray*)_p[1] );

  glVertexAttrib4Nusv( index, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib4bv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const signed char* v = (const signed char*) DaoArray_ToSByte( (DaoArray*)_p[1] );

  glVertexAttrib4bv( index, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib4d( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  double x = (double) DaoValue_TryGetDouble( _p[1] );
  double y = (double) DaoValue_TryGetDouble( _p[2] );
  double z = (double) DaoValue_TryGetDouble( _p[3] );
  double w = (double) DaoValue_TryGetDouble( _p[4] );

  glVertexAttrib4d( index, x, y, z, w );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib4dv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const double* v = (const double*) DaoArray_ToDouble( (DaoArray*)_p[1] );

  glVertexAttrib4dv( index, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib4f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  float x = (float) DaoValue_TryGetFloat( _p[1] );
  float y = (float) DaoValue_TryGetFloat( _p[2] );
  float z = (float) DaoValue_TryGetFloat( _p[3] );
  float w = (float) DaoValue_TryGetFloat( _p[4] );

  glVertexAttrib4f( index, x, y, z, w );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib4fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const float* v = (const float*) DaoArray_ToFloat( (DaoArray*)_p[1] );

  glVertexAttrib4fv( index, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib4iv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const int* v = (const int*) DaoArray_ToSInt( (DaoArray*)_p[1] );

  glVertexAttrib4iv( index, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib4s( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  short x = (short) DaoValue_TryGetInteger( _p[1] );
  short y = (short) DaoValue_TryGetInteger( _p[2] );
  short z = (short) DaoValue_TryGetInteger( _p[3] );
  short w = (short) DaoValue_TryGetInteger( _p[4] );

  glVertexAttrib4s( index, x, y, z, w );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib4sv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const short* v = (const short*) DaoArray_ToSShort( (DaoArray*)_p[1] );

  glVertexAttrib4sv( index, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib4ubv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const unsigned char* v = (const unsigned char*) DaoArray_ToUByte( (DaoArray*)_p[1] );

  glVertexAttrib4ubv( index, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib4uiv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const unsigned int* v = (const unsigned int*) DaoArray_ToUInt( (DaoArray*)_p[1] );

  glVertexAttrib4uiv( index, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttrib4usv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const unsigned short* v = (const unsigned short*) DaoArray_ToUShort( (DaoArray*)_p[1] );

  glVertexAttrib4usv( index, v );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glVertexAttribPointer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int size = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  unsigned char normalized = (unsigned char) DaoValue_TryGetInteger( _p[3] );
  int stride = (int) DaoValue_TryGetInteger( _p[4] );
  const void* pointer = (const void*) DaoValue_TryGetCdata( _p[5] );

  glVertexAttribPointer( index, size, type, normalized, stride, pointer );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glEnableVertexAttribArray( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glEnableVertexAttribArray( index );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glDisableVertexAttribArray( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glDisableVertexAttribArray( index );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetVertexAttribdv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  double params = (double) DaoValue_TryGetDouble( _p[2] );

  glGetVertexAttribdv( index, pname, &params );
  DaoProcess_PutDouble( _proc, (double) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetVertexAttribfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  float params = (float) DaoValue_TryGetFloat( _p[2] );

  glGetVertexAttribfv( index, pname, &params );
  DaoProcess_PutFloat( _proc, (float) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetVertexAttribiv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int params = (int) DaoValue_TryGetInteger( _p[2] );

  glGetVertexAttribiv( index, pname, &params );
  DaoProcess_PutInteger( _proc, (daoint) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glDeleteShader( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int shader = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glDeleteShader( shader );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glDetachShader( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int program = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int shader = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  glDetachShader( program, shader );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glCreateShader( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  GLuint _glCreateShader = glCreateShader( type );
  DaoProcess_PutInteger( _proc, (daoint) _glCreateShader );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glCompileShader( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int shader = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glCompileShader( shader );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glCreateProgram( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  GLuint _glCreateProgram = glCreateProgram(  );
  DaoProcess_PutInteger( _proc, (daoint) _glCreateProgram );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glAttachShader( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int program = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int shader = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  glAttachShader( program, shader );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glLinkProgram( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int program = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glLinkProgram( program );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glUseProgram( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int program = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glUseProgram( program );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glDeleteProgram( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int program = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glDeleteProgram( program );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glValidateProgram( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int program = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  glValidateProgram( program );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glUniform1f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int location = (int) DaoValue_TryGetInteger( _p[0] );
  float v0 = (float) DaoValue_TryGetFloat( _p[1] );

  glUniform1f( location, v0 );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glUniform2f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int location = (int) DaoValue_TryGetInteger( _p[0] );
  float v0 = (float) DaoValue_TryGetFloat( _p[1] );
  float v1 = (float) DaoValue_TryGetFloat( _p[2] );

  glUniform2f( location, v0, v1 );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glUniform3f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int location = (int) DaoValue_TryGetInteger( _p[0] );
  float v0 = (float) DaoValue_TryGetFloat( _p[1] );
  float v1 = (float) DaoValue_TryGetFloat( _p[2] );
  float v2 = (float) DaoValue_TryGetFloat( _p[3] );

  glUniform3f( location, v0, v1, v2 );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glUniform4f( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int location = (int) DaoValue_TryGetInteger( _p[0] );
  float v0 = (float) DaoValue_TryGetFloat( _p[1] );
  float v1 = (float) DaoValue_TryGetFloat( _p[2] );
  float v2 = (float) DaoValue_TryGetFloat( _p[3] );
  float v3 = (float) DaoValue_TryGetFloat( _p[4] );

  glUniform4f( location, v0, v1, v2, v3 );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glUniform1i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int location = (int) DaoValue_TryGetInteger( _p[0] );
  int v0 = (int) DaoValue_TryGetInteger( _p[1] );

  glUniform1i( location, v0 );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glUniform2i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int location = (int) DaoValue_TryGetInteger( _p[0] );
  int v0 = (int) DaoValue_TryGetInteger( _p[1] );
  int v1 = (int) DaoValue_TryGetInteger( _p[2] );

  glUniform2i( location, v0, v1 );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glUniform3i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int location = (int) DaoValue_TryGetInteger( _p[0] );
  int v0 = (int) DaoValue_TryGetInteger( _p[1] );
  int v1 = (int) DaoValue_TryGetInteger( _p[2] );
  int v2 = (int) DaoValue_TryGetInteger( _p[3] );

  glUniform3i( location, v0, v1, v2 );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glUniform4i( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int location = (int) DaoValue_TryGetInteger( _p[0] );
  int v0 = (int) DaoValue_TryGetInteger( _p[1] );
  int v1 = (int) DaoValue_TryGetInteger( _p[2] );
  int v2 = (int) DaoValue_TryGetInteger( _p[3] );
  int v3 = (int) DaoValue_TryGetInteger( _p[4] );

  glUniform4i( location, v0, v1, v2, v3 );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glUniform1fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int location = (int) DaoValue_TryGetInteger( _p[0] );
  int count = (int) DaoValue_TryGetInteger( _p[1] );
  const float* value = (const float*) DaoArray_ToFloat( (DaoArray*)_p[2] );

  glUniform1fv( location, count, value );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glUniform2fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int location = (int) DaoValue_TryGetInteger( _p[0] );
  int count = (int) DaoValue_TryGetInteger( _p[1] );
  const float* value = (const float*) DaoArray_ToFloat( (DaoArray*)_p[2] );

  glUniform2fv( location, count, value );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glUniform3fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int location = (int) DaoValue_TryGetInteger( _p[0] );
  int count = (int) DaoValue_TryGetInteger( _p[1] );
  const float* value = (const float*) DaoArray_ToFloat( (DaoArray*)_p[2] );

  glUniform3fv( location, count, value );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glUniform4fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int location = (int) DaoValue_TryGetInteger( _p[0] );
  int count = (int) DaoValue_TryGetInteger( _p[1] );
  const float* value = (const float*) DaoArray_ToFloat( (DaoArray*)_p[2] );

  glUniform4fv( location, count, value );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glUniform1iv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int location = (int) DaoValue_TryGetInteger( _p[0] );
  int count = (int) DaoValue_TryGetInteger( _p[1] );
  const int* value = (const int*) DaoArray_ToSInt( (DaoArray*)_p[2] );

  glUniform1iv( location, count, value );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glUniform2iv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int location = (int) DaoValue_TryGetInteger( _p[0] );
  int count = (int) DaoValue_TryGetInteger( _p[1] );
  const int* value = (const int*) DaoArray_ToSInt( (DaoArray*)_p[2] );

  glUniform2iv( location, count, value );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glUniform3iv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int location = (int) DaoValue_TryGetInteger( _p[0] );
  int count = (int) DaoValue_TryGetInteger( _p[1] );
  const int* value = (const int*) DaoArray_ToSInt( (DaoArray*)_p[2] );

  glUniform3iv( location, count, value );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glUniform4iv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int location = (int) DaoValue_TryGetInteger( _p[0] );
  int count = (int) DaoValue_TryGetInteger( _p[1] );
  const int* value = (const int*) DaoArray_ToSInt( (DaoArray*)_p[2] );

  glUniform4iv( location, count, value );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glUniformMatrix2fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int location = (int) DaoValue_TryGetInteger( _p[0] );
  int count = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned char transpose = (unsigned char) DaoValue_TryGetInteger( _p[2] );
  const float* value = (const float*) DaoArray_ToFloat( (DaoArray*)_p[3] );

  glUniformMatrix2fv( location, count, transpose, value );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glUniformMatrix3fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int location = (int) DaoValue_TryGetInteger( _p[0] );
  int count = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned char transpose = (unsigned char) DaoValue_TryGetInteger( _p[2] );
  const float* value = (const float*) DaoArray_ToFloat( (DaoArray*)_p[3] );

  glUniformMatrix3fv( location, count, transpose, value );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glUniformMatrix4fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int location = (int) DaoValue_TryGetInteger( _p[0] );
  int count = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned char transpose = (unsigned char) DaoValue_TryGetInteger( _p[2] );
  const float* value = (const float*) DaoArray_ToFloat( (DaoArray*)_p[3] );

  glUniformMatrix4fv( location, count, transpose, value );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glIsShader( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int shader = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  GLboolean _glIsShader = glIsShader( shader );
  DaoProcess_PutInteger( _proc, (daoint) _glIsShader );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glIsProgram( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int program = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  GLboolean _glIsProgram = glIsProgram( program );
  DaoProcess_PutInteger( _proc, (daoint) _glIsProgram );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetShaderiv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int shader = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int params = (int) DaoValue_TryGetInteger( _p[2] );

  glGetShaderiv( shader, pname, &params );
  DaoProcess_PutInteger( _proc, (daoint) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetProgramiv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int program = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int pname = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int params = (int) DaoValue_TryGetInteger( _p[2] );

  glGetProgramiv( program, pname, &params );
  DaoProcess_PutInteger( _proc, (daoint) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetAttachedShaders( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int program = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int maxCount = (int) DaoValue_TryGetInteger( _p[1] );
  int count = (int) DaoValue_TryGetInteger( _p[2] );
  unsigned int shaders = (unsigned int) DaoValue_TryGetInteger( _p[3] );

  glGetAttachedShaders( program, maxCount, &count, &shaders );
  DaoProcess_NewInteger( _proc, (daoint)count );
  DaoProcess_NewInteger( _proc, (daoint)shaders );
  DaoProcess_PutTuple( _proc, -2 );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetShaderInfoLog( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int shader = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int bufSize = (int) DaoValue_TryGetInteger( _p[1] );
  int length = (int) DaoValue_TryGetInteger( _p[2] );
  char* infoLog = (char*) DaoValue_TryGetChars( _p[3] );

  glGetShaderInfoLog( shader, bufSize, &length, infoLog );
  DaoProcess_PutInteger( _proc, (daoint) length );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetProgramInfoLog( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int program = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int bufSize = (int) DaoValue_TryGetInteger( _p[1] );
  int length = (int) DaoValue_TryGetInteger( _p[2] );
  char* infoLog = (char*) DaoValue_TryGetChars( _p[3] );

  glGetProgramInfoLog( program, bufSize, &length, infoLog );
  DaoProcess_PutInteger( _proc, (daoint) length );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetUniformLocation( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int program = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const char* name = (const char*) DaoValue_TryGetChars( _p[1] );

  GLint _glGetUniformLocation = glGetUniformLocation( program, name );
  DaoProcess_PutInteger( _proc, (daoint) _glGetUniformLocation );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetActiveUniform( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int program = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int bufSize = (int) DaoValue_TryGetInteger( _p[2] );
  int length = (int) DaoValue_TryGetInteger( _p[3] );
  int size = (int) DaoValue_TryGetInteger( _p[4] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[5] );
  char* name = (char*) DaoValue_TryGetChars( _p[6] );

  glGetActiveUniform( program, index, bufSize, &length, &size, &type, name );
  DaoProcess_NewInteger( _proc, (daoint)length );
  DaoProcess_NewInteger( _proc, (daoint)size );
  DaoProcess_NewInteger( _proc, (daoint)type );
  DaoProcess_PutTuple( _proc, -3 );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetUniformfv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int program = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int location = (int) DaoValue_TryGetInteger( _p[1] );
  float params = (float) DaoValue_TryGetFloat( _p[2] );

  glGetUniformfv( program, location, &params );
  DaoProcess_PutFloat( _proc, (float) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetUniformiv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int program = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int location = (int) DaoValue_TryGetInteger( _p[1] );
  int params = (int) DaoValue_TryGetInteger( _p[2] );

  glGetUniformiv( program, location, &params );
  DaoProcess_PutInteger( _proc, (daoint) params );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetShaderSource( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int shader = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int bufSize = (int) DaoValue_TryGetInteger( _p[1] );
  int length = (int) DaoValue_TryGetInteger( _p[2] );
  char* source = (char*) DaoValue_TryGetChars( _p[3] );

  glGetShaderSource( shader, bufSize, &length, source );
  DaoProcess_PutInteger( _proc, (daoint) length );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glBindAttribLocation( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int program = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  const char* name = (const char*) DaoValue_TryGetChars( _p[2] );

  glBindAttribLocation( program, index, name );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetActiveAttrib( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int program = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int index = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int bufSize = (int) DaoValue_TryGetInteger( _p[2] );
  int length = (int) DaoValue_TryGetInteger( _p[3] );
  int size = (int) DaoValue_TryGetInteger( _p[4] );
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[5] );
  char* name = (char*) DaoValue_TryGetChars( _p[6] );

  glGetActiveAttrib( program, index, bufSize, &length, &size, &type, name );
  DaoProcess_NewInteger( _proc, (daoint)length );
  DaoProcess_NewInteger( _proc, (daoint)size );
  DaoProcess_NewInteger( _proc, (daoint)type );
  DaoProcess_PutTuple( _proc, -3 );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glGetAttribLocation( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int program = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const char* name = (const char*) DaoValue_TryGetChars( _p[1] );

  GLint _glGetAttribLocation = glGetAttribLocation( program, name );
  DaoProcess_PutInteger( _proc, (daoint) _glGetAttribLocation );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glStencilFuncSeparate( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int face = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int func = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int ref = (int) DaoValue_TryGetInteger( _p[2] );
  unsigned int mask = (unsigned int) DaoValue_TryGetInteger( _p[3] );

  glStencilFuncSeparate( face, func, ref, mask );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glStencilOpSeparate( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int face = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int fail = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  unsigned int zfail = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  unsigned int zpass = (unsigned int) DaoValue_TryGetInteger( _p[3] );

  glStencilOpSeparate( face, fail, zfail, zpass );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glStencilMaskSeparate( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int face = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int mask = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  glStencilMaskSeparate( face, mask );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glUniformMatrix2x3fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int location = (int) DaoValue_TryGetInteger( _p[0] );
  int count = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned char transpose = (unsigned char) DaoValue_TryGetInteger( _p[2] );
  const float value = (const float) DaoValue_TryGetFloat( _p[3] );

  glUniformMatrix2x3fv( location, count, transpose, &value );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glUniformMatrix3x2fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int location = (int) DaoValue_TryGetInteger( _p[0] );
  int count = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned char transpose = (unsigned char) DaoValue_TryGetInteger( _p[2] );
  const float value = (const float) DaoValue_TryGetFloat( _p[3] );

  glUniformMatrix3x2fv( location, count, transpose, &value );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glUniformMatrix2x4fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int location = (int) DaoValue_TryGetInteger( _p[0] );
  int count = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned char transpose = (unsigned char) DaoValue_TryGetInteger( _p[2] );
  const float value = (const float) DaoValue_TryGetFloat( _p[3] );

  glUniformMatrix2x4fv( location, count, transpose, &value );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glUniformMatrix4x2fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int location = (int) DaoValue_TryGetInteger( _p[0] );
  int count = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned char transpose = (unsigned char) DaoValue_TryGetInteger( _p[2] );
  const float value = (const float) DaoValue_TryGetFloat( _p[3] );

  glUniformMatrix4x2fv( location, count, transpose, &value );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glUniformMatrix3x4fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int location = (int) DaoValue_TryGetInteger( _p[0] );
  int count = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned char transpose = (unsigned char) DaoValue_TryGetInteger( _p[2] );
  const float value = (const float) DaoValue_TryGetFloat( _p[3] );

  glUniformMatrix3x4fv( location, count, transpose, &value );
}
/* /System/Library/Frameworks/OpenGL.framework/Headers/gl.h */
static void dao__glUniformMatrix4x3fv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int location = (int) DaoValue_TryGetInteger( _p[0] );
  int count = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned char transpose = (unsigned char) DaoValue_TryGetInteger( _p[2] );
  const float value = (const float) DaoValue_TryGetFloat( _p[3] );

  glUniformMatrix4x3fv( location, count, transpose, &value );
}
#ifdef __cplusplus
}
#endif
static DaoNumItem dao__Nums[] = 
{
  {  "GL_2D", DAO_DOUBLE, GL_2D},
  {  "GL_2_BYTES", DAO_DOUBLE, GL_2_BYTES},
  {  "GL_3D", DAO_DOUBLE, GL_3D},
  {  "GL_3D_COLOR", DAO_DOUBLE, GL_3D_COLOR},
  {  "GL_3D_COLOR_TEXTURE", DAO_DOUBLE, GL_3D_COLOR_TEXTURE},
  {  "GL_3_BYTES", DAO_DOUBLE, GL_3_BYTES},
  {  "GL_4D_COLOR_TEXTURE", DAO_DOUBLE, GL_4D_COLOR_TEXTURE},
  {  "GL_4_BYTES", DAO_DOUBLE, GL_4_BYTES},
  {  "GL_ACCUM", DAO_DOUBLE, GL_ACCUM},
  {  "GL_ACCUM_ALPHA_BITS", DAO_DOUBLE, GL_ACCUM_ALPHA_BITS},
  {  "GL_ACCUM_BLUE_BITS", DAO_DOUBLE, GL_ACCUM_BLUE_BITS},
  {  "GL_ACCUM_BUFFER_BIT", DAO_DOUBLE, GL_ACCUM_BUFFER_BIT},
  {  "GL_ACCUM_CLEAR_VALUE", DAO_DOUBLE, GL_ACCUM_CLEAR_VALUE},
  {  "GL_ACCUM_GREEN_BITS", DAO_DOUBLE, GL_ACCUM_GREEN_BITS},
  {  "GL_ACCUM_RED_BITS", DAO_DOUBLE, GL_ACCUM_RED_BITS},
  {  "GL_ACTIVE_ATTRIBUTES", DAO_DOUBLE, GL_ACTIVE_ATTRIBUTES},
  {  "GL_ACTIVE_ATTRIBUTE_MAX_LENGTH", DAO_DOUBLE, GL_ACTIVE_ATTRIBUTE_MAX_LENGTH},
  {  "GL_ACTIVE_TEXTURE", DAO_DOUBLE, GL_ACTIVE_TEXTURE},
  {  "GL_ACTIVE_UNIFORMS", DAO_DOUBLE, GL_ACTIVE_UNIFORMS},
  {  "GL_ACTIVE_UNIFORM_MAX_LENGTH", DAO_DOUBLE, GL_ACTIVE_UNIFORM_MAX_LENGTH},
  {  "GL_ADD", DAO_DOUBLE, GL_ADD},
  {  "GL_ADD_SIGNED", DAO_DOUBLE, GL_ADD_SIGNED},
  {  "GL_ALIASED_LINE_WIDTH_RANGE", DAO_DOUBLE, GL_ALIASED_LINE_WIDTH_RANGE},
  {  "GL_ALIASED_POINT_SIZE_RANGE", DAO_DOUBLE, GL_ALIASED_POINT_SIZE_RANGE},
  {  "GL_ALL_ATTRIB_BITS", DAO_DOUBLE, GL_ALL_ATTRIB_BITS},
  {  "GL_ALPHA", DAO_DOUBLE, GL_ALPHA},
  {  "GL_ALPHA12", DAO_DOUBLE, GL_ALPHA12},
  {  "GL_ALPHA16", DAO_DOUBLE, GL_ALPHA16},
  {  "GL_ALPHA4", DAO_DOUBLE, GL_ALPHA4},
  {  "GL_ALPHA8", DAO_DOUBLE, GL_ALPHA8},
  {  "GL_ALPHA_BIAS", DAO_DOUBLE, GL_ALPHA_BIAS},
  {  "GL_ALPHA_BITS", DAO_DOUBLE, GL_ALPHA_BITS},
  {  "GL_ALPHA_SCALE", DAO_DOUBLE, GL_ALPHA_SCALE},
  {  "GL_ALPHA_TEST", DAO_DOUBLE, GL_ALPHA_TEST},
  {  "GL_ALPHA_TEST_FUNC", DAO_DOUBLE, GL_ALPHA_TEST_FUNC},
  {  "GL_ALPHA_TEST_REF", DAO_DOUBLE, GL_ALPHA_TEST_REF},
  {  "GL_ALWAYS", DAO_DOUBLE, GL_ALWAYS},
  {  "GL_AMBIENT", DAO_DOUBLE, GL_AMBIENT},
  {  "GL_AMBIENT_AND_DIFFUSE", DAO_DOUBLE, GL_AMBIENT_AND_DIFFUSE},
  {  "GL_AND", DAO_DOUBLE, GL_AND},
  {  "GL_AND_INVERTED", DAO_DOUBLE, GL_AND_INVERTED},
  {  "GL_AND_REVERSE", DAO_DOUBLE, GL_AND_REVERSE},
  {  "GL_ARRAY_BUFFER", DAO_DOUBLE, GL_ARRAY_BUFFER},
  {  "GL_ARRAY_BUFFER_BINDING", DAO_DOUBLE, GL_ARRAY_BUFFER_BINDING},
  {  "GL_ATTACHED_SHADERS", DAO_DOUBLE, GL_ATTACHED_SHADERS},
  {  "GL_ATTRIB_STACK_DEPTH", DAO_DOUBLE, GL_ATTRIB_STACK_DEPTH},
  {  "GL_AUTO_NORMAL", DAO_DOUBLE, GL_AUTO_NORMAL},
  {  "GL_AUX0", DAO_DOUBLE, GL_AUX0},
  {  "GL_AUX1", DAO_DOUBLE, GL_AUX1},
  {  "GL_AUX2", DAO_DOUBLE, GL_AUX2},
  {  "GL_AUX3", DAO_DOUBLE, GL_AUX3},
  {  "GL_AUX_BUFFERS", DAO_DOUBLE, GL_AUX_BUFFERS},
  {  "GL_BACK", DAO_DOUBLE, GL_BACK},
  {  "GL_BACK_LEFT", DAO_DOUBLE, GL_BACK_LEFT},
  {  "GL_BACK_RIGHT", DAO_DOUBLE, GL_BACK_RIGHT},
  {  "GL_BGR", DAO_DOUBLE, GL_BGR},
  {  "GL_BGRA", DAO_DOUBLE, GL_BGRA},
  {  "GL_BITMAP", DAO_DOUBLE, GL_BITMAP},
  {  "GL_BITMAP_TOKEN", DAO_DOUBLE, GL_BITMAP_TOKEN},
  {  "GL_BLEND", DAO_DOUBLE, GL_BLEND},
  {  "GL_BLEND_COLOR", DAO_DOUBLE, GL_BLEND_COLOR},
  {  "GL_BLEND_DST", DAO_DOUBLE, GL_BLEND_DST},
  {  "GL_BLEND_DST_ALPHA", DAO_DOUBLE, GL_BLEND_DST_ALPHA},
  {  "GL_BLEND_DST_RGB", DAO_DOUBLE, GL_BLEND_DST_RGB},
  {  "GL_BLEND_EQUATION", DAO_DOUBLE, GL_BLEND_EQUATION},
  {  "GL_BLEND_EQUATION_ALPHA", DAO_DOUBLE, GL_BLEND_EQUATION_ALPHA},
  {  "GL_BLEND_EQUATION_RGB", DAO_DOUBLE, GL_BLEND_EQUATION_RGB},
  {  "GL_BLEND_SRC", DAO_DOUBLE, GL_BLEND_SRC},
  {  "GL_BLEND_SRC_ALPHA", DAO_DOUBLE, GL_BLEND_SRC_ALPHA},
  {  "GL_BLEND_SRC_RGB", DAO_DOUBLE, GL_BLEND_SRC_RGB},
  {  "GL_BLUE", DAO_DOUBLE, GL_BLUE},
  {  "GL_BLUE_BIAS", DAO_DOUBLE, GL_BLUE_BIAS},
  {  "GL_BLUE_BITS", DAO_DOUBLE, GL_BLUE_BITS},
  {  "GL_BLUE_SCALE", DAO_DOUBLE, GL_BLUE_SCALE},
  {  "GL_BOOL", DAO_DOUBLE, GL_BOOL},
  {  "GL_BOOL_VEC2", DAO_DOUBLE, GL_BOOL_VEC2},
  {  "GL_BOOL_VEC3", DAO_DOUBLE, GL_BOOL_VEC3},
  {  "GL_BOOL_VEC4", DAO_DOUBLE, GL_BOOL_VEC4},
  {  "GL_BUFFER_ACCESS", DAO_DOUBLE, GL_BUFFER_ACCESS},
  {  "GL_BUFFER_MAPPED", DAO_DOUBLE, GL_BUFFER_MAPPED},
  {  "GL_BUFFER_MAP_POINTER", DAO_DOUBLE, GL_BUFFER_MAP_POINTER},
  {  "GL_BUFFER_SIZE", DAO_DOUBLE, GL_BUFFER_SIZE},
  {  "GL_BUFFER_USAGE", DAO_DOUBLE, GL_BUFFER_USAGE},
  {  "GL_BYTE", DAO_DOUBLE, GL_BYTE},
  {  "GL_C3F_V3F", DAO_DOUBLE, GL_C3F_V3F},
  {  "GL_C4F_N3F_V3F", DAO_DOUBLE, GL_C4F_N3F_V3F},
  {  "GL_C4UB_V2F", DAO_DOUBLE, GL_C4UB_V2F},
  {  "GL_C4UB_V3F", DAO_DOUBLE, GL_C4UB_V3F},
  {  "GL_CCW", DAO_DOUBLE, GL_CCW},
  {  "GL_CLAMP", DAO_DOUBLE, GL_CLAMP},
  {  "GL_CLAMP_TO_BORDER", DAO_DOUBLE, GL_CLAMP_TO_BORDER},
  {  "GL_CLAMP_TO_EDGE", DAO_DOUBLE, GL_CLAMP_TO_EDGE},
  {  "GL_CLEAR", DAO_DOUBLE, GL_CLEAR},
  {  "GL_CLIENT_ACTIVE_TEXTURE", DAO_DOUBLE, GL_CLIENT_ACTIVE_TEXTURE},
  {  "GL_CLIENT_ALL_ATTRIB_BITS", DAO_DOUBLE, GL_CLIENT_ALL_ATTRIB_BITS},
  {  "GL_CLIENT_ATTRIB_STACK_DEPTH", DAO_DOUBLE, GL_CLIENT_ATTRIB_STACK_DEPTH},
  {  "GL_CLIENT_PIXEL_STORE_BIT", DAO_DOUBLE, GL_CLIENT_PIXEL_STORE_BIT},
  {  "GL_CLIENT_VERTEX_ARRAY_BIT", DAO_DOUBLE, GL_CLIENT_VERTEX_ARRAY_BIT},
  {  "GL_CLIP_PLANE0", DAO_DOUBLE, GL_CLIP_PLANE0},
  {  "GL_CLIP_PLANE1", DAO_DOUBLE, GL_CLIP_PLANE1},
  {  "GL_CLIP_PLANE2", DAO_DOUBLE, GL_CLIP_PLANE2},
  {  "GL_CLIP_PLANE3", DAO_DOUBLE, GL_CLIP_PLANE3},
  {  "GL_CLIP_PLANE4", DAO_DOUBLE, GL_CLIP_PLANE4},
  {  "GL_CLIP_PLANE5", DAO_DOUBLE, GL_CLIP_PLANE5},
  {  "GL_COEFF", DAO_DOUBLE, GL_COEFF},
  {  "GL_COLOR", DAO_DOUBLE, GL_COLOR},
  {  "GL_COLOR_ARRAY", DAO_DOUBLE, GL_COLOR_ARRAY},
  {  "GL_COLOR_ARRAY_BUFFER_BINDING", DAO_DOUBLE, GL_COLOR_ARRAY_BUFFER_BINDING},
  {  "GL_COLOR_ARRAY_POINTER", DAO_DOUBLE, GL_COLOR_ARRAY_POINTER},
  {  "GL_COLOR_ARRAY_SIZE", DAO_DOUBLE, GL_COLOR_ARRAY_SIZE},
  {  "GL_COLOR_ARRAY_STRIDE", DAO_DOUBLE, GL_COLOR_ARRAY_STRIDE},
  {  "GL_COLOR_ARRAY_TYPE", DAO_DOUBLE, GL_COLOR_ARRAY_TYPE},
  {  "GL_COLOR_BUFFER_BIT", DAO_DOUBLE, GL_COLOR_BUFFER_BIT},
  {  "GL_COLOR_CLEAR_VALUE", DAO_DOUBLE, GL_COLOR_CLEAR_VALUE},
  {  "GL_COLOR_INDEX", DAO_DOUBLE, GL_COLOR_INDEX},
  {  "GL_COLOR_INDEXES", DAO_DOUBLE, GL_COLOR_INDEXES},
  {  "GL_COLOR_LOGIC_OP", DAO_DOUBLE, GL_COLOR_LOGIC_OP},
  {  "GL_COLOR_MATERIAL", DAO_DOUBLE, GL_COLOR_MATERIAL},
  {  "GL_COLOR_MATERIAL_FACE", DAO_DOUBLE, GL_COLOR_MATERIAL_FACE},
  {  "GL_COLOR_MATERIAL_PARAMETER", DAO_DOUBLE, GL_COLOR_MATERIAL_PARAMETER},
  {  "GL_COLOR_MATRIX", DAO_DOUBLE, GL_COLOR_MATRIX},
  {  "GL_COLOR_MATRIX_STACK_DEPTH", DAO_DOUBLE, GL_COLOR_MATRIX_STACK_DEPTH},
  {  "GL_COLOR_SUM", DAO_DOUBLE, GL_COLOR_SUM},
  {  "GL_COLOR_TABLE", DAO_DOUBLE, GL_COLOR_TABLE},
  {  "GL_COLOR_TABLE_ALPHA_SIZE", DAO_DOUBLE, GL_COLOR_TABLE_ALPHA_SIZE},
  {  "GL_COLOR_TABLE_BIAS", DAO_DOUBLE, GL_COLOR_TABLE_BIAS},
  {  "GL_COLOR_TABLE_BLUE_SIZE", DAO_DOUBLE, GL_COLOR_TABLE_BLUE_SIZE},
  {  "GL_COLOR_TABLE_FORMAT", DAO_DOUBLE, GL_COLOR_TABLE_FORMAT},
  {  "GL_COLOR_TABLE_GREEN_SIZE", DAO_DOUBLE, GL_COLOR_TABLE_GREEN_SIZE},
  {  "GL_COLOR_TABLE_INTENSITY_SIZE", DAO_DOUBLE, GL_COLOR_TABLE_INTENSITY_SIZE},
  {  "GL_COLOR_TABLE_LUMINANCE_SIZE", DAO_DOUBLE, GL_COLOR_TABLE_LUMINANCE_SIZE},
  {  "GL_COLOR_TABLE_RED_SIZE", DAO_DOUBLE, GL_COLOR_TABLE_RED_SIZE},
  {  "GL_COLOR_TABLE_SCALE", DAO_DOUBLE, GL_COLOR_TABLE_SCALE},
  {  "GL_COLOR_TABLE_WIDTH", DAO_DOUBLE, GL_COLOR_TABLE_WIDTH},
  {  "GL_COLOR_WRITEMASK", DAO_DOUBLE, GL_COLOR_WRITEMASK},
  {  "GL_COMBINE", DAO_DOUBLE, GL_COMBINE},
  {  "GL_COMBINE_ALPHA", DAO_DOUBLE, GL_COMBINE_ALPHA},
  {  "GL_COMBINE_RGB", DAO_DOUBLE, GL_COMBINE_RGB},
  {  "GL_COMPARE_R_TO_TEXTURE", DAO_DOUBLE, GL_COMPARE_R_TO_TEXTURE},
  {  "GL_COMPILE", DAO_DOUBLE, GL_COMPILE},
  {  "GL_COMPILE_AND_EXECUTE", DAO_DOUBLE, GL_COMPILE_AND_EXECUTE},
  {  "GL_COMPILE_STATUS", DAO_DOUBLE, GL_COMPILE_STATUS},
  {  "GL_COMPRESSED_ALPHA", DAO_DOUBLE, GL_COMPRESSED_ALPHA},
  {  "GL_COMPRESSED_INTENSITY", DAO_DOUBLE, GL_COMPRESSED_INTENSITY},
  {  "GL_COMPRESSED_LUMINANCE", DAO_DOUBLE, GL_COMPRESSED_LUMINANCE},
  {  "GL_COMPRESSED_LUMINANCE_ALPHA", DAO_DOUBLE, GL_COMPRESSED_LUMINANCE_ALPHA},
  {  "GL_COMPRESSED_RGB", DAO_DOUBLE, GL_COMPRESSED_RGB},
  {  "GL_COMPRESSED_RGBA", DAO_DOUBLE, GL_COMPRESSED_RGBA},
  {  "GL_COMPRESSED_SLUMINANCE", DAO_DOUBLE, GL_COMPRESSED_SLUMINANCE},
  {  "GL_COMPRESSED_SLUMINANCE_ALPHA", DAO_DOUBLE, GL_COMPRESSED_SLUMINANCE_ALPHA},
  {  "GL_COMPRESSED_SRGB", DAO_DOUBLE, GL_COMPRESSED_SRGB},
  {  "GL_COMPRESSED_SRGB_ALPHA", DAO_DOUBLE, GL_COMPRESSED_SRGB_ALPHA},
  {  "GL_COMPRESSED_TEXTURE_FORMATS", DAO_DOUBLE, GL_COMPRESSED_TEXTURE_FORMATS},
  {  "GL_CONSTANT", DAO_DOUBLE, GL_CONSTANT},
  {  "GL_CONSTANT_ALPHA", DAO_DOUBLE, GL_CONSTANT_ALPHA},
  {  "GL_CONSTANT_ATTENUATION", DAO_DOUBLE, GL_CONSTANT_ATTENUATION},
  {  "GL_CONSTANT_BORDER", DAO_DOUBLE, GL_CONSTANT_BORDER},
  {  "GL_CONSTANT_COLOR", DAO_DOUBLE, GL_CONSTANT_COLOR},
  {  "GL_CONVOLUTION_1D", DAO_DOUBLE, GL_CONVOLUTION_1D},
  {  "GL_CONVOLUTION_2D", DAO_DOUBLE, GL_CONVOLUTION_2D},
  {  "GL_CONVOLUTION_BORDER_COLOR", DAO_DOUBLE, GL_CONVOLUTION_BORDER_COLOR},
  {  "GL_CONVOLUTION_BORDER_MODE", DAO_DOUBLE, GL_CONVOLUTION_BORDER_MODE},
  {  "GL_CONVOLUTION_FILTER_BIAS", DAO_DOUBLE, GL_CONVOLUTION_FILTER_BIAS},
  {  "GL_CONVOLUTION_FILTER_SCALE", DAO_DOUBLE, GL_CONVOLUTION_FILTER_SCALE},
  {  "GL_CONVOLUTION_FORMAT", DAO_DOUBLE, GL_CONVOLUTION_FORMAT},
  {  "GL_CONVOLUTION_HEIGHT", DAO_DOUBLE, GL_CONVOLUTION_HEIGHT},
  {  "GL_CONVOLUTION_WIDTH", DAO_DOUBLE, GL_CONVOLUTION_WIDTH},
  {  "GL_COORD_REPLACE", DAO_DOUBLE, GL_COORD_REPLACE},
  {  "GL_COPY", DAO_DOUBLE, GL_COPY},
  {  "GL_COPY_INVERTED", DAO_DOUBLE, GL_COPY_INVERTED},
  {  "GL_COPY_PIXEL_TOKEN", DAO_DOUBLE, GL_COPY_PIXEL_TOKEN},
  {  "GL_CULL_FACE", DAO_DOUBLE, GL_CULL_FACE},
  {  "GL_CULL_FACE_MODE", DAO_DOUBLE, GL_CULL_FACE_MODE},
  {  "GL_CURRENT_BIT", DAO_DOUBLE, GL_CURRENT_BIT},
  {  "GL_CURRENT_COLOR", DAO_DOUBLE, GL_CURRENT_COLOR},
  {  "GL_CURRENT_FOG_COORD", DAO_DOUBLE, GL_CURRENT_FOG_COORD},
  {  "GL_CURRENT_FOG_COORDINATE", DAO_DOUBLE, GL_CURRENT_FOG_COORDINATE},
  {  "GL_CURRENT_INDEX", DAO_DOUBLE, GL_CURRENT_INDEX},
  {  "GL_CURRENT_NORMAL", DAO_DOUBLE, GL_CURRENT_NORMAL},
  {  "GL_CURRENT_PROGRAM", DAO_DOUBLE, GL_CURRENT_PROGRAM},
  {  "GL_CURRENT_QUERY", DAO_DOUBLE, GL_CURRENT_QUERY},
  {  "GL_CURRENT_RASTER_COLOR", DAO_DOUBLE, GL_CURRENT_RASTER_COLOR},
  {  "GL_CURRENT_RASTER_DISTANCE", DAO_DOUBLE, GL_CURRENT_RASTER_DISTANCE},
  {  "GL_CURRENT_RASTER_INDEX", DAO_DOUBLE, GL_CURRENT_RASTER_INDEX},
  {  "GL_CURRENT_RASTER_POSITION", DAO_DOUBLE, GL_CURRENT_RASTER_POSITION},
  {  "GL_CURRENT_RASTER_POSITION_VALID", DAO_DOUBLE, GL_CURRENT_RASTER_POSITION_VALID},
  {  "GL_CURRENT_RASTER_SECONDARY_COLOR", DAO_DOUBLE, GL_CURRENT_RASTER_SECONDARY_COLOR},
  {  "GL_CURRENT_RASTER_TEXTURE_COORDS", DAO_DOUBLE, GL_CURRENT_RASTER_TEXTURE_COORDS},
  {  "GL_CURRENT_SECONDARY_COLOR", DAO_DOUBLE, GL_CURRENT_SECONDARY_COLOR},
  {  "GL_CURRENT_TEXTURE_COORDS", DAO_DOUBLE, GL_CURRENT_TEXTURE_COORDS},
  {  "GL_CURRENT_VERTEX_ATTRIB", DAO_DOUBLE, GL_CURRENT_VERTEX_ATTRIB},
  {  "GL_CW", DAO_DOUBLE, GL_CW},
  {  "GL_DECAL", DAO_DOUBLE, GL_DECAL},
  {  "GL_DECR", DAO_DOUBLE, GL_DECR},
  {  "GL_DECR_WRAP", DAO_DOUBLE, GL_DECR_WRAP},
  {  "GL_DELETE_STATUS", DAO_DOUBLE, GL_DELETE_STATUS},
  {  "GL_DEPTH", DAO_DOUBLE, GL_DEPTH},
  {  "GL_DEPTH_BIAS", DAO_DOUBLE, GL_DEPTH_BIAS},
  {  "GL_DEPTH_BITS", DAO_DOUBLE, GL_DEPTH_BITS},
  {  "GL_DEPTH_BUFFER_BIT", DAO_DOUBLE, GL_DEPTH_BUFFER_BIT},
  {  "GL_DEPTH_CLEAR_VALUE", DAO_DOUBLE, GL_DEPTH_CLEAR_VALUE},
  {  "GL_DEPTH_COMPONENT", DAO_DOUBLE, GL_DEPTH_COMPONENT},
  {  "GL_DEPTH_COMPONENT16", DAO_DOUBLE, GL_DEPTH_COMPONENT16},
  {  "GL_DEPTH_COMPONENT24", DAO_DOUBLE, GL_DEPTH_COMPONENT24},
  {  "GL_DEPTH_COMPONENT32", DAO_DOUBLE, GL_DEPTH_COMPONENT32},
  {  "GL_DEPTH_FUNC", DAO_DOUBLE, GL_DEPTH_FUNC},
  {  "GL_DEPTH_RANGE", DAO_DOUBLE, GL_DEPTH_RANGE},
  {  "GL_DEPTH_SCALE", DAO_DOUBLE, GL_DEPTH_SCALE},
  {  "GL_DEPTH_TEST", DAO_DOUBLE, GL_DEPTH_TEST},
  {  "GL_DEPTH_TEXTURE_MODE", DAO_DOUBLE, GL_DEPTH_TEXTURE_MODE},
  {  "GL_DEPTH_WRITEMASK", DAO_DOUBLE, GL_DEPTH_WRITEMASK},
  {  "GL_DIFFUSE", DAO_DOUBLE, GL_DIFFUSE},
  {  "GL_DITHER", DAO_DOUBLE, GL_DITHER},
  {  "GL_DOMAIN", DAO_DOUBLE, GL_DOMAIN},
  {  "GL_DONT_CARE", DAO_DOUBLE, GL_DONT_CARE},
  {  "GL_DOT3_RGB", DAO_DOUBLE, GL_DOT3_RGB},
  {  "GL_DOT3_RGBA", DAO_DOUBLE, GL_DOT3_RGBA},
  {  "GL_DOUBLE", DAO_DOUBLE, GL_DOUBLE},
  {  "GL_DOUBLEBUFFER", DAO_DOUBLE, GL_DOUBLEBUFFER},
  {  "GL_DRAW_BUFFER", DAO_DOUBLE, GL_DRAW_BUFFER},
  {  "GL_DRAW_BUFFER0", DAO_DOUBLE, GL_DRAW_BUFFER0},
  {  "GL_DRAW_BUFFER1", DAO_DOUBLE, GL_DRAW_BUFFER1},
  {  "GL_DRAW_BUFFER10", DAO_DOUBLE, GL_DRAW_BUFFER10},
  {  "GL_DRAW_BUFFER11", DAO_DOUBLE, GL_DRAW_BUFFER11},
  {  "GL_DRAW_BUFFER12", DAO_DOUBLE, GL_DRAW_BUFFER12},
  {  "GL_DRAW_BUFFER13", DAO_DOUBLE, GL_DRAW_BUFFER13},
  {  "GL_DRAW_BUFFER14", DAO_DOUBLE, GL_DRAW_BUFFER14},
  {  "GL_DRAW_BUFFER15", DAO_DOUBLE, GL_DRAW_BUFFER15},
  {  "GL_DRAW_BUFFER2", DAO_DOUBLE, GL_DRAW_BUFFER2},
  {  "GL_DRAW_BUFFER3", DAO_DOUBLE, GL_DRAW_BUFFER3},
  {  "GL_DRAW_BUFFER4", DAO_DOUBLE, GL_DRAW_BUFFER4},
  {  "GL_DRAW_BUFFER5", DAO_DOUBLE, GL_DRAW_BUFFER5},
  {  "GL_DRAW_BUFFER6", DAO_DOUBLE, GL_DRAW_BUFFER6},
  {  "GL_DRAW_BUFFER7", DAO_DOUBLE, GL_DRAW_BUFFER7},
  {  "GL_DRAW_BUFFER8", DAO_DOUBLE, GL_DRAW_BUFFER8},
  {  "GL_DRAW_BUFFER9", DAO_DOUBLE, GL_DRAW_BUFFER9},
  {  "GL_DRAW_PIXEL_TOKEN", DAO_DOUBLE, GL_DRAW_PIXEL_TOKEN},
  {  "GL_DST_ALPHA", DAO_DOUBLE, GL_DST_ALPHA},
  {  "GL_DST_COLOR", DAO_DOUBLE, GL_DST_COLOR},
  {  "GL_DYNAMIC_COPY", DAO_DOUBLE, GL_DYNAMIC_COPY},
  {  "GL_DYNAMIC_DRAW", DAO_DOUBLE, GL_DYNAMIC_DRAW},
  {  "GL_DYNAMIC_READ", DAO_DOUBLE, GL_DYNAMIC_READ},
  {  "GL_EDGE_FLAG", DAO_DOUBLE, GL_EDGE_FLAG},
  {  "GL_EDGE_FLAG_ARRAY", DAO_DOUBLE, GL_EDGE_FLAG_ARRAY},
  {  "GL_EDGE_FLAG_ARRAY_BUFFER_BINDING", DAO_DOUBLE, GL_EDGE_FLAG_ARRAY_BUFFER_BINDING},
  {  "GL_EDGE_FLAG_ARRAY_POINTER", DAO_DOUBLE, GL_EDGE_FLAG_ARRAY_POINTER},
  {  "GL_EDGE_FLAG_ARRAY_STRIDE", DAO_DOUBLE, GL_EDGE_FLAG_ARRAY_STRIDE},
  {  "GL_ELEMENT_ARRAY_BUFFER", DAO_DOUBLE, GL_ELEMENT_ARRAY_BUFFER},
  {  "GL_ELEMENT_ARRAY_BUFFER_BINDING", DAO_DOUBLE, GL_ELEMENT_ARRAY_BUFFER_BINDING},
  {  "GL_EMISSION", DAO_DOUBLE, GL_EMISSION},
  {  "GL_ENABLE_BIT", DAO_DOUBLE, GL_ENABLE_BIT},
  {  "GL_EQUAL", DAO_DOUBLE, GL_EQUAL},
  {  "GL_EQUIV", DAO_DOUBLE, GL_EQUIV},
  {  "GL_EVAL_BIT", DAO_DOUBLE, GL_EVAL_BIT},
  {  "GL_EXP", DAO_DOUBLE, GL_EXP},
  {  "GL_EXP2", DAO_DOUBLE, GL_EXP2},
  {  "GL_EXTENSIONS", DAO_DOUBLE, GL_EXTENSIONS},
  {  "GL_EYE_LINEAR", DAO_DOUBLE, GL_EYE_LINEAR},
  {  "GL_EYE_PLANE", DAO_DOUBLE, GL_EYE_PLANE},
  {  "GL_FALSE", DAO_DOUBLE, GL_FALSE},
  {  "GL_FASTEST", DAO_DOUBLE, GL_FASTEST},
  {  "GL_FEEDBACK", DAO_DOUBLE, GL_FEEDBACK},
  {  "GL_FEEDBACK_BUFFER_POINTER", DAO_DOUBLE, GL_FEEDBACK_BUFFER_POINTER},
  {  "GL_FEEDBACK_BUFFER_SIZE", DAO_DOUBLE, GL_FEEDBACK_BUFFER_SIZE},
  {  "GL_FEEDBACK_BUFFER_TYPE", DAO_DOUBLE, GL_FEEDBACK_BUFFER_TYPE},
  {  "GL_FILL", DAO_DOUBLE, GL_FILL},
  {  "GL_FLAT", DAO_DOUBLE, GL_FLAT},
  {  "GL_FLOAT", DAO_DOUBLE, GL_FLOAT},
  {  "GL_FLOAT_MAT2", DAO_DOUBLE, GL_FLOAT_MAT2},
  {  "GL_FLOAT_MAT2x3", DAO_DOUBLE, GL_FLOAT_MAT2x3},
  {  "GL_FLOAT_MAT2x4", DAO_DOUBLE, GL_FLOAT_MAT2x4},
  {  "GL_FLOAT_MAT3", DAO_DOUBLE, GL_FLOAT_MAT3},
  {  "GL_FLOAT_MAT3x2", DAO_DOUBLE, GL_FLOAT_MAT3x2},
  {  "GL_FLOAT_MAT3x4", DAO_DOUBLE, GL_FLOAT_MAT3x4},
  {  "GL_FLOAT_MAT4", DAO_DOUBLE, GL_FLOAT_MAT4},
  {  "GL_FLOAT_MAT4x2", DAO_DOUBLE, GL_FLOAT_MAT4x2},
  {  "GL_FLOAT_MAT4x3", DAO_DOUBLE, GL_FLOAT_MAT4x3},
  {  "GL_FLOAT_VEC2", DAO_DOUBLE, GL_FLOAT_VEC2},
  {  "GL_FLOAT_VEC3", DAO_DOUBLE, GL_FLOAT_VEC3},
  {  "GL_FLOAT_VEC4", DAO_DOUBLE, GL_FLOAT_VEC4},
  {  "GL_FOG", DAO_DOUBLE, GL_FOG},
  {  "GL_FOG_BIT", DAO_DOUBLE, GL_FOG_BIT},
  {  "GL_FOG_COLOR", DAO_DOUBLE, GL_FOG_COLOR},
  {  "GL_FOG_COORD", DAO_DOUBLE, GL_FOG_COORD},
  {  "GL_FOG_COORDINATE", DAO_DOUBLE, GL_FOG_COORDINATE},
  {  "GL_FOG_COORDINATE_ARRAY", DAO_DOUBLE, GL_FOG_COORDINATE_ARRAY},
  {  "GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING", DAO_DOUBLE, GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING},
  {  "GL_FOG_COORDINATE_ARRAY_POINTER", DAO_DOUBLE, GL_FOG_COORDINATE_ARRAY_POINTER},
  {  "GL_FOG_COORDINATE_ARRAY_STRIDE", DAO_DOUBLE, GL_FOG_COORDINATE_ARRAY_STRIDE},
  {  "GL_FOG_COORDINATE_ARRAY_TYPE", DAO_DOUBLE, GL_FOG_COORDINATE_ARRAY_TYPE},
  {  "GL_FOG_COORDINATE_SOURCE", DAO_DOUBLE, GL_FOG_COORDINATE_SOURCE},
  {  "GL_FOG_COORD_ARRAY", DAO_DOUBLE, GL_FOG_COORD_ARRAY},
  {  "GL_FOG_COORD_ARRAY_BUFFER_BINDING", DAO_DOUBLE, GL_FOG_COORD_ARRAY_BUFFER_BINDING},
  {  "GL_FOG_COORD_ARRAY_POINTER", DAO_DOUBLE, GL_FOG_COORD_ARRAY_POINTER},
  {  "GL_FOG_COORD_ARRAY_STRIDE", DAO_DOUBLE, GL_FOG_COORD_ARRAY_STRIDE},
  {  "GL_FOG_COORD_ARRAY_TYPE", DAO_DOUBLE, GL_FOG_COORD_ARRAY_TYPE},
  {  "GL_FOG_COORD_SRC", DAO_DOUBLE, GL_FOG_COORD_SRC},
  {  "GL_FOG_DENSITY", DAO_DOUBLE, GL_FOG_DENSITY},
  {  "GL_FOG_END", DAO_DOUBLE, GL_FOG_END},
  {  "GL_FOG_HINT", DAO_DOUBLE, GL_FOG_HINT},
  {  "GL_FOG_INDEX", DAO_DOUBLE, GL_FOG_INDEX},
  {  "GL_FOG_MODE", DAO_DOUBLE, GL_FOG_MODE},
  {  "GL_FOG_START", DAO_DOUBLE, GL_FOG_START},
  {  "GL_FRAGMENT_DEPTH", DAO_DOUBLE, GL_FRAGMENT_DEPTH},
  {  "GL_FRAGMENT_SHADER", DAO_DOUBLE, GL_FRAGMENT_SHADER},
  {  "GL_FRAGMENT_SHADER_DERIVATIVE_HINT", DAO_DOUBLE, GL_FRAGMENT_SHADER_DERIVATIVE_HINT},
  {  "GL_FRONT", DAO_DOUBLE, GL_FRONT},
  {  "GL_FRONT_AND_BACK", DAO_DOUBLE, GL_FRONT_AND_BACK},
  {  "GL_FRONT_FACE", DAO_DOUBLE, GL_FRONT_FACE},
  {  "GL_FRONT_LEFT", DAO_DOUBLE, GL_FRONT_LEFT},
  {  "GL_FRONT_RIGHT", DAO_DOUBLE, GL_FRONT_RIGHT},
  {  "GL_FUNC_ADD", DAO_DOUBLE, GL_FUNC_ADD},
  {  "GL_FUNC_REVERSE_SUBTRACT", DAO_DOUBLE, GL_FUNC_REVERSE_SUBTRACT},
  {  "GL_FUNC_SUBTRACT", DAO_DOUBLE, GL_FUNC_SUBTRACT},
  {  "GL_GENERATE_MIPMAP", DAO_DOUBLE, GL_GENERATE_MIPMAP},
  {  "GL_GENERATE_MIPMAP_HINT", DAO_DOUBLE, GL_GENERATE_MIPMAP_HINT},
  {  "GL_GEQUAL", DAO_DOUBLE, GL_GEQUAL},
  {  "GL_GREATER", DAO_DOUBLE, GL_GREATER},
  {  "GL_GREEN", DAO_DOUBLE, GL_GREEN},
  {  "GL_GREEN_BIAS", DAO_DOUBLE, GL_GREEN_BIAS},
  {  "GL_GREEN_BITS", DAO_DOUBLE, GL_GREEN_BITS},
  {  "GL_GREEN_SCALE", DAO_DOUBLE, GL_GREEN_SCALE},
  {  "GL_HINT_BIT", DAO_DOUBLE, GL_HINT_BIT},
  {  "GL_HISTOGRAM", DAO_DOUBLE, GL_HISTOGRAM},
  {  "GL_HISTOGRAM_ALPHA_SIZE", DAO_DOUBLE, GL_HISTOGRAM_ALPHA_SIZE},
  {  "GL_HISTOGRAM_BLUE_SIZE", DAO_DOUBLE, GL_HISTOGRAM_BLUE_SIZE},
  {  "GL_HISTOGRAM_FORMAT", DAO_DOUBLE, GL_HISTOGRAM_FORMAT},
  {  "GL_HISTOGRAM_GREEN_SIZE", DAO_DOUBLE, GL_HISTOGRAM_GREEN_SIZE},
  {  "GL_HISTOGRAM_LUMINANCE_SIZE", DAO_DOUBLE, GL_HISTOGRAM_LUMINANCE_SIZE},
  {  "GL_HISTOGRAM_RED_SIZE", DAO_DOUBLE, GL_HISTOGRAM_RED_SIZE},
  {  "GL_HISTOGRAM_SINK", DAO_DOUBLE, GL_HISTOGRAM_SINK},
  {  "GL_HISTOGRAM_WIDTH", DAO_DOUBLE, GL_HISTOGRAM_WIDTH},
  {  "GL_INCR", DAO_DOUBLE, GL_INCR},
  {  "GL_INCR_WRAP", DAO_DOUBLE, GL_INCR_WRAP},
  {  "GL_INDEX_ARRAY", DAO_DOUBLE, GL_INDEX_ARRAY},
  {  "GL_INDEX_ARRAY_BUFFER_BINDING", DAO_DOUBLE, GL_INDEX_ARRAY_BUFFER_BINDING},
  {  "GL_INDEX_ARRAY_POINTER", DAO_DOUBLE, GL_INDEX_ARRAY_POINTER},
  {  "GL_INDEX_ARRAY_STRIDE", DAO_DOUBLE, GL_INDEX_ARRAY_STRIDE},
  {  "GL_INDEX_ARRAY_TYPE", DAO_DOUBLE, GL_INDEX_ARRAY_TYPE},
  {  "GL_INDEX_BITS", DAO_DOUBLE, GL_INDEX_BITS},
  {  "GL_INDEX_CLEAR_VALUE", DAO_DOUBLE, GL_INDEX_CLEAR_VALUE},
  {  "GL_INDEX_LOGIC_OP", DAO_DOUBLE, GL_INDEX_LOGIC_OP},
  {  "GL_INDEX_MODE", DAO_DOUBLE, GL_INDEX_MODE},
  {  "GL_INDEX_OFFSET", DAO_DOUBLE, GL_INDEX_OFFSET},
  {  "GL_INDEX_SHIFT", DAO_DOUBLE, GL_INDEX_SHIFT},
  {  "GL_INDEX_WRITEMASK", DAO_DOUBLE, GL_INDEX_WRITEMASK},
  {  "GL_INFO_LOG_LENGTH", DAO_DOUBLE, GL_INFO_LOG_LENGTH},
  {  "GL_INT", DAO_DOUBLE, GL_INT},
  {  "GL_INTENSITY", DAO_DOUBLE, GL_INTENSITY},
  {  "GL_INTENSITY12", DAO_DOUBLE, GL_INTENSITY12},
  {  "GL_INTENSITY16", DAO_DOUBLE, GL_INTENSITY16},
  {  "GL_INTENSITY4", DAO_DOUBLE, GL_INTENSITY4},
  {  "GL_INTENSITY8", DAO_DOUBLE, GL_INTENSITY8},
  {  "GL_INTERPOLATE", DAO_DOUBLE, GL_INTERPOLATE},
  {  "GL_INT_VEC2", DAO_DOUBLE, GL_INT_VEC2},
  {  "GL_INT_VEC3", DAO_DOUBLE, GL_INT_VEC3},
  {  "GL_INT_VEC4", DAO_DOUBLE, GL_INT_VEC4},
  {  "GL_INVALID_ENUM", DAO_DOUBLE, GL_INVALID_ENUM},
  {  "GL_INVALID_OPERATION", DAO_DOUBLE, GL_INVALID_OPERATION},
  {  "GL_INVALID_VALUE", DAO_DOUBLE, GL_INVALID_VALUE},
  {  "GL_INVERT", DAO_DOUBLE, GL_INVERT},
  {  "GL_KEEP", DAO_DOUBLE, GL_KEEP},
  {  "GL_LEFT", DAO_DOUBLE, GL_LEFT},
  {  "GL_LEQUAL", DAO_DOUBLE, GL_LEQUAL},
  {  "GL_LESS", DAO_DOUBLE, GL_LESS},
  {  "GL_LIGHT0", DAO_DOUBLE, GL_LIGHT0},
  {  "GL_LIGHT1", DAO_DOUBLE, GL_LIGHT1},
  {  "GL_LIGHT2", DAO_DOUBLE, GL_LIGHT2},
  {  "GL_LIGHT3", DAO_DOUBLE, GL_LIGHT3},
  {  "GL_LIGHT4", DAO_DOUBLE, GL_LIGHT4},
  {  "GL_LIGHT5", DAO_DOUBLE, GL_LIGHT5},
  {  "GL_LIGHT6", DAO_DOUBLE, GL_LIGHT6},
  {  "GL_LIGHT7", DAO_DOUBLE, GL_LIGHT7},
  {  "GL_LIGHTING", DAO_DOUBLE, GL_LIGHTING},
  {  "GL_LIGHTING_BIT", DAO_DOUBLE, GL_LIGHTING_BIT},
  {  "GL_LIGHT_MODEL_AMBIENT", DAO_DOUBLE, GL_LIGHT_MODEL_AMBIENT},
  {  "GL_LIGHT_MODEL_COLOR_CONTROL", DAO_DOUBLE, GL_LIGHT_MODEL_COLOR_CONTROL},
  {  "GL_LIGHT_MODEL_LOCAL_VIEWER", DAO_DOUBLE, GL_LIGHT_MODEL_LOCAL_VIEWER},
  {  "GL_LIGHT_MODEL_TWO_SIDE", DAO_DOUBLE, GL_LIGHT_MODEL_TWO_SIDE},
  {  "GL_LINE", DAO_DOUBLE, GL_LINE},
  {  "GL_LINEAR", DAO_DOUBLE, GL_LINEAR},
  {  "GL_LINEAR_ATTENUATION", DAO_DOUBLE, GL_LINEAR_ATTENUATION},
  {  "GL_LINEAR_MIPMAP_LINEAR", DAO_DOUBLE, GL_LINEAR_MIPMAP_LINEAR},
  {  "GL_LINEAR_MIPMAP_NEAREST", DAO_DOUBLE, GL_LINEAR_MIPMAP_NEAREST},
  {  "GL_LINES", DAO_DOUBLE, GL_LINES},
  {  "GL_LINE_BIT", DAO_DOUBLE, GL_LINE_BIT},
  {  "GL_LINE_LOOP", DAO_DOUBLE, GL_LINE_LOOP},
  {  "GL_LINE_RESET_TOKEN", DAO_DOUBLE, GL_LINE_RESET_TOKEN},
  {  "GL_LINE_SMOOTH", DAO_DOUBLE, GL_LINE_SMOOTH},
  {  "GL_LINE_SMOOTH_HINT", DAO_DOUBLE, GL_LINE_SMOOTH_HINT},
  {  "GL_LINE_STIPPLE", DAO_DOUBLE, GL_LINE_STIPPLE},
  {  "GL_LINE_STIPPLE_PATTERN", DAO_DOUBLE, GL_LINE_STIPPLE_PATTERN},
  {  "GL_LINE_STIPPLE_REPEAT", DAO_DOUBLE, GL_LINE_STIPPLE_REPEAT},
  {  "GL_LINE_STRIP", DAO_DOUBLE, GL_LINE_STRIP},
  {  "GL_LINE_TOKEN", DAO_DOUBLE, GL_LINE_TOKEN},
  {  "GL_LINE_WIDTH", DAO_DOUBLE, GL_LINE_WIDTH},
  {  "GL_LINE_WIDTH_GRANULARITY", DAO_DOUBLE, GL_LINE_WIDTH_GRANULARITY},
  {  "GL_LINE_WIDTH_RANGE", DAO_DOUBLE, GL_LINE_WIDTH_RANGE},
  {  "GL_LINK_STATUS", DAO_DOUBLE, GL_LINK_STATUS},
  {  "GL_LIST_BASE", DAO_DOUBLE, GL_LIST_BASE},
  {  "GL_LIST_BIT", DAO_DOUBLE, GL_LIST_BIT},
  {  "GL_LIST_INDEX", DAO_DOUBLE, GL_LIST_INDEX},
  {  "GL_LIST_MODE", DAO_DOUBLE, GL_LIST_MODE},
  {  "GL_LOAD", DAO_DOUBLE, GL_LOAD},
  {  "GL_LOGIC_OP_MODE", DAO_DOUBLE, GL_LOGIC_OP_MODE},
  {  "GL_LOWER_LEFT", DAO_DOUBLE, GL_LOWER_LEFT},
  {  "GL_LUMINANCE", DAO_DOUBLE, GL_LUMINANCE},
  {  "GL_LUMINANCE12", DAO_DOUBLE, GL_LUMINANCE12},
  {  "GL_LUMINANCE12_ALPHA12", DAO_DOUBLE, GL_LUMINANCE12_ALPHA12},
  {  "GL_LUMINANCE12_ALPHA4", DAO_DOUBLE, GL_LUMINANCE12_ALPHA4},
  {  "GL_LUMINANCE16", DAO_DOUBLE, GL_LUMINANCE16},
  {  "GL_LUMINANCE16_ALPHA16", DAO_DOUBLE, GL_LUMINANCE16_ALPHA16},
  {  "GL_LUMINANCE4", DAO_DOUBLE, GL_LUMINANCE4},
  {  "GL_LUMINANCE4_ALPHA4", DAO_DOUBLE, GL_LUMINANCE4_ALPHA4},
  {  "GL_LUMINANCE6_ALPHA2", DAO_DOUBLE, GL_LUMINANCE6_ALPHA2},
  {  "GL_LUMINANCE8", DAO_DOUBLE, GL_LUMINANCE8},
  {  "GL_LUMINANCE8_ALPHA8", DAO_DOUBLE, GL_LUMINANCE8_ALPHA8},
  {  "GL_LUMINANCE_ALPHA", DAO_DOUBLE, GL_LUMINANCE_ALPHA},
  {  "GL_MAP1_COLOR_4", DAO_DOUBLE, GL_MAP1_COLOR_4},
  {  "GL_MAP1_GRID_DOMAIN", DAO_DOUBLE, GL_MAP1_GRID_DOMAIN},
  {  "GL_MAP1_GRID_SEGMENTS", DAO_DOUBLE, GL_MAP1_GRID_SEGMENTS},
  {  "GL_MAP1_INDEX", DAO_DOUBLE, GL_MAP1_INDEX},
  {  "GL_MAP1_NORMAL", DAO_DOUBLE, GL_MAP1_NORMAL},
  {  "GL_MAP1_TEXTURE_COORD_1", DAO_DOUBLE, GL_MAP1_TEXTURE_COORD_1},
  {  "GL_MAP1_TEXTURE_COORD_2", DAO_DOUBLE, GL_MAP1_TEXTURE_COORD_2},
  {  "GL_MAP1_TEXTURE_COORD_3", DAO_DOUBLE, GL_MAP1_TEXTURE_COORD_3},
  {  "GL_MAP1_TEXTURE_COORD_4", DAO_DOUBLE, GL_MAP1_TEXTURE_COORD_4},
  {  "GL_MAP1_VERTEX_3", DAO_DOUBLE, GL_MAP1_VERTEX_3},
  {  "GL_MAP1_VERTEX_4", DAO_DOUBLE, GL_MAP1_VERTEX_4},
  {  "GL_MAP2_COLOR_4", DAO_DOUBLE, GL_MAP2_COLOR_4},
  {  "GL_MAP2_GRID_DOMAIN", DAO_DOUBLE, GL_MAP2_GRID_DOMAIN},
  {  "GL_MAP2_GRID_SEGMENTS", DAO_DOUBLE, GL_MAP2_GRID_SEGMENTS},
  {  "GL_MAP2_INDEX", DAO_DOUBLE, GL_MAP2_INDEX},
  {  "GL_MAP2_NORMAL", DAO_DOUBLE, GL_MAP2_NORMAL},
  {  "GL_MAP2_TEXTURE_COORD_1", DAO_DOUBLE, GL_MAP2_TEXTURE_COORD_1},
  {  "GL_MAP2_TEXTURE_COORD_2", DAO_DOUBLE, GL_MAP2_TEXTURE_COORD_2},
  {  "GL_MAP2_TEXTURE_COORD_3", DAO_DOUBLE, GL_MAP2_TEXTURE_COORD_3},
  {  "GL_MAP2_TEXTURE_COORD_4", DAO_DOUBLE, GL_MAP2_TEXTURE_COORD_4},
  {  "GL_MAP2_VERTEX_3", DAO_DOUBLE, GL_MAP2_VERTEX_3},
  {  "GL_MAP2_VERTEX_4", DAO_DOUBLE, GL_MAP2_VERTEX_4},
  {  "GL_MAP_COLOR", DAO_DOUBLE, GL_MAP_COLOR},
  {  "GL_MAP_STENCIL", DAO_DOUBLE, GL_MAP_STENCIL},
  {  "GL_MATRIX_MODE", DAO_DOUBLE, GL_MATRIX_MODE},
  {  "GL_MAX", DAO_DOUBLE, GL_MAX},
  {  "GL_MAX_3D_TEXTURE_SIZE", DAO_DOUBLE, GL_MAX_3D_TEXTURE_SIZE},
  {  "GL_MAX_ATTRIB_STACK_DEPTH", DAO_DOUBLE, GL_MAX_ATTRIB_STACK_DEPTH},
  {  "GL_MAX_CLIENT_ATTRIB_STACK_DEPTH", DAO_DOUBLE, GL_MAX_CLIENT_ATTRIB_STACK_DEPTH},
  {  "GL_MAX_CLIP_PLANES", DAO_DOUBLE, GL_MAX_CLIP_PLANES},
  {  "GL_MAX_COLOR_MATRIX_STACK_DEPTH", DAO_DOUBLE, GL_MAX_COLOR_MATRIX_STACK_DEPTH},
  {  "GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS", DAO_DOUBLE, GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS},
  {  "GL_MAX_CONVOLUTION_HEIGHT", DAO_DOUBLE, GL_MAX_CONVOLUTION_HEIGHT},
  {  "GL_MAX_CONVOLUTION_WIDTH", DAO_DOUBLE, GL_MAX_CONVOLUTION_WIDTH},
  {  "GL_MAX_CUBE_MAP_TEXTURE_SIZE", DAO_DOUBLE, GL_MAX_CUBE_MAP_TEXTURE_SIZE},
  {  "GL_MAX_DRAW_BUFFERS", DAO_DOUBLE, GL_MAX_DRAW_BUFFERS},
  {  "GL_MAX_ELEMENTS_INDICES", DAO_DOUBLE, GL_MAX_ELEMENTS_INDICES},
  {  "GL_MAX_ELEMENTS_VERTICES", DAO_DOUBLE, GL_MAX_ELEMENTS_VERTICES},
  {  "GL_MAX_EVAL_ORDER", DAO_DOUBLE, GL_MAX_EVAL_ORDER},
  {  "GL_MAX_FRAGMENT_UNIFORM_COMPONENTS", DAO_DOUBLE, GL_MAX_FRAGMENT_UNIFORM_COMPONENTS},
  {  "GL_MAX_LIGHTS", DAO_DOUBLE, GL_MAX_LIGHTS},
  {  "GL_MAX_LIST_NESTING", DAO_DOUBLE, GL_MAX_LIST_NESTING},
  {  "GL_MAX_MODELVIEW_STACK_DEPTH", DAO_DOUBLE, GL_MAX_MODELVIEW_STACK_DEPTH},
  {  "GL_MAX_NAME_STACK_DEPTH", DAO_DOUBLE, GL_MAX_NAME_STACK_DEPTH},
  {  "GL_MAX_PIXEL_MAP_TABLE", DAO_DOUBLE, GL_MAX_PIXEL_MAP_TABLE},
  {  "GL_MAX_PROJECTION_STACK_DEPTH", DAO_DOUBLE, GL_MAX_PROJECTION_STACK_DEPTH},
  {  "GL_MAX_TEXTURE_COORDS", DAO_DOUBLE, GL_MAX_TEXTURE_COORDS},
  {  "GL_MAX_TEXTURE_IMAGE_UNITS", DAO_DOUBLE, GL_MAX_TEXTURE_IMAGE_UNITS},
  {  "GL_MAX_TEXTURE_LOD_BIAS", DAO_DOUBLE, GL_MAX_TEXTURE_LOD_BIAS},
  {  "GL_MAX_TEXTURE_SIZE", DAO_DOUBLE, GL_MAX_TEXTURE_SIZE},
  {  "GL_MAX_TEXTURE_STACK_DEPTH", DAO_DOUBLE, GL_MAX_TEXTURE_STACK_DEPTH},
  {  "GL_MAX_TEXTURE_UNITS", DAO_DOUBLE, GL_MAX_TEXTURE_UNITS},
  {  "GL_MAX_VARYING_FLOATS", DAO_DOUBLE, GL_MAX_VARYING_FLOATS},
  {  "GL_MAX_VERTEX_ATTRIBS", DAO_DOUBLE, GL_MAX_VERTEX_ATTRIBS},
  {  "GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS", DAO_DOUBLE, GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS},
  {  "GL_MAX_VERTEX_UNIFORM_COMPONENTS", DAO_DOUBLE, GL_MAX_VERTEX_UNIFORM_COMPONENTS},
  {  "GL_MAX_VIEWPORT_DIMS", DAO_DOUBLE, GL_MAX_VIEWPORT_DIMS},
  {  "GL_MIN", DAO_DOUBLE, GL_MIN},
  {  "GL_MINMAX", DAO_DOUBLE, GL_MINMAX},
  {  "GL_MINMAX_FORMAT", DAO_DOUBLE, GL_MINMAX_FORMAT},
  {  "GL_MINMAX_SINK", DAO_DOUBLE, GL_MINMAX_SINK},
  {  "GL_MIRRORED_REPEAT", DAO_DOUBLE, GL_MIRRORED_REPEAT},
  {  "GL_MODELVIEW", DAO_DOUBLE, GL_MODELVIEW},
  {  "GL_MODELVIEW_MATRIX", DAO_DOUBLE, GL_MODELVIEW_MATRIX},
  {  "GL_MODELVIEW_STACK_DEPTH", DAO_DOUBLE, GL_MODELVIEW_STACK_DEPTH},
  {  "GL_MODULATE", DAO_DOUBLE, GL_MODULATE},
  {  "GL_MULT", DAO_DOUBLE, GL_MULT},
  {  "GL_MULTISAMPLE", DAO_DOUBLE, GL_MULTISAMPLE},
  {  "GL_MULTISAMPLE_BIT", DAO_DOUBLE, GL_MULTISAMPLE_BIT},
  {  "GL_N3F_V3F", DAO_DOUBLE, GL_N3F_V3F},
  {  "GL_NAME_STACK_DEPTH", DAO_DOUBLE, GL_NAME_STACK_DEPTH},
  {  "GL_NAND", DAO_DOUBLE, GL_NAND},
  {  "GL_NEAREST", DAO_DOUBLE, GL_NEAREST},
  {  "GL_NEAREST_MIPMAP_LINEAR", DAO_DOUBLE, GL_NEAREST_MIPMAP_LINEAR},
  {  "GL_NEAREST_MIPMAP_NEAREST", DAO_DOUBLE, GL_NEAREST_MIPMAP_NEAREST},
  {  "GL_NEVER", DAO_DOUBLE, GL_NEVER},
  {  "GL_NICEST", DAO_DOUBLE, GL_NICEST},
  {  "GL_NONE", DAO_DOUBLE, GL_NONE},
  {  "GL_NOOP", DAO_DOUBLE, GL_NOOP},
  {  "GL_NOR", DAO_DOUBLE, GL_NOR},
  {  "GL_NORMALIZE", DAO_DOUBLE, GL_NORMALIZE},
  {  "GL_NORMAL_ARRAY", DAO_DOUBLE, GL_NORMAL_ARRAY},
  {  "GL_NORMAL_ARRAY_BUFFER_BINDING", DAO_DOUBLE, GL_NORMAL_ARRAY_BUFFER_BINDING},
  {  "GL_NORMAL_ARRAY_POINTER", DAO_DOUBLE, GL_NORMAL_ARRAY_POINTER},
  {  "GL_NORMAL_ARRAY_STRIDE", DAO_DOUBLE, GL_NORMAL_ARRAY_STRIDE},
  {  "GL_NORMAL_ARRAY_TYPE", DAO_DOUBLE, GL_NORMAL_ARRAY_TYPE},
  {  "GL_NORMAL_MAP", DAO_DOUBLE, GL_NORMAL_MAP},
  {  "GL_NOTEQUAL", DAO_DOUBLE, GL_NOTEQUAL},
  {  "GL_NO_ERROR", DAO_DOUBLE, GL_NO_ERROR},
  {  "GL_NUM_COMPRESSED_TEXTURE_FORMATS", DAO_DOUBLE, GL_NUM_COMPRESSED_TEXTURE_FORMATS},
  {  "GL_OBJECT_LINEAR", DAO_DOUBLE, GL_OBJECT_LINEAR},
  {  "GL_OBJECT_PLANE", DAO_DOUBLE, GL_OBJECT_PLANE},
  {  "GL_ONE", DAO_DOUBLE, GL_ONE},
  {  "GL_ONE_MINUS_CONSTANT_ALPHA", DAO_DOUBLE, GL_ONE_MINUS_CONSTANT_ALPHA},
  {  "GL_ONE_MINUS_CONSTANT_COLOR", DAO_DOUBLE, GL_ONE_MINUS_CONSTANT_COLOR},
  {  "GL_ONE_MINUS_DST_ALPHA", DAO_DOUBLE, GL_ONE_MINUS_DST_ALPHA},
  {  "GL_ONE_MINUS_DST_COLOR", DAO_DOUBLE, GL_ONE_MINUS_DST_COLOR},
  {  "GL_ONE_MINUS_SRC_ALPHA", DAO_DOUBLE, GL_ONE_MINUS_SRC_ALPHA},
  {  "GL_ONE_MINUS_SRC_COLOR", DAO_DOUBLE, GL_ONE_MINUS_SRC_COLOR},
  {  "GL_OPERAND0_ALPHA", DAO_DOUBLE, GL_OPERAND0_ALPHA},
  {  "GL_OPERAND0_RGB", DAO_DOUBLE, GL_OPERAND0_RGB},
  {  "GL_OPERAND1_ALPHA", DAO_DOUBLE, GL_OPERAND1_ALPHA},
  {  "GL_OPERAND1_RGB", DAO_DOUBLE, GL_OPERAND1_RGB},
  {  "GL_OPERAND2_ALPHA", DAO_DOUBLE, GL_OPERAND2_ALPHA},
  {  "GL_OPERAND2_RGB", DAO_DOUBLE, GL_OPERAND2_RGB},
  {  "GL_OR", DAO_DOUBLE, GL_OR},
  {  "GL_ORDER", DAO_DOUBLE, GL_ORDER},
  {  "GL_OR_INVERTED", DAO_DOUBLE, GL_OR_INVERTED},
  {  "GL_OR_REVERSE", DAO_DOUBLE, GL_OR_REVERSE},
  {  "GL_OUT_OF_MEMORY", DAO_DOUBLE, GL_OUT_OF_MEMORY},
  {  "GL_PACK_ALIGNMENT", DAO_DOUBLE, GL_PACK_ALIGNMENT},
  {  "GL_PACK_IMAGE_HEIGHT", DAO_DOUBLE, GL_PACK_IMAGE_HEIGHT},
  {  "GL_PACK_LSB_FIRST", DAO_DOUBLE, GL_PACK_LSB_FIRST},
  {  "GL_PACK_ROW_LENGTH", DAO_DOUBLE, GL_PACK_ROW_LENGTH},
  {  "GL_PACK_SKIP_IMAGES", DAO_DOUBLE, GL_PACK_SKIP_IMAGES},
  {  "GL_PACK_SKIP_PIXELS", DAO_DOUBLE, GL_PACK_SKIP_PIXELS},
  {  "GL_PACK_SKIP_ROWS", DAO_DOUBLE, GL_PACK_SKIP_ROWS},
  {  "GL_PACK_SWAP_BYTES", DAO_DOUBLE, GL_PACK_SWAP_BYTES},
  {  "GL_PASS_THROUGH_TOKEN", DAO_DOUBLE, GL_PASS_THROUGH_TOKEN},
  {  "GL_PERSPECTIVE_CORRECTION_HINT", DAO_DOUBLE, GL_PERSPECTIVE_CORRECTION_HINT},
  {  "GL_PIXEL_MAP_A_TO_A", DAO_DOUBLE, GL_PIXEL_MAP_A_TO_A},
  {  "GL_PIXEL_MAP_A_TO_A_SIZE", DAO_DOUBLE, GL_PIXEL_MAP_A_TO_A_SIZE},
  {  "GL_PIXEL_MAP_B_TO_B", DAO_DOUBLE, GL_PIXEL_MAP_B_TO_B},
  {  "GL_PIXEL_MAP_B_TO_B_SIZE", DAO_DOUBLE, GL_PIXEL_MAP_B_TO_B_SIZE},
  {  "GL_PIXEL_MAP_G_TO_G", DAO_DOUBLE, GL_PIXEL_MAP_G_TO_G},
  {  "GL_PIXEL_MAP_G_TO_G_SIZE", DAO_DOUBLE, GL_PIXEL_MAP_G_TO_G_SIZE},
  {  "GL_PIXEL_MAP_I_TO_A", DAO_DOUBLE, GL_PIXEL_MAP_I_TO_A},
  {  "GL_PIXEL_MAP_I_TO_A_SIZE", DAO_DOUBLE, GL_PIXEL_MAP_I_TO_A_SIZE},
  {  "GL_PIXEL_MAP_I_TO_B", DAO_DOUBLE, GL_PIXEL_MAP_I_TO_B},
  {  "GL_PIXEL_MAP_I_TO_B_SIZE", DAO_DOUBLE, GL_PIXEL_MAP_I_TO_B_SIZE},
  {  "GL_PIXEL_MAP_I_TO_G", DAO_DOUBLE, GL_PIXEL_MAP_I_TO_G},
  {  "GL_PIXEL_MAP_I_TO_G_SIZE", DAO_DOUBLE, GL_PIXEL_MAP_I_TO_G_SIZE},
  {  "GL_PIXEL_MAP_I_TO_I", DAO_DOUBLE, GL_PIXEL_MAP_I_TO_I},
  {  "GL_PIXEL_MAP_I_TO_I_SIZE", DAO_DOUBLE, GL_PIXEL_MAP_I_TO_I_SIZE},
  {  "GL_PIXEL_MAP_I_TO_R", DAO_DOUBLE, GL_PIXEL_MAP_I_TO_R},
  {  "GL_PIXEL_MAP_I_TO_R_SIZE", DAO_DOUBLE, GL_PIXEL_MAP_I_TO_R_SIZE},
  {  "GL_PIXEL_MAP_R_TO_R", DAO_DOUBLE, GL_PIXEL_MAP_R_TO_R},
  {  "GL_PIXEL_MAP_R_TO_R_SIZE", DAO_DOUBLE, GL_PIXEL_MAP_R_TO_R_SIZE},
  {  "GL_PIXEL_MAP_S_TO_S", DAO_DOUBLE, GL_PIXEL_MAP_S_TO_S},
  {  "GL_PIXEL_MAP_S_TO_S_SIZE", DAO_DOUBLE, GL_PIXEL_MAP_S_TO_S_SIZE},
  {  "GL_PIXEL_MODE_BIT", DAO_DOUBLE, GL_PIXEL_MODE_BIT},
  {  "GL_PIXEL_PACK_BUFFER", DAO_DOUBLE, GL_PIXEL_PACK_BUFFER},
  {  "GL_PIXEL_PACK_BUFFER_BINDING", DAO_DOUBLE, GL_PIXEL_PACK_BUFFER_BINDING},
  {  "GL_PIXEL_UNPACK_BUFFER", DAO_DOUBLE, GL_PIXEL_UNPACK_BUFFER},
  {  "GL_PIXEL_UNPACK_BUFFER_BINDING", DAO_DOUBLE, GL_PIXEL_UNPACK_BUFFER_BINDING},
  {  "GL_POINT", DAO_DOUBLE, GL_POINT},
  {  "GL_POINTS", DAO_DOUBLE, GL_POINTS},
  {  "GL_POINT_BIT", DAO_DOUBLE, GL_POINT_BIT},
  {  "GL_POINT_DISTANCE_ATTENUATION", DAO_DOUBLE, GL_POINT_DISTANCE_ATTENUATION},
  {  "GL_POINT_FADE_THRESHOLD_SIZE", DAO_DOUBLE, GL_POINT_FADE_THRESHOLD_SIZE},
  {  "GL_POINT_SIZE", DAO_DOUBLE, GL_POINT_SIZE},
  {  "GL_POINT_SIZE_GRANULARITY", DAO_DOUBLE, GL_POINT_SIZE_GRANULARITY},
  {  "GL_POINT_SIZE_MAX", DAO_DOUBLE, GL_POINT_SIZE_MAX},
  {  "GL_POINT_SIZE_MIN", DAO_DOUBLE, GL_POINT_SIZE_MIN},
  {  "GL_POINT_SIZE_RANGE", DAO_DOUBLE, GL_POINT_SIZE_RANGE},
  {  "GL_POINT_SMOOTH", DAO_DOUBLE, GL_POINT_SMOOTH},
  {  "GL_POINT_SMOOTH_HINT", DAO_DOUBLE, GL_POINT_SMOOTH_HINT},
  {  "GL_POINT_SPRITE", DAO_DOUBLE, GL_POINT_SPRITE},
  {  "GL_POINT_SPRITE_COORD_ORIGIN", DAO_DOUBLE, GL_POINT_SPRITE_COORD_ORIGIN},
  {  "GL_POINT_TOKEN", DAO_DOUBLE, GL_POINT_TOKEN},
  {  "GL_POLYGON", DAO_DOUBLE, GL_POLYGON},
  {  "GL_POLYGON_BIT", DAO_DOUBLE, GL_POLYGON_BIT},
  {  "GL_POLYGON_MODE", DAO_DOUBLE, GL_POLYGON_MODE},
  {  "GL_POLYGON_OFFSET_FACTOR", DAO_DOUBLE, GL_POLYGON_OFFSET_FACTOR},
  {  "GL_POLYGON_OFFSET_FILL", DAO_DOUBLE, GL_POLYGON_OFFSET_FILL},
  {  "GL_POLYGON_OFFSET_LINE", DAO_DOUBLE, GL_POLYGON_OFFSET_LINE},
  {  "GL_POLYGON_OFFSET_POINT", DAO_DOUBLE, GL_POLYGON_OFFSET_POINT},
  {  "GL_POLYGON_OFFSET_UNITS", DAO_DOUBLE, GL_POLYGON_OFFSET_UNITS},
  {  "GL_POLYGON_SMOOTH", DAO_DOUBLE, GL_POLYGON_SMOOTH},
  {  "GL_POLYGON_SMOOTH_HINT", DAO_DOUBLE, GL_POLYGON_SMOOTH_HINT},
  {  "GL_POLYGON_STIPPLE", DAO_DOUBLE, GL_POLYGON_STIPPLE},
  {  "GL_POLYGON_STIPPLE_BIT", DAO_DOUBLE, GL_POLYGON_STIPPLE_BIT},
  {  "GL_POLYGON_TOKEN", DAO_DOUBLE, GL_POLYGON_TOKEN},
  {  "GL_POSITION", DAO_DOUBLE, GL_POSITION},
  {  "GL_POST_COLOR_MATRIX_ALPHA_BIAS", DAO_DOUBLE, GL_POST_COLOR_MATRIX_ALPHA_BIAS},
  {  "GL_POST_COLOR_MATRIX_ALPHA_SCALE", DAO_DOUBLE, GL_POST_COLOR_MATRIX_ALPHA_SCALE},
  {  "GL_POST_COLOR_MATRIX_BLUE_BIAS", DAO_DOUBLE, GL_POST_COLOR_MATRIX_BLUE_BIAS},
  {  "GL_POST_COLOR_MATRIX_BLUE_SCALE", DAO_DOUBLE, GL_POST_COLOR_MATRIX_BLUE_SCALE},
  {  "GL_POST_COLOR_MATRIX_COLOR_TABLE", DAO_DOUBLE, GL_POST_COLOR_MATRIX_COLOR_TABLE},
  {  "GL_POST_COLOR_MATRIX_GREEN_BIAS", DAO_DOUBLE, GL_POST_COLOR_MATRIX_GREEN_BIAS},
  {  "GL_POST_COLOR_MATRIX_GREEN_SCALE", DAO_DOUBLE, GL_POST_COLOR_MATRIX_GREEN_SCALE},
  {  "GL_POST_COLOR_MATRIX_RED_BIAS", DAO_DOUBLE, GL_POST_COLOR_MATRIX_RED_BIAS},
  {  "GL_POST_COLOR_MATRIX_RED_SCALE", DAO_DOUBLE, GL_POST_COLOR_MATRIX_RED_SCALE},
  {  "GL_POST_CONVOLUTION_ALPHA_BIAS", DAO_DOUBLE, GL_POST_CONVOLUTION_ALPHA_BIAS},
  {  "GL_POST_CONVOLUTION_ALPHA_SCALE", DAO_DOUBLE, GL_POST_CONVOLUTION_ALPHA_SCALE},
  {  "GL_POST_CONVOLUTION_BLUE_BIAS", DAO_DOUBLE, GL_POST_CONVOLUTION_BLUE_BIAS},
  {  "GL_POST_CONVOLUTION_BLUE_SCALE", DAO_DOUBLE, GL_POST_CONVOLUTION_BLUE_SCALE},
  {  "GL_POST_CONVOLUTION_COLOR_TABLE", DAO_DOUBLE, GL_POST_CONVOLUTION_COLOR_TABLE},
  {  "GL_POST_CONVOLUTION_GREEN_BIAS", DAO_DOUBLE, GL_POST_CONVOLUTION_GREEN_BIAS},
  {  "GL_POST_CONVOLUTION_GREEN_SCALE", DAO_DOUBLE, GL_POST_CONVOLUTION_GREEN_SCALE},
  {  "GL_POST_CONVOLUTION_RED_BIAS", DAO_DOUBLE, GL_POST_CONVOLUTION_RED_BIAS},
  {  "GL_POST_CONVOLUTION_RED_SCALE", DAO_DOUBLE, GL_POST_CONVOLUTION_RED_SCALE},
  {  "GL_PREVIOUS", DAO_DOUBLE, GL_PREVIOUS},
  {  "GL_PRIMARY_COLOR", DAO_DOUBLE, GL_PRIMARY_COLOR},
  {  "GL_PROJECTION", DAO_DOUBLE, GL_PROJECTION},
  {  "GL_PROJECTION_MATRIX", DAO_DOUBLE, GL_PROJECTION_MATRIX},
  {  "GL_PROJECTION_STACK_DEPTH", DAO_DOUBLE, GL_PROJECTION_STACK_DEPTH},
  {  "GL_PROXY_COLOR_TABLE", DAO_DOUBLE, GL_PROXY_COLOR_TABLE},
  {  "GL_PROXY_HISTOGRAM", DAO_DOUBLE, GL_PROXY_HISTOGRAM},
  {  "GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE", DAO_DOUBLE, GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE},
  {  "GL_PROXY_POST_CONVOLUTION_COLOR_TABLE", DAO_DOUBLE, GL_PROXY_POST_CONVOLUTION_COLOR_TABLE},
  {  "GL_PROXY_TEXTURE_1D", DAO_DOUBLE, GL_PROXY_TEXTURE_1D},
  {  "GL_PROXY_TEXTURE_2D", DAO_DOUBLE, GL_PROXY_TEXTURE_2D},
  {  "GL_PROXY_TEXTURE_3D", DAO_DOUBLE, GL_PROXY_TEXTURE_3D},
  {  "GL_PROXY_TEXTURE_CUBE_MAP", DAO_DOUBLE, GL_PROXY_TEXTURE_CUBE_MAP},
  {  "GL_Q", DAO_DOUBLE, GL_Q},
  {  "GL_QUADRATIC_ATTENUATION", DAO_DOUBLE, GL_QUADRATIC_ATTENUATION},
  {  "GL_QUADS", DAO_DOUBLE, GL_QUADS},
  {  "GL_QUAD_STRIP", DAO_DOUBLE, GL_QUAD_STRIP},
  {  "GL_QUERY_COUNTER_BITS", DAO_DOUBLE, GL_QUERY_COUNTER_BITS},
  {  "GL_QUERY_RESULT", DAO_DOUBLE, GL_QUERY_RESULT},
  {  "GL_QUERY_RESULT_AVAILABLE", DAO_DOUBLE, GL_QUERY_RESULT_AVAILABLE},
  {  "GL_R", DAO_DOUBLE, GL_R},
  {  "GL_R3_G3_B2", DAO_DOUBLE, GL_R3_G3_B2},
  {  "GL_READ_BUFFER", DAO_DOUBLE, GL_READ_BUFFER},
  {  "GL_READ_ONLY", DAO_DOUBLE, GL_READ_ONLY},
  {  "GL_READ_WRITE", DAO_DOUBLE, GL_READ_WRITE},
  {  "GL_RED", DAO_DOUBLE, GL_RED},
  {  "GL_REDUCE", DAO_DOUBLE, GL_REDUCE},
  {  "GL_RED_BIAS", DAO_DOUBLE, GL_RED_BIAS},
  {  "GL_RED_BITS", DAO_DOUBLE, GL_RED_BITS},
  {  "GL_RED_SCALE", DAO_DOUBLE, GL_RED_SCALE},
  {  "GL_REFLECTION_MAP", DAO_DOUBLE, GL_REFLECTION_MAP},
  {  "GL_RENDER", DAO_DOUBLE, GL_RENDER},
  {  "GL_RENDERER", DAO_DOUBLE, GL_RENDERER},
  {  "GL_RENDER_MODE", DAO_DOUBLE, GL_RENDER_MODE},
  {  "GL_REPEAT", DAO_DOUBLE, GL_REPEAT},
  {  "GL_REPLACE", DAO_DOUBLE, GL_REPLACE},
  {  "GL_REPLICATE_BORDER", DAO_DOUBLE, GL_REPLICATE_BORDER},
  {  "GL_RESCALE_NORMAL", DAO_DOUBLE, GL_RESCALE_NORMAL},
  {  "GL_RETURN", DAO_DOUBLE, GL_RETURN},
  {  "GL_RGB", DAO_DOUBLE, GL_RGB},
  {  "GL_RGB10", DAO_DOUBLE, GL_RGB10},
  {  "GL_RGB10_A2", DAO_DOUBLE, GL_RGB10_A2},
  {  "GL_RGB12", DAO_DOUBLE, GL_RGB12},
  {  "GL_RGB16", DAO_DOUBLE, GL_RGB16},
  {  "GL_RGB4", DAO_DOUBLE, GL_RGB4},
  {  "GL_RGB5", DAO_DOUBLE, GL_RGB5},
  {  "GL_RGB5_A1", DAO_DOUBLE, GL_RGB5_A1},
  {  "GL_RGB8", DAO_DOUBLE, GL_RGB8},
  {  "GL_RGBA", DAO_DOUBLE, GL_RGBA},
  {  "GL_RGBA12", DAO_DOUBLE, GL_RGBA12},
  {  "GL_RGBA16", DAO_DOUBLE, GL_RGBA16},
  {  "GL_RGBA2", DAO_DOUBLE, GL_RGBA2},
  {  "GL_RGBA4", DAO_DOUBLE, GL_RGBA4},
  {  "GL_RGBA8", DAO_DOUBLE, GL_RGBA8},
  {  "GL_RGBA_MODE", DAO_DOUBLE, GL_RGBA_MODE},
  {  "GL_RGB_SCALE", DAO_DOUBLE, GL_RGB_SCALE},
  {  "GL_RIGHT", DAO_DOUBLE, GL_RIGHT},
  {  "GL_S", DAO_DOUBLE, GL_S},
  {  "GL_SAMPLER_1D", DAO_DOUBLE, GL_SAMPLER_1D},
  {  "GL_SAMPLER_1D_SHADOW", DAO_DOUBLE, GL_SAMPLER_1D_SHADOW},
  {  "GL_SAMPLER_2D", DAO_DOUBLE, GL_SAMPLER_2D},
  {  "GL_SAMPLER_2D_SHADOW", DAO_DOUBLE, GL_SAMPLER_2D_SHADOW},
  {  "GL_SAMPLER_3D", DAO_DOUBLE, GL_SAMPLER_3D},
  {  "GL_SAMPLER_CUBE", DAO_DOUBLE, GL_SAMPLER_CUBE},
  {  "GL_SAMPLES", DAO_DOUBLE, GL_SAMPLES},
  {  "GL_SAMPLES_PASSED", DAO_DOUBLE, GL_SAMPLES_PASSED},
  {  "GL_SAMPLE_ALPHA_TO_COVERAGE", DAO_DOUBLE, GL_SAMPLE_ALPHA_TO_COVERAGE},
  {  "GL_SAMPLE_ALPHA_TO_ONE", DAO_DOUBLE, GL_SAMPLE_ALPHA_TO_ONE},
  {  "GL_SAMPLE_BUFFERS", DAO_DOUBLE, GL_SAMPLE_BUFFERS},
  {  "GL_SAMPLE_COVERAGE", DAO_DOUBLE, GL_SAMPLE_COVERAGE},
  {  "GL_SAMPLE_COVERAGE_INVERT", DAO_DOUBLE, GL_SAMPLE_COVERAGE_INVERT},
  {  "GL_SAMPLE_COVERAGE_VALUE", DAO_DOUBLE, GL_SAMPLE_COVERAGE_VALUE},
  {  "GL_SCISSOR_BIT", DAO_DOUBLE, GL_SCISSOR_BIT},
  {  "GL_SCISSOR_BOX", DAO_DOUBLE, GL_SCISSOR_BOX},
  {  "GL_SCISSOR_TEST", DAO_DOUBLE, GL_SCISSOR_TEST},
  {  "GL_SECONDARY_COLOR_ARRAY", DAO_DOUBLE, GL_SECONDARY_COLOR_ARRAY},
  {  "GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING", DAO_DOUBLE, GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING},
  {  "GL_SECONDARY_COLOR_ARRAY_POINTER", DAO_DOUBLE, GL_SECONDARY_COLOR_ARRAY_POINTER},
  {  "GL_SECONDARY_COLOR_ARRAY_SIZE", DAO_DOUBLE, GL_SECONDARY_COLOR_ARRAY_SIZE},
  {  "GL_SECONDARY_COLOR_ARRAY_STRIDE", DAO_DOUBLE, GL_SECONDARY_COLOR_ARRAY_STRIDE},
  {  "GL_SECONDARY_COLOR_ARRAY_TYPE", DAO_DOUBLE, GL_SECONDARY_COLOR_ARRAY_TYPE},
  {  "GL_SELECT", DAO_DOUBLE, GL_SELECT},
  {  "GL_SELECTION_BUFFER_POINTER", DAO_DOUBLE, GL_SELECTION_BUFFER_POINTER},
  {  "GL_SELECTION_BUFFER_SIZE", DAO_DOUBLE, GL_SELECTION_BUFFER_SIZE},
  {  "GL_SEPARABLE_2D", DAO_DOUBLE, GL_SEPARABLE_2D},
  {  "GL_SEPARATE_SPECULAR_COLOR", DAO_DOUBLE, GL_SEPARATE_SPECULAR_COLOR},
  {  "GL_SET", DAO_DOUBLE, GL_SET},
  {  "GL_SHADER_SOURCE_LENGTH", DAO_DOUBLE, GL_SHADER_SOURCE_LENGTH},
  {  "GL_SHADER_TYPE", DAO_DOUBLE, GL_SHADER_TYPE},
  {  "GL_SHADE_MODEL", DAO_DOUBLE, GL_SHADE_MODEL},
  {  "GL_SHADING_LANGUAGE_VERSION", DAO_DOUBLE, GL_SHADING_LANGUAGE_VERSION},
  {  "GL_SHININESS", DAO_DOUBLE, GL_SHININESS},
  {  "GL_SHORT", DAO_DOUBLE, GL_SHORT},
  {  "GL_SINGLE_COLOR", DAO_DOUBLE, GL_SINGLE_COLOR},
  {  "GL_SLUMINANCE", DAO_DOUBLE, GL_SLUMINANCE},
  {  "GL_SLUMINANCE8", DAO_DOUBLE, GL_SLUMINANCE8},
  {  "GL_SLUMINANCE8_ALPHA8", DAO_DOUBLE, GL_SLUMINANCE8_ALPHA8},
  {  "GL_SLUMINANCE_ALPHA", DAO_DOUBLE, GL_SLUMINANCE_ALPHA},
  {  "GL_SMOOTH", DAO_DOUBLE, GL_SMOOTH},
  {  "GL_SMOOTH_LINE_WIDTH_GRANULARITY", DAO_DOUBLE, GL_SMOOTH_LINE_WIDTH_GRANULARITY},
  {  "GL_SMOOTH_LINE_WIDTH_RANGE", DAO_DOUBLE, GL_SMOOTH_LINE_WIDTH_RANGE},
  {  "GL_SMOOTH_POINT_SIZE_GRANULARITY", DAO_DOUBLE, GL_SMOOTH_POINT_SIZE_GRANULARITY},
  {  "GL_SMOOTH_POINT_SIZE_RANGE", DAO_DOUBLE, GL_SMOOTH_POINT_SIZE_RANGE},
  {  "GL_SOURCE0_ALPHA", DAO_DOUBLE, GL_SOURCE0_ALPHA},
  {  "GL_SOURCE0_RGB", DAO_DOUBLE, GL_SOURCE0_RGB},
  {  "GL_SOURCE1_ALPHA", DAO_DOUBLE, GL_SOURCE1_ALPHA},
  {  "GL_SOURCE1_RGB", DAO_DOUBLE, GL_SOURCE1_RGB},
  {  "GL_SOURCE2_ALPHA", DAO_DOUBLE, GL_SOURCE2_ALPHA},
  {  "GL_SOURCE2_RGB", DAO_DOUBLE, GL_SOURCE2_RGB},
  {  "GL_SPECULAR", DAO_DOUBLE, GL_SPECULAR},
  {  "GL_SPHERE_MAP", DAO_DOUBLE, GL_SPHERE_MAP},
  {  "GL_SPOT_CUTOFF", DAO_DOUBLE, GL_SPOT_CUTOFF},
  {  "GL_SPOT_DIRECTION", DAO_DOUBLE, GL_SPOT_DIRECTION},
  {  "GL_SPOT_EXPONENT", DAO_DOUBLE, GL_SPOT_EXPONENT},
  {  "GL_SRC0_ALPHA", DAO_DOUBLE, GL_SRC0_ALPHA},
  {  "GL_SRC0_RGB", DAO_DOUBLE, GL_SRC0_RGB},
  {  "GL_SRC1_ALPHA", DAO_DOUBLE, GL_SRC1_ALPHA},
  {  "GL_SRC1_RGB", DAO_DOUBLE, GL_SRC1_RGB},
  {  "GL_SRC2_ALPHA", DAO_DOUBLE, GL_SRC2_ALPHA},
  {  "GL_SRC2_RGB", DAO_DOUBLE, GL_SRC2_RGB},
  {  "GL_SRC_ALPHA", DAO_DOUBLE, GL_SRC_ALPHA},
  {  "GL_SRC_ALPHA_SATURATE", DAO_DOUBLE, GL_SRC_ALPHA_SATURATE},
  {  "GL_SRC_COLOR", DAO_DOUBLE, GL_SRC_COLOR},
  {  "GL_SRGB", DAO_DOUBLE, GL_SRGB},
  {  "GL_SRGB8", DAO_DOUBLE, GL_SRGB8},
  {  "GL_SRGB8_ALPHA8", DAO_DOUBLE, GL_SRGB8_ALPHA8},
  {  "GL_SRGB_ALPHA", DAO_DOUBLE, GL_SRGB_ALPHA},
  {  "GL_STACK_OVERFLOW", DAO_DOUBLE, GL_STACK_OVERFLOW},
  {  "GL_STACK_UNDERFLOW", DAO_DOUBLE, GL_STACK_UNDERFLOW},
  {  "GL_STATIC_COPY", DAO_DOUBLE, GL_STATIC_COPY},
  {  "GL_STATIC_DRAW", DAO_DOUBLE, GL_STATIC_DRAW},
  {  "GL_STATIC_READ", DAO_DOUBLE, GL_STATIC_READ},
  {  "GL_STENCIL", DAO_DOUBLE, GL_STENCIL},
  {  "GL_STENCIL_BACK_FAIL", DAO_DOUBLE, GL_STENCIL_BACK_FAIL},
  {  "GL_STENCIL_BACK_FUNC", DAO_DOUBLE, GL_STENCIL_BACK_FUNC},
  {  "GL_STENCIL_BACK_PASS_DEPTH_FAIL", DAO_DOUBLE, GL_STENCIL_BACK_PASS_DEPTH_FAIL},
  {  "GL_STENCIL_BACK_PASS_DEPTH_PASS", DAO_DOUBLE, GL_STENCIL_BACK_PASS_DEPTH_PASS},
  {  "GL_STENCIL_BACK_REF", DAO_DOUBLE, GL_STENCIL_BACK_REF},
  {  "GL_STENCIL_BACK_VALUE_MASK", DAO_DOUBLE, GL_STENCIL_BACK_VALUE_MASK},
  {  "GL_STENCIL_BACK_WRITEMASK", DAO_DOUBLE, GL_STENCIL_BACK_WRITEMASK},
  {  "GL_STENCIL_BITS", DAO_DOUBLE, GL_STENCIL_BITS},
  {  "GL_STENCIL_BUFFER_BIT", DAO_DOUBLE, GL_STENCIL_BUFFER_BIT},
  {  "GL_STENCIL_CLEAR_VALUE", DAO_DOUBLE, GL_STENCIL_CLEAR_VALUE},
  {  "GL_STENCIL_FAIL", DAO_DOUBLE, GL_STENCIL_FAIL},
  {  "GL_STENCIL_FUNC", DAO_DOUBLE, GL_STENCIL_FUNC},
  {  "GL_STENCIL_INDEX", DAO_DOUBLE, GL_STENCIL_INDEX},
  {  "GL_STENCIL_PASS_DEPTH_FAIL", DAO_DOUBLE, GL_STENCIL_PASS_DEPTH_FAIL},
  {  "GL_STENCIL_PASS_DEPTH_PASS", DAO_DOUBLE, GL_STENCIL_PASS_DEPTH_PASS},
  {  "GL_STENCIL_REF", DAO_DOUBLE, GL_STENCIL_REF},
  {  "GL_STENCIL_TEST", DAO_DOUBLE, GL_STENCIL_TEST},
  {  "GL_STENCIL_VALUE_MASK", DAO_DOUBLE, GL_STENCIL_VALUE_MASK},
  {  "GL_STENCIL_WRITEMASK", DAO_DOUBLE, GL_STENCIL_WRITEMASK},
  {  "GL_STEREO", DAO_DOUBLE, GL_STEREO},
  {  "GL_STREAM_COPY", DAO_DOUBLE, GL_STREAM_COPY},
  {  "GL_STREAM_DRAW", DAO_DOUBLE, GL_STREAM_DRAW},
  {  "GL_STREAM_READ", DAO_DOUBLE, GL_STREAM_READ},
  {  "GL_SUBPIXEL_BITS", DAO_DOUBLE, GL_SUBPIXEL_BITS},
  {  "GL_SUBTRACT", DAO_DOUBLE, GL_SUBTRACT},
  {  "GL_T", DAO_DOUBLE, GL_T},
  {  "GL_T2F_C3F_V3F", DAO_DOUBLE, GL_T2F_C3F_V3F},
  {  "GL_T2F_C4F_N3F_V3F", DAO_DOUBLE, GL_T2F_C4F_N3F_V3F},
  {  "GL_T2F_C4UB_V3F", DAO_DOUBLE, GL_T2F_C4UB_V3F},
  {  "GL_T2F_N3F_V3F", DAO_DOUBLE, GL_T2F_N3F_V3F},
  {  "GL_T2F_V3F", DAO_DOUBLE, GL_T2F_V3F},
  {  "GL_T4F_C4F_N3F_V4F", DAO_DOUBLE, GL_T4F_C4F_N3F_V4F},
  {  "GL_T4F_V4F", DAO_DOUBLE, GL_T4F_V4F},
  {  "GL_TABLE_TOO_LARGE", DAO_DOUBLE, GL_TABLE_TOO_LARGE},
  {  "GL_TEXTURE", DAO_DOUBLE, GL_TEXTURE},
  {  "GL_TEXTURE0", DAO_DOUBLE, GL_TEXTURE0},
  {  "GL_TEXTURE1", DAO_DOUBLE, GL_TEXTURE1},
  {  "GL_TEXTURE10", DAO_DOUBLE, GL_TEXTURE10},
  {  "GL_TEXTURE11", DAO_DOUBLE, GL_TEXTURE11},
  {  "GL_TEXTURE12", DAO_DOUBLE, GL_TEXTURE12},
  {  "GL_TEXTURE13", DAO_DOUBLE, GL_TEXTURE13},
  {  "GL_TEXTURE14", DAO_DOUBLE, GL_TEXTURE14},
  {  "GL_TEXTURE15", DAO_DOUBLE, GL_TEXTURE15},
  {  "GL_TEXTURE16", DAO_DOUBLE, GL_TEXTURE16},
  {  "GL_TEXTURE17", DAO_DOUBLE, GL_TEXTURE17},
  {  "GL_TEXTURE18", DAO_DOUBLE, GL_TEXTURE18},
  {  "GL_TEXTURE19", DAO_DOUBLE, GL_TEXTURE19},
  {  "GL_TEXTURE2", DAO_DOUBLE, GL_TEXTURE2},
  {  "GL_TEXTURE20", DAO_DOUBLE, GL_TEXTURE20},
  {  "GL_TEXTURE21", DAO_DOUBLE, GL_TEXTURE21},
  {  "GL_TEXTURE22", DAO_DOUBLE, GL_TEXTURE22},
  {  "GL_TEXTURE23", DAO_DOUBLE, GL_TEXTURE23},
  {  "GL_TEXTURE24", DAO_DOUBLE, GL_TEXTURE24},
  {  "GL_TEXTURE25", DAO_DOUBLE, GL_TEXTURE25},
  {  "GL_TEXTURE26", DAO_DOUBLE, GL_TEXTURE26},
  {  "GL_TEXTURE27", DAO_DOUBLE, GL_TEXTURE27},
  {  "GL_TEXTURE28", DAO_DOUBLE, GL_TEXTURE28},
  {  "GL_TEXTURE29", DAO_DOUBLE, GL_TEXTURE29},
  {  "GL_TEXTURE3", DAO_DOUBLE, GL_TEXTURE3},
  {  "GL_TEXTURE30", DAO_DOUBLE, GL_TEXTURE30},
  {  "GL_TEXTURE31", DAO_DOUBLE, GL_TEXTURE31},
  {  "GL_TEXTURE4", DAO_DOUBLE, GL_TEXTURE4},
  {  "GL_TEXTURE5", DAO_DOUBLE, GL_TEXTURE5},
  {  "GL_TEXTURE6", DAO_DOUBLE, GL_TEXTURE6},
  {  "GL_TEXTURE7", DAO_DOUBLE, GL_TEXTURE7},
  {  "GL_TEXTURE8", DAO_DOUBLE, GL_TEXTURE8},
  {  "GL_TEXTURE9", DAO_DOUBLE, GL_TEXTURE9},
  {  "GL_TEXTURE_1D", DAO_DOUBLE, GL_TEXTURE_1D},
  {  "GL_TEXTURE_2D", DAO_DOUBLE, GL_TEXTURE_2D},
  {  "GL_TEXTURE_3D", DAO_DOUBLE, GL_TEXTURE_3D},
  {  "GL_TEXTURE_ALPHA_SIZE", DAO_DOUBLE, GL_TEXTURE_ALPHA_SIZE},
  {  "GL_TEXTURE_BASE_LEVEL", DAO_DOUBLE, GL_TEXTURE_BASE_LEVEL},
  {  "GL_TEXTURE_BINDING_1D", DAO_DOUBLE, GL_TEXTURE_BINDING_1D},
  {  "GL_TEXTURE_BINDING_2D", DAO_DOUBLE, GL_TEXTURE_BINDING_2D},
  {  "GL_TEXTURE_BINDING_3D", DAO_DOUBLE, GL_TEXTURE_BINDING_3D},
  {  "GL_TEXTURE_BINDING_CUBE_MAP", DAO_DOUBLE, GL_TEXTURE_BINDING_CUBE_MAP},
  {  "GL_TEXTURE_BIT", DAO_DOUBLE, GL_TEXTURE_BIT},
  {  "GL_TEXTURE_BLUE_SIZE", DAO_DOUBLE, GL_TEXTURE_BLUE_SIZE},
  {  "GL_TEXTURE_BORDER", DAO_DOUBLE, GL_TEXTURE_BORDER},
  {  "GL_TEXTURE_BORDER_COLOR", DAO_DOUBLE, GL_TEXTURE_BORDER_COLOR},
  {  "GL_TEXTURE_COMPARE_FUNC", DAO_DOUBLE, GL_TEXTURE_COMPARE_FUNC},
  {  "GL_TEXTURE_COMPARE_MODE", DAO_DOUBLE, GL_TEXTURE_COMPARE_MODE},
  {  "GL_TEXTURE_COMPRESSED", DAO_DOUBLE, GL_TEXTURE_COMPRESSED},
  {  "GL_TEXTURE_COMPRESSED_IMAGE_SIZE", DAO_DOUBLE, GL_TEXTURE_COMPRESSED_IMAGE_SIZE},
  {  "GL_TEXTURE_COMPRESSION_HINT", DAO_DOUBLE, GL_TEXTURE_COMPRESSION_HINT},
  {  "GL_TEXTURE_COORD_ARRAY", DAO_DOUBLE, GL_TEXTURE_COORD_ARRAY},
  {  "GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING", DAO_DOUBLE, GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING},
  {  "GL_TEXTURE_COORD_ARRAY_POINTER", DAO_DOUBLE, GL_TEXTURE_COORD_ARRAY_POINTER},
  {  "GL_TEXTURE_COORD_ARRAY_SIZE", DAO_DOUBLE, GL_TEXTURE_COORD_ARRAY_SIZE},
  {  "GL_TEXTURE_COORD_ARRAY_STRIDE", DAO_DOUBLE, GL_TEXTURE_COORD_ARRAY_STRIDE},
  {  "GL_TEXTURE_COORD_ARRAY_TYPE", DAO_DOUBLE, GL_TEXTURE_COORD_ARRAY_TYPE},
  {  "GL_TEXTURE_CUBE_MAP", DAO_DOUBLE, GL_TEXTURE_CUBE_MAP},
  {  "GL_TEXTURE_CUBE_MAP_NEGATIVE_X", DAO_DOUBLE, GL_TEXTURE_CUBE_MAP_NEGATIVE_X},
  {  "GL_TEXTURE_CUBE_MAP_NEGATIVE_Y", DAO_DOUBLE, GL_TEXTURE_CUBE_MAP_NEGATIVE_Y},
  {  "GL_TEXTURE_CUBE_MAP_NEGATIVE_Z", DAO_DOUBLE, GL_TEXTURE_CUBE_MAP_NEGATIVE_Z},
  {  "GL_TEXTURE_CUBE_MAP_POSITIVE_X", DAO_DOUBLE, GL_TEXTURE_CUBE_MAP_POSITIVE_X},
  {  "GL_TEXTURE_CUBE_MAP_POSITIVE_Y", DAO_DOUBLE, GL_TEXTURE_CUBE_MAP_POSITIVE_Y},
  {  "GL_TEXTURE_CUBE_MAP_POSITIVE_Z", DAO_DOUBLE, GL_TEXTURE_CUBE_MAP_POSITIVE_Z},
  {  "GL_TEXTURE_DEPTH", DAO_DOUBLE, GL_TEXTURE_DEPTH},
  {  "GL_TEXTURE_DEPTH_SIZE", DAO_DOUBLE, GL_TEXTURE_DEPTH_SIZE},
  {  "GL_TEXTURE_ENV", DAO_DOUBLE, GL_TEXTURE_ENV},
  {  "GL_TEXTURE_ENV_COLOR", DAO_DOUBLE, GL_TEXTURE_ENV_COLOR},
  {  "GL_TEXTURE_ENV_MODE", DAO_DOUBLE, GL_TEXTURE_ENV_MODE},
  {  "GL_TEXTURE_FILTER_CONTROL", DAO_DOUBLE, GL_TEXTURE_FILTER_CONTROL},
  {  "GL_TEXTURE_GEN_MODE", DAO_DOUBLE, GL_TEXTURE_GEN_MODE},
  {  "GL_TEXTURE_GEN_Q", DAO_DOUBLE, GL_TEXTURE_GEN_Q},
  {  "GL_TEXTURE_GEN_R", DAO_DOUBLE, GL_TEXTURE_GEN_R},
  {  "GL_TEXTURE_GEN_S", DAO_DOUBLE, GL_TEXTURE_GEN_S},
  {  "GL_TEXTURE_GEN_T", DAO_DOUBLE, GL_TEXTURE_GEN_T},
  {  "GL_TEXTURE_GREEN_SIZE", DAO_DOUBLE, GL_TEXTURE_GREEN_SIZE},
  {  "GL_TEXTURE_HEIGHT", DAO_DOUBLE, GL_TEXTURE_HEIGHT},
  {  "GL_TEXTURE_INTENSITY_SIZE", DAO_DOUBLE, GL_TEXTURE_INTENSITY_SIZE},
  {  "GL_TEXTURE_INTERNAL_FORMAT", DAO_DOUBLE, GL_TEXTURE_INTERNAL_FORMAT},
  {  "GL_TEXTURE_LOD_BIAS", DAO_DOUBLE, GL_TEXTURE_LOD_BIAS},
  {  "GL_TEXTURE_LUMINANCE_SIZE", DAO_DOUBLE, GL_TEXTURE_LUMINANCE_SIZE},
  {  "GL_TEXTURE_MAG_FILTER", DAO_DOUBLE, GL_TEXTURE_MAG_FILTER},
  {  "GL_TEXTURE_MATRIX", DAO_DOUBLE, GL_TEXTURE_MATRIX},
  {  "GL_TEXTURE_MAX_LEVEL", DAO_DOUBLE, GL_TEXTURE_MAX_LEVEL},
  {  "GL_TEXTURE_MAX_LOD", DAO_DOUBLE, GL_TEXTURE_MAX_LOD},
  {  "GL_TEXTURE_MIN_FILTER", DAO_DOUBLE, GL_TEXTURE_MIN_FILTER},
  {  "GL_TEXTURE_MIN_LOD", DAO_DOUBLE, GL_TEXTURE_MIN_LOD},
  {  "GL_TEXTURE_PRIORITY", DAO_DOUBLE, GL_TEXTURE_PRIORITY},
  {  "GL_TEXTURE_RED_SIZE", DAO_DOUBLE, GL_TEXTURE_RED_SIZE},
  {  "GL_TEXTURE_RESIDENT", DAO_DOUBLE, GL_TEXTURE_RESIDENT},
  {  "GL_TEXTURE_STACK_DEPTH", DAO_DOUBLE, GL_TEXTURE_STACK_DEPTH},
  {  "GL_TEXTURE_WIDTH", DAO_DOUBLE, GL_TEXTURE_WIDTH},
  {  "GL_TEXTURE_WRAP_R", DAO_DOUBLE, GL_TEXTURE_WRAP_R},
  {  "GL_TEXTURE_WRAP_S", DAO_DOUBLE, GL_TEXTURE_WRAP_S},
  {  "GL_TEXTURE_WRAP_T", DAO_DOUBLE, GL_TEXTURE_WRAP_T},
  {  "GL_TRANSFORM_BIT", DAO_DOUBLE, GL_TRANSFORM_BIT},
  {  "GL_TRANSPOSE_COLOR_MATRIX", DAO_DOUBLE, GL_TRANSPOSE_COLOR_MATRIX},
  {  "GL_TRANSPOSE_MODELVIEW_MATRIX", DAO_DOUBLE, GL_TRANSPOSE_MODELVIEW_MATRIX},
  {  "GL_TRANSPOSE_PROJECTION_MATRIX", DAO_DOUBLE, GL_TRANSPOSE_PROJECTION_MATRIX},
  {  "GL_TRANSPOSE_TEXTURE_MATRIX", DAO_DOUBLE, GL_TRANSPOSE_TEXTURE_MATRIX},
  {  "GL_TRIANGLES", DAO_DOUBLE, GL_TRIANGLES},
  {  "GL_TRIANGLE_FAN", DAO_DOUBLE, GL_TRIANGLE_FAN},
  {  "GL_TRIANGLE_STRIP", DAO_DOUBLE, GL_TRIANGLE_STRIP},
  {  "GL_TRUE", DAO_DOUBLE, GL_TRUE},
  {  "GL_UNPACK_ALIGNMENT", DAO_DOUBLE, GL_UNPACK_ALIGNMENT},
  {  "GL_UNPACK_IMAGE_HEIGHT", DAO_DOUBLE, GL_UNPACK_IMAGE_HEIGHT},
  {  "GL_UNPACK_LSB_FIRST", DAO_DOUBLE, GL_UNPACK_LSB_FIRST},
  {  "GL_UNPACK_ROW_LENGTH", DAO_DOUBLE, GL_UNPACK_ROW_LENGTH},
  {  "GL_UNPACK_SKIP_IMAGES", DAO_DOUBLE, GL_UNPACK_SKIP_IMAGES},
  {  "GL_UNPACK_SKIP_PIXELS", DAO_DOUBLE, GL_UNPACK_SKIP_PIXELS},
  {  "GL_UNPACK_SKIP_ROWS", DAO_DOUBLE, GL_UNPACK_SKIP_ROWS},
  {  "GL_UNPACK_SWAP_BYTES", DAO_DOUBLE, GL_UNPACK_SWAP_BYTES},
  {  "GL_UNSIGNED_BYTE", DAO_DOUBLE, GL_UNSIGNED_BYTE},
  {  "GL_UNSIGNED_BYTE_2_3_3_REV", DAO_DOUBLE, GL_UNSIGNED_BYTE_2_3_3_REV},
  {  "GL_UNSIGNED_BYTE_3_3_2", DAO_DOUBLE, GL_UNSIGNED_BYTE_3_3_2},
  {  "GL_UNSIGNED_INT", DAO_DOUBLE, GL_UNSIGNED_INT},
  {  "GL_UNSIGNED_INT_10_10_10_2", DAO_DOUBLE, GL_UNSIGNED_INT_10_10_10_2},
  {  "GL_UNSIGNED_INT_2_10_10_10_REV", DAO_DOUBLE, GL_UNSIGNED_INT_2_10_10_10_REV},
  {  "GL_UNSIGNED_INT_8_8_8_8", DAO_DOUBLE, GL_UNSIGNED_INT_8_8_8_8},
  {  "GL_UNSIGNED_INT_8_8_8_8_REV", DAO_DOUBLE, GL_UNSIGNED_INT_8_8_8_8_REV},
  {  "GL_UNSIGNED_SHORT", DAO_DOUBLE, GL_UNSIGNED_SHORT},
  {  "GL_UNSIGNED_SHORT_1_5_5_5_REV", DAO_DOUBLE, GL_UNSIGNED_SHORT_1_5_5_5_REV},
  {  "GL_UNSIGNED_SHORT_4_4_4_4", DAO_DOUBLE, GL_UNSIGNED_SHORT_4_4_4_4},
  {  "GL_UNSIGNED_SHORT_4_4_4_4_REV", DAO_DOUBLE, GL_UNSIGNED_SHORT_4_4_4_4_REV},
  {  "GL_UNSIGNED_SHORT_5_5_5_1", DAO_DOUBLE, GL_UNSIGNED_SHORT_5_5_5_1},
  {  "GL_UNSIGNED_SHORT_5_6_5", DAO_DOUBLE, GL_UNSIGNED_SHORT_5_6_5},
  {  "GL_UNSIGNED_SHORT_5_6_5_REV", DAO_DOUBLE, GL_UNSIGNED_SHORT_5_6_5_REV},
  {  "GL_UPPER_LEFT", DAO_DOUBLE, GL_UPPER_LEFT},
  {  "GL_V2F", DAO_DOUBLE, GL_V2F},
  {  "GL_V3F", DAO_DOUBLE, GL_V3F},
  {  "GL_VALIDATE_STATUS", DAO_DOUBLE, GL_VALIDATE_STATUS},
  {  "GL_VENDOR", DAO_DOUBLE, GL_VENDOR},
  {  "GL_VERSION", DAO_DOUBLE, GL_VERSION},
  {  "GL_VERSION_1_1", DAO_DOUBLE, GL_VERSION_1_1},
  {  "GL_VERSION_1_2", DAO_DOUBLE, GL_VERSION_1_2},
  {  "GL_VERSION_1_3", DAO_DOUBLE, GL_VERSION_1_3},
  {  "GL_VERSION_1_4", DAO_DOUBLE, GL_VERSION_1_4},
  {  "GL_VERSION_1_5", DAO_DOUBLE, GL_VERSION_1_5},
  {  "GL_VERSION_2_0", DAO_DOUBLE, GL_VERSION_2_0},
  {  "GL_VERSION_2_1", DAO_DOUBLE, GL_VERSION_2_1},
  {  "GL_VERTEX_ARRAY", DAO_DOUBLE, GL_VERTEX_ARRAY},
  {  "GL_VERTEX_ARRAY_BUFFER_BINDING", DAO_DOUBLE, GL_VERTEX_ARRAY_BUFFER_BINDING},
  {  "GL_VERTEX_ARRAY_POINTER", DAO_DOUBLE, GL_VERTEX_ARRAY_POINTER},
  {  "GL_VERTEX_ARRAY_SIZE", DAO_DOUBLE, GL_VERTEX_ARRAY_SIZE},
  {  "GL_VERTEX_ARRAY_STRIDE", DAO_DOUBLE, GL_VERTEX_ARRAY_STRIDE},
  {  "GL_VERTEX_ARRAY_TYPE", DAO_DOUBLE, GL_VERTEX_ARRAY_TYPE},
  {  "GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING", DAO_DOUBLE, GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING},
  {  "GL_VERTEX_ATTRIB_ARRAY_ENABLED", DAO_DOUBLE, GL_VERTEX_ATTRIB_ARRAY_ENABLED},
  {  "GL_VERTEX_ATTRIB_ARRAY_NORMALIZED", DAO_DOUBLE, GL_VERTEX_ATTRIB_ARRAY_NORMALIZED},
  {  "GL_VERTEX_ATTRIB_ARRAY_POINTER", DAO_DOUBLE, GL_VERTEX_ATTRIB_ARRAY_POINTER},
  {  "GL_VERTEX_ATTRIB_ARRAY_SIZE", DAO_DOUBLE, GL_VERTEX_ATTRIB_ARRAY_SIZE},
  {  "GL_VERTEX_ATTRIB_ARRAY_STRIDE", DAO_DOUBLE, GL_VERTEX_ATTRIB_ARRAY_STRIDE},
  {  "GL_VERTEX_ATTRIB_ARRAY_TYPE", DAO_DOUBLE, GL_VERTEX_ATTRIB_ARRAY_TYPE},
  {  "GL_VERTEX_PROGRAM_POINT_SIZE", DAO_DOUBLE, GL_VERTEX_PROGRAM_POINT_SIZE},
  {  "GL_VERTEX_PROGRAM_TWO_SIDE", DAO_DOUBLE, GL_VERTEX_PROGRAM_TWO_SIDE},
  {  "GL_VERTEX_SHADER", DAO_DOUBLE, GL_VERTEX_SHADER},
  {  "GL_VIEWPORT", DAO_DOUBLE, GL_VIEWPORT},
  {  "GL_VIEWPORT_BIT", DAO_DOUBLE, GL_VIEWPORT_BIT},
  {  "GL_WEIGHT_ARRAY_BUFFER_BINDING", DAO_DOUBLE, GL_WEIGHT_ARRAY_BUFFER_BINDING},
  {  "GL_WRITE_ONLY", DAO_DOUBLE, GL_WRITE_ONLY},
  {  "GL_XOR", DAO_DOUBLE, GL_XOR},
  {  "GL_ZERO", DAO_DOUBLE, GL_ZERO},
  {  "GL_ZOOM_X", DAO_DOUBLE, GL_ZOOM_X},
  {  "GL_ZOOM_Y", DAO_DOUBLE, GL_ZOOM_Y},
  { NULL, 0, 0 }
};
static const char *dao__Aliases[] = 
{
	"int", "GLenum",
	"int", "GLboolean",
	"int", "GLbitfield",
	"int", "GLbyte",
	"int", "GLshort",
	"int", "GLint",
	"int", "GLsizei",
	"int", "GLubyte",
	"int", "GLushort",
	"int", "GLuint",
	"float", "GLfloat",
	"float", "GLclampf",
	"double", "GLdouble",
	"double", "GLclampd",
	"int", "GLintptr",
	"int", "GLsizeiptr",
	"int", "GLchar",
	NULL
};
#ifdef __cplusplus
extern "C"{
#endif
int DaoOnLoad( DaoVmSpace *vms, DaoNamespace *ns )
{
	__daoVmSpace = vms;
	DaoNamespace_AddConstNumbers( ns, dao__Nums );
	DaoNamespace_TypeDefines( ns, dao__Aliases );
	DaoNamespace_WrapFunctions( ns, dao__Funcs );
	return 0;
}
#ifdef __cplusplus
}
#endif


#define module_name OpenGL
#undef module_name

#define dao_glColor3bv( v_dao_hint_array_3 ) glColor3bv(const GLbyte*)
#define dao_glColor3dv( v_dao_hint_array_3 ) glColor3dv(const GLdouble*)
#define dao_glColor3fv( v_dao_hint_array_3 ) glColor3fv(const GLfloat*)
#define dao_glColor3iv( v_dao_hint_array_3 ) glColor3iv(const GLint*)
#define dao_glColor3sv( v_dao_hint_array_3 ) glColor3sv(const GLshort*)
#define dao_glColor3ubv( v_dao_hint_array_3 ) glColor3ubv(const GLubyte*)
#define dao_glColor3uiv( v_dao_hint_array_3 ) glColor3uiv(const GLuint*)
#define dao_glColor3usv( v_dao_hint_array_3 ) glColor3usv(const GLushort*)
#define dao_glColor4bv( v_dao_hint_array_4 ) glColor4bv(const GLbyte*)
#define dao_glColor4dv( v_dao_hint_array_4 ) glColor4dv(const GLdouble*)
#define dao_glColor4fv( v_dao_hint_array_4 ) glColor4fv(const GLfloat*)
#define dao_glColor4iv( v_dao_hint_array_4 ) glColor4iv(const GLint*)
#define dao_glColor4sv( v_dao_hint_array_4 ) glColor4sv(const GLshort*)
#define dao_glColor4ubv( v_dao_hint_array_4 ) glColor4ubv(const GLubyte*)
#define dao_glColor4uiv( v_dao_hint_array_4 ) glColor4uiv(const GLuint*)
#define dao_glColor4usv( v_dao_hint_array_4 ) glColor4usv(const GLushort*)

#if 0
extern void glDrawElements (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices);
extern void glDrawPixels (GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels);
extern void glDrawRangeElements (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices);
extern void glEdgeFlagv (const GLboolean *flag);
#endif

#define dao_glEvalCoord1dv( u_dao_hint_array_1 ) glEvalCoord1dv(const GLdouble*)
#define dao_glEvalCoord1fv( u_dao_hint_array_1 ) glEvalCoord1fv(const GLfloat*)
#define dao_glEvalCoord2dv( u_dao_hint_array_2 ) glEvalCoord2dv(const GLdouble*)
#define dao_glEvalCoord2fv( u_dao_hint_array_2 ) glEvalCoord2fv(const GLfloat*)

#if 0
extern void glFeedbackBuffer (GLsizei size, GLenum type, GLfloat *buffer);
extern void glFogfv (GLenum pname, const GLfloat *params);
extern void glFogiv (GLenum pname, const GLint *params);
extern void glGenTextures (GLsizei n, GLuint *textures);
extern void glGetBooleanv (GLenum pname, GLboolean *params);
extern void glGetClipPlane (GLenum plane, GLdouble *equation);
extern void glGetColorTable (GLenum target, GLenum format, GLenum type, GLvoid *table);
extern void glGetColorTableParameterfv (GLenum target, GLenum pname, GLfloat *params);
extern void glGetColorTableParameteriv (GLenum target, GLenum pname, GLint *params);
extern void glGetConvolutionFilter (GLenum target, GLenum format, GLenum type, GLvoid *image);
extern void glGetConvolutionParameterfv (GLenum target, GLenum pname, GLfloat *params);
extern void glGetConvolutionParameteriv (GLenum target, GLenum pname, GLint *params);
extern void glGetDoublev (GLenum pname, GLdouble *params);
extern void glGetFloatv (GLenum pname, GLfloat *params);
extern void glGetHistogram (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values);
extern void glGetHistogramParameterfv (GLenum target, GLenum pname, GLfloat *params);
extern void glGetHistogramParameteriv (GLenum target, GLenum pname, GLint *params);
extern void glGetIntegerv (GLenum pname, GLint *params);
extern void glGetLightfv (GLenum light, GLenum pname, GLfloat *params);
extern void glGetLightiv (GLenum light, GLenum pname, GLint *params);
extern void glGetMapdv (GLenum target, GLenum query, GLdouble *v);
extern void glGetMapfv (GLenum target, GLenum query, GLfloat *v);
extern void glGetMapiv (GLenum target, GLenum query, GLint *v);
extern void glGetMaterialfv (GLenum face, GLenum pname, GLfloat *params);
extern void glGetMaterialiv (GLenum face, GLenum pname, GLint *params);
extern void glGetMinmax (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values);
extern void glGetMinmaxParameterfv (GLenum target, GLenum pname, GLfloat *params);
extern void glGetMinmaxParameteriv (GLenum target, GLenum pname, GLint *params);
extern void glGetPixelMapfv (GLenum map, GLfloat *values);
extern void glGetPixelMapuiv (GLenum map, GLuint *values);
extern void glGetPixelMapusv (GLenum map, GLushort *values);
extern void glGetPointerv (GLenum pname, GLvoid* *params);
extern void glGetPolygonStipple (GLubyte *mask);
extern void glGetSeparableFilter (GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span);
extern const GLubyte * glGetString (GLenum name);
extern void glGetTexEnvfv (GLenum target, GLenum pname, GLfloat *params);
extern void glGetTexEnviv (GLenum target, GLenum pname, GLint *params);
extern void glGetTexGendv (GLenum coord, GLenum pname, GLdouble *params);
extern void glGetTexGenfv (GLenum coord, GLenum pname, GLfloat *params);
extern void glGetTexGeniv (GLenum coord, GLenum pname, GLint *params);
extern void glGetTexImage (GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels);
extern void glGetTexLevelParameterfv (GLenum target, GLint level, GLenum pname, GLfloat *params);
extern void glGetTexLevelParameteriv (GLenum target, GLint level, GLenum pname, GLint *params);
extern void glGetTexParameterfv (GLenum target, GLenum pname, GLfloat *params);
extern void glGetTexParameteriv (GLenum target, GLenum pname, GLint *params);
extern void glIndexPointer (GLenum type, GLsizei stride, const GLvoid *pointer);
#endif

#define dao_glIndexdv( c_dao_hint_array_1 ) glIndexdv(const GLdouble*)
#define dao_glIndexfv( c_dao_hint_array_1 ) glIndexfv(const GLfloat*)
#define dao_glIndexiv( c_dao_hint_array_1 ) glIndexiv(const GLint*)
#define dao_glIndexsv( c_dao_hint_array_1 ) glIndexsv(const GLshort*)
#define dao_glIndexubv( c_dao_hint_array_1 ) glIndexubv(const GLubyte*)

#if 0
extern void glInterleavedArrays (GLenum format, GLsizei stride, const GLvoid *pointer);
extern void glLightModelfv (GLenum pname, const GLfloat *params);
extern void glLightModeliv (GLenum pname, const GLint *params);
extern void glLightfv (GLenum light, GLenum pname, const GLfloat *params);
extern void glLightiv (GLenum light, GLenum pname, const GLint *params);
#endif

#define dao_glLoadMatrixd( m_dao_hint_array_16 ) glLoadMatrixd(const GLdouble*)
#define dao_glLoadMatrixf( m_dao_hint_array_16 ) glLoadMatrixf(const GLfloat*)

#if 0
extern void glMap1d (GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points);
extern void glMap1f (GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points);
extern void glMap2d (GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points);
extern void glMap2f (GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points);
extern void glMaterialfv (GLenum face, GLenum pname, const GLfloat *params);
extern void glMaterialiv (GLenum face, GLenum pname, const GLint *params);
extern void glMinmax (GLenum target, GLenum internalformat, GLboolean sink);
#endif

#define dao_glMultMatrixd( m_dao_hint_array_16 ) glMultMatrixd(const GLdouble*)
#define dao_glMultMatrixf( m_dao_hint_array_16 ) glMultMatrixf(const GLfloat*)

#define dao_glNormal3bv( v_dao_hint_array_3 ) glNormal3bv(const GLbyte*)
#define dao_glNormal3dv( v_dao_hint_array_3 ) glNormal3dv(const GLdouble*)
#define dao_glNormal3fv( v_dao_hint_array_3 ) glNormal3fv(const GLfloat*)
#define dao_glNormal3iv( v_dao_hint_array_3 ) glNormal3iv(const GLint*)
#define dao_glNormal3sv( v_dao_hint_array_3 ) glNormal3sv(const GLshort*)
#if 0
extern void glNormalPointer (GLenum type, GLsizei stride, const GLvoid *pointer);
extern void glPixelMapfv (GLenum map, GLint mapsize, const GLfloat *values);
extern void glPixelMapuiv (GLenum map, GLint mapsize, const GLuint *values);
extern void glPixelMapusv (GLenum map, GLint mapsize, const GLushort *values);
extern void glPolygonStipple (const GLubyte *mask);
extern void glPrioritizeTextures (GLsizei n, const GLuint *textures, const GLclampf *priorities);
#endif
#define dao_glRasterPos2dv( v_dao_hint_array_2 ) glRasterPos2dv(const GLdouble*)
#define dao_glRasterPos2fv( v_dao_hint_array_2 ) glRasterPos2fv(const GLfloat*)
#define dao_glRasterPos2iv( v_dao_hint_array_2 ) glRasterPos2iv(const GLint*)
#define dao_glRasterPos2sv( v_dao_hint_array_2 ) glRasterPos2sv(const GLshort*)
#define dao_glRasterPos3dv( v_dao_hint_array_3 ) glRasterPos3dv(const GLdouble*)
#define dao_glRasterPos3fv( v_dao_hint_array_3 ) glRasterPos3fv(const GLfloat*)
#define dao_glRasterPos3iv( v_dao_hint_array_3 ) glRasterPos3iv(const GLint*)
#define dao_glRasterPos3sv( v_dao_hint_array_3 ) glRasterPos3sv(const GLshort*)
#define dao_glRasterPos4dv( v_dao_hint_array_4 ) glRasterPos4dv(const GLdouble*)
#define dao_glRasterPos4fv( v_dao_hint_array_4 ) glRasterPos4fv(const GLfloat*)
#define dao_glRasterPos4iv( v_dao_hint_array_4 ) glRasterPos4iv(const GLint*)
#define dao_glRasterPos4sv( v_dao_hint_array_4 ) glRasterPos4sv(const GLshort*)
#if 0
extern void glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels);
extern void glRectdv (const GLdouble *v1, const GLdouble *v2);
extern void glRectfv (const GLfloat *v1, const GLfloat *v2);
extern void glRectiv (const GLint *v1, const GLint *v2);
extern void glRectsv (const GLshort *v1, const GLshort *v2);
extern void glSelectBuffer (GLsizei size, GLuint *buffer);
extern void glSeparableFilter2D (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column);
#endif
#define dao_glTexCoord1dv( v_dao_hint_array_1 ) glTexCoord1dv(const GLdouble*)
#define dao_glTexCoord1fv( v_dao_hint_array_1 ) glTexCoord1fv(const GLfloat*)
#define dao_glTexCoord1iv( v_dao_hint_array_1 ) glTexCoord1iv(const GLint*)
#define dao_glTexCoord1sv( v_dao_hint_array_1 ) glTexCoord1sv(const GLshort*)
#define dao_glTexCoord2dv( v_dao_hint_array_2 ) glTexCoord2dv(const GLdouble*)
#define dao_glTexCoord2fv( v_dao_hint_array_2 ) glTexCoord2fv(const GLfloat*)
#define dao_glTexCoord2iv( v_dao_hint_array_2 ) glTexCoord2iv(const GLint*)
#define dao_glTexCoord2sv( v_dao_hint_array_2 ) glTexCoord2sv(const GLshort*)
#define dao_glTexCoord3dv( v_dao_hint_array_3 ) glTexCoord3dv(const GLdouble*)
#define dao_glTexCoord3fv( v_dao_hint_array_3 ) glTexCoord3fv(const GLfloat*)
#define dao_glTexCoord3iv( v_dao_hint_array_3 ) glTexCoord3iv(const GLint*)
#define dao_glTexCoord3sv( v_dao_hint_array_3 ) glTexCoord3sv(const GLshort*)
#define dao_glTexCoord4dv( v_dao_hint_array_4 ) glTexCoord4dv(const GLdouble*)
#define dao_glTexCoord4fv( v_dao_hint_array_4 ) glTexCoord4fv(const GLfloat*)
#define dao_glTexCoord4iv( v_dao_hint_array_4 ) glTexCoord4iv(const GLint*)
#define dao_glTexCoord4sv( v_dao_hint_array_4 ) glTexCoord4sv(const GLshort*)
#if 0
extern void glTexCoordPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
extern void glTexEnvfv (GLenum target, GLenum pname, const GLfloat *params);
extern void glTexEnviv (GLenum target, GLenum pname, const GLint *params);
extern void glTexGendv (GLenum coord, GLenum pname, const GLdouble *params);
extern void glTexGenfv (GLenum coord, GLenum pname, const GLfloat *params);
extern void glTexGeniv (GLenum coord, GLenum pname, const GLint *params);
extern void glTexImage1D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTexParameterf (GLenum target, GLenum pname, GLfloat param);
extern void glTexParameterfv (GLenum target, GLenum pname, const GLfloat *params);
extern void glTexParameteri (GLenum target, GLenum pname, GLint param);
extern void glTexParameteriv (GLenum target, GLenum pname, const GLint *params);
extern void glTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels);

#endif

#define dao_glVertex2dv( v_dao_hint_array_2 ) glVertex2dv(const GLdouble*)
#define dao_glVertex2fv( v_dao_hint_array_2 ) glVertex2fv(const GLfloat*)
#define dao_glVertex2iv( v_dao_hint_array_2 ) glVertex2iv(const GLint*)
#define dao_glVertex2sv( v_dao_hint_array_2 ) glVertex2sv(const GLshort*)
#define dao_glVertex3dv( v_dao_hint_array_3 ) glVertex3dv(const GLdouble*)
#define dao_glVertex3fv( v_dao_hint_array_3 ) glVertex3fv(const GLfloat*)
#define dao_glVertex3iv( v_dao_hint_array_3 ) glVertex3iv(const GLint*)
#define dao_glVertex3sv( v_dao_hint_array_3 ) glVertex3sv(const GLshort*)
#define dao_glVertex4dv( v_dao_hint_array_4 ) glVertex4dv(const GLdouble*)
#define dao_glVertex4fv( v_dao_hint_array_4 ) glVertex4fv(const GLfloat*)
#define dao_glVertex4iv( v_dao_hint_array_4 ) glVertex4iv(const GLint*)
#define dao_glVertex4sv( v_dao_hint_array_4 ) glVertex4sv(const GLshort*)

#if 0
extern void glVertexPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
#endif

#define dao_glLoadTransposeMatrixf( m_dao_hint_array_16 ) glLoadTransposeMatrixf(const GLfloat*)
#define dao_glLoadTransposeMatrixd( m_dao_hint_array_16 ) glLoadTransposeMatrixd(const GLdouble*)
#define dao_glMultTransposeMatrixf( m_dao_hint_array_16 ) glMultTransposeMatrixf(const GLfloat*)
#define dao_glMultTransposeMatrixd( m_dao_hint_array_16 ) glMultTransposeMatrixd(const GLdouble*)

#if 0
extern void glCompressedTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexImage1D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data);
extern void glGetCompressedTexImage (GLenum target, GLint lod, GLvoid *img);
#endif

#define dao_glMultiTexCoord1dv( target, v_dao_hint_array_1 ) glMultiTexCoord1dv(GLenum,const GLdouble*)
#define dao_glMultiTexCoord1fv( target, v_dao_hint_array_1 ) glMultiTexCoord1fv(GLenum,const GLfloat*)
#define dao_glMultiTexCoord1iv( target, v_dao_hint_array_1 ) glMultiTexCoord1iv(GLenum,const GLint*)
#define dao_glMultiTexCoord1sv( target, v_dao_hint_array_1 ) glMultiTexCoord1sv(GLenum,const GLshort*)
#define dao_glMultiTexCoord2dv( target, v_dao_hint_array_2 ) glMultiTexCoord2dv(GLenum,const GLdouble*)
#define dao_glMultiTexCoord2fv( target, v_dao_hint_array_2 ) glMultiTexCoord2fv(GLenum,const GLfloat*)
#define dao_glMultiTexCoord2iv( target, v_dao_hint_array_2 ) glMultiTexCoord2iv(GLenum,const GLint*)
#define dao_glMultiTexCoord2sv( target, v_dao_hint_array_2 ) glMultiTexCoord2sv(GLenum,const GLshort*)
#define dao_glMultiTexCoord3dv( target, v_dao_hint_array_3 ) glMultiTexCoord3dv(GLenum,const GLdouble*)
#define dao_glMultiTexCoord3fv( target, v_dao_hint_array_3 ) glMultiTexCoord3fv(GLenum,const GLfloat*)
#define dao_glMultiTexCoord3iv( target, v_dao_hint_array_3 ) glMultiTexCoord3iv(GLenum,const GLint*)
#define dao_glMultiTexCoord3sv( target, v_dao_hint_array_3 ) glMultiTexCoord3sv(GLenum,const GLshort*)
#define dao_glMultiTexCoord4dv( target, v_dao_hint_array_4 ) glMultiTexCoord4dv(GLenum,const GLdouble*)
#define dao_glMultiTexCoord4fv( target, v_dao_hint_array_4 ) glMultiTexCoord4fv(GLenum,const GLfloat*)
#define dao_glMultiTexCoord4iv( target, v_dao_hint_array_4 ) glMultiTexCoord4iv(GLenum,const GLint*)
#define dao_glMultiTexCoord4sv( target, v_dao_hint_array_4 ) glMultiTexCoord4sv(GLenum,const GLshort*)

#define dao_glFogCoordfv( coord_dao_hint_array_1 ) glFogCoordfv(const GLfloat*)  
#define dao_glFogCoorddv( coord_dao_hint_array_1 ) glFogCoorddv(const GLdouble*)   

#if 0
extern void glFogCoordPointer (GLenum type, GLsizei stride, const GLvoid *pointer);
#endif

#define dao_glSecondaryColor3bv( v_dao_hint_array_3 ) glSecondaryColor3bv(const GLbyte*)
#define dao_glSecondaryColor3dv( v_dao_hint_array_3 ) glSecondaryColor3dv(const GLdouble*)
#define dao_glSecondaryColor3fv( v_dao_hint_array_3 ) glSecondaryColor3fv(const GLfloat*)
#define dao_glSecondaryColor3iv( v_dao_hint_array_3 ) glSecondaryColor3iv(const GLint*)
#define dao_glSecondaryColor3sv( v_dao_hint_array_3 ) glSecondaryColor3sv(const GLshort*)
#define dao_glSecondaryColor3ubv( v_dao_hint_array_3 ) glSecondaryColor3ubv(const GLubyte*)
#define dao_glSecondaryColor3uiv( v_dao_hint_array_3 ) glSecondaryColor3uiv(const GLuint*)
#define dao_glSecondaryColor3usv( v_dao_hint_array_3 ) glSecondaryColor3usv(const GLushort*)

#if 0
extern void glSecondaryColorPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);

extern void glPointParameterfv (GLenum pname, const GLfloat *params);
extern void glPointParameteriv (GLenum pname, const GLint *params);

extern void glMultiDrawArrays (GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount);
extern void glMultiDrawElements (GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount);
#endif

#define dao_glWindowPos2dv( v_dao_hint_array_2 ) glWindowPos2dv(const GLdouble*)
#define dao_glWindowPos2fv( v_dao_hint_array_2 ) glWindowPos2fv(const GLfloat*)
#define dao_glWindowPos2iv( v_dao_hint_array_2 ) glWindowPos2iv(const GLint*)
#define dao_glWindowPos2sv( v_dao_hint_array_2 ) glWindowPos2sv(const GLshort*)
#define dao_glWindowPos3dv( v_dao_hint_array_3 ) glWindowPos3dv(const GLdouble*)
#define dao_glWindowPos3fv( v_dao_hint_array_3 ) glWindowPos3fv(const GLfloat*)
#define dao_glWindowPos3iv( v_dao_hint_array_3 ) glWindowPos3iv(const GLint*)
#define dao_glWindowPos3sv( v_dao_hint_array_3 ) glWindowPos3sv(const GLshort*)

#if 0
extern void glGenQueries(GLsizei n, GLuint *ids);
extern void glGetQueryiv(GLenum target, GLenum pname, GLint *params);
extern void glGetQueryObjectiv(GLuint id, GLenum pname, GLint *params);
extern void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint *params);

extern void glDeleteBuffers (GLsizei n, const GLuint *buffers);
extern void glGenBuffers (GLsizei n, GLuint *buffers);
extern void glBufferData (GLenum target, GLsizeiptr size, const GLvoid *data, GLenum usage);
extern void glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid *data);
extern void glGetBufferParameteriv (GLenum target, GLenum pname, GLint *params);

extern void glDrawBuffers (GLsizei n, const GLenum *bufs);
#endif

#define dao_glVertexAttrib1dv( index, v_dao_hint_array_1 ) glVertexAttrib1dv(GLuint,const GLdouble*)
#define dao_glVertexAttrib1fv( index, v_dao_hint_array_1 ) glVertexAttrib1fv(GLuint,const GLfloat*)
#define dao_glVertexAttrib1sv( index, v_dao_hint_array_1 ) glVertexAttrib1sv(GLuint,const GLshort*)
#define dao_glVertexAttrib2dv( index, v_dao_hint_array_2 ) glVertexAttrib2dv(GLuint,const GLdouble*)
#define dao_glVertexAttrib2fv( index, v_dao_hint_array_2 ) glVertexAttrib2fv(GLuint,const GLfloat*)
#define dao_glVertexAttrib2sv( index, v_dao_hint_array_2 ) glVertexAttrib2sv(GLuint,const GLshort*)
#define dao_glVertexAttrib3dv( index, v_dao_hint_array_3 ) glVertexAttrib3dv(GLuint,const GLdouble*)
#define dao_glVertexAttrib3fv( index, v_dao_hint_array_3 ) glVertexAttrib3fv(GLuint,const GLfloat*)
#define dao_glVertexAttrib3sv( index, v_dao_hint_array_3 ) glVertexAttrib3sv(GLuint,const GLshort*)
#define dao_glVertexAttrib4Nbv( index, v_dao_hint_array_4 ) glVertexAttrib4Nbv(GLuint,const GLbyte*)
#define dao_glVertexAttrib4Niv( index, v_dao_hint_array_4 ) glVertexAttrib4Niv(GLuint,const GLint*)
#define dao_glVertexAttrib4Nsv( index, v_dao_hint_array_4 ) glVertexAttrib4Nsv(GLuint,const GLshort*)
#define dao_glVertexAttrib4Nubv( index, v_dao_hint_array_4 ) glVertexAttrib4Nubv(GLuint,const GLubyte*)
#define dao_glVertexAttrib4Nuiv( index, v_dao_hint_array_4 ) glVertexAttrib4Nuiv(GLuint,const GLuint*)
#define dao_glVertexAttrib4Nusv( index, v_dao_hint_array_4 ) glVertexAttrib4Nusv(GLuint,const GLushort*)
#define dao_glVertexAttrib4bv( index, v_dao_hint_array_4 ) glVertexAttrib4bv(GLuint,const GLbyte*)
#define dao_glVertexAttrib4dv( index, v_dao_hint_array_4 ) glVertexAttrib4dv(GLuint,const GLdouble*)
#define dao_glVertexAttrib4fv( index, v_dao_hint_array_4 ) glVertexAttrib4fv(GLuint,const GLfloat*)
#define dao_glVertexAttrib4iv( index, v_dao_hint_array_4 ) glVertexAttrib4iv(GLuint,const GLint*)
#define dao_glVertexAttrib4sv( index, v_dao_hint_array_4 ) glVertexAttrib4sv(GLuint,const GLshort*)
#define dao_glVertexAttrib4ubv( index, v_dao_hint_array_4 ) glVertexAttrib4ubv(GLuint,const GLubyte*)
#define dao_glVertexAttrib4uiv( index, v_dao_hint_array_4 ) glVertexAttrib4uiv(GLuint,const GLuint*)
#define dao_glVertexAttrib4usv( index, v_dao_hint_array_4 ) glVertexAttrib4usv(GLuint,const GLushort*)

#if 0
extern void glVertexAttribPointer (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer);
extern void glGetVertexAttribdv (GLuint index, GLenum pname, GLdouble *params);
extern void glGetVertexAttribfv (GLuint index, GLenum pname, GLfloat *params);
extern void glGetVertexAttribiv (GLuint index, GLenum pname, GLint *params);
extern void glGetVertexAttribPointerv (GLuint index, GLenum pname, GLvoid* *pointer);
extern void glShaderSource (GLuint shader, GLsizei count, const GLchar* *string, const GLint *length);
#endif

#define dao_glUniform1fv( location, count, value_dao_hint_array_1 ) glUniform1fv(GLint,GLsizei,const GLfloat*)
#define dao_glUniform2fv( location, count, value_dao_hint_array_2 ) glUniform2fv(GLint,GLsizei,const GLfloat*)
#define dao_glUniform3fv( location, count, value_dao_hint_array_3 ) glUniform3fv(GLint,GLsizei,const GLfloat*)
#define dao_glUniform4fv( location, count, value_dao_hint_array_4 ) glUniform4fv(GLint,GLsizei,const GLfloat*)
#define dao_glUniform1iv( location, count, value_dao_hint_array_1 ) glUniform1iv(GLint,GLsizei,const GLint*)
#define dao_glUniform2iv( location, count, value_dao_hint_array_2 ) glUniform2iv(GLint,GLsizei,const GLint*)
#define dao_glUniform3iv( location, count, value_dao_hint_array_3 ) glUniform3iv(GLint,GLsizei,const GLint*)
#define dao_glUniform4iv( location, count, value_dao_hint_array_4 ) glUniform4iv(GLint,GLsizei,const GLint*)
#define dao_glUniformMatrix2fv( location, count, transpose, value_dao_hint_array_2 ) glUniformMatrix2xfv(GLint,GLsizei,GLboolean,const GLfloat*)
#define dao_glUniformMatrix3fv( location, count, transpose, value_dao_hint_array_3 ) glUniformMatrix3xfv(GLint,GLsizei,GLboolean,const GLfloat*)
#define dao_glUniformMatrix4fv( location, count, transpose, value_dao_hint_array_4 ) glUniformMatrix4xfv(GLint,GLsizei,GLboolean,const GLfloat*)

#if 0
extern void glGetShaderiv (GLuint shader, GLenum pname, GLint *params);
extern void glGetProgramiv (GLuint program, GLenum pname, GLint *params);
extern void glGetAttachedShaders (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders);
extern void glGetShaderInfoLog (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
extern void glGetProgramInfoLog (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
extern void glGetActiveUniform (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
extern void glGetUniformfv (GLuint program, GLint location, GLfloat *params);
extern void glGetUniformiv (GLuint program, GLint location, GLint *params);
extern void glGetShaderSource (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);
extern void glGetActiveAttrib (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
#endif

#define dao_glUniformMatrix2x3fv( location, count, transpose, value_dao_hint_array_2_3 ) glUniformMatrix2x3fv(GLint,GLsizei,GLboolean,const GLfloat*)
#define dao_glUniformMatrix3x2fv( location, count, transpose, value_dao_hint_array_3_2 ) glUniformMatrix3x2fv(GLint,GLsizei,GLboolean,const GLfloat*)
#define dao_glUniformMatrix2x4fv( location, count, transpose, value_dao_hint_array_2_4 ) glUniformMatrix2x4fv(GLint,GLsizei,GLboolean,const GLfloat*)
#define dao_glUniformMatrix4x2fv( location, count, transpose, value_dao_hint_array_4_2 ) glUniformMatrix4x2fv(GLint,GLsizei,GLboolean,const GLfloat*)
#define dao_glUniformMatrix3x4fv( location, count, transpose, value_dao_hint_array_3_4 ) glUniformMatrix3x4fv(GLint,GLsizei,GLboolean,const GLfloat*)
#define dao_glUniformMatrix4x3fv( location, count, transpose, value_dao_hint_array_4_3 ) glUniformMatrix4x3fv(GLint,GLsizei,GLboolean,const GLfloat*)

#include<gl.h>

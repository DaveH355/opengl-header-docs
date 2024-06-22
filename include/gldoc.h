#pragma once

#if __has_include(<glad/gl.h>)
#include <glad/gl.h>
#endif

#if __has_include(<glad/glad.h>)
#include <glad/glad.h>
#endif

#undef glActiveShaderProgram
#undef glActiveTexture
#undef glAttachShader
#undef glBeginConditionalRender
#undef glEndConditionalRender
#undef glBeginQuery
#undef glEndQuery
#undef glBeginQueryIndexed
#undef glEndQueryIndexed
#undef glBeginTransformFeedback
#undef glEndTransformFeedback
#undef glBindAttribLocation
#undef glBindBuffer
#undef glBindBufferBase
#undef glBindBufferRange
#undef glBindBuffersBase
#undef glBindBuffersRange
#undef glBindFragDataLocation
#undef glBindFragDataLocationIndexed
#undef glBindFramebuffer
#undef glBindImageTexture
#undef glBindImageTextures
#undef glBindProgramPipeline
#undef glBindRenderbuffer
#undef glBindSampler
#undef glBindSamplers
#undef glBindTexture
#undef glBindTextureUnit
#undef glBindTextures
#undef glBindTransformFeedback
#undef glBindVertexArray
#undef glBindVertexBuffer
#undef glVertexArrayVertexBuffer
#undef glBindVertexBuffers
#undef glVertexArrayVertexBuffers
#undef glBlendColor
#undef glBlendEquation
#undef glBlendEquationi
#undef glBlendEquationSeparate
#undef glBlendEquationSeparatei
#undef glBlendFunc
#undef glBlendFunci
#undef glBlendFuncSeparate
#undef glBlendFuncSeparatei
#undef glBlitFramebuffer
#undef glBlitNamedFramebuffer
#undef glBufferData
#undef glNamedBufferData
#undef glBufferStorage
#undef glNamedBufferStorage
#undef glBufferSubData
#undef glNamedBufferSubData
#undef glCheckFramebufferStatus
#undef glCheckNamedFramebufferStatus
#undef glClampColor
#undef glClear
#undef glClearBufferiv
#undef glClearBufferuiv
#undef glClearBufferfv
#undef glClearBufferfi
#undef glClearNamedFramebufferiv
#undef glClearNamedFramebufferuiv
#undef glClearNamedFramebufferfv
#undef glClearNamedFramebufferfi
#undef glClearBufferData
#undef glClearNamedBufferData
#undef glClearBufferSubData
#undef glClearNamedBufferSubData
#undef glClearColor
#undef glClearDepth
#undef glClearDepthf
#undef glClearStencil
#undef glClearTexImage
#undef glClearTexSubImage
#undef glClientWaitSync
#undef glClipControl
#undef glColorMask
#undef glColorMaski
#undef glCompileShader
#undef glCompressedTexImage1D
#undef glCompressedTexImage2D
#undef glCompressedTexImage3D
#undef glCompressedTexSubImage1D
#undef glCompressedTextureSubImage1D
#undef glCompressedTexSubImage2D
#undef glCompressedTextureSubImage2D
#undef glCompressedTexSubImage3D
#undef glCompressedTextureSubImage3D
#undef glCopyBufferSubData
#undef glCopyNamedBufferSubData
#undef glCopyImageSubData
#undef glCopyTexImage1D
#undef glCopyTexImage2D
#undef glCopyTexSubImage1D
#undef glCopyTextureSubImage1D
#undef glCopyTexSubImage2D
#undef glCopyTextureSubImage2D
#undef glCopyTexSubImage3D
#undef glCopyTextureSubImage3D
#undef glCreateBuffers
#undef glCreateFramebuffers
#undef glCreateProgram
#undef glCreateProgramPipelines
#undef glCreateQueries
#undef glCreateRenderbuffers
#undef glCreateSamplers
#undef glCreateShader
#undef glCreateShaderProgramv
#undef glCreateTextures
#undef glCreateTransformFeedbacks
#undef glCreateVertexArrays
#undef glCullFace
#undef glDebugMessageCallback
#undef glDebugMessageControl
#undef glDebugMessageInsert
#undef glDeleteBuffers
#undef glDeleteFramebuffers
#undef glDeleteProgram
#undef glDeleteProgramPipelines
#undef glDeleteQueries
#undef glDeleteRenderbuffers
#undef glDeleteSamplers
#undef glDeleteShader
#undef glDeleteSync
#undef glDeleteTextures
#undef glDeleteTransformFeedbacks
#undef glDeleteVertexArrays
#undef glDepthFunc
#undef glDepthMask
#undef glDepthRange
#undef glDepthRangef
#undef glDepthRangeArrayv
#undef glDepthRangeIndexed
#undef glDetachShader
#undef glDispatchCompute
#undef glDispatchComputeIndirect
#undef glDrawArrays
#undef glDrawArraysIndirect
#undef glDrawArraysInstanced
#undef glDrawArraysInstancedBaseInstance
#undef glDrawBuffer
#undef glNamedFramebufferDrawBuffer
#undef glDrawBuffers
#undef glNamedFramebufferDrawBuffers
#undef glDrawElements
#undef glDrawElementsBaseVertex
#undef glDrawElementsIndirect
#undef glDrawElementsInstanced
#undef glDrawElementsInstancedBaseInstance
#undef glDrawElementsInstancedBaseVertex
#undef glDrawElementsInstancedBaseVertexBaseInstance
#undef glDrawRangeElements
#undef glDrawRangeElementsBaseVertex
#undef glDrawTransformFeedback
#undef glDrawTransformFeedbackInstanced
#undef glDrawTransformFeedbackStream
#undef glDrawTransformFeedbackStreamInstanced
#undef glEnable
#undef glDisable
#undef glEnablei
#undef glDisablei
#undef glEnableVertexAttribArray
#undef glDisableVertexAttribArray
#undef glEnableVertexArrayAttrib
#undef glDisableVertexArrayAttrib
#undef glFenceSync
#undef glFinish
#undef glFlush
#undef glFlushMappedBufferRange
#undef glFlushMappedNamedBufferRange
#undef glFramebufferParameteri
#undef glNamedFramebufferParameteri
#undef glFramebufferRenderbuffer
#undef glNamedFramebufferRenderbuffer
#undef glFramebufferTexture
#undef glFramebufferTexture1D
#undef glFramebufferTexture2D
#undef glFramebufferTexture3D
#undef glNamedFramebufferTexture
#undef glFramebufferTextureLayer
#undef glNamedFramebufferTextureLayer
#undef glFrontFace
#undef glGenBuffers
#undef glGenFramebuffers
#undef glGenProgramPipelines
#undef glGenQueries
#undef glGenRenderbuffers
#undef glGenSamplers
#undef glGenTextures
#undef glGenTransformFeedbacks
#undef glGenVertexArrays
#undef glGenerateMipmap
#undef glGenerateTextureMipmap
#undef glGetBooleanv
#undef glGetDoublev
#undef glGetFloatv
#undef glGetIntegerv
#undef glGetInteger64v
#undef glGetBooleani_v
#undef glGetIntegeri_v
#undef glGetFloati_v
#undef glGetDoublei_v
#undef glGetInteger64i_v
#undef glGetActiveAtomicCounterBufferiv
#undef glGetActiveAttrib
#undef glGetActiveSubroutineName
#undef glGetActiveSubroutineUniformiv
#undef glGetActiveSubroutineUniformName
#undef glGetActiveUniform
#undef glGetActiveUniformBlockiv
#undef glGetActiveUniformBlockName
#undef glGetActiveUniformName
#undef glGetActiveUniformsiv
#undef glGetAttachedShaders
#undef glGetAttribLocation
#undef glGetBufferParameteriv
#undef glGetBufferParameteri64v
#undef glGetNamedBufferParameteriv
#undef glGetNamedBufferParameteri64v
#undef glGetBufferPointerv
#undef glGetNamedBufferPointerv
#undef glGetBufferSubData
#undef glGetNamedBufferSubData
#undef glGetCompressedTexImage
#undef glGetnCompressedTexImage
#undef glGetCompressedTextureImage
#undef glGetCompressedTextureSubImage
#undef glGetDebugMessageLog
#undef glGetError
#undef glGetFragDataIndex
#undef glGetFragDataLocation
#undef glGetFramebufferAttachmentParameteriv
#undef glGetNamedFramebufferAttachmentParameteriv
#undef glGetFramebufferParameteriv
#undef glGetNamedFramebufferParameteriv
#undef glGetGraphicsResetStatus
#undef glGetInternalformativ
#undef glGetInternalformati64v
#undef glGetMultisamplefv
#undef glGetObjectLabel
#undef glGetObjectPtrLabel
#undef glGetPointerv
#undef glGetProgramiv
#undef glGetProgramBinary
#undef glGetProgramInfoLog
#undef glGetProgramInterfaceiv
#undef glGetProgramPipelineiv
#undef glGetProgramPipelineInfoLog
#undef glGetProgramResourceiv
#undef glGetProgramResourceIndex
#undef glGetProgramResourceLocation
#undef glGetProgramResourceLocationIndex
#undef glGetProgramResourceName
#undef glGetProgramStageiv
#undef glGetQueryIndexediv
#undef glGetQueryObjectiv
#undef glGetQueryObjectuiv
#undef glGetQueryObjecti64v
#undef glGetQueryObjectui64v
#undef glGetQueryiv
#undef glGetRenderbufferParameteriv
#undef glGetNamedRenderbufferParameteriv
#undef glGetSamplerParameterfv
#undef glGetSamplerParameteriv
#undef glGetSamplerParameterIiv
#undef glGetSamplerParameterIuiv
#undef glGetShaderiv
#undef glGetShaderInfoLog
#undef glGetShaderPrecisionFormat
#undef glGetShaderSource
#undef glGetString
#undef glGetStringi
#undef glGetSubroutineIndex
#undef glGetSubroutineUniformLocation
#undef glGetSynciv
#undef glGetTexImage
#undef glGetnTexImage
#undef glGetTextureImage
#undef glGetTexLevelParameterfv
#undef glGetTexLevelParameteriv
#undef glGetTextureLevelParameterfv
#undef glGetTextureLevelParameteriv
#undef glGetTexParameterfv
#undef glGetTexParameteriv
#undef glGetTexParameterIiv
#undef glGetTexParameterIuiv
#undef glGetTextureParameterfv
#undef glGetTextureParameteriv
#undef glGetTextureParameterIiv
#undef glGetTextureParameterIuiv
#undef glGetTextureSubImage
#undef glGetTransformFeedbackiv
#undef glGetTransformFeedbacki_v
#undef glGetTransformFeedbacki64_v
#undef glGetTransformFeedbackVarying
#undef glGetUniformfv
#undef glGetUniformiv
#undef glGetUniformuiv
#undef glGetUniformdv
#undef glGetnUniformfv
#undef glGetnUniformiv
#undef glGetnUniformuiv
#undef glGetnUniformdv
#undef glGetUniformBlockIndex
#undef glGetUniformIndices
#undef glGetUniformLocation
#undef glGetUniformSubroutineuiv
#undef glGetVertexArrayIndexed64iv
#undef glGetVertexArrayIndexediv
#undef glGetVertexArrayiv
#undef glGetVertexAttribdv
#undef glGetVertexAttribfv
#undef glGetVertexAttribiv
#undef glGetVertexAttribIiv
#undef glGetVertexAttribIuiv
#undef glGetVertexAttribLdv
#undef glGetVertexAttribPointerv
#undef glHint
#undef glInvalidateBufferData
#undef glInvalidateBufferSubData
#undef glInvalidateFramebuffer
#undef glInvalidateNamedFramebufferData
#undef glInvalidateSubFramebuffer
#undef glInvalidateNamedFramebufferSubData
#undef glInvalidateTexImage
#undef glInvalidateTexSubImage
#undef glIsBuffer
#undef glIsEnabled
#undef glIsEnabledi
#undef glIsFramebuffer
#undef glIsProgram
#undef glIsProgramPipeline
#undef glIsQuery
#undef glIsRenderbuffer
#undef glIsSampler
#undef glIsShader
#undef glIsSync
#undef glIsTexture
#undef glIsTransformFeedback
#undef glIsVertexArray
#undef glLineWidth
#undef glLinkProgram
#undef glLogicOp
#undef glMapBuffer
#undef glMapNamedBuffer
#undef glMapBufferRange
#undef glMapNamedBufferRange
#undef glMemoryBarrier
#undef glMemoryBarrierByRegion
#undef glMinSampleShading
#undef glMultiDrawArrays
#undef glMultiDrawArraysIndirect
#undef glMultiDrawElements
#undef glMultiDrawElementsBaseVertex
#undef glMultiDrawElementsIndirect
#undef glObjectLabel
#undef glObjectPtrLabel
#undef glPatchParameteri
#undef glPatchParameterfv
#undef glPauseTransformFeedback
#undef glPixelStoref
#undef glPixelStorei
#undef glPointParameterf
#undef glPointParameteri
#undef glPointParameterfv
#undef glPointParameteriv
#undef glPointSize
#undef glPolygonMode
#undef glPolygonOffset
#undef glPopDebugGroup
#undef glPrimitiveRestartIndex
#undef glProgramBinary
#undef glProgramParameteri
#undef glProgramUniform1f
#undef glProgramUniform2f
#undef glProgramUniform3f
#undef glProgramUniform4f
#undef glProgramUniform1i
#undef glProgramUniform2i
#undef glProgramUniform3i
#undef glProgramUniform4i
#undef glProgramUniform1ui
#undef glProgramUniform2ui
#undef glProgramUniform3ui
#undef glProgramUniform4ui
#undef glProgramUniform1fv
#undef glProgramUniform2fv
#undef glProgramUniform3fv
#undef glProgramUniform4fv
#undef glProgramUniform1iv
#undef glProgramUniform2iv
#undef glProgramUniform3iv
#undef glProgramUniform4iv
#undef glProgramUniform1uiv
#undef glProgramUniform2uiv
#undef glProgramUniform3uiv
#undef glProgramUniform4uiv
#undef glProgramUniformMatrix2fv
#undef glProgramUniformMatrix3fv
#undef glProgramUniformMatrix4fv
#undef glProgramUniformMatrix2x3fv
#undef glProgramUniformMatrix3x2fv
#undef glProgramUniformMatrix2x4fv
#undef glProgramUniformMatrix4x2fv
#undef glProgramUniformMatrix3x4fv
#undef glProgramUniformMatrix4x3fv
#undef glProvokingVertex
#undef glPushDebugGroup
#undef glQueryCounter
#undef glReadBuffer
#undef glNamedFramebufferReadBuffer
#undef glReadPixels
#undef glReadnPixels
#undef glReleaseShaderCompiler
#undef glRenderbufferStorage
#undef glNamedRenderbufferStorage
#undef glRenderbufferStorageMultisample
#undef glNamedRenderbufferStorageMultisample
#undef glResumeTransformFeedback
#undef glSampleCoverage
#undef glSampleMaski
#undef glSamplerParameterf
#undef glSamplerParameteri
#undef glSamplerParameterfv
#undef glSamplerParameteriv
#undef glSamplerParameterIiv
#undef glSamplerParameterIuiv
#undef glScissor
#undef glScissorArrayv
#undef glScissorIndexed
#undef glScissorIndexedv
#undef glShaderBinary
#undef glShaderSource
#undef glShaderStorageBlockBinding
#undef glStencilFunc
#undef glStencilFuncSeparate
#undef glStencilMask
#undef glStencilMaskSeparate
#undef glStencilOp
#undef glStencilOpSeparate
#undef glTexBuffer
#undef glTextureBuffer
#undef glTexBufferRange
#undef glTextureBufferRange
#undef glTexImage1D
#undef glTexImage2D
#undef glTexImage2DMultisample
#undef glTexImage3D
#undef glTexImage3DMultisample
#undef glTexParameterf
#undef glTexParameteri
#undef glTextureParameterf
#undef glTextureParameteri
#undef glTexParameterfv
#undef glTexParameteriv
#undef glTexParameterIiv
#undef glTexParameterIuiv
#undef glTextureParameterfv
#undef glTextureParameteriv
#undef glTextureParameterIiv
#undef glTextureParameterIuiv
#undef glTexStorage1D
#undef glTextureStorage1D
#undef glTexStorage2D
#undef glTextureStorage2D
#undef glTexStorage2DMultisample
#undef glTextureStorage2DMultisample
#undef glTexStorage3D
#undef glTextureStorage3D
#undef glTexStorage3DMultisample
#undef glTextureStorage3DMultisample
#undef glTexSubImage1D
#undef glTextureSubImage1D
#undef glTexSubImage2D
#undef glTextureSubImage2D
#undef glTexSubImage3D
#undef glTextureSubImage3D
#undef glTextureBarrier
#undef glTextureView
#undef glTransformFeedbackBufferBase
#undef glTransformFeedbackBufferRange
#undef glTransformFeedbackVaryings
#undef glUniform1f
#undef glUniform2f
#undef glUniform3f
#undef glUniform4f
#undef glUniform1i
#undef glUniform2i
#undef glUniform3i
#undef glUniform4i
#undef glUniform1ui
#undef glUniform2ui
#undef glUniform3ui
#undef glUniform4ui
#undef glUniform1fv
#undef glUniform2fv
#undef glUniform3fv
#undef glUniform4fv
#undef glUniform1iv
#undef glUniform2iv
#undef glUniform3iv
#undef glUniform4iv
#undef glUniform1uiv
#undef glUniform2uiv
#undef glUniform3uiv
#undef glUniform4uiv
#undef glUniformMatrix2fv
#undef glUniformMatrix3fv
#undef glUniformMatrix4fv
#undef glUniformMatrix2x3fv
#undef glUniformMatrix3x2fv
#undef glUniformMatrix2x4fv
#undef glUniformMatrix4x2fv
#undef glUniformMatrix3x4fv
#undef glUniformMatrix4x3fv
#undef glUniformBlockBinding
#undef glUniformSubroutinesuiv
#undef glUnmapBuffer
#undef glUnmapNamedBuffer
#undef glUseProgram
#undef glUseProgramStages
#undef glValidateProgram
#undef glValidateProgramPipeline
#undef glVertexArrayElementBuffer
#undef glVertexAttrib1f
#undef glVertexAttrib1s
#undef glVertexAttrib1d
#undef glVertexAttribI1i
#undef glVertexAttribI1ui
#undef glVertexAttrib2f
#undef glVertexAttrib2s
#undef glVertexAttrib2d
#undef glVertexAttribI2i
#undef glVertexAttribI2ui
#undef glVertexAttrib3f
#undef glVertexAttrib3s
#undef glVertexAttrib3d
#undef glVertexAttribI3i
#undef glVertexAttribI3ui
#undef glVertexAttrib4f
#undef glVertexAttrib4s
#undef glVertexAttrib4d
#undef glVertexAttrib4Nub
#undef glVertexAttribI4i
#undef glVertexAttribI4ui
#undef glVertexAttribL1d
#undef glVertexAttribL2d
#undef glVertexAttribL3d
#undef glVertexAttribL4d
#undef glVertexAttrib1fv
#undef glVertexAttrib1sv
#undef glVertexAttrib1dv
#undef glVertexAttribI1iv
#undef glVertexAttribI1uiv
#undef glVertexAttrib2fv
#undef glVertexAttrib2sv
#undef glVertexAttrib2dv
#undef glVertexAttribI2iv
#undef glVertexAttribI2uiv
#undef glVertexAttrib3fv
#undef glVertexAttrib3sv
#undef glVertexAttrib3dv
#undef glVertexAttribI3iv
#undef glVertexAttribI3uiv
#undef glVertexAttrib4fv
#undef glVertexAttrib4sv
#undef glVertexAttrib4dv
#undef glVertexAttrib4iv
#undef glVertexAttrib4bv
#undef glVertexAttrib4ubv
#undef glVertexAttrib4usv
#undef glVertexAttrib4uiv
#undef glVertexAttrib4Nbv
#undef glVertexAttrib4Nsv
#undef glVertexAttrib4Niv
#undef glVertexAttrib4Nubv
#undef glVertexAttrib4Nusv
#undef glVertexAttrib4Nuiv
#undef glVertexAttribI4bv
#undef glVertexAttribI4ubv
#undef glVertexAttribI4sv
#undef glVertexAttribI4usv
#undef glVertexAttribI4iv
#undef glVertexAttribI4uiv
#undef glVertexAttribL1dv
#undef glVertexAttribL2dv
#undef glVertexAttribL3dv
#undef glVertexAttribL4dv
#undef glVertexAttribP1ui
#undef glVertexAttribP2ui
#undef glVertexAttribP3ui
#undef glVertexAttribP4ui
#undef glVertexAttribBinding
#undef glVertexArrayAttribBinding
#undef glVertexAttribDivisor
#undef glVertexAttribFormat
#undef glVertexAttribIFormat
#undef glVertexAttribLFormat
#undef glVertexArrayAttribFormat
#undef glVertexArrayAttribIFormat
#undef glVertexArrayAttribLFormat
#undef glVertexAttribPointer
#undef glVertexAttribIPointer
#undef glVertexAttribLPointer
#undef glVertexBindingDivisor
#undef glVertexArrayBindingDivisor
#undef glViewport
#undef glViewportArrayv
#undef glViewportIndexedf
#undef glViewportIndexedfv
#undef glWaitSync
/**
 * glActiveShaderProgram — set the active program object for a program
 * pipeline object
 *
 * @param [pipeline] Specifies the program pipeline object to set the active
 * program object for.
 *
 * @param [program] Specifies the program object to set as the active program
 * pipeline object pipeline.
 */
static inline void glActiveShaderProgram(GLuint pipeline, GLuint program) {
  glad_glActiveShaderProgram(pipeline, program);
}
/**
 * glActiveTexture — select active texture unit
 *
 * @param [texture] Specifies which texture unit to make active. The number of
 * texture units is implementation dependent, but must be at least 80. texture
 * must be one of GL_TEXTUREi, where i ranges from zero to the value of
 * GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS minus one. The initial value is
 * GL_TEXTURE0.
 */
static inline void glActiveTexture(GLenum texture) {
  glad_glActiveTexture(texture);
}
/**
 * glAttachShader — Attaches a shader object to a program object
 *
 * @param [program] Specifies the program object to which a shader object will
 * be attached.
 *
 * @param [shader] Specifies the shader object that is to be attached.
 */
static inline void glAttachShader(GLuint program, GLuint shader) {
  glad_glAttachShader(program, shader);
}
/**
 * glBeginConditionalRender — start conditional rendering
 */
static inline void glBeginConditionalRender(GLuint id, GLenum mode) {
  glad_glBeginConditionalRender(id, mode);
}
/**
 * glBeginConditionalRender — start conditional rendering
 */
static inline void glEndConditionalRender(void) {
  glad_glEndConditionalRender();
}
/**
 * glBeginQuery — delimit the boundaries of a query object
 */
static inline void glBeginQuery(GLenum target, GLuint id) {
  glad_glBeginQuery(target, id);
}
/**
 * glBeginQuery — delimit the boundaries of a query object
 */
static inline void glEndQuery(GLenum target) { glad_glEndQuery(target); }
/**
 * glBeginQueryIndexed, glEndQueryIndexed — delimit the boundaries of a query
 * object on an indexed target
 */
static inline void glBeginQueryIndexed(GLenum target, GLuint index, GLuint id) {
  glad_glBeginQueryIndexed(target, index, id);
}
/**
 * glBeginQueryIndexed, glEndQueryIndexed — delimit the boundaries of a query
 * object on an indexed target
 */
static inline void glEndQueryIndexed(GLenum target, GLuint index) {
  glad_glEndQueryIndexed(target, index);
}
/**
 * glBeginTransformFeedback — start transform feedback operation
 */
static inline void glBeginTransformFeedback(GLenum primitiveMode) {
  glad_glBeginTransformFeedback(primitiveMode);
}
/**
 * glBeginTransformFeedback — start transform feedback operation
 */
static inline void glEndTransformFeedback(void) {
  glad_glEndTransformFeedback();
}
/**
 * glBindAttribLocation — Associates a generic vertex attribute index with a
 * named attribute variable
 *
 * @param [program] Specifies the handle of the program object in which the
 * association is to be made.
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * bound.
 *
 * @param [name] Specifies a null terminated string containing the name of the
 * vertex shader attribute variable to which index is to be bound.
 */
static inline void glBindAttribLocation(GLuint program, GLuint index,
                                        const GLchar *name) {
  glad_glBindAttribLocation(program, index, name);
}
/**
 * glBindBuffer — bind a named buffer object
 *
 * @param [target] Specifies the target to which the buffer object is bound,
 * which must be one of the buffer binding targets in the following table:
 *
 * GL_ARRAY_BUFFER - Vertex attributes,
 * GL_ATOMIC_COUNTER_BUFFER - Atomic counter storage,
 * GL_COPY_READ_BUFFER - Buffer copy source,
 * GL_COPY_WRITE_BUFFER - Buffer copy destination,
 * GL_DISPATCH_INDIRECT_BUFFER - Indirect compute dispatch commands,
 * GL_DRAW_INDIRECT_BUFFER - Indirect command arguments,
 * GL_ELEMENT_ARRAY_BUFFER - Vertex array indices,
 * GL_PIXEL_PACK_BUFFER - Pixel read target,
 * GL_PIXEL_UNPACK_BUFFER - Texture data source,
 * GL_QUERY_BUFFER - Query result buffer,
 * GL_SHADER_STORAGE_BUFFER - Read-write storage for shaders,
 * GL_TEXTURE_BUFFER - Texture data buffer,
 * GL_TRANSFORM_FEEDBACK_BUFFER - Transform feedback buffer,
 * GL_UNIFORM_BUFFER - Uniform block storage,
 *
 * @param [buffer] Specifies the name of a buffer object.
 */
static inline void glBindBuffer(GLenum target, GLuint buffer) {
  glad_glBindBuffer(target, buffer);
}
/**
 * glBindBufferBase — bind a buffer object to an indexed buffer target
 *
 * @param [target] Specify the target of the bind operation. target must be
 * one of GL_ATOMIC_COUNTER_BUFFER, GL_TRANSFORM_FEEDBACK_BUFFER,
 * GL_UNIFORM_BUFFER or GL_SHADER_STORAGE_BUFFER.
 *
 * @param [index] Specify the index of the binding point within the array
 * specified by target.
 *
 * @param [buffer] The name of a buffer object to bind to the specified
 * binding point.
 */
static inline void glBindBufferBase(GLenum target, GLuint index,
                                    GLuint buffer) {
  glad_glBindBufferBase(target, index, buffer);
}
/**
 * glBindBufferRange — bind a range within a buffer object to an indexed
 * buffer target
 *
 * @param [target] Specify the target of the bind operation. target must be
 * one of GL_ATOMIC_COUNTER_BUFFER, GL_TRANSFORM_FEEDBACK_BUFFER,
 * GL_UNIFORM_BUFFER, or GL_SHADER_STORAGE_BUFFER.
 *
 * @param [index] Specify the index of the binding point within the array
 * specified by target.
 *
 * @param [buffer] The name of a buffer object to bind to the specified
 * binding point.
 *
 * @param [offset] The starting offset in basic machine units into the buffer
 * object buffer.
 *
 * @param [size] The amount of data in machine units that can be read from the
 * buffer object while used as an indexed target.
 */
static inline void glBindBufferRange(GLenum target, GLuint index, GLuint buffer,
                                     GLintptr offset, GLsizeiptr size) {
  glad_glBindBufferRange(target, index, buffer, offset, size);
}
/**
 * glBindBuffersBase — bind one or more buffer objects to a sequence of
 * indexed buffer targets
 *
 * @param [target] Specify the target of the bind operation. target must be
 * one of GL_ATOMIC_COUNTER_BUFFER, GL_TRANSFORM_FEEDBACK_BUFFER,
 * GL_UNIFORM_BUFFER or GL_SHADER_STORAGE_BUFFER.
 *
 * @param [index] Specify the index of the first binding point within the
 * array specified by target.
 *
 * @param [count] Specify the number of contiguous binding points to which to
 * bind buffers.
 *
 * @param [buffers] A pointer to an array of names of buffer objects to bind
 * to the targets on the specified binding point, or NULL.
 */
static inline void glBindBuffersBase(GLenum target, GLuint first, GLsizei count,
                                     const GLuint *buffers) {
  glad_glBindBuffersBase(target, first, count, buffers);
}
/**
 * glBindBuffersRange — bind ranges of one or more buffer objects to a
 * sequence of indexed buffer targets
 *
 * @param [target] Specify the target of the bind operation. target must be
 * one of GL_ATOMIC_COUNTER_BUFFER, GL_TRANSFORM_FEEDBACK_BUFFER,
 * GL_UNIFORM_BUFFER or GL_SHADER_STORAGE_BUFFER.
 *
 * @param [index] Specify the index of the first binding point within the
 * array specified by target.
 *
 * @param [count] Specify the number of contiguous binding points to which to
 * bind buffers.
 *
 * @param [buffers] A pointer to an array of names of buffer objects to bind
 * to the targets on the specified binding point, or NULL.
 */
static inline void glBindBuffersRange(GLenum target, GLuint first,
                                      GLsizei count, const GLuint *buffers,
                                      const GLintptr *offsets,
                                      const GLintptr *sizes) {
  glad_glBindBuffersRange(target, first, count, buffers, offsets, sizes);
}
/**
 * glBindFragDataLocation — bind a user-defined varying out variable to a
 * fragment shader color number
 *
 * @param [program] The name of the program containing varying out variable
 * whose binding to modify
 *
 * @param [colorNumber] The color number to bind the user-defined varying out
 * variable to
 *
 * @param [name] The name of the user-defined varying out variable whose
 * binding to modify
 */
static inline void glBindFragDataLocation(GLuint program, GLuint colorNumber,
                                          const char *name) {
  glad_glBindFragDataLocation(program, colorNumber, name);
}
/**
 * glBindFragDataLocationIndexed — bind a user-defined varying out variable to
 * a fragment shader color number and index
 *
 * @param [program] The name of the program containing varying out variable
 * whose binding to modify
 *
 * @param [colorNumber] The color number to bind the user-defined varying out
 * variable to
 *
 * @param [index] The index of the color input to bind the user-defined
 * varying out variable to
 *
 * @param [name] The name of the user-defined varying out variable whose
 * binding to modify
 */
static inline void glBindFragDataLocationIndexed(GLuint program,
                                                 GLuint colorNumber,
                                                 GLuint index,
                                                 const char *name) {
  glad_glBindFragDataLocationIndexed(program, colorNumber, index, name);
}
/**
 * glBindFramebuffer — bind a framebuffer to a framebuffer target
 *
 * @param [target] Specifies the framebuffer target of the binding operation.
 *
 * @param [framebuffer] Specifies the name of the framebuffer object to bind.
 */
static inline void glBindFramebuffer(GLenum target, GLuint framebuffer) {
  glad_glBindFramebuffer(target, framebuffer);
}
/**
 * glBindImageTexture — bind a level of a texture to an image unit
 *
 * @param [unit] Specifies the index of the image unit to which to bind the
 * texture
 *
 * @param [texture] Specifies the name of the texture to bind to the image
 * unit.
 *
 * @param [level] Specifies the level of the texture that is to be bound.
 *
 * @param [layered] Specifies whether a layered texture binding is to be
 * established.
 *
 * @param [layer] If layered is GL_FALSE, specifies the layer of texture to be
 * bound to the image unit. Ignored otherwise.
 *
 * @param [access] Specifies a token indicating the type of access that will
 * be performed on the image.
 *
 * @param [format] Specifies the format that the elements of the image will be
 * treated as for the purposes of formatted stores.
 */
static inline void glBindImageTexture(GLuint unit, GLuint texture, GLint level,
                                      GLboolean layered, GLint layer,
                                      GLenum access, GLenum format) {
  glad_glBindImageTexture(unit, texture, level, layered, layer, access, format);
}
/**
 * glBindImageTextures — bind one or more named texture images to a sequence
 * of consecutive image units
 *
 * @param [first] Specifies the first image unit to which a texture is to be
 * bound.
 *
 * @param [count] Specifies the number of textures to bind.
 *
 * @param [textures] Specifies the address of an array of names of existing
 * texture objects.
 */
static inline void glBindImageTextures(GLuint first, GLsizei count,
                                       const GLuint *textures) {
  glad_glBindImageTextures(first, count, textures);
}
/**
 * glBindProgramPipeline — bind a program pipeline to the current context
 *
 * @param [pipeline] Specifies the name of the pipeline object to bind to the
 * context.
 */
static inline void glBindProgramPipeline(GLuint pipeline) {
  glad_glBindProgramPipeline(pipeline);
}
/**
 * glBindRenderbuffer — bind a renderbuffer to a renderbuffer target
 *
 * @param [target] Specifies the renderbuffer target of the binding operation.
 * target must be GL_RENDERBUFFER.
 *
 * @param [renderbuffer] Specifies the name of the renderbuffer object to
 * bind.
 */
static inline void glBindRenderbuffer(GLenum target, GLuint renderbuffer) {
  glad_glBindRenderbuffer(target, renderbuffer);
}
/**
 * glBindSampler — bind a named sampler to a texturing target
 *
 * @param [unit] Specifies the index of the texture unit to which the sampler
 * is bound.
 *
 * @param [sampler] Specifies the name of a sampler.
 */
static inline void glBindSampler(GLuint unit, GLuint sampler) {
  glad_glBindSampler(unit, sampler);
}
/**
 * glBindSamplers — bind one or more named sampler objects to a sequence of
 * consecutive sampler units
 *
 * @param [first] Specifies the first sampler unit to which a sampler object
 * is to be bound.
 *
 * @param [count] Specifies the number of samplers to bind.
 *
 * @param [samplers] Specifies the address of an array of names of existing
 * sampler objects.
 */
static inline void glBindSamplers(GLuint first, GLsizei count,
                                  const GLuint *samplers) {
  glad_glBindSamplers(first, count, samplers);
}
/**
 * glBindTexture — bind a named texture to a texturing target
 *
 * @param [target] Specifies the target to which the texture is bound. Must be
 * one of GL_TEXTURE_1D, GL_TEXTURE_2D, GL_TEXTURE_3D, GL_TEXTURE_1D_ARRAY,
 * GL_TEXTURE_2D_ARRAY, GL_TEXTURE_RECTANGLE, GL_TEXTURE_CUBE_MAP,
 * GL_TEXTURE_CUBE_MAP_ARRAY, GL_TEXTURE_BUFFER, GL_TEXTURE_2D_MULTISAMPLE or
 * GL_TEXTURE_2D_MULTISAMPLE_ARRAY.
 *
 * @param [texture] Specifies the name of a texture.
 */
static inline void glBindTexture(GLenum target, GLuint texture) {
  glad_glBindTexture(target, texture);
}
/**
 * glBindTextureUnit — bind an existing texture object to the specified
 * texture unit
 *
 * @param [unit] Specifies the texture unit, to which the texture object
 * should be bound to.
 *
 * @param [texture] Specifies the name of a texture.
 */
static inline void glBindTextureUnit(GLuint unit, GLuint texture) {
  glad_glBindTextureUnit(unit, texture);
}
/**
 * glBindTextures — bind one or more named textures to a sequence of
 * consecutive texture units
 *
 * @param [first] Specifies the first texture unit to which a texture is to be
 * bound.
 *
 * @param [count] Specifies the number of textures to bind.
 *
 * @param [textures] Specifies the address of an array of names of existing
 * texture objects.
 */
static inline void glBindTextures(GLuint first, GLsizei count,
                                  const GLuint *textures) {
  glad_glBindTextures(first, count, textures);
}
/**
 * glBindTransformFeedback — bind a transform feedback object
 *
 * @param [target] Specifies the target to which to bind the transform
 * feedback object id. target must be GL_TRANSFORM_FEEDBACK.
 *
 * @param [id] Specifies the name of a transform feedback object reserved by
 * glGenTransformFeedbacks.
 */
static inline void glBindTransformFeedback(GLenum target, GLuint id) {
  glad_glBindTransformFeedback(target, id);
}
/**
 * glBindVertexArray — bind a vertex array object
 *
 * @param [array] Specifies the name of the vertex array to bind.
 */
static inline void glBindVertexArray(GLuint array) {
  glad_glBindVertexArray(array);
}
/**
 * glBindVertexBuffer, glVertexArrayVertexBuffer — bind a buffer to a vertex
 * buffer bind point
 *
 * @param [vaobj] Specifies the name of the vertex array object to be used by
 * glVertexArrayVertexBuffer function.
 *
 * @param [bindingindex] The index of the vertex buffer binding point to which
 * to bind the buffer.
 *
 * @param [buffer] The name of a buffer to bind to the vertex buffer binding
 * point.
 *
 * @param [offset] The offset of the first element of the buffer.
 *
 * @param [stride] The distance between elements within the buffer.
 */
static inline void glBindVertexBuffer(GLuint bindingindex, GLuint buffer,
                                      GLintptr offset, GLint stride) {
  glad_glBindVertexBuffer(bindingindex, buffer, offset, stride);
}
/**
 * glBindVertexBuffer, glVertexArrayVertexBuffer — bind a buffer to a vertex
 * buffer bind point
 *
 * @param [vaobj] Specifies the name of the vertex array object to be used by
 * glVertexArrayVertexBuffer function.
 *
 * @param [bindingindex] The index of the vertex buffer binding point to which
 * to bind the buffer.
 *
 * @param [buffer] The name of a buffer to bind to the vertex buffer binding
 * point.
 *
 * @param [offset] The offset of the first element of the buffer.
 *
 * @param [stride] The distance between elements within the buffer.
 */
static inline void glVertexArrayVertexBuffer(GLuint vaobj, GLuint bindingindex,
                                             GLuint buffer, GLintptr offset,
                                             GLsizei stride) {
  glad_glVertexArrayVertexBuffer(vaobj, bindingindex, buffer, offset, stride);
}
/**
 * glBindVertexBuffers, glVertexArrayVertexBuffers — attach multiple buffer
 * objects to a vertex array object
 *
 * @param [vaobj] Specifies the name of the vertex array object for
 * glVertexArrayVertexBuffers.
 *
 * @param [first] Specifies the first vertex buffer binding point to which a
 * buffer object is to be bound.
 *
 * @param [count] Specifies the number of buffers to bind.
 *
 * @param [buffers] Specifies the address of an array of names of existing
 * buffer objects.
 *
 * @param [offsets] Specifies the address of an array of offsets to associate
 * with the binding points.
 *
 * @param [strides] Specifies the address of an array of strides to associate
 * with the binding points.
 */
static inline void glBindVertexBuffers(GLuint first, GLsizei count,
                                       const GLuint *buffers,
                                       const GLintptr *offsets,
                                       const GLsizei *strides) {
  glad_glBindVertexBuffers(first, count, buffers, offsets, strides);
}
/**
 * glBindVertexBuffers, glVertexArrayVertexBuffers — attach multiple buffer
 * objects to a vertex array object
 *
 * @param [vaobj] Specifies the name of the vertex array object for
 * glVertexArrayVertexBuffers.
 *
 * @param [first] Specifies the first vertex buffer binding point to which a
 * buffer object is to be bound.
 *
 * @param [count] Specifies the number of buffers to bind.
 *
 * @param [buffers] Specifies the address of an array of names of existing
 * buffer objects.
 *
 * @param [offsets] Specifies the address of an array of offsets to associate
 * with the binding points.
 *
 * @param [strides] Specifies the address of an array of strides to associate
 * with the binding points.
 */
static inline void glVertexArrayVertexBuffers(GLuint vaobj, GLuint first,
                                              GLsizei count,
                                              const GLuint *buffers,
                                              const GLintptr *offsets,
                                              const GLsizei *strides) {
  glad_glVertexArrayVertexBuffers(vaobj, first, count, buffers, offsets,
                                  strides);
}
/**
 * glBlendColor — set the blend color
 *
 * @param [red, green, blue, alpha] specify the components of GL_BLEND_COLOR
 */
static inline void glBlendColor(GLfloat red, GLfloat green, GLfloat blue,
                                GLfloat alpha) {
  glad_glBlendColor(red, green, blue, alpha);
}
/**
 * glBlendEquation — specify the equation used for both the RGB blend equation
 * and the Alpha blend equation
 *
 * @param [buf] for glBlendEquationi, specifies the index of the draw buffer
 * for which to set the blend equation.
 *
 * @param [mode] specifies how source and destination colors are combined. It
 * must be GL_FUNC_ADD, GL_FUNC_SUBTRACT, GL_FUNC_REVERSE_SUBTRACT, GL_MIN,
 * GL_MAX.
 */
static inline void glBlendEquation(GLenum mode) { glad_glBlendEquation(mode); }
/**
 * glBlendEquation — specify the equation used for both the RGB blend equation
 * and the Alpha blend equation
 *
 * @param [buf] for glBlendEquationi, specifies the index of the draw buffer
 * for which to set the blend equation.
 *
 * @param [mode] specifies how source and destination colors are combined. It
 * must be GL_FUNC_ADD, GL_FUNC_SUBTRACT, GL_FUNC_REVERSE_SUBTRACT, GL_MIN,
 * GL_MAX.
 */
static inline void glBlendEquationi(GLuint buf, GLenum mode) {
  glad_glBlendEquationi(buf, mode);
}
/**
 * glBlendEquationSeparate — set the RGB blend equation and the alpha blend
 * equation separately
 *
 * @param [buf] for glBlendEquationSeparatei, specifies the index of the draw
 * buffer for which to set the blend equations.
 *
 * @param [modeRGB] specifies the RGB blend equation, how the red, green, and
 * blue components of the source and destination colors are combined. It must
 * be GL_FUNC_ADD, GL_FUNC_SUBTRACT, GL_FUNC_REVERSE_SUBTRACT, GL_MIN, GL_MAX.
 *
 * @param [modeAlpha] specifies the alpha blend equation, how the alpha
 * component of the source and destination colors are combined. It must be
 * GL_FUNC_ADD, GL_FUNC_SUBTRACT, GL_FUNC_REVERSE_SUBTRACT, GL_MIN, GL_MAX.
 */
static inline void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha) {
  glad_glBlendEquationSeparate(modeRGB, modeAlpha);
}
/**
 * glBlendEquationSeparate — set the RGB blend equation and the alpha blend
 * equation separately
 *
 * @param [buf] for glBlendEquationSeparatei, specifies the index of the draw
 * buffer for which to set the blend equations.
 *
 * @param [modeRGB] specifies the RGB blend equation, how the red, green, and
 * blue components of the source and destination colors are combined. It must
 * be GL_FUNC_ADD, GL_FUNC_SUBTRACT, GL_FUNC_REVERSE_SUBTRACT, GL_MIN, GL_MAX.
 *
 * @param [modeAlpha] specifies the alpha blend equation, how the alpha
 * component of the source and destination colors are combined. It must be
 * GL_FUNC_ADD, GL_FUNC_SUBTRACT, GL_FUNC_REVERSE_SUBTRACT, GL_MIN, GL_MAX.
 */
static inline void glBlendEquationSeparatei(GLuint buf, GLenum modeRGB,
                                            GLenum modeAlpha) {
  glad_glBlendEquationSeparatei(buf, modeRGB, modeAlpha);
}
/**
 * glBlendFunc — specify pixel arithmetic
 *
 * @param [buf] For glBlendFunci, specifies the index of the draw buffer for
 * which to set the blend function.
 *
 * @param [sfactor] Specifies how the red, green, blue, and alpha source
 * blending factors are computed. The initial value is GL_ONE.
 *
 * @param [dfactor] Specifies how the red, green, blue, and alpha destination
 * blending factors are computed. The following symbolic constants are
 * accepted: GL_ZERO, GL_ONE, GL_SRC_COLOR, GL_ONE_MINUS_SRC_COLOR,
 * GL_DST_COLOR, GL_ONE_MINUS_DST_COLOR, GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA,
 * GL_DST_ALPHA, GL_ONE_MINUS_DST_ALPHA. GL_CONSTANT_COLOR,
 * GL_ONE_MINUS_CONSTANT_COLOR, GL_CONSTANT_ALPHA, and
 * GL_ONE_MINUS_CONSTANT_ALPHA. The initial value is GL_ZERO.
 */
static inline void glBlendFunc(GLenum sfactor, GLenum dfactor) {
  glad_glBlendFunc(sfactor, dfactor);
}
/**
 * glBlendFunc — specify pixel arithmetic
 *
 * @param [buf] For glBlendFunci, specifies the index of the draw buffer for
 * which to set the blend function.
 *
 * @param [sfactor] Specifies how the red, green, blue, and alpha source
 * blending factors are computed. The initial value is GL_ONE.
 *
 * @param [dfactor] Specifies how the red, green, blue, and alpha destination
 * blending factors are computed. The following symbolic constants are
 * accepted: GL_ZERO, GL_ONE, GL_SRC_COLOR, GL_ONE_MINUS_SRC_COLOR,
 * GL_DST_COLOR, GL_ONE_MINUS_DST_COLOR, GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA,
 * GL_DST_ALPHA, GL_ONE_MINUS_DST_ALPHA. GL_CONSTANT_COLOR,
 * GL_ONE_MINUS_CONSTANT_COLOR, GL_CONSTANT_ALPHA, and
 * GL_ONE_MINUS_CONSTANT_ALPHA. The initial value is GL_ZERO.
 */
static inline void glBlendFunci(GLuint buf, GLenum sfactor, GLenum dfactor) {
  glad_glBlendFunci(buf, sfactor, dfactor);
}
/**
 * glBlendFuncSeparate — specify pixel arithmetic for RGB and alpha components
 * separately
 *
 * @param [buf] For glBlendFuncSeparatei, specifies the index of the draw
 * buffer for which to set the blend functions.
 *
 * @param [srcRGB] Specifies how the red, green, and blue blending factors are
 * computed. The initial value is GL_ONE.
 *
 * @param [dstRGB] Specifies how the red, green, and blue destination blending
 * factors are computed. The initial value is GL_ZERO.
 *
 * @param [srcAlpha] Specified how the alpha source blending factor is
 * computed. The initial value is GL_ONE.
 *
 * @param [dstAlpha] Specified how the alpha destination blending factor is
 * computed. The initial value is GL_ZERO.
 */
static inline void glBlendFuncSeparate(GLenum srcRGB, GLenum dstRGB,
                                       GLenum srcAlpha, GLenum dstAlpha) {
  glad_glBlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha);
}
/**
 * glBlendFuncSeparate — specify pixel arithmetic for RGB and alpha components
 * separately
 *
 * @param [buf] For glBlendFuncSeparatei, specifies the index of the draw
 * buffer for which to set the blend functions.
 *
 * @param [srcRGB] Specifies how the red, green, and blue blending factors are
 * computed. The initial value is GL_ONE.
 *
 * @param [dstRGB] Specifies how the red, green, and blue destination blending
 * factors are computed. The initial value is GL_ZERO.
 *
 * @param [srcAlpha] Specified how the alpha source blending factor is
 * computed. The initial value is GL_ONE.
 *
 * @param [dstAlpha] Specified how the alpha destination blending factor is
 * computed. The initial value is GL_ZERO.
 */
static inline void glBlendFuncSeparatei(GLuint buf, GLenum srcRGB,
                                        GLenum dstRGB, GLenum srcAlpha,
                                        GLenum dstAlpha) {
  glad_glBlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}
/**
 * glBlitFramebuffer, glBlitNamedFramebuffer — copy a block of pixels from one
 * framebuffer object to another
 *
 * @param [readFramebuffer] Specifies the name of the source framebuffer
 * object for glBlitNamedFramebuffer.
 *
 * @param [drawFramebuffer] Specifies the name of the destination framebuffer
 * object for glBlitNamedFramebuffer.
 *
 * @param [srcX0, srcY0, srcX1, srcY1] Specify the bounds of the source
 * rectangle within the read buffer of the read framebuffer.
 *
 * @param [dstX0, dstY0, dstX1, dstY1] Specify the bounds of the destination
 * rectangle within the write buffer of the write framebuffer.
 *
 * @param [mask] The bitwise OR of the flags indicating which buffers are to
 * be copied. The allowed flags are GL_COLOR_BUFFER_BIT, GL_DEPTH_BUFFER_BIT
 * and GL_STENCIL_BUFFER_BIT.
 *
 * @param [filter] Specifies the interpolation to be applied if the image is
 * stretched. Must be GL_NEAREST or GL_LINEAR.
 */
static inline void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1,
                                     GLint srcY1, GLint dstX0, GLint dstY0,
                                     GLint dstX1, GLint dstY1, GLbitfield mask,
                                     GLenum filter) {
  glad_glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1,
                         mask, filter);
}
/**
 * glBlitFramebuffer, glBlitNamedFramebuffer — copy a block of pixels from one
 * framebuffer object to another
 *
 * @param [readFramebuffer] Specifies the name of the source framebuffer
 * object for glBlitNamedFramebuffer.
 *
 * @param [drawFramebuffer] Specifies the name of the destination framebuffer
 * object for glBlitNamedFramebuffer.
 *
 * @param [srcX0, srcY0, srcX1, srcY1] Specify the bounds of the source
 * rectangle within the read buffer of the read framebuffer.
 *
 * @param [dstX0, dstY0, dstX1, dstY1] Specify the bounds of the destination
 * rectangle within the write buffer of the write framebuffer.
 *
 * @param [mask] The bitwise OR of the flags indicating which buffers are to
 * be copied. The allowed flags are GL_COLOR_BUFFER_BIT, GL_DEPTH_BUFFER_BIT
 * and GL_STENCIL_BUFFER_BIT.
 *
 * @param [filter] Specifies the interpolation to be applied if the image is
 * stretched. Must be GL_NEAREST or GL_LINEAR.
 */
static inline void glBlitNamedFramebuffer(GLuint readFramebuffer,
                                          GLuint drawFramebuffer, GLint srcX0,
                                          GLint srcY0, GLint srcX1, GLint srcY1,
                                          GLint dstX0, GLint dstY0, GLint dstX1,
                                          GLint dstY1, GLbitfield mask,
                                          GLenum filter) {
  glad_glBlitNamedFramebuffer(readFramebuffer, drawFramebuffer, srcX0, srcY0,
                              srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask,
                              filter);
}
/**
 * glBufferData, glNamedBufferData — creates and initializes a buffer object's
 data store
 *
 * @param [target] Specifies the target to which the buffer object is bound
 for glBufferData, which must be one of the buffer binding targets in the
 following table:
 *
 * GL_ARRAY_BUFFER - Vertex attributes,
 * GL_ATOMIC_COUNTER_BUFFER - Atomic counter storage,
 * GL_COPY_READ_BUFFER - Buffer copy source,
 * GL_COPY_WRITE_BUFFER - Buffer copy destination,
 * GL_DISPATCH_INDIRECT_BUFFER - Indirect compute dispatch commands,
 * GL_DRAW_INDIRECT_BUFFER - Indirect command arguments,
 * GL_ELEMENT_ARRAY_BUFFER - Vertex array indices,
 * GL_PIXEL_PACK_BUFFER - Pixel read target,
 * GL_PIXEL_UNPACK_BUFFER - Texture data source,
 * GL_QUERY_BUFFER - Query result buffer,
 * GL_SHADER_STORAGE_BUFFER - Read-write storage for shaders,
 * GL_TEXTURE_BUFFER - Texture data buffer,
 * GL_TRANSFORM_FEEDBACK_BUFFER - Transform feedback buffer,
 * GL_UNIFORM_BUFFER - Uniform block storage,
 *
 * @param [buffer] Specifies the name of the buffer object for
 glNamedBufferData function.
 *
 * @param [size] Specifies the size in bytes of the buffer object's new data
 store.
 *
 * @param [data] Specifies a pointer to data that will be copied into the data
 store for initialization, or NULL if no data is to be copied.
 *
 * @param [usage] Specifies the expected usage pattern of the data store. The
 symbolic constant must be GL_STREAM_DRAW, GL_STREAM_READ, GL_STREAM_COPY,
 GL_STATIC_DRAW, GL_STATIC_READ, GL_STATIC_COPY, GL_DYNAMIC_DRAW,
 GL_DYNAMIC_READ, or GL_DYNAMIC_COPY.
 */
static inline void glBufferData(GLenum target, GLsizeiptr size,
                                const GLvoid *data, GLenum usage) {
  glad_glBufferData(target, size, data, usage);
}
/**
 * glBufferData, glNamedBufferData — creates and initializes a buffer object's
 data store
 *
 * @param [target] Specifies the target to which the buffer object is bound
 for glBufferData, which must be one of the buffer binding targets in the
 following table:
 *
 * GL_ARRAY_BUFFER - Vertex attributes,
 * GL_ATOMIC_COUNTER_BUFFER - Atomic counter storage,
 * GL_COPY_READ_BUFFER - Buffer copy source,
 * GL_COPY_WRITE_BUFFER - Buffer copy destination,
 * GL_DISPATCH_INDIRECT_BUFFER - Indirect compute dispatch commands,
 * GL_DRAW_INDIRECT_BUFFER - Indirect command arguments,
 * GL_ELEMENT_ARRAY_BUFFER - Vertex array indices,
 * GL_PIXEL_PACK_BUFFER - Pixel read target,
 * GL_PIXEL_UNPACK_BUFFER - Texture data source,
 * GL_QUERY_BUFFER - Query result buffer,
 * GL_SHADER_STORAGE_BUFFER - Read-write storage for shaders,
 * GL_TEXTURE_BUFFER - Texture data buffer,
 * GL_TRANSFORM_FEEDBACK_BUFFER - Transform feedback buffer,
 * GL_UNIFORM_BUFFER - Uniform block storage,
 *
 * @param [buffer] Specifies the name of the buffer object for
 glNamedBufferData function.
 *
 * @param [size] Specifies the size in bytes of the buffer object's new data
 store.
 *
 * @param [data] Specifies a pointer to data that will be copied into the data
 store for initialization, or NULL if no data is to be copied.
 *
 * @param [usage] Specifies the expected usage pattern of the data store. The
 symbolic constant must be GL_STREAM_DRAW, GL_STREAM_READ, GL_STREAM_COPY,
 GL_STATIC_DRAW, GL_STATIC_READ, GL_STATIC_COPY, GL_DYNAMIC_DRAW,
 GL_DYNAMIC_READ, or GL_DYNAMIC_COPY.
 */
static inline void glNamedBufferData(GLuint buffer, GLsizeiptr size,
                                     const void *data, GLenum usage) {
  glad_glNamedBufferData(buffer, size, data, usage);
}
/**
 * glBufferStorage, glNamedBufferStorage — creates and initializes a buffer
 object's immutable data store
 *
 * @param [target] Specifies the target to which the buffer object is bound
 for glBufferStorage, which must be one of the buffer binding targets in the
 following table:
 *
 * GL_ARRAY_BUFFER - Vertex attributes,
 * GL_ATOMIC_COUNTER_BUFFER - Atomic counter storage,
 * GL_COPY_READ_BUFFER - Buffer copy source,
 * GL_COPY_WRITE_BUFFER - Buffer copy destination,
 * GL_DISPATCH_INDIRECT_BUFFER - Indirect compute dispatch commands,
 * GL_DRAW_INDIRECT_BUFFER - Indirect command arguments,
 * GL_ELEMENT_ARRAY_BUFFER - Vertex array indices,
 * GL_PIXEL_PACK_BUFFER - Pixel read target,
 * GL_PIXEL_UNPACK_BUFFER - Texture data source,
 * GL_QUERY_BUFFER - Query result buffer,
 * GL_SHADER_STORAGE_BUFFER - Read-write storage for shaders,
 * GL_TEXTURE_BUFFER - Texture data buffer,
 * GL_TRANSFORM_FEEDBACK_BUFFER - Transform feedback buffer,
 * GL_UNIFORM_BUFFER - Uniform block storage,
 *
 * @param [buffer] Specifies the name of the buffer object for
 glNamedBufferStorage function.
 *
 * @param [size] Specifies the size in bytes of the buffer object's new data
 store.
 *
 * @param [data] Specifies a pointer to data that will be copied into the data
 store for initialization, or NULL if no data is to be copied.
 *
 * @param [flags] Specifies the intended usage of the buffer's data store.
 Must be a bitwise combination of the following flags. GL_DYNAMIC_STORAGE_BIT,
 GL_MAP_READ_BIT GL_MAP_WRITE_BIT, GL_MAP_PERSISTENT_BIT, GL_MAP_COHERENT_BIT,
 and GL_CLIENT_STORAGE_BIT.
 */
static inline void glBufferStorage(GLenum target, GLsizeiptr size,
                                   const GLvoid *data, GLbitfield flags) {
  glad_glBufferStorage(target, size, data, flags);
}
/**
 * glBufferStorage, glNamedBufferStorage — creates and initializes a buffer
 object's immutable data store
 *
 * @param [target] Specifies the target to which the buffer object is bound
 for glBufferStorage, which must be one of the buffer binding targets in the
 following table:
 *
 * GL_ARRAY_BUFFER - Vertex attributes,
 * GL_ATOMIC_COUNTER_BUFFER - Atomic counter storage,
 * GL_COPY_READ_BUFFER - Buffer copy source,
 * GL_COPY_WRITE_BUFFER - Buffer copy destination,
 * GL_DISPATCH_INDIRECT_BUFFER - Indirect compute dispatch commands,
 * GL_DRAW_INDIRECT_BUFFER - Indirect command arguments,
 * GL_ELEMENT_ARRAY_BUFFER - Vertex array indices,
 * GL_PIXEL_PACK_BUFFER - Pixel read target,
 * GL_PIXEL_UNPACK_BUFFER - Texture data source,
 * GL_QUERY_BUFFER - Query result buffer,
 * GL_SHADER_STORAGE_BUFFER - Read-write storage for shaders,
 * GL_TEXTURE_BUFFER - Texture data buffer,
 * GL_TRANSFORM_FEEDBACK_BUFFER - Transform feedback buffer,
 * GL_UNIFORM_BUFFER - Uniform block storage,
 *
 * @param [buffer] Specifies the name of the buffer object for
 glNamedBufferStorage function.
 *
 * @param [size] Specifies the size in bytes of the buffer object's new data
 store.
 *
 * @param [data] Specifies a pointer to data that will be copied into the data
 store for initialization, or NULL if no data is to be copied.
 *
 * @param [flags] Specifies the intended usage of the buffer's data store.
 Must be a bitwise combination of the following flags. GL_DYNAMIC_STORAGE_BIT,
 GL_MAP_READ_BIT GL_MAP_WRITE_BIT, GL_MAP_PERSISTENT_BIT, GL_MAP_COHERENT_BIT,
 and GL_CLIENT_STORAGE_BIT.
 */
static inline void glNamedBufferStorage(GLuint buffer, GLsizeiptr size,
                                        const void *data, GLbitfield flags) {
  glad_glNamedBufferStorage(buffer, size, data, flags);
}
/**
 * glBufferSubData, glNamedBufferSubData — updates a subset of a buffer
 * object's data store
 *
 * @param [target] Specifies the target to which the buffer object is bound
 * for glBufferSubData, which must be one of the buffer binding targets in the
 * following table:
 *
 * GL_ARRAY_BUFFER - Vertex attributes,
 * GL_ATOMIC_COUNTER_BUFFER - Atomic counter storage,
 * GL_COPY_READ_BUFFER - Buffer copy source,
 * GL_COPY_WRITE_BUFFER - Buffer copy destination,
 * GL_DISPATCH_INDIRECT_BUFFER - Indirect compute dispatch commands,
 * GL_DRAW_INDIRECT_BUFFER - Indirect command arguments,
 * GL_ELEMENT_ARRAY_BUFFER - Vertex array indices,
 * GL_PIXEL_PACK_BUFFER - Pixel read target,
 * GL_PIXEL_UNPACK_BUFFER - Texture data source,
 * GL_QUERY_BUFFER - Query result buffer,
 * GL_SHADER_STORAGE_BUFFER - Read-write storage for shaders,
 * GL_TEXTURE_BUFFER - Texture data buffer,
 * GL_TRANSFORM_FEEDBACK_BUFFER - Transform feedback buffer,
 * GL_UNIFORM_BUFFER - Uniform block storage,
 *
 * @param [buffer] Specifies the name of the buffer object for
 * glNamedBufferSubData.
 *
 * @param [offset] Specifies the offset into the buffer object's data store
 * where data replacement will begin, measured in bytes.
 *
 * @param [size] Specifies the size in bytes of the data store region being
 * replaced.
 *
 * @param [data] Specifies a pointer to the new data that will be copied into
 * the data store.
 */
static inline void glBufferSubData(GLenum target, GLintptr offset,
                                   GLsizeiptr size, const GLvoid *data) {
  glad_glBufferSubData(target, offset, size, data);
}
/**
 * glBufferSubData, glNamedBufferSubData — updates a subset of a buffer
 * object's data store
 *
 * @param [target] Specifies the target to which the buffer object is bound
 * for glBufferSubData, which must be one of the buffer binding targets in the
 * following table:
 *
 * GL_ARRAY_BUFFER - Vertex attributes,
 * GL_ATOMIC_COUNTER_BUFFER - Atomic counter storage,
 * GL_COPY_READ_BUFFER - Buffer copy source,
 * GL_COPY_WRITE_BUFFER - Buffer copy destination,
 * GL_DISPATCH_INDIRECT_BUFFER - Indirect compute dispatch commands,
 * GL_DRAW_INDIRECT_BUFFER - Indirect command arguments,
 * GL_ELEMENT_ARRAY_BUFFER - Vertex array indices,
 * GL_PIXEL_PACK_BUFFER - Pixel read target,
 * GL_PIXEL_UNPACK_BUFFER - Texture data source,
 * GL_QUERY_BUFFER - Query result buffer,
 * GL_SHADER_STORAGE_BUFFER - Read-write storage for shaders,
 * GL_TEXTURE_BUFFER - Texture data buffer,
 * GL_TRANSFORM_FEEDBACK_BUFFER - Transform feedback buffer,
 * GL_UNIFORM_BUFFER - Uniform block storage,
 *
 * @param [buffer] Specifies the name of the buffer object for
 * glNamedBufferSubData.
 *
 * @param [offset] Specifies the offset into the buffer object's data store
 * where data replacement will begin, measured in bytes.
 *
 * @param [size] Specifies the size in bytes of the data store region being
 * replaced.
 *
 * @param [data] Specifies a pointer to the new data that will be copied into
 * the data store.
 */
static inline void glNamedBufferSubData(GLuint buffer, GLintptr offset,
                                        GLsizei size, const void *data) {
  glad_glNamedBufferSubData(buffer, offset, size, data);
}
/**
 * glCheckFramebufferStatus, glCheckNamedFramebufferStatus — check the
 * completeness status of a framebuffer
 *
 * @param [target] Specify the target to which the framebuffer is bound for
 * glCheckFramebufferStatus, and the target against which framebuffer
 * completeness of framebuffer is checked for glCheckNamedFramebufferStatus.
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glCheckNamedFramebufferStatus
 */
static inline GLenum glCheckFramebufferStatus(GLenum target) {
  return glad_glCheckFramebufferStatus(target);
}
/**
 * glCheckFramebufferStatus, glCheckNamedFramebufferStatus — check the
 * completeness status of a framebuffer
 *
 * @param [target] Specify the target to which the framebuffer is bound for
 * glCheckFramebufferStatus, and the target against which framebuffer
 * completeness of framebuffer is checked for glCheckNamedFramebufferStatus.
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glCheckNamedFramebufferStatus
 */
static inline GLenum glCheckNamedFramebufferStatus(GLuint framebuffer,
                                                   GLenum target) {
  return glad_glCheckNamedFramebufferStatus(framebuffer, target);
}
/**
 * glClampColor — specify whether data read via glReadPixels should be clamped
 *
 * @param [target] Target for color clamping. target must be
 * GL_CLAMP_READ_COLOR.
 *
 * @param [clamp] Specifies whether to apply color clamping. clamp must be
 * GL_TRUE or GL_FALSE.
 */
static inline void glClampColor(GLenum target, GLenum clamp) {
  glad_glClampColor(target, clamp);
}
/**
 * glClear — clear buffers to preset values
 *
 * @param [mask] Bitwise OR of masks that indicate the buffers to be cleared.
 * The three masks are GL_COLOR_BUFFER_BIT, GL_DEPTH_BUFFER_BIT, and
 * GL_STENCIL_BUFFER_BIT.
 */
static inline void glClear(GLbitfield mask) { glad_glClear(mask); }
/**
 * glClearBuffer — clear individual buffers of a framebuffer
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glClearNamedFramebuffer*.
 *
 * @param [buffer] Specify the buffer to clear.
 *
 * @param [drawbuffer] Specify a particular draw buffer to clear.
 *
 * @param [value] A pointer to the value or values to clear the buffer to.
 *
 * @param [depth] The value to clear the depth buffer to.
 *
 * @param [stencil] The value to clear the stencil buffer to.
 */
static inline void glClearBufferiv(GLenum buffer, GLint drawbuffer,
                                   const GLint *value) {
  glad_glClearBufferiv(buffer, drawbuffer, value);
}
/**
 * glClearBuffer — clear individual buffers of a framebuffer
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glClearNamedFramebuffer*.
 *
 * @param [buffer] Specify the buffer to clear.
 *
 * @param [drawbuffer] Specify a particular draw buffer to clear.
 *
 * @param [value] A pointer to the value or values to clear the buffer to.
 *
 * @param [depth] The value to clear the depth buffer to.
 *
 * @param [stencil] The value to clear the stencil buffer to.
 */
static inline void glClearBufferuiv(GLenum buffer, GLint drawbuffer,
                                    const GLuint *value) {
  glad_glClearBufferuiv(buffer, drawbuffer, value);
}
/**
 * glClearBuffer — clear individual buffers of a framebuffer
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glClearNamedFramebuffer*.
 *
 * @param [buffer] Specify the buffer to clear.
 *
 * @param [drawbuffer] Specify a particular draw buffer to clear.
 *
 * @param [value] A pointer to the value or values to clear the buffer to.
 *
 * @param [depth] The value to clear the depth buffer to.
 *
 * @param [stencil] The value to clear the stencil buffer to.
 */
static inline void glClearBufferfv(GLenum buffer, GLint drawbuffer,
                                   const GLfloat *value) {
  glad_glClearBufferfv(buffer, drawbuffer, value);
}
/**
 * glClearBuffer — clear individual buffers of a framebuffer
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glClearNamedFramebuffer*.
 *
 * @param [buffer] Specify the buffer to clear.
 *
 * @param [drawbuffer] Specify a particular draw buffer to clear.
 *
 * @param [value] A pointer to the value or values to clear the buffer to.
 *
 * @param [depth] The value to clear the depth buffer to.
 *
 * @param [stencil] The value to clear the stencil buffer to.
 */
static inline void glClearBufferfi(GLenum buffer, GLint drawbuffer,
                                   GLfloat depth, GLint stencil) {
  glad_glClearBufferfi(buffer, drawbuffer, depth, stencil);
}
/**
 * glClearBuffer — clear individual buffers of a framebuffer
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glClearNamedFramebuffer*.
 *
 * @param [buffer] Specify the buffer to clear.
 *
 * @param [drawbuffer] Specify a particular draw buffer to clear.
 *
 * @param [value] A pointer to the value or values to clear the buffer to.
 *
 * @param [depth] The value to clear the depth buffer to.
 *
 * @param [stencil] The value to clear the stencil buffer to.
 */
static inline void glClearNamedFramebufferiv(GLuint framebuffer, GLenum buffer,
                                             GLint drawbuffer,
                                             const GLint *value) {
  glad_glClearNamedFramebufferiv(framebuffer, buffer, drawbuffer, value);
}
/**
 * glClearBuffer — clear individual buffers of a framebuffer
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glClearNamedFramebuffer*.
 *
 * @param [buffer] Specify the buffer to clear.
 *
 * @param [drawbuffer] Specify a particular draw buffer to clear.
 *
 * @param [value] A pointer to the value or values to clear the buffer to.
 *
 * @param [depth] The value to clear the depth buffer to.
 *
 * @param [stencil] The value to clear the stencil buffer to.
 */
static inline void glClearNamedFramebufferuiv(GLuint framebuffer, GLenum buffer,
                                              GLint drawbuffer,
                                              const GLuint *value) {
  glad_glClearNamedFramebufferuiv(framebuffer, buffer, drawbuffer, value);
}
/**
 * glClearBuffer — clear individual buffers of a framebuffer
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glClearNamedFramebuffer*.
 *
 * @param [buffer] Specify the buffer to clear.
 *
 * @param [drawbuffer] Specify a particular draw buffer to clear.
 *
 * @param [value] A pointer to the value or values to clear the buffer to.
 *
 * @param [depth] The value to clear the depth buffer to.
 *
 * @param [stencil] The value to clear the stencil buffer to.
 */
static inline void glClearNamedFramebufferfv(GLuint framebuffer, GLenum buffer,
                                             GLint drawbuffer,
                                             const GLfloat *value) {
  glad_glClearNamedFramebufferfv(framebuffer, buffer, drawbuffer, value);
}
/**
 * glClearBuffer — clear individual buffers of a framebuffer
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glClearNamedFramebuffer*.
 *
 * @param [buffer] Specify the buffer to clear.
 *
 * @param [drawbuffer] Specify a particular draw buffer to clear.
 *
 * @param [value] A pointer to the value or values to clear the buffer to.
 *
 * @param [depth] The value to clear the depth buffer to.
 *
 * @param [stencil] The value to clear the stencil buffer to.
 */
static inline void glClearNamedFramebufferfi(GLuint framebuffer, GLenum buffer,
                                             GLint drawbuffer,
                                             const GLfloat depth,
                                             GLint stencil) {
  glad_glClearNamedFramebufferfi(framebuffer, buffer, drawbuffer, depth,
                                 stencil);
}
/**
 * glClearBufferData, glClearNamedBufferData — fill a buffer object's data
 * store with a fixed value
 *
 * @param [target] Specifies the target to which the buffer object is bound
 * for glClearBufferData, which must must be one of the buffer binding targets
 * in the following table:
 *
 * GL_ARRAY_BUFFER - Vertex attributes,
 * GL_ATOMIC_COUNTER_BUFFER - Atomic counter storage,
 * GL_COPY_READ_BUFFER - Buffer copy source,
 * GL_COPY_WRITE_BUFFER - Buffer copy destination,
 * GL_DISPATCH_INDIRECT_BUFFER - Indirect compute dispatch commands,
 * GL_DRAW_INDIRECT_BUFFER - Indirect command arguments,
 * GL_ELEMENT_ARRAY_BUFFER - Vertex array indices,
 * GL_PIXEL_PACK_BUFFER - Pixel read target,
 * GL_PIXEL_UNPACK_BUFFER - Texture data source,
 * GL_QUERY_BUFFER - Query result buffer,
 * GL_SHADER_STORAGE_BUFFER - Read-write storage for shaders,
 * GL_TEXTURE_BUFFER - Texture data buffer,
 * GL_TRANSFORM_FEEDBACK_BUFFER - Transform feedback buffer,
 * GL_UNIFORM_BUFFER - Uniform block storage,
 *
 * @param [buffer] Specifies the name of the buffer object for
 * glClearNamedBufferData.
 *
 * @param [internalformat] The internal format with which the data will be
 * stored in the buffer object.
 *
 * @param [format] The format of the data in memory addressed by data.
 *
 * @param [type] The type of the data in memory addressed by data.
 *
 * @param [data] The address of a memory location storing the data to be
 * replicated into the buffer's data store.
 */
static inline void glClearBufferData(GLenum target, GLenum internalformat,
                                     GLenum format, GLenum type,
                                     const void *data) {
  glad_glClearBufferData(target, internalformat, format, type, data);
}
/**
 * glClearBufferData, glClearNamedBufferData — fill a buffer object's data
 * store with a fixed value
 *
 * @param [target] Specifies the target to which the buffer object is bound
 * for glClearBufferData, which must must be one of the buffer binding targets
 * in the following table:
 *
 * GL_ARRAY_BUFFER - Vertex attributes,
 * GL_ATOMIC_COUNTER_BUFFER - Atomic counter storage,
 * GL_COPY_READ_BUFFER - Buffer copy source,
 * GL_COPY_WRITE_BUFFER - Buffer copy destination,
 * GL_DISPATCH_INDIRECT_BUFFER - Indirect compute dispatch commands,
 * GL_DRAW_INDIRECT_BUFFER - Indirect command arguments,
 * GL_ELEMENT_ARRAY_BUFFER - Vertex array indices,
 * GL_PIXEL_PACK_BUFFER - Pixel read target,
 * GL_PIXEL_UNPACK_BUFFER - Texture data source,
 * GL_QUERY_BUFFER - Query result buffer,
 * GL_SHADER_STORAGE_BUFFER - Read-write storage for shaders,
 * GL_TEXTURE_BUFFER - Texture data buffer,
 * GL_TRANSFORM_FEEDBACK_BUFFER - Transform feedback buffer,
 * GL_UNIFORM_BUFFER - Uniform block storage,
 *
 * @param [buffer] Specifies the name of the buffer object for
 * glClearNamedBufferData.
 *
 * @param [internalformat] The internal format with which the data will be
 * stored in the buffer object.
 *
 * @param [format] The format of the data in memory addressed by data.
 *
 * @param [type] The type of the data in memory addressed by data.
 *
 * @param [data] The address of a memory location storing the data to be
 * replicated into the buffer's data store.
 */
static inline void glClearNamedBufferData(GLuint buffer, GLenum internalformat,
                                          GLenum format, GLenum type,
                                          const void *data) {
  glad_glClearNamedBufferData(buffer, internalformat, format, type, data);
}
/**
 * glClearBufferSubData, glClearNamedBufferSubData — fill all or part of
 * buffer object's data store with a fixed value
 *
 * @param [target] Specifies the target to which the buffer object is bound
 * for glClearBufferSubData, which must be one of the buffer binding targets
 * in the following table:
 *
 * GL_ARRAY_BUFFER - Vertex attributes,
 * GL_ATOMIC_COUNTER_BUFFER - Atomic counter storage,
 * GL_COPY_READ_BUFFER - Buffer copy source,
 * GL_COPY_WRITE_BUFFER - Buffer copy destination,
 * GL_DISPATCH_INDIRECT_BUFFER - Indirect compute dispatch commands,
 * GL_DRAW_INDIRECT_BUFFER - Indirect command arguments,
 * GL_ELEMENT_ARRAY_BUFFER - Vertex array indices,
 * GL_PIXEL_PACK_BUFFER - Pixel read target,
 * GL_PIXEL_UNPACK_BUFFER - Texture data source,
 * GL_QUERY_BUFFER - Query result buffer,
 * GL_SHADER_STORAGE_BUFFER - Read-write storage for shaders,
 * GL_TEXTURE_BUFFER - Texture data buffer,
 * GL_TRANSFORM_FEEDBACK_BUFFER - Transform feedback buffer,
 * GL_UNIFORM_BUFFER - Uniform block storage,
 *
 * @param [buffer] Specifies the name of the buffer object for
 * glClearNamedBufferSubData.
 *
 * @param [internalformat] The internal format with which the data will be
 * stored in the buffer object.
 *
 * @param [offset] The offset in basic machine units into the buffer object's
 * data store at which to start filling.
 *
 * @param [size] The size in basic machine units of the range of the data
 * store to fill.
 *
 * @param [format] The format of the data in memory addressed by data.
 *
 * @param [type] The type of the data in memory addressed by data.
 *
 * @param [data] The address of a memory location storing the data to be
 * replicated into the buffer's data store.
 */
static inline void glClearBufferSubData(GLenum target, GLenum internalformat,
                                        GLintptr offset, GLsizeiptr size,
                                        GLenum format, GLenum type,
                                        const void *data) {
  glad_glClearBufferSubData(target, internalformat, offset, size, format, type,
                            data);
}
/**
 * glClearBufferSubData, glClearNamedBufferSubData — fill all or part of
 * buffer object's data store with a fixed value
 *
 * @param [target] Specifies the target to which the buffer object is bound
 * for glClearBufferSubData, which must be one of the buffer binding targets
 * in the following table:
 *
 * GL_ARRAY_BUFFER - Vertex attributes,
 * GL_ATOMIC_COUNTER_BUFFER - Atomic counter storage,
 * GL_COPY_READ_BUFFER - Buffer copy source,
 * GL_COPY_WRITE_BUFFER - Buffer copy destination,
 * GL_DISPATCH_INDIRECT_BUFFER - Indirect compute dispatch commands,
 * GL_DRAW_INDIRECT_BUFFER - Indirect command arguments,
 * GL_ELEMENT_ARRAY_BUFFER - Vertex array indices,
 * GL_PIXEL_PACK_BUFFER - Pixel read target,
 * GL_PIXEL_UNPACK_BUFFER - Texture data source,
 * GL_QUERY_BUFFER - Query result buffer,
 * GL_SHADER_STORAGE_BUFFER - Read-write storage for shaders,
 * GL_TEXTURE_BUFFER - Texture data buffer,
 * GL_TRANSFORM_FEEDBACK_BUFFER - Transform feedback buffer,
 * GL_UNIFORM_BUFFER - Uniform block storage,
 *
 * @param [buffer] Specifies the name of the buffer object for
 * glClearNamedBufferSubData.
 *
 * @param [internalformat] The internal format with which the data will be
 * stored in the buffer object.
 *
 * @param [offset] The offset in basic machine units into the buffer object's
 * data store at which to start filling.
 *
 * @param [size] The size in basic machine units of the range of the data
 * store to fill.
 *
 * @param [format] The format of the data in memory addressed by data.
 *
 * @param [type] The type of the data in memory addressed by data.
 *
 * @param [data] The address of a memory location storing the data to be
 * replicated into the buffer's data store.
 */
static inline void glClearNamedBufferSubData(GLuint buffer,
                                             GLenum internalformat,
                                             GLintptr offset, GLsizei size,
                                             GLenum format, GLenum type,
                                             const void *data) {
  glad_glClearNamedBufferSubData(buffer, internalformat, offset, size, format,
                                 type, data);
}
/**
 * glClearColor — specify clear values for the color buffers
 *
 * @param [red, green, blue, alpha] Specify the red, green, blue, and alpha
 * values used when the color buffers are cleared. The initial values are all
 * 0.
 */
static inline void glClearColor(GLfloat red, GLfloat green, GLfloat blue,
                                GLfloat alpha) {
  glad_glClearColor(red, green, blue, alpha);
}
/**
 * glClearDepth — specify the clear value for the depth buffer
 *
 * @param [depth] Specifies the depth value used when the depth buffer is
 * cleared. The initial value is 1.
 */
static inline void glClearDepth(GLdouble depth) { glad_glClearDepth(depth); }
/**
 * glClearDepth — specify the clear value for the depth buffer
 *
 * @param [depth] Specifies the depth value used when the depth buffer is
 * cleared. The initial value is 1.
 */
static inline void glClearDepthf(GLfloat depth) { glad_glClearDepthf(depth); }
/**
 * glClearStencil — specify the clear value for the stencil buffer
 *
 * @param [s] Specifies the index used when the stencil buffer is cleared. The
 * initial value is 0.
 */
static inline void glClearStencil(GLint s) { glad_glClearStencil(s); }
/**
 * glClearTexImage — fills all a texture image with a constant value
 *
 * @param [texture] The name of an existing texture object containing the
 * image to be cleared.
 *
 * @param [level] The level of texture containing the region to be cleared.
 *
 * @param [format] The format of the data whose address in memory is given by
 * data.
 *
 * @param [type] The type of the data whose address in memory is given by
 * data.
 *
 * @param [data] The address in memory of the data to be used to clear the
 * specified region.
 */
static inline void glClearTexImage(GLuint texture, GLint level, GLenum format,
                                   GLenum type, const void *data) {
  glad_glClearTexImage(texture, level, format, type, data);
}
/**
 * glClearTexSubImage — fills all or part of a texture image with a constant
 * value
 *
 * @param [texture] The name of an existing texture object containing the
 * image to be cleared.
 *
 * @param [level] The level of texture containing the region to be cleared.
 *
 * @param [xoffset] The coordinate of the left edge of the region to be
 * cleared.
 *
 * @param [yoffset] The coordinate of the lower edge of the region to be
 * cleared.
 *
 * @param [zoffset] The coordinate of the front of the region to be cleared.
 *
 * @param [width] The width of the region to be cleared.
 *
 * @param [height] The height of the region to be cleared.
 *
 * @param [depth] The depth of the region to be cleared.
 *
 * @param [format] The format of the data whose address in memory is given by
 * data.
 *
 * @param [type] The type of the data whose address in memory is given by
 * data.
 *
 * @param [data] The address in memory of the data to be used to clear the
 * specified region.
 */
static inline void
glClearTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset,
                   GLint zoffset, GLsizei width, GLsizei height, GLsizei depth,
                   GLenum format, GLenum type, const void *data) {
  glad_glClearTexSubImage(texture, level, xoffset, yoffset, zoffset, width,
                          height, depth, format, type, data);
}
/**
 * glClientWaitSync — block and wait for a sync object to become signaled
 *
 * @param [sync] The sync object whose status to wait on.
 *
 * @param [flags] A bitfield controlling the command flushing behavior. flags
 * may be GL_SYNC_FLUSH_COMMANDS_BIT.
 *
 * @param [timeout] The timeout, specified in nanoseconds, for which the
 * implementation should wait for sync to become signaled.
 */
static inline GLenum glClientWaitSync(GLsync sync, GLbitfield flags,
                                      GLuint64 timeout) {
  return glad_glClientWaitSync(sync, flags, timeout);
}
/**
 * glClipControl — control clip coordinate to window coordinate behavior
 *
 * @param [origin] Specifies the clip control origin. Must be one of
 * GL_LOWER_LEFT or GL_UPPER_LEFT.
 *
 * @param [depth] Specifies the clip control depth mode. Must be one of
 * GL_NEGATIVE_ONE_TO_ONE or GL_ZERO_TO_ONE.
 */
static inline void glClipControl(GLenum origin, GLenum depth) {
  glad_glClipControl(origin, depth);
}
/**
 * glColorMask, glColorMaski — enable and disable writing of frame buffer
 * color components
 *
 * @param [buf] For glColorMaski, specifies the index of the draw buffer whose
 * color mask to set.
 *
 * @param [red, green, blue, alpha] Specify whether red, green, blue, and
 * alpha are to be written into the frame buffer. The initial values are all
 * GL_TRUE, indicating that the color components are written.
 */
static inline void glColorMask(GLboolean red, GLboolean green, GLboolean blue,
                               GLboolean alpha) {
  glad_glColorMask(red, green, blue, alpha);
}
/**
 * glColorMask, glColorMaski — enable and disable writing of frame buffer
 * color components
 *
 * @param [buf] For glColorMaski, specifies the index of the draw buffer whose
 * color mask to set.
 *
 * @param [red, green, blue, alpha] Specify whether red, green, blue, and
 * alpha are to be written into the frame buffer. The initial values are all
 * GL_TRUE, indicating that the color components are written.
 */
static inline void glColorMaski(GLuint buf, GLboolean red, GLboolean green,
                                GLboolean blue, GLboolean alpha) {
  glad_glColorMaski(buf, red, green, blue, alpha);
}
/**
 * glCompileShader — Compiles a shader object
 *
 * @param [shader] Specifies the shader object to be compiled.
 */
static inline void glCompileShader(GLuint shader) {
  glad_glCompileShader(shader);
}
/**
 * glCompressedTexImage1D — specify a one-dimensional texture image in a
 * compressed format
 *
 * @param [target] Specifies the target texture. Must be GL_TEXTURE_1D or
 * GL_PROXY_TEXTURE_1D.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 * image level. Level n is the nth mipmap reduction image.
 *
 * @param [internalformat] Specifies the format of the compressed image data
 * stored at address data.
 *
 * @param [width] Specifies the width of the texture image. All
 * implementations support texture images that are at least 64 texels wide.
 * The height of the 1D texture image is 1.
 *
 * @param [border] This value must be 0.
 *
 * @param [imageSize] Specifies the number of unsigned bytes of image data
 * starting at the address specified by data.
 *
 * @param [data] Specifies a pointer to the compressed image data in memory.
 */
static inline void glCompressedTexImage1D(GLenum target, GLint level,
                                          GLenum internalformat, GLsizei width,
                                          GLint border, GLsizei imageSize,
                                          const GLvoid *data) {
  glad_glCompressedTexImage1D(target, level, internalformat, width, border,
                              imageSize, data);
}
/**
 * glCompressedTexImage2D — specify a two-dimensional texture image in a
 * compressed format
 *
 * @param [target] Specifies the target texture. Must be GL_TEXTURE_2D,
 * GL_PROXY_TEXTURE_2D, GL_TEXTURE_1D_ARRAY, GL_PROXY_TEXTURE_1D_ARRAY,
 * GL_TEXTURE_CUBE_MAP_POSITIVE_X, GL_TEXTURE_CUBE_MAP_NEGATIVE_X,
 * GL_TEXTURE_CUBE_MAP_POSITIVE_Y, GL_TEXTURE_CUBE_MAP_NEGATIVE_Y,
 * GL_TEXTURE_CUBE_MAP_POSITIVE_Z, GL_TEXTURE_CUBE_MAP_NEGATIVE_Z, or
 * GL_PROXY_TEXTURE_CUBE_MAP.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 * image level. Level n is the nth mipmap reduction image.
 *
 * @param [internalformat] Specifies the format of the compressed image data
 * stored at address data.
 *
 * @param [width] Specifies the width of the texture image. All
 * implementations support 2D texture and cube map texture images that are at
 * least 16384 texels wide.
 *
 * @param [height] Specifies the height of the texture image. All
 * implementations support 2D texture and cube map texture images that are at
 * least 16384 texels high.
 *
 * @param [border] This value must be 0.
 *
 * @param [imageSize] Specifies the number of unsigned bytes of image data
 * starting at the address specified by data.
 *
 * @param [data] Specifies a pointer to the compressed image data in memory.
 */
static inline void glCompressedTexImage2D(GLenum target, GLint level,
                                          GLenum internalformat, GLsizei width,
                                          GLsizei height, GLint border,
                                          GLsizei imageSize,
                                          const GLvoid *data) {
  glad_glCompressedTexImage2D(target, level, internalformat, width, height,
                              border, imageSize, data);
}
/**
 * glCompressedTexImage3D — specify a three-dimensional texture image in a
 * compressed format
 *
 * @param [target] Specifies the target texture. Must be GL_TEXTURE_3D,
 * GL_PROXY_TEXTURE_3D, GL_TEXTURE_2D_ARRAY or GL_PROXY_TEXTURE_2D_ARRAY.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 * image level. Level n is the nth mipmap reduction image.
 *
 * @param [internalformat] Specifies the format of the compressed image data
 * stored at address data.
 *
 * @param [width] Specifies the width of the texture image. All
 * implementations support 3D texture images that are at least 16 texels wide.
 *
 * @param [height] Specifies the height of the texture image. All
 * implementations support 3D texture images that are at least 16 texels high.
 *
 * @param [depth] Specifies the depth of the texture image. All
 * implementations support 3D texture images that are at least 16 texels deep.
 *
 * @param [border] This value must be 0.
 *
 * @param [imageSize] Specifies the number of unsigned bytes of image data
 * starting at the address specified by data.
 *
 * @param [data] Specifies a pointer to the compressed image data in memory.
 */
static inline void glCompressedTexImage3D(GLenum target, GLint level,
                                          GLenum internalformat, GLsizei width,
                                          GLsizei height, GLsizei depth,
                                          GLint border, GLsizei imageSize,
                                          const GLvoid *data) {
  glad_glCompressedTexImage3D(target, level, internalformat, width, height,
                              depth, border, imageSize, data);
}
/**
 * glCompressedTexSubImage1D, glCompressedTextureSubImage1D — specify a
 one-dimensional texture subimage in a compressed format
 *
 * @param [target] Specifies the target, to which the texture is bound, for
 glCompressedTexSubImage1D function. Must be GL_TEXTURE_1D.
 *
 * @param [texture] Specifies the texture object name for
 glCompressedTextureSubImage1D function.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 image level. Level n is the nth mipmap reduction image.
 *
 * @param [xoffset] Specifies a texel offset in the x direction within the
 texture array.
 *
 * @param [width] Specifies the width of the texture subimage.
 *
 * @param [format] Specifies the format of the compressed image data stored at
 address data.
 *
 * @param [imageSize] Specifies the number of unsigned bytes of image data
 starting at the address specified by data.
 *
 * @param [data] Specifies a pointer to the compressed image data in memory.
 */
static inline void glCompressedTexSubImage1D(GLenum target, GLint level,
                                             GLint xoffset, GLsizei width,
                                             GLenum format, GLsizei imageSize,
                                             const GLvoid *data) {
  glad_glCompressedTexSubImage1D(target, level, xoffset, width, format,
                                 imageSize, data);
}
/**
 * glCompressedTexSubImage1D, glCompressedTextureSubImage1D — specify a
 one-dimensional texture subimage in a compressed format
 *
 * @param [target] Specifies the target, to which the texture is bound, for
 glCompressedTexSubImage1D function. Must be GL_TEXTURE_1D.
 *
 * @param [texture] Specifies the texture object name for
 glCompressedTextureSubImage1D function.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 image level. Level n is the nth mipmap reduction image.
 *
 * @param [xoffset] Specifies a texel offset in the x direction within the
 texture array.
 *
 * @param [width] Specifies the width of the texture subimage.
 *
 * @param [format] Specifies the format of the compressed image data stored at
 address data.
 *
 * @param [imageSize] Specifies the number of unsigned bytes of image data
 starting at the address specified by data.
 *
 * @param [data] Specifies a pointer to the compressed image data in memory.
 */
static inline void glCompressedTextureSubImage1D(GLuint texture, GLint level,
                                                 GLint xoffset, GLsizei width,
                                                 GLenum format,
                                                 GLsizei imageSize,
                                                 const void *data) {
  glad_glCompressedTextureSubImage1D(texture, level, xoffset, width, format,
                                     imageSize, data);
}
/**
 * glCompressedTexSubImage2D, glCompressedTextureSubImage2D — specify a
 * two-dimensional texture subimage in a compressed format
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glCompressedTexSubImage2D function. Must be GL_TEXTURE_1D_ARRAY,
 * GL_TEXTURE_2D, GL_TEXTURE_CUBE_MAP_POSITIVE_X,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_X, GL_TEXTURE_CUBE_MAP_POSITIVE_Y,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_Y, GL_TEXTURE_CUBE_MAP_POSITIVE_Z, or
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_Z.
 *
 * @param [texture] Specifies the texture object name for
 * glCompressedTextureSubImage2D function.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 * image level. Level n is the nth mipmap reduction image.
 *
 * @param [xoffset] Specifies a texel offset in the x direction within the
 * texture array.
 *
 * @param [yoffset] Specifies a texel offset in the y direction within the
 * texture array.
 *
 * @param [width] Specifies the width of the texture subimage.
 *
 * @param [height] Specifies the height of the texture subimage.
 *
 * @param [format] Specifies the format of the compressed image data stored at
 * address data.
 *
 * @param [imageSize] Specifies the number of unsigned bytes of image data
 * starting at the address specified by data.
 *
 * @param [data] Specifies a pointer to the compressed image data in memory.
 */
static inline void glCompressedTexSubImage2D(GLenum target, GLint level,
                                             GLint xoffset, GLint yoffset,
                                             GLsizei width, GLsizei height,
                                             GLenum format, GLsizei imageSize,
                                             const GLvoid *data) {
  glad_glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height,
                                 format, imageSize, data);
}
/**
 * glCompressedTexSubImage2D, glCompressedTextureSubImage2D — specify a
 * two-dimensional texture subimage in a compressed format
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glCompressedTexSubImage2D function. Must be GL_TEXTURE_1D_ARRAY,
 * GL_TEXTURE_2D, GL_TEXTURE_CUBE_MAP_POSITIVE_X,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_X, GL_TEXTURE_CUBE_MAP_POSITIVE_Y,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_Y, GL_TEXTURE_CUBE_MAP_POSITIVE_Z, or
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_Z.
 *
 * @param [texture] Specifies the texture object name for
 * glCompressedTextureSubImage2D function.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 * image level. Level n is the nth mipmap reduction image.
 *
 * @param [xoffset] Specifies a texel offset in the x direction within the
 * texture array.
 *
 * @param [yoffset] Specifies a texel offset in the y direction within the
 * texture array.
 *
 * @param [width] Specifies the width of the texture subimage.
 *
 * @param [height] Specifies the height of the texture subimage.
 *
 * @param [format] Specifies the format of the compressed image data stored at
 * address data.
 *
 * @param [imageSize] Specifies the number of unsigned bytes of image data
 * starting at the address specified by data.
 *
 * @param [data] Specifies a pointer to the compressed image data in memory.
 */
static inline void glCompressedTextureSubImage2D(
    GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width,
    GLsizei height, GLenum format, GLsizei imageSize, const void *data) {
  glad_glCompressedTextureSubImage2D(texture, level, xoffset, yoffset, width,
                                     height, format, imageSize, data);
}
/**
 * glCompressedTexSubImage3D, glCompressedTextureSubImage3D — specify a
 * three-dimensional texture subimage in a compressed format
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glCompressedTexSubImage3D function. Must be GL_TEXTURE_2D_ARRAY,
 * GL_TEXTURE_3D, or GL_TEXTURE_CUBE_MAP_ARRAY.
 *
 * @param [texture] Specifies the texture object name for
 * glCompressedTextureSubImage3D function.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 * image level. Level n is the nth mipmap reduction image.
 *
 * @param [xoffset] Specifies a texel offset in the x direction within the
 * texture array.
 *
 * @param [yoffset] Specifies a texel offset in the y direction within the
 * texture array.
 *
 * @param [width] Specifies the width of the texture subimage.
 *
 * @param [height] Specifies the height of the texture subimage.
 *
 * @param [depth] Specifies the depth of the texture subimage.
 *
 * @param [format] Specifies the format of the compressed image data stored at
 * address data.
 *
 * @param [imageSize] Specifies the number of unsigned bytes of image data
 * starting at the address specified by data.
 *
 * @param [data] Specifies a pointer to the compressed image data in memory.
 */
static inline void glCompressedTexSubImage3D(GLenum target, GLint level,
                                             GLint xoffset, GLint yoffset,
                                             GLint zoffset, GLsizei width,
                                             GLsizei height, GLsizei depth,
                                             GLenum format, GLsizei imageSize,
                                             const GLvoid *data) {
  glad_glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset,
                                 width, height, depth, format, imageSize, data);
}
/**
 * glCompressedTexSubImage3D, glCompressedTextureSubImage3D — specify a
 * three-dimensional texture subimage in a compressed format
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glCompressedTexSubImage3D function. Must be GL_TEXTURE_2D_ARRAY,
 * GL_TEXTURE_3D, or GL_TEXTURE_CUBE_MAP_ARRAY.
 *
 * @param [texture] Specifies the texture object name for
 * glCompressedTextureSubImage3D function.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 * image level. Level n is the nth mipmap reduction image.
 *
 * @param [xoffset] Specifies a texel offset in the x direction within the
 * texture array.
 *
 * @param [yoffset] Specifies a texel offset in the y direction within the
 * texture array.
 *
 * @param [width] Specifies the width of the texture subimage.
 *
 * @param [height] Specifies the height of the texture subimage.
 *
 * @param [depth] Specifies the depth of the texture subimage.
 *
 * @param [format] Specifies the format of the compressed image data stored at
 * address data.
 *
 * @param [imageSize] Specifies the number of unsigned bytes of image data
 * starting at the address specified by data.
 *
 * @param [data] Specifies a pointer to the compressed image data in memory.
 */
static inline void
glCompressedTextureSubImage3D(GLuint texture, GLint level, GLint xoffset,
                              GLint yoffset, GLint zoffset, GLsizei width,
                              GLsizei height, GLsizei depth, GLenum format,
                              GLsizei imageSize, const void *data) {
  glad_glCompressedTextureSubImage3D(texture, level, xoffset, yoffset, zoffset,
                                     width, height, depth, format, imageSize,
                                     data);
}
/**
 * glCopyBufferSubData, glCopyNamedBufferSubData — copy all or part of the
 * data store of a buffer object to the data store of another buffer object
 *
 * @param [readTarget] Specifies the target to which the source buffer object
 * is bound for glCopyBufferSubData
 *
 * @param [writeTarget] Specifies the target to which the destination buffer
 * object is bound for glCopyBufferSubData.
 *
 * @param [readBuffer] Specifies the name of the source buffer object for
 * glCopyNamedBufferSubData.
 *
 * @param [writeBuffer] Specifies the name of the destination buffer object
 * for glCopyNamedBufferSubData.
 *
 * @param [readOffset] Specifies the offset, in basic machine units, within
 * the data store of the source buffer object at which data will be read.
 *
 * @param [writeOffset] Specifies the offset, in basic machine units, within
 * the data store of the destination buffer object at which data will be
 * written.
 *
 * @param [size] Specifies the size, in basic machine units, of the data to be
 * copied from the source buffer object to the destination buffer object.
 */
static inline void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget,
                                       GLintptr readOffset,
                                       GLintptr writeOffset, GLsizeiptr size) {
  glad_glCopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset,
                           size);
}
/**
 * glCopyBufferSubData, glCopyNamedBufferSubData — copy all or part of the
 * data store of a buffer object to the data store of another buffer object
 *
 * @param [readTarget] Specifies the target to which the source buffer object
 * is bound for glCopyBufferSubData
 *
 * @param [writeTarget] Specifies the target to which the destination buffer
 * object is bound for glCopyBufferSubData.
 *
 * @param [readBuffer] Specifies the name of the source buffer object for
 * glCopyNamedBufferSubData.
 *
 * @param [writeBuffer] Specifies the name of the destination buffer object
 * for glCopyNamedBufferSubData.
 *
 * @param [readOffset] Specifies the offset, in basic machine units, within
 * the data store of the source buffer object at which data will be read.
 *
 * @param [writeOffset] Specifies the offset, in basic machine units, within
 * the data store of the destination buffer object at which data will be
 * written.
 *
 * @param [size] Specifies the size, in basic machine units, of the data to be
 * copied from the source buffer object to the destination buffer object.
 */
static inline void glCopyNamedBufferSubData(GLuint readBuffer,
                                            GLuint writeBuffer,
                                            GLintptr readOffset,
                                            GLintptr writeOffset,
                                            GLsizei size) {
  glad_glCopyNamedBufferSubData(readBuffer, writeBuffer, readOffset,
                                writeOffset, size);
}
/**
 * glCopyImageSubData — perform a raw data copy between two images
 *
 * @param [srcName] The name of a texture or renderbuffer object from which to
 * copy.
 *
 * @param [srcTarget] The target representing the namespace of the source name
 * srcName.
 *
 * @param [srcLevel] The mipmap level to read from the source.
 *
 * @param [srcX] The X coordinate of the left edge of the souce region to
 * copy.
 *
 * @param [srcY] The Y coordinate of the top edge of the souce region to copy.
 *
 * @param [srcZ] The Z coordinate of the near edge of the souce region to
 * copy.
 *
 * @param [dstName] The name of a texture or renderbuffer object to which to
 * copy.
 *
 * @param [dstTarget] The target representing the namespace of the destination
 * name dstName.
 *
 * @param [dstX] The X coordinate of the left edge of the destination region.
 *
 * @param [dstY] The Y coordinate of the top edge of the destination region.
 *
 * @param [dstZ] The Z coordinate of the near edge of the destination region.
 *
 * @param [srcWidth] The width of the region to be copied.
 *
 * @param [srcHeight] The height of the region to be copied.
 *
 * @param [srcDepth] The depth of the region to be copied.
 */
static inline void
glCopyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX,
                   GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget,
                   GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ,
                   GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth) {
  glad_glCopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ,
                          dstName, dstTarget, dstLevel, dstX, dstY, dstZ,
                          srcWidth, srcHeight, srcDepth);
}
/**
 * glCopyTexImage1D — copy pixels into a 1D texture image
 *
 * @param [target] Specifies the target texture. Must be GL_TEXTURE_1D.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 * image level. Level n is the nth mipmap reduction image.
 *
 * @param [internalformat] Specifies the internal format of the texture. Must
 * be one of the following symbolic constants: GL_COMPRESSED_RED,
 * GL_COMPRESSED_RG, GL_COMPRESSED_RGB, GL_COMPRESSED_RGBA.
 * GL_COMPRESSED_SRGB, GL_COMPRESSED_SRGB_ALPHA. GL_DEPTH_COMPONENT,
 * GL_DEPTH_COMPONENT16, GL_DEPTH_COMPONENT24, GL_DEPTH_COMPONENT32,
 * GL_STENCIL_INDEX8, GL_RED, GL_RG, GL_RGB, GL_R3_G3_B2, GL_RGB4, GL_RGB5,
 * GL_RGB8, GL_RGB10, GL_RGB12, GL_RGB16, GL_RGBA, GL_RGBA2, GL_RGBA4,
 * GL_RGB5_A1, GL_RGBA8, GL_RGB10_A2, GL_RGBA12, GL_RGBA16, GL_SRGB, GL_SRGB8,
 * GL_SRGB_ALPHA, or GL_SRGB8_ALPHA8.
 *
 * @param [x, y] Specify the window coordinates of the left corner of the row
 * of pixels to be copied.
 *
 * @param [width] Specifies the width of the texture image. The height of the
 * texture image is 1.
 *
 * @param [border] Must be 0.
 */
static inline void glCopyTexImage1D(GLenum target, GLint level,
                                    GLenum internalformat, GLint x, GLint y,
                                    GLsizei width, GLint border) {
  glad_glCopyTexImage1D(target, level, internalformat, x, y, width, border);
}
/**
 * glCopyTexImage2D — copy pixels into a 2D texture image
 *
 * @param [target] Specifies the target texture. Must be GL_TEXTURE_2D,
 * GL_TEXTURE_CUBE_MAP_POSITIVE_X, GL_TEXTURE_CUBE_MAP_NEGATIVE_X,
 * GL_TEXTURE_CUBE_MAP_POSITIVE_Y, GL_TEXTURE_CUBE_MAP_NEGATIVE_Y,
 * GL_TEXTURE_CUBE_MAP_POSITIVE_Z, or GL_TEXTURE_CUBE_MAP_NEGATIVE_Z.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 * image level. Level n is the nth mipmap reduction image.
 *
 * @param [internalformat] Specifies the internal format of the texture. Must
 * be one of the following symbolic constants: GL_COMPRESSED_RED,
 * GL_COMPRESSED_RG, GL_COMPRESSED_RGB, GL_COMPRESSED_RGBA.
 * GL_COMPRESSED_SRGB, GL_COMPRESSED_SRGB_ALPHA. GL_DEPTH_COMPONENT,
 * GL_DEPTH_COMPONENT16, GL_DEPTH_COMPONENT24, GL_DEPTH_COMPONENT32,
 * GL_STENCIL_INDEX8, GL_RED, GL_RG, GL_RGB, GL_R3_G3_B2, GL_RGB4, GL_RGB5,
 * GL_RGB8, GL_RGB10, GL_RGB12, GL_RGB16, GL_RGBA, GL_RGBA2, GL_RGBA4,
 * GL_RGB5_A1, GL_RGBA8, GL_RGB10_A2, GL_RGBA12, GL_RGBA16, GL_SRGB, GL_SRGB8,
 * GL_SRGB_ALPHA, or GL_SRGB8_ALPHA8.
 *
 * @param [x, y] Specify the window coordinates of the lower left corner of
 * the rectangular region of pixels to be copied.
 *
 * @param [width] Specifies the width of the texture image.
 *
 * @param [height] Specifies the height of the texture image.
 *
 * @param [border] Must be 0.
 */
static inline void glCopyTexImage2D(GLenum target, GLint level,
                                    GLenum internalformat, GLint x, GLint y,
                                    GLsizei width, GLsizei height,
                                    GLint border) {
  glad_glCopyTexImage2D(target, level, internalformat, x, y, width, height,
                        border);
}
/**
 * glCopyTexSubImage1D, glCopyTextureSubImage1D — copy a one-dimensional
 * texture subimage
 *
 * @param [target] Specifies the target to which the texture object is bound
 * for glCopyTexSubImage1D function. Must be GL_TEXTURE_1D.
 *
 * @param [texture] Specifies the texture object name for
 * glCopyTextureSubImage1D function.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 * image level. Level n is the nth mipmap reduction image.
 *
 * @param [xoffset] Specifies the texel offset within the texture array.
 *
 * @param [x, y] Specify the window coordinates of the left corner of the row
 * of pixels to be copied.
 *
 * @param [width] Specifies the width of the texture subimage.
 */
static inline void glCopyTexSubImage1D(GLenum target, GLint level,
                                       GLint xoffset, GLint x, GLint y,
                                       GLsizei width) {
  glad_glCopyTexSubImage1D(target, level, xoffset, x, y, width);
}
/**
 * glCopyTexSubImage1D, glCopyTextureSubImage1D — copy a one-dimensional
 * texture subimage
 *
 * @param [target] Specifies the target to which the texture object is bound
 * for glCopyTexSubImage1D function. Must be GL_TEXTURE_1D.
 *
 * @param [texture] Specifies the texture object name for
 * glCopyTextureSubImage1D function.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 * image level. Level n is the nth mipmap reduction image.
 *
 * @param [xoffset] Specifies the texel offset within the texture array.
 *
 * @param [x, y] Specify the window coordinates of the left corner of the row
 * of pixels to be copied.
 *
 * @param [width] Specifies the width of the texture subimage.
 */
static inline void glCopyTextureSubImage1D(GLuint texture, GLint level,
                                           GLint xoffset, GLint x, GLint y,
                                           GLsizei width) {
  glad_glCopyTextureSubImage1D(texture, level, xoffset, x, y, width);
}
/**
 * glCopyTexSubImage2D, glCopyTextureSubImage2D — copy a two-dimensional
 * texture subimage
 *
 * @param [target] Specifies the target to which the texture object is bound
 * for glCopyTexSubImage2D function. Must be GL_TEXTURE_1D_ARRAY,
 * GL_TEXTURE_2D, GL_TEXTURE_CUBE_MAP_POSITIVE_X,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_X, GL_TEXTURE_CUBE_MAP_POSITIVE_Y,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_Y, GL_TEXTURE_CUBE_MAP_POSITIVE_Z,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_Z, or GL_TEXTURE_RECTANGLE.
 *
 * @param [texture] Specifies the texture object name for
 * glCopyTextureSubImage2D function.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 * image level. Level n is the nth mipmap reduction image.
 *
 * @param [xoffset] Specifies a texel offset in the x direction within the
 * texture array.
 *
 * @param [yoffset] Specifies a texel offset in the y direction within the
 * texture array.
 *
 * @param [x, y] Specify the window coordinates of the lower left corner of
 * the rectangular region of pixels to be copied.
 *
 * @param [width] Specifies the width of the texture subimage.
 *
 * @param [height] Specifies the height of the texture subimage.
 */
static inline void glCopyTexSubImage2D(GLenum target, GLint level,
                                       GLint xoffset, GLint yoffset, GLint x,
                                       GLint y, GLsizei width, GLsizei height) {
  glad_glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width,
                           height);
}
/**
 * glCopyTexSubImage2D, glCopyTextureSubImage2D — copy a two-dimensional
 * texture subimage
 *
 * @param [target] Specifies the target to which the texture object is bound
 * for glCopyTexSubImage2D function. Must be GL_TEXTURE_1D_ARRAY,
 * GL_TEXTURE_2D, GL_TEXTURE_CUBE_MAP_POSITIVE_X,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_X, GL_TEXTURE_CUBE_MAP_POSITIVE_Y,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_Y, GL_TEXTURE_CUBE_MAP_POSITIVE_Z,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_Z, or GL_TEXTURE_RECTANGLE.
 *
 * @param [texture] Specifies the texture object name for
 * glCopyTextureSubImage2D function.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 * image level. Level n is the nth mipmap reduction image.
 *
 * @param [xoffset] Specifies a texel offset in the x direction within the
 * texture array.
 *
 * @param [yoffset] Specifies a texel offset in the y direction within the
 * texture array.
 *
 * @param [x, y] Specify the window coordinates of the lower left corner of
 * the rectangular region of pixels to be copied.
 *
 * @param [width] Specifies the width of the texture subimage.
 *
 * @param [height] Specifies the height of the texture subimage.
 */
static inline void glCopyTextureSubImage2D(GLuint texture, GLint level,
                                           GLint xoffset, GLint yoffset,
                                           GLint x, GLint y, GLsizei width,
                                           GLsizei height) {
  glad_glCopyTextureSubImage2D(texture, level, xoffset, yoffset, x, y, width,
                               height);
}
/**
 * glCopyTexSubImage3D, glCopyTextureSubImage3D — copy a three-dimensional
 * texture subimage
 *
 * @param [target] Specifies the target to which the texture object is bound
 * for glCopyTexSubImage3D function. Must be GL_TEXTURE_3D or
 * GL_TEXTURE_2D_ARRAY.
 *
 * @param [texture] Specifies the texture object name for
 * glCopyTextureSubImage3D function.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 * image level. Level n is the nth mipmap reduction image.
 *
 * @param [xoffset] Specifies a texel offset in the x direction within the
 * texture array.
 *
 * @param [yoffset] Specifies a texel offset in the y direction within the
 * texture array.
 *
 * @param [zoffset] Specifies a texel offset in the z direction within the
 * texture array.
 *
 * @param [x, y] Specify the window coordinates of the lower left corner of
 * the rectangular region of pixels to be copied.
 *
 * @param [width] Specifies the width of the texture subimage.
 *
 * @param [height] Specifies the height of the texture subimage.
 */
static inline void glCopyTexSubImage3D(GLenum target, GLint level,
                                       GLint xoffset, GLint yoffset,
                                       GLint zoffset, GLint x, GLint y,
                                       GLsizei width, GLsizei height) {
  glad_glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y,
                           width, height);
}
/**
 * glCopyTexSubImage3D, glCopyTextureSubImage3D — copy a three-dimensional
 * texture subimage
 *
 * @param [target] Specifies the target to which the texture object is bound
 * for glCopyTexSubImage3D function. Must be GL_TEXTURE_3D or
 * GL_TEXTURE_2D_ARRAY.
 *
 * @param [texture] Specifies the texture object name for
 * glCopyTextureSubImage3D function.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 * image level. Level n is the nth mipmap reduction image.
 *
 * @param [xoffset] Specifies a texel offset in the x direction within the
 * texture array.
 *
 * @param [yoffset] Specifies a texel offset in the y direction within the
 * texture array.
 *
 * @param [zoffset] Specifies a texel offset in the z direction within the
 * texture array.
 *
 * @param [x, y] Specify the window coordinates of the lower left corner of
 * the rectangular region of pixels to be copied.
 *
 * @param [width] Specifies the width of the texture subimage.
 *
 * @param [height] Specifies the height of the texture subimage.
 */
static inline void glCopyTextureSubImage3D(GLuint texture, GLint level,
                                           GLint xoffset, GLint yoffset,
                                           GLint zoffset, GLint x, GLint y,
                                           GLsizei width, GLsizei height) {
  glad_glCopyTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, x, y,
                               width, height);
}
/**
 * glCreateBuffers — create buffer objects
 *
 * @param [n] Specifies the number of buffer objects to create.
 *
 * @param [buffers] Specifies an array in which names of the new buffer
 * objects are stored.
 */
static inline void glCreateBuffers(GLsizei n, GLuint *buffers) {
  glad_glCreateBuffers(n, buffers);
}
/**
 * glCreateFramebuffers — create framebuffer objects
 *
 * @param [n] Number of framebuffer objects to create.
 *
 * @param [framebuffers] Specifies an array in which names of the new
 * framebuffer objects are stored.
 */
static inline void glCreateFramebuffers(GLsizei n, GLuint *ids) {
  glad_glCreateFramebuffers(n, ids);
}
/**
 * glCreateProgram — Creates a program object
 */
static inline GLuint glCreateProgram(void) { return glad_glCreateProgram(); }
/**
 * glCreateProgramPipelines — create program pipeline objects
 *
 * @param [n] Number of program pipeline objects to create.
 *
 * @param [pipelines] Specifies an array in which names of the new program
 * pipeline objects are stored.
 */
static inline void glCreateProgramPipelines(GLsizei n, GLuint *pipelines) {
  glad_glCreateProgramPipelines(n, pipelines);
}
/**
 * glCreateQueries — create query objects
 *
 * @param [target] Specifies the target of each created query object.
 *
 * @param [n] Number of query objects to create.
 *
 * @param [ids] Specifies an array in which names of the new query objects are
 * stored.
 */
static inline void glCreateQueries(GLenum target, GLsizei n, GLuint *ids) {
  glad_glCreateQueries(target, n, ids);
}
/**
 * glCreateRenderbuffers — create renderbuffer objects
 *
 * @param [n] Number of renderbuffer objects to create.
 *
 * @param [renderbuffers] Specifies an array in which names of the new
 * renderbuffer objects are stored.
 */
static inline void glCreateRenderbuffers(GLsizei n, GLuint *renderbuffers) {
  glad_glCreateRenderbuffers(n, renderbuffers);
}
/**
 * glCreateSamplers — create sampler objects
 *
 * @param [n] Number of sampler objects to create.
 *
 * @param [samplers] Specifies an array in which names of the new sampler
 * objects are stored.
 */
static inline void glCreateSamplers(GLsizei n, GLuint *samplers) {
  glad_glCreateSamplers(n, samplers);
}
/**
 * glCreateShader — Creates a shader object
 *
 * @param [shaderType] Specifies the type of shader to be created. Must be one
 * of GL_COMPUTE_SHADER, GL_VERTEX_SHADER, GL_TESS_CONTROL_SHADER,
 * GL_TESS_EVALUATION_SHADER, GL_GEOMETRY_SHADER, or GL_FRAGMENT_SHADER.
 */
static inline GLuint glCreateShader(GLenum shaderType) {
  return glad_glCreateShader(shaderType);
}
/**
 * glCreateShaderProgramv — create a stand-alone program from an array of
 * null-terminated source code strings
 *
 * @param [type] Specifies the type of shader to create.
 *
 * @param [count] Specifies the number of source code strings in the array
 * strings.
 *
 * @param [strings] Specifies the address of an array of pointers to source
 * code strings from which to create the program object.
 */
static inline GLuint glCreateShaderProgramv(GLenum type, GLsizei count,
                                            const char **strings) {
  return glad_glCreateShaderProgramv(type, count, strings);
}
/**
 * glCreateTextures — create texture objects
 *
 * @param [target] Specifies the effective texture target of each created
 * texture.
 *
 * @param [n] Number of texture objects to create.
 *
 * @param [textures] Specifies an array in which names of the new texture
 * objects are stored.
 */
static inline void glCreateTextures(GLenum target, GLsizei n,
                                    GLuint *textures) {
  glad_glCreateTextures(target, n, textures);
}
/**
 * glCreateTransformFeedbacks — create transform feedback objects
 *
 * @param [n] Number of transform feedback objects to create.
 *
 * @param [ids] Specifies an array in which names of the new transform
 * feedback objects are stored.
 */
static inline void glCreateTransformFeedbacks(GLsizei n, GLuint *ids) {
  glad_glCreateTransformFeedbacks(n, ids);
}
/**
 * glCreateVertexArrays — create vertex array objects
 *
 * @param [n] Number of vertex array objects to create.
 *
 * @param [arrays] Specifies an array in which names of the new vertex array
 * objects are stored.
 */
static inline void glCreateVertexArrays(GLsizei n, GLuint *arrays) {
  glad_glCreateVertexArrays(n, arrays);
}
/**
 * glCullFace — specify whether front- or back-facing facets can be culled
 *
 * @param [mode] Specifies whether front- or back-facing facets are candidates
 * for culling. Symbolic constants GL_FRONT, GL_BACK, and GL_FRONT_AND_BACK
 * are accepted. The initial value is GL_BACK.
 */
static inline void glCullFace(GLenum mode) { glad_glCullFace(mode); }
/**
 * glDebugMessageCallback — specify a callback to receive debugging messages
 * from the GL
 *
 * @param [callback] The address of a callback function that will be called
 * when a debug message is generated.
 *
 * @param [userParam] A user supplied pointer that will be passed on each
 * invocation of callback.
 */
static inline void glDebugMessageCallback(GLDEBUGPROC callback,
                                          void *userParam) {
  glad_glDebugMessageCallback(callback, userParam);
}
/**
 * glDebugMessageControl — control the reporting of debug messages in a debug
 * context
 *
 * @param [source] The source of debug messages to enable or disable.
 *
 * @param [type] The type of debug messages to enable or disable.
 *
 * @param [severity] The severity of debug messages to enable or disable.
 *
 * @param [count] The length of the array ids.
 *
 * @param [ids] The address of an array of unsigned integers contianing the
 * ids of the messages to enable or disable.
 *
 * @param [enabled] A Boolean flag determining whether the selected messages
 * should be enabled or disabled.
 */
static inline void glDebugMessageControl(GLenum source, GLenum type,
                                         GLenum severity, GLsizei count,
                                         const GLuint *ids, GLboolean enabled) {
  glad_glDebugMessageControl(source, type, severity, count, ids, enabled);
}
/**
 * glDebugMessageInsert — inject an application-supplied message into the
 * debug message queue
 *
 * @param [source] The source of the debug message to insert.
 *
 * @param [type] The type of the debug message insert.
 *
 * @param [id] The user-supplied identifier of the message to insert.
 *
 * @param [severity] The severity of the debug messages to insert.
 *
 * @param [length] The length string contained in the character array whose
 * address is given by message.
 *
 * @param [message] The address of a character array containing the message to
 * insert.
 */
static inline void glDebugMessageInsert(GLenum source, GLenum type, GLuint id,
                                        GLenum severity, GLsizei length,
                                        const char *message) {
  glad_glDebugMessageInsert(source, type, id, severity, length, message);
}
/**
 * glDeleteBuffers — delete named buffer objects
 *
 * @param [n] Specifies the number of buffer objects to be deleted.
 *
 * @param [buffers] Specifies an array of buffer objects to be deleted.
 */
static inline void glDeleteBuffers(GLsizei n, const GLuint *buffers) {
  glad_glDeleteBuffers(n, buffers);
}
/**
 * glDeleteFramebuffers — delete framebuffer objects
 *
 * @param [n] Specifies the number of framebuffer objects to be deleted.
 *
 * @param [framebuffers] A pointer to an array containing n framebuffer
 * objects to be deleted.
 */
static inline void glDeleteFramebuffers(GLsizei n, GLuint *framebuffers) {
  glad_glDeleteFramebuffers(n, framebuffers);
}
/**
 * glDeleteProgram — Deletes a program object
 *
 * @param [program] Specifies the program object to be deleted.
 */
static inline void glDeleteProgram(GLuint program) {
  glad_glDeleteProgram(program);
}
/**
 * glDeleteProgramPipelines — delete program pipeline objects
 *
 * @param [n] Specifies the number of program pipeline objects to delete.
 *
 * @param [pipelines] Specifies an array of names of program pipeline objects
 * to delete.
 */
static inline void glDeleteProgramPipelines(GLsizei n,
                                            const GLuint *pipelines) {
  glad_glDeleteProgramPipelines(n, pipelines);
}
/**
 * glDeleteQueries — delete named query objects
 *
 * @param [n] Specifies the number of query objects to be deleted.
 *
 * @param [ids] Specifies an array of query objects to be deleted.
 */
static inline void glDeleteQueries(GLsizei n, const GLuint *ids) {
  glad_glDeleteQueries(n, ids);
}
/**
 * glDeleteRenderbuffers — delete renderbuffer objects
 *
 * @param [n] Specifies the number of renderbuffer objects to be deleted.
 *
 * @param [renderbuffers] A pointer to an array containing n renderbuffer
 * objects to be deleted.
 */
static inline void glDeleteRenderbuffers(GLsizei n, GLuint *renderbuffers) {
  glad_glDeleteRenderbuffers(n, renderbuffers);
}
/**
 * glDeleteSamplers — delete named sampler objects
 *
 * @param [n] Specifies the number of sampler objects to be deleted.
 *
 * @param [samplers] Specifies an array of sampler objects to be deleted.
 */
static inline void glDeleteSamplers(GLsizei n, const GLuint *samplers) {
  glad_glDeleteSamplers(n, samplers);
}
/**
 * glDeleteShader — Deletes a shader object
 *
 * @param [shader] Specifies the shader object to be deleted.
 */
static inline void glDeleteShader(GLuint shader) {
  glad_glDeleteShader(shader);
}
/**
 * glDeleteSync — delete a sync object
 *
 * @param [sync] The sync object to be deleted.
 */
static inline void glDeleteSync(GLsync sync) { glad_glDeleteSync(sync); }
/**
 * glDeleteTextures — delete named textures
 *
 * @param [n] Specifies the number of textures to be deleted.
 *
 * @param [textures] Specifies an array of textures to be deleted.
 */
static inline void glDeleteTextures(GLsizei n, const GLuint *textures) {
  glad_glDeleteTextures(n, textures);
}
/**
 * glDeleteTransformFeedbacks — delete transform feedback objects
 *
 * @param [n] Specifies the number of transform feedback objects to delete.
 *
 * @param [ids] Specifies an array of names of transform feedback objects to
 * delete.
 */
static inline void glDeleteTransformFeedbacks(GLsizei n, const GLuint *ids) {
  glad_glDeleteTransformFeedbacks(n, ids);
}
/**
 * glDeleteVertexArrays — delete vertex array objects
 *
 * @param [n] Specifies the number of vertex array objects to be deleted.
 *
 * @param [arrays] Specifies the address of an array containing the n names of
 * the objects to be deleted.
 */
static inline void glDeleteVertexArrays(GLsizei n, const GLuint *arrays) {
  glad_glDeleteVertexArrays(n, arrays);
}
/**
 * glDepthFunc — specify the value used for depth buffer comparisons
 *
 * @param [func] Specifies the depth comparison function. Symbolic constants
 * GL_NEVER, GL_LESS, GL_EQUAL, GL_LEQUAL, GL_GREATER, GL_NOTEQUAL, GL_GEQUAL,
 * and GL_ALWAYS are accepted. The initial value is GL_LESS.
 */
static inline void glDepthFunc(GLenum func) { glad_glDepthFunc(func); }
/**
 * glDepthMask — enable or disable writing into the depth buffer
 *
 * @param [flag] Specifies whether the depth buffer is enabled for writing. If
 * flag is GL_FALSE, depth buffer writing is disabled. Otherwise, it is
 * enabled. Initially, depth buffer writing is enabled.
 */
static inline void glDepthMask(GLboolean flag) { glad_glDepthMask(flag); }
/**
 * glDepthRange — specify mapping of depth values from normalized device
 * coordinates to window coordinates
 *
 * @param [nearVal] Specifies the mapping of the near clipping plane to window
 * coordinates. The initial value is 0.
 *
 * @param [farVal] Specifies the mapping of the far clipping plane to window
 * coordinates. The initial value is 1.
 */
static inline void glDepthRange(GLdouble nearVal, GLdouble farVal) {
  glad_glDepthRange(nearVal, farVal);
}
/**
 * glDepthRange — specify mapping of depth values from normalized device
 * coordinates to window coordinates
 *
 * @param [nearVal] Specifies the mapping of the near clipping plane to window
 * coordinates. The initial value is 0.
 *
 * @param [farVal] Specifies the mapping of the far clipping plane to window
 * coordinates. The initial value is 1.
 */
static inline void glDepthRangef(GLfloat nearVal, GLfloat farVal) {
  glad_glDepthRangef(nearVal, farVal);
}
/**
 * glDepthRangeArray — specify mapping of depth values from normalized device
 * coordinates to window coordinates for a specified set of viewports
 *
 * @param [first] Specifies the index of the first viewport whose depth range
 * to update.
 *
 * @param [count] Specifies the number of viewports whose depth range to
 * update.
 *
 * @param [v] Specifies the address of an array containing the near and far
 * values for the depth range of each modified viewport.
 */
static inline void glDepthRangeArrayv(GLuint first, GLsizei count,
                                      const GLdouble *v) {
  glad_glDepthRangeArrayv(first, count, v);
}
/**
 * glDepthRangeIndexed — specify mapping of depth values from normalized
 * device coordinates to window coordinates for a specified viewport
 *
 * @param [index] Specifies the index of the viewport whose depth range to
 * update.
 *
 * @param [nearVal] Specifies the mapping of the near clipping plane to window
 * coordinates. The initial value is 0.
 *
 * @param [farVal] Specifies the mapping of the far clipping plane to window
 * coordinates. The initial value is 1.
 */
static inline void glDepthRangeIndexed(GLuint index, GLdouble nearVal,
                                       GLdouble farVal) {
  glad_glDepthRangeIndexed(index, nearVal, farVal);
}
/**
 * glDetachShader — Detaches a shader object from a program object to which it
 * is attached
 *
 * @param [program] Specifies the program object from which to detach the
 * shader object.
 *
 * @param [shader] Specifies the shader object to be detached.
 */
static inline void glDetachShader(GLuint program, GLuint shader) {
  glad_glDetachShader(program, shader);
}
/**
 * glDispatchCompute — launch one or more compute work groups
 *
 * @param [num_groups_x] The number of work groups to be launched in the X
 * dimension.
 *
 * @param [num_groups_y] The number of work groups to be launched in the Y
 * dimension.
 *
 * @param [num_groups_z] The number of work groups to be launched in the Z
 * dimension.
 */
static inline void glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y,
                                     GLuint num_groups_z) {
  glad_glDispatchCompute(num_groups_x, num_groups_y, num_groups_z);
}
/**
 * glDispatchComputeIndirect — launch one or more compute work groups using
 * parameters stored in a buffer
 *
 * @param [indirect] The offset into the buffer object currently bound to the
 * GL_DISPATCH_INDIRECT_BUFFER buffer target at which the dispatch parameters
 * are stored.
 */
static inline void glDispatchComputeIndirect(GLintptr indirect) {
  glad_glDispatchComputeIndirect(indirect);
}
/**
 * glDrawArrays — render primitives from array data
 *
 * @param [mode] Specifies what kind of primitives to render. Symbolic
 * constants GL_POINTS, GL_LINE_STRIP, GL_LINE_LOOP, GL_LINES,
 * GL_LINE_STRIP_ADJACENCY, GL_LINES_ADJACENCY, GL_TRIANGLE_STRIP,
 * GL_TRIANGLE_FAN, GL_TRIANGLES, GL_TRIANGLE_STRIP_ADJACENCY,
 * GL_TRIANGLES_ADJACENCY and GL_PATCHES are accepted.
 *
 * @param [first] Specifies the starting index in the enabled arrays.
 *
 * @param [count] Specifies the number of indices to be rendered.
 */
static inline void glDrawArrays(GLenum mode, GLint first, GLsizei count) {
  glad_glDrawArrays(mode, first, count);
}
/**
 * glDrawArraysIndirect — render primitives from array data, taking parameters
 * from memory
 *
 * @param [mode] Specifies what kind of primitives to render. Symbolic
 * constants GL_POINTS, GL_LINE_STRIP, GL_LINE_LOOP, GL_LINES,
 * GL_LINE_STRIP_ADJACENCY, GL_LINES_ADJACENCY, GL_TRIANGLE_STRIP,
 * GL_TRIANGLE_FAN, GL_TRIANGLES, GL_TRIANGLE_STRIP_ADJACENCY,
 * GL_TRIANGLES_ADJACENCY, and GL_PATCHES are accepted.
 *
 * @param [indirect] Specifies the address of a structure containing the draw
 * parameters.
 */
static inline void glDrawArraysIndirect(GLenum mode, const void *indirect) {
  glad_glDrawArraysIndirect(mode, indirect);
}
/**
 * glDrawArraysInstanced — draw multiple instances of a range of elements
 *
 * @param [mode] Specifies what kind of primitives to render. Symbolic
 * constants GL_POINTS, GL_LINE_STRIP, GL_LINE_LOOP, GL_LINES,
 * GL_TRIANGLE_STRIP, GL_TRIANGLE_FAN, GL_TRIANGLES GL_LINES_ADJACENCY,
 * GL_LINE_STRIP_ADJACENCY, GL_TRIANGLES_ADJACENCY,
 * GL_TRIANGLE_STRIP_ADJACENCY and GL_PATCHES are accepted.
 *
 * @param [first] Specifies the starting index in the enabled arrays.
 *
 * @param [count] Specifies the number of indices to be rendered.
 *
 * @param [primcount] Specifies the number of instances of the specified range
 * of indices to be rendered.
 */
static inline void glDrawArraysInstanced(GLenum mode, GLint first,
                                         GLsizei count, GLsizei primcount) {
  glad_glDrawArraysInstanced(mode, first, count, primcount);
}
/**
 * glDrawArraysInstancedBaseInstance — draw multiple instances of a range of
 * elements with offset applied to instanced attributes
 *
 * @param [mode] Specifies what kind of primitives to render. Symbolic
 * constants GL_POINTS, GL_LINE_STRIP, GL_LINE_LOOP, GL_LINES,
 * GL_TRIANGLE_STRIP, GL_TRIANGLE_FAN, GL_TRIANGLES GL_LINES_ADJACENCY,
 * GL_LINE_STRIP_ADJACENCY, GL_TRIANGLES_ADJACENCY,
 * GL_TRIANGLE_STRIP_ADJACENCY and GL_PATCHES are accepted.
 *
 * @param [first] Specifies the starting index in the enabled arrays.
 *
 * @param [count] Specifies the number of indices to be rendered.
 *
 * @param [primcount] Specifies the number of instances of the specified range
 * of indices to be rendered.
 *
 * @param [baseinstance] Specifies the base instance for use in fetching
 * instanced vertex attributes.
 */
static inline void glDrawArraysInstancedBaseInstance(GLenum mode, GLint first,
                                                     GLsizei count,
                                                     GLsizei primcount,
                                                     GLuint baseinstance) {
  glad_glDrawArraysInstancedBaseInstance(mode, first, count, primcount,
                                         baseinstance);
}
/**
 * glDrawBuffer, glNamedFramebufferDrawBuffer — specify which color buffers
 * are to be drawn into
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glNamedFramebufferDrawBuffer function. Must be zero or the name of a
 * framebuffer object.
 *
 * @param [buf] For default framebuffer, the argument specifies up to four
 * color buffers to be drawn into. Symbolic constants GL_NONE, GL_FRONT_LEFT,
 * GL_FRONT_RIGHT, GL_BACK_LEFT, GL_BACK_RIGHT, GL_FRONT, GL_BACK, GL_LEFT,
 * GL_RIGHT, and GL_FRONT_AND_BACK are accepted. The initial value is GL_FRONT
 * for single-buffered contexts, and GL_BACK for double-buffered contexts. For
 * framebuffer objects, GL_COLOR_ATTACHMENT$m$ and GL_NONE enums are accepted,
 * where $m$ is a value between 0 and GL_MAX_COLOR_ATTACHMENTS.
 */
static inline void glDrawBuffer(GLenum buf) { glad_glDrawBuffer(buf); }
/**
 * glDrawBuffer, glNamedFramebufferDrawBuffer — specify which color buffers
 * are to be drawn into
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glNamedFramebufferDrawBuffer function. Must be zero or the name of a
 * framebuffer object.
 *
 * @param [buf] For default framebuffer, the argument specifies up to four
 * color buffers to be drawn into. Symbolic constants GL_NONE, GL_FRONT_LEFT,
 * GL_FRONT_RIGHT, GL_BACK_LEFT, GL_BACK_RIGHT, GL_FRONT, GL_BACK, GL_LEFT,
 * GL_RIGHT, and GL_FRONT_AND_BACK are accepted. The initial value is GL_FRONT
 * for single-buffered contexts, and GL_BACK for double-buffered contexts. For
 * framebuffer objects, GL_COLOR_ATTACHMENT$m$ and GL_NONE enums are accepted,
 * where $m$ is a value between 0 and GL_MAX_COLOR_ATTACHMENTS.
 */
static inline void glNamedFramebufferDrawBuffer(GLuint framebuffer,
                                                GLenum buf) {
  glad_glNamedFramebufferDrawBuffer(framebuffer, buf);
}
/**
 * glDrawBuffers, glNamedFramebufferDrawBuffers — Specifies a list of color
 buffers to be drawn into
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 glNamedFramebufferDrawBuffers.
 *
 * @param [n] Specifies the number of buffers in bufs.
 *
 * @param [bufs] Points to an array of symbolic constants specifying the
 buffers into which fragment colors or data values will be written.
 */
static inline void glDrawBuffers(GLsizei n, const GLenum *bufs) {
  glad_glDrawBuffers(n, bufs);
}
/**
 * glDrawBuffers, glNamedFramebufferDrawBuffers — Specifies a list of color
 buffers to be drawn into
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 glNamedFramebufferDrawBuffers.
 *
 * @param [n] Specifies the number of buffers in bufs.
 *
 * @param [bufs] Points to an array of symbolic constants specifying the
 buffers into which fragment colors or data values will be written.
 */
static inline void glNamedFramebufferDrawBuffers(GLuint framebuffer, GLsizei n,
                                                 const GLenum *bufs) {
  glad_glNamedFramebufferDrawBuffers(framebuffer, n, bufs);
}
/**
 * glDrawElements — render primitives from array data
 *
 * @param [mode] Specifies what kind of primitives to render. Symbolic
 * constants GL_POINTS, GL_LINE_STRIP, GL_LINE_LOOP, GL_LINES,
 * GL_LINE_STRIP_ADJACENCY, GL_LINES_ADJACENCY, GL_TRIANGLE_STRIP,
 * GL_TRIANGLE_FAN, GL_TRIANGLES, GL_TRIANGLE_STRIP_ADJACENCY,
 * GL_TRIANGLES_ADJACENCY and GL_PATCHES are accepted.
 *
 * @param [count] Specifies the number of elements to be rendered.
 *
 * @param [type] Specifies the type of the values in indices. Must be one of
 * GL_UNSIGNED_BYTE, GL_UNSIGNED_SHORT, or GL_UNSIGNED_INT.
 *
 * @param [indices] Specifies an offset of the first index in the array in the
 * data store of the buffer currently bound to the GL_ELEMENT_ARRAY_BUFFER
 * target.
 */
static inline void glDrawElements(GLenum mode, GLsizei count, GLenum type,
                                  const GLvoid *indices) {
  glad_glDrawElements(mode, count, type, indices);
}
/**
 * glDrawElementsBaseVertex — render primitives from array data with a
 * per-element offset
 *
 * @param [mode] Specifies what kind of primitives to render. Symbolic
 * constants GL_POINTS, GL_LINE_STRIP, GL_LINE_LOOP, GL_LINES,
 * GL_TRIANGLE_STRIP, GL_TRIANGLE_FAN, GL_TRIANGLES, GL_LINES_ADJACENCY,
 * GL_LINE_STRIP_ADJACENCY, GL_TRIANGLES_ADJACENCY,
 * GL_TRIANGLE_STRIP_ADJACENCY and GL_PATCHES are accepted.
 *
 * @param [count] Specifies the number of elements to be rendered.
 *
 * @param [type] Specifies the type of the values in indices. Must be one of
 * GL_UNSIGNED_BYTE, GL_UNSIGNED_SHORT, or GL_UNSIGNED_INT.
 *
 * @param [indices] Specifies a pointer to the location where the indices are
 * stored.
 *
 * @param [basevertex] Specifies a constant that should be added to each
 * element of indices when chosing elements from the enabled vertex arrays.
 */
static inline void glDrawElementsBaseVertex(GLenum mode, GLsizei count,
                                            GLenum type, GLvoid *indices,
                                            GLint basevertex) {
  glad_glDrawElementsBaseVertex(mode, count, type, indices, basevertex);
}
/**
 * glDrawElementsIndirect — render indexed primitives from array data, taking
 * parameters from memory
 *
 * @param [mode] Specifies what kind of primitives to render. Symbolic
 * constants GL_POINTS, GL_LINE_STRIP, GL_LINE_LOOP, GL_LINES,
 * GL_LINE_STRIP_ADJACENCY, GL_LINES_ADJACENCY, GL_TRIANGLE_STRIP,
 * GL_TRIANGLE_FAN, GL_TRIANGLES, GL_TRIANGLE_STRIP_ADJACENCY,
 * GL_TRIANGLES_ADJACENCY, and GL_PATCHES are accepted.
 *
 * @param [type] Specifies the type of data in the buffer bound to the
 * GL_ELEMENT_ARRAY_BUFFER binding.
 *
 * @param [indirect] Specifies the address of a structure containing the draw
 * parameters.
 */
static inline void glDrawElementsIndirect(GLenum mode, GLenum type,
                                          const void *indirect) {
  glad_glDrawElementsIndirect(mode, type, indirect);
}
/**
 * glDrawElementsInstanced — draw multiple instances of a set of elements
 *
 * @param [mode] Specifies what kind of primitives to render. Symbolic
 * constants GL_POINTS, GL_LINE_STRIP, GL_LINE_LOOP, GL_LINES,
 * GL_LINE_STRIP_ADJACENCY, GL_LINES_ADJACENCY, GL_TRIANGLE_STRIP,
 * GL_TRIANGLE_FAN, GL_TRIANGLES, GL_TRIANGLE_STRIP_ADJACENCY,
 * GL_TRIANGLES_ADJACENCY and GL_PATCHES are accepted.
 *
 * @param [count] Specifies the number of elements to be rendered.
 *
 * @param [type] Specifies the type of the values in indices. Must be one of
 * GL_UNSIGNED_BYTE, GL_UNSIGNED_SHORT, or GL_UNSIGNED_INT.
 *
 * @param [indices] Specifies a pointer to the location where the indices are
 * stored.
 *
 * @param [primcount] Specifies the number of instances of the specified range
 * of indices to be rendered.
 */
static inline void glDrawElementsInstanced(GLenum mode, GLsizei count,
                                           GLenum type, const void *indices,
                                           GLsizei primcount) {
  glad_glDrawElementsInstanced(mode, count, type, indices, primcount);
}
/**
 * glDrawElementsInstancedBaseInstance — draw multiple instances of a set of
 * elements with offset applied to instanced attributes
 *
 * @param [mode] Specifies what kind of primitives to render. Symbolic
 * constants GL_POINTS, GL_LINE_STRIP, GL_LINE_LOOP, GL_LINES,
 * GL_LINE_STRIP_ADJACENCY, GL_LINES_ADJACENCY, GL_TRIANGLE_STRIP,
 * GL_TRIANGLE_FAN, GL_TRIANGLES, GL_TRIANGLE_STRIP_ADJACENCY,
 * GL_TRIANGLES_ADJACENCY and GL_PATCHES are accepted.
 *
 * @param [count] Specifies the number of elements to be rendered.
 *
 * @param [type] Specifies the type of the values in indices. Must be one of
 * GL_UNSIGNED_BYTE, GL_UNSIGNED_SHORT, or GL_UNSIGNED_INT.
 *
 * @param [indices] Specifies a pointer to the location where the indices are
 * stored.
 *
 * @param [primcount] Specifies the number of instances of the specified range
 * of indices to be rendered.
 *
 * @param [baseinstance] Specifies the base instance for use in fetching
 * instanced vertex attributes.
 */
static inline void
glDrawElementsInstancedBaseInstance(GLenum mode, GLsizei count, GLenum type,
                                    const void *indices, GLsizei primcount,
                                    GLuint baseinstance) {
  glad_glDrawElementsInstancedBaseInstance(mode, count, type, indices,
                                           primcount, baseinstance);
}
/**
 * glDrawElementsInstancedBaseVertex — render multiple instances of a set of
 * primitives from array data with a per-element offset
 *
 * @param [mode] Specifies what kind of primitives to render. Symbolic
 * constants GL_POINTS, GL_LINE_STRIP, GL_LINE_LOOP, GL_LINES,
 * GL_TRIANGLE_STRIP, GL_TRIANGLE_FAN, GL_TRIANGLES, GL_LINES_ADJACENCY,
 * GL_LINE_STRIP_ADJACENCY, GL_TRIANGLES_ADJACENCY,
 * GL_TRIANGLE_STRIP_ADJACENCY and GL_PATCHES are accepted.
 *
 * @param [count] Specifies the number of elements to be rendered.
 *
 * @param [type] Specifies the type of the values in indices. Must be one of
 * GL_UNSIGNED_BYTE, GL_UNSIGNED_SHORT, or GL_UNSIGNED_INT.
 *
 * @param [indices] Specifies a pointer to the location where the indices are
 * stored.
 *
 * @param [primcount] Specifies the number of instances of the indexed
 * geometry that should be drawn.
 *
 * @param [basevertex] Specifies a constant that should be added to each
 * element of indices when chosing elements from the enabled vertex arrays.
 */
static inline void glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count,
                                                     GLenum type,
                                                     GLvoid *indices,
                                                     GLsizei primcount,
                                                     GLint basevertex) {
  glad_glDrawElementsInstancedBaseVertex(mode, count, type, indices, primcount,
                                         basevertex);
}
/**
 * glDrawElementsInstancedBaseVertexBaseInstance — render multiple instances
 * of a set of primitives from array data with a per-element offset
 *
 * @param [mode] Specifies what kind of primitives to render. Symbolic
 * constants GL_POINTS, GL_LINE_STRIP, GL_LINE_LOOP, GL_LINES,
 * GL_TRIANGLE_STRIP, GL_TRIANGLE_FAN, GL_TRIANGLES, GL_LINES_ADJACENCY,
 * GL_LINE_STRIP_ADJACENCY, GL_TRIANGLES_ADJACENCY,
 * GL_TRIANGLE_STRIP_ADJACENCY and GL_PATCHES are accepted.
 *
 * @param [count] Specifies the number of elements to be rendered.
 *
 * @param [type] Specifies the type of the values in indices. Must be one of
 * GL_UNSIGNED_BYTE, GL_UNSIGNED_SHORT, or GL_UNSIGNED_INT.
 *
 * @param [indices] Specifies a pointer to the location where the indices are
 * stored.
 *
 * @param [primcount] Specifies the number of instances of the indexed
 * geometry that should be drawn.
 *
 * @param [basevertex] Specifies a constant that should be added to each
 * element of indices when chosing elements from the enabled vertex arrays.
 *
 * @param [baseinstance] Specifies the base instance for use in fetching
 * instanced vertex attributes.
 */
static inline void glDrawElementsInstancedBaseVertexBaseInstance(
    GLenum mode, GLsizei count, GLenum type, GLvoid *indices, GLsizei primcount,
    GLint basevertex, GLuint baseinstance) {
  glad_glDrawElementsInstancedBaseVertexBaseInstance(
      mode, count, type, indices, primcount, basevertex, baseinstance);
}
/**
 * glDrawRangeElements — render primitives from array data
 *
 * @param [mode] Specifies what kind of primitives to render. Symbolic
 * constants GL_POINTS, GL_LINE_STRIP, GL_LINE_LOOP, GL_LINES,
 * GL_LINE_STRIP_ADJACENCY, GL_LINES_ADJACENCY, GL_TRIANGLE_STRIP,
 * GL_TRIANGLE_FAN, GL_TRIANGLES, GL_TRIANGLE_STRIP_ADJACENCY,
 * GL_TRIANGLES_ADJACENCY and GL_PATCHES are accepted.
 *
 * @param [start] Specifies the minimum array index contained in indices.
 *
 * @param [end] Specifies the maximum array index contained in indices.
 *
 * @param [count] Specifies the number of elements to be rendered.
 *
 * @param [type] Specifies the type of the values in indices. Must be one of
 * GL_UNSIGNED_BYTE, GL_UNSIGNED_SHORT, or GL_UNSIGNED_INT.
 *
 * @param [indices] Specifies a pointer to the location where the indices are
 * stored.
 */
static inline void glDrawRangeElements(GLenum mode, GLuint start, GLuint end,
                                       GLsizei count, GLenum type,
                                       const GLvoid *indices) {
  glad_glDrawRangeElements(mode, start, end, count, type, indices);
}
/**
 * glDrawRangeElementsBaseVertex — render primitives from array data with a
 * per-element offset
 *
 * @param [mode] Specifies what kind of primitives to render. Symbolic
 * constants GL_POINTS, GL_LINE_STRIP, GL_LINE_LOOP, GL_LINES,
 * GL_TRIANGLE_STRIP, GL_TRIANGLE_FAN, GL_TRIANGLES, GL_LINES_ADJACENCY,
 * GL_LINE_STRIP_ADJACENCY, GL_TRIANGLES_ADJACENCY,
 * GL_TRIANGLE_STRIP_ADJACENCY and GL_PATCHES are accepted.
 *
 * @param [start] Specifies the minimum array index contained in indices.
 *
 * @param [end] Specifies the maximum array index contained in indices.
 *
 * @param [count] Specifies the number of elements to be rendered.
 *
 * @param [type] Specifies the type of the values in indices. Must be one of
 * GL_UNSIGNED_BYTE, GL_UNSIGNED_SHORT, or GL_UNSIGNED_INT.
 *
 * @param [indices] Specifies a pointer to the location where the indices are
 * stored.
 *
 * @param [basevertex] Specifies a constant that should be added to each
 * element of indices when chosing elements from the enabled vertex arrays.
 */
static inline void glDrawRangeElementsBaseVertex(GLenum mode, GLuint start,
                                                 GLuint end, GLsizei count,
                                                 GLenum type, GLvoid *indices,
                                                 GLint basevertex) {
  glad_glDrawRangeElementsBaseVertex(mode, start, end, count, type, indices,
                                     basevertex);
}
/**
 * glDrawTransformFeedback — render primitives using a count derived from a
 * transform feedback object
 *
 * @param [mode] Specifies what kind of primitives to render. Symbolic
 * constants GL_POINTS, GL_LINE_STRIP, GL_LINE_LOOP, GL_LINES,
 * GL_LINE_STRIP_ADJACENCY, GL_LINES_ADJACENCY, GL_TRIANGLE_STRIP,
 * GL_TRIANGLE_FAN, GL_TRIANGLES, GL_TRIANGLE_STRIP_ADJACENCY,
 * GL_TRIANGLES_ADJACENCY, and GL_PATCHES are accepted.
 *
 * @param [id] Specifies the name of a transform feedback object from which to
 * retrieve a primitive count.
 */
static inline void glDrawTransformFeedback(GLenum mode, GLuint id) {
  glad_glDrawTransformFeedback(mode, id);
}
/**
 * glDrawTransformFeedbackInstanced — render multiple instances of primitives
 * using a count derived from a transform feedback object
 *
 * @param [mode] Specifies what kind of primitives to render. Symbolic
 * constants GL_POINTS, GL_LINE_STRIP, GL_LINE_LOOP, GL_LINES,
 * GL_LINE_STRIP_ADJACENCY, GL_LINES_ADJACENCY, GL_TRIANGLE_STRIP,
 * GL_TRIANGLE_FAN, GL_TRIANGLES, GL_TRIANGLE_STRIP_ADJACENCY,
 * GL_TRIANGLES_ADJACENCY, and GL_PATCHES are accepted.
 *
 * @param [id] Specifies the name of a transform feedback object from which to
 * retrieve a primitive count.
 *
 * @param [primcount] Specifies the number of instances of the geometry to
 * render.
 */
static inline void glDrawTransformFeedbackInstanced(GLenum mode, GLuint id,
                                                    GLsizei primcount) {
  glad_glDrawTransformFeedbackInstanced(mode, id, primcount);
}
/**
 * glDrawTransformFeedbackStream — render primitives using a count derived
 * from a specifed stream of a transform feedback object
 *
 * @param [mode] Specifies what kind of primitives to render. Symbolic
 * constants GL_POINTS, GL_LINE_STRIP, GL_LINE_LOOP, GL_LINES,
 * GL_LINE_STRIP_ADJACENCY, GL_LINES_ADJACENCY, GL_TRIANGLE_STRIP,
 * GL_TRIANGLE_FAN, GL_TRIANGLES, GL_TRIANGLE_STRIP_ADJACENCY,
 * GL_TRIANGLES_ADJACENCY, and GL_PATCHES are accepted.
 *
 * @param [id] Specifies the name of a transform feedback object from which to
 * retrieve a primitive count.
 *
 * @param [stream] Specifies the index of the transform feedback stream from
 * which to retrieve a primitive count.
 */
static inline void glDrawTransformFeedbackStream(GLenum mode, GLuint id,
                                                 GLuint stream) {
  glad_glDrawTransformFeedbackStream(mode, id, stream);
}
/**
 * glDrawTransformFeedbackStreamInstanced — render multiple instances of
 * primitives using a count derived from a specifed stream of a transform
 * feedback object
 *
 * @param [mode] Specifies what kind of primitives to render. Symbolic
 * constants GL_POINTS, GL_LINE_STRIP, GL_LINE_LOOP, GL_LINES,
 * GL_LINE_STRIP_ADJACENCY, GL_LINES_ADJACENCY, GL_TRIANGLE_STRIP,
 * GL_TRIANGLE_FAN, GL_TRIANGLES, GL_TRIANGLE_STRIP_ADJACENCY,
 * GL_TRIANGLES_ADJACENCY, and GL_PATCHES are accepted.
 *
 * @param [id] Specifies the name of a transform feedback object from which to
 * retrieve a primitive count.
 *
 * @param [stream] Specifies the index of the transform feedback stream from
 * which to retrieve a primitive count.
 *
 * @param [primcount] Specifies the number of instances of the geometry to
 * render.
 */
static inline void glDrawTransformFeedbackStreamInstanced(GLenum mode,
                                                          GLuint id,
                                                          GLuint stream,
                                                          GLsizei primcount) {
  glad_glDrawTransformFeedbackStreamInstanced(mode, id, stream, primcount);
}
/**
 * glEnable — enable or disable server-side GL capabilities
 *
 * @param [cap] Specifies a symbolic constant indicating a GL capability.
 *
 * @param [index] Specifies the index of the switch to disable (for glEnablei
 * and glDisablei only).
 */
static inline void glEnable(GLenum cap) { glad_glEnable(cap); }
/**
 * glEnable — enable or disable server-side GL capabilities
 *
 * @param [cap] Specifies a symbolic constant indicating a GL capability.
 *
 * @param [index] Specifies the index of the switch to disable (for glEnablei
 * and glDisablei only).
 */
static inline void glDisable(GLenum cap) { glad_glDisable(cap); }
/**
 * glEnable — enable or disable server-side GL capabilities
 *
 * @param [cap] Specifies a symbolic constant indicating a GL capability.
 *
 * @param [index] Specifies the index of the switch to disable (for glEnablei
 * and glDisablei only).
 */
static inline void glEnablei(GLenum cap, GLuint index) {
  glad_glEnablei(cap, index);
}
/**
 * glEnable — enable or disable server-side GL capabilities
 *
 * @param [cap] Specifies a symbolic constant indicating a GL capability.
 *
 * @param [index] Specifies the index of the switch to disable (for glEnablei
 * and glDisablei only).
 */
static inline void glDisablei(GLenum cap, GLuint index) {
  glad_glDisablei(cap, index);
}
/**
 * glEnableVertexAttribArray — Enable or disable a generic vertex attribute
    array
 *
 * @param [vaobj] Specifies the name of the vertex array object for
 glDisableVertexArrayAttrib and glEnableVertexArrayAttrib functions.
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 enabled or disabled.
 */
static inline void glEnableVertexAttribArray(GLuint index) {
  glad_glEnableVertexAttribArray(index);
}
/**
 * glEnableVertexAttribArray — Enable or disable a generic vertex attribute
    array
 *
 * @param [vaobj] Specifies the name of the vertex array object for
 glDisableVertexArrayAttrib and glEnableVertexArrayAttrib functions.
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 enabled or disabled.
 */
static inline void glDisableVertexAttribArray(GLuint index) {
  glad_glDisableVertexAttribArray(index);
}
/**
 * glEnableVertexAttribArray — Enable or disable a generic vertex attribute
    array
 *
 * @param [vaobj] Specifies the name of the vertex array object for
 glDisableVertexArrayAttrib and glEnableVertexArrayAttrib functions.
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 enabled or disabled.
 */
static inline void glEnableVertexArrayAttrib(GLuint vaobj, GLuint index) {
  glad_glEnableVertexArrayAttrib(vaobj, index);
}
/**
 * glEnableVertexAttribArray — Enable or disable a generic vertex attribute
    array
 *
 * @param [vaobj] Specifies the name of the vertex array object for
 glDisableVertexArrayAttrib and glEnableVertexArrayAttrib functions.
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 enabled or disabled.
 */
static inline void glDisableVertexArrayAttrib(GLuint vaobj, GLuint index) {
  glad_glDisableVertexArrayAttrib(vaobj, index);
}
/**
 * glFenceSync — create a new sync object and insert it into the GL command
 * stream
 *
 * @param [condition] Specifies the condition that must be met to set the sync
 * object's state to signaled. condition must be
 * GL_SYNC_GPU_COMMANDS_COMPLETE.
 *
 * @param [flags] Specifies a bitwise combination of flags controlling the
 * behavior of the sync object. No flags are presently defined for this
 * operation and flags must be zero.[1]
 */
static inline GLsync glFenceSync(GLenum condition, GLbitfield flags) {
  return glad_glFenceSync(condition, flags);
}
/**
 * glFinish — block until all GL execution is complete
 */
static inline void glFinish(void) { glad_glFinish(); }
/**
 * glFlush — force execution of GL commands in finite time
 */
static inline void glFlush(void) { glad_glFlush(); }
/**
 * glFlushMappedBufferRange, glFlushMappedNamedBufferRange — indicate
 * modifications to a range of a mapped buffer
 *
 * @param [target] Specifies the target to which the buffer object is bound
 * for glFlushMappedBufferRange, which must be one of the buffer binding
 * targets in the following table:
 *
 * GL_ARRAY_BUFFER - Vertex attributes,
 * GL_ATOMIC_COUNTER_BUFFER - Atomic counter storage,
 * GL_COPY_READ_BUFFER - Buffer copy source,
 * GL_COPY_WRITE_BUFFER - Buffer copy destination,
 * GL_DISPATCH_INDIRECT_BUFFER - Indirect compute dispatch commands,
 * GL_DRAW_INDIRECT_BUFFER - Indirect command arguments,
 * GL_ELEMENT_ARRAY_BUFFER - Vertex array indices,
 * GL_PIXEL_PACK_BUFFER - Pixel read target,
 * GL_PIXEL_UNPACK_BUFFER - Texture data source,
 * GL_QUERY_BUFFER - Query result buffer,
 * GL_SHADER_STORAGE_BUFFER - Read-write storage for shaders,
 * GL_TEXTURE_BUFFER - Texture data buffer,
 * GL_TRANSFORM_FEEDBACK_BUFFER - Transform feedback buffer,
 * GL_UNIFORM_BUFFER - Uniform block storage,
 *
 * @param [buffer] Specifies the name of the buffer object for
 * glFlushMappedNamedBufferRange.
 *
 * @param [offset] Specifies the start of the buffer subrange, in basic
 * machine units.
 *
 * @param [length] Specifies the length of the buffer subrange, in basic
 * machine units.
 */
static inline void glFlushMappedBufferRange(GLenum target, GLintptr offset,
                                            GLsizeiptr length) {
  glad_glFlushMappedBufferRange(target, offset, length);
}
/**
 * glFlushMappedBufferRange, glFlushMappedNamedBufferRange — indicate
 * modifications to a range of a mapped buffer
 *
 * @param [target] Specifies the target to which the buffer object is bound
 * for glFlushMappedBufferRange, which must be one of the buffer binding
 * targets in the following table:
 *
 * GL_ARRAY_BUFFER - Vertex attributes,
 * GL_ATOMIC_COUNTER_BUFFER - Atomic counter storage,
 * GL_COPY_READ_BUFFER - Buffer copy source,
 * GL_COPY_WRITE_BUFFER - Buffer copy destination,
 * GL_DISPATCH_INDIRECT_BUFFER - Indirect compute dispatch commands,
 * GL_DRAW_INDIRECT_BUFFER - Indirect command arguments,
 * GL_ELEMENT_ARRAY_BUFFER - Vertex array indices,
 * GL_PIXEL_PACK_BUFFER - Pixel read target,
 * GL_PIXEL_UNPACK_BUFFER - Texture data source,
 * GL_QUERY_BUFFER - Query result buffer,
 * GL_SHADER_STORAGE_BUFFER - Read-write storage for shaders,
 * GL_TEXTURE_BUFFER - Texture data buffer,
 * GL_TRANSFORM_FEEDBACK_BUFFER - Transform feedback buffer,
 * GL_UNIFORM_BUFFER - Uniform block storage,
 *
 * @param [buffer] Specifies the name of the buffer object for
 * glFlushMappedNamedBufferRange.
 *
 * @param [offset] Specifies the start of the buffer subrange, in basic
 * machine units.
 *
 * @param [length] Specifies the length of the buffer subrange, in basic
 * machine units.
 */
static inline void glFlushMappedNamedBufferRange(GLuint buffer, GLintptr offset,
                                                 GLsizei length) {
  glad_glFlushMappedNamedBufferRange(buffer, offset, length);
}
/**
 * glFramebufferParameteri, glNamedFramebufferParameteri — set a named
 * parameter of a framebuffer object
 *
 * @param [target] Specifies the target to which the framebuffer is bound for
 * glFramebufferParameteri.
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glNamedFramebufferParameteri.
 *
 * @param [pname] Specifies the framebuffer parameter to be modified.
 *
 * @param [param] The new value for the parameter named pname.
 */
static inline void glFramebufferParameteri(GLenum target, GLenum pname,
                                           GLint param) {
  glad_glFramebufferParameteri(target, pname, param);
}
/**
 * glFramebufferParameteri, glNamedFramebufferParameteri — set a named
 * parameter of a framebuffer object
 *
 * @param [target] Specifies the target to which the framebuffer is bound for
 * glFramebufferParameteri.
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glNamedFramebufferParameteri.
 *
 * @param [pname] Specifies the framebuffer parameter to be modified.
 *
 * @param [param] The new value for the parameter named pname.
 */
static inline void glNamedFramebufferParameteri(GLuint framebuffer,
                                                GLenum pname, GLint param) {
  glad_glNamedFramebufferParameteri(framebuffer, pname, param);
}
/**
 * glFramebufferRenderbuffer, glNamedFramebufferRenderbuffer — attach a
 * renderbuffer as a logical buffer of a framebuffer object
 *
 * @param [target] Specifies the target to which the framebuffer is bound for
 * glFramebufferRenderbuffer.
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glNamedFramebufferRenderbuffer.
 *
 * @param [attachment] Specifies the attachment point of the framebuffer.
 *
 * @param [renderbuffertarget] Specifies the renderbuffer target. Must be
 * GL_RENDERBUFFER.
 *
 * @param [renderbuffer] Specifies the name of an existing renderbuffer object
 * of type renderbuffertarget to attach.
 */
static inline void glFramebufferRenderbuffer(GLenum target, GLenum attachment,
                                             GLenum renderbuffertarget,
                                             GLuint renderbuffer) {
  glad_glFramebufferRenderbuffer(target, attachment, renderbuffertarget,
                                 renderbuffer);
}
/**
 * glFramebufferRenderbuffer, glNamedFramebufferRenderbuffer — attach a
 * renderbuffer as a logical buffer of a framebuffer object
 *
 * @param [target] Specifies the target to which the framebuffer is bound for
 * glFramebufferRenderbuffer.
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glNamedFramebufferRenderbuffer.
 *
 * @param [attachment] Specifies the attachment point of the framebuffer.
 *
 * @param [renderbuffertarget] Specifies the renderbuffer target. Must be
 * GL_RENDERBUFFER.
 *
 * @param [renderbuffer] Specifies the name of an existing renderbuffer object
 * of type renderbuffertarget to attach.
 */
static inline void glNamedFramebufferRenderbuffer(GLuint framebuffer,
                                                  GLenum attachment,
                                                  GLenum renderbuffertarget,
                                                  GLuint renderbuffer) {
  glad_glNamedFramebufferRenderbuffer(framebuffer, attachment,
                                      renderbuffertarget, renderbuffer);
}
/**
 * glFramebufferTexture — attach a level of a texture object as a logical
 * buffer of a framebuffer object
 *
 * @param [target] Specifies the target to which the framebuffer is bound for
 * all commands except glNamedFramebufferTexture.
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glNamedFramebufferTexture.
 *
 * @param [attachment] Specifies the attachment point of the framebuffer.
 *
 * @param [textarget] For glFramebufferTexture1D, glFramebufferTexture2D and
 * glFramebufferTexture3D, specifies what type of texture is expected in the
 * texture parameter, or for cube map textures, which face is to be attached.
 *
 * @param [texture] Specifies the name of an existing texture object to
 * attach.
 *
 * @param [level] Specifies the mipmap level of the texture object to attach.
 */
static inline void glFramebufferTexture(GLenum target, GLenum attachment,
                                        GLuint texture, GLint level) {
  glad_glFramebufferTexture(target, attachment, texture, level);
}
/**
 * glFramebufferTexture — attach a level of a texture object as a logical
 * buffer of a framebuffer object
 *
 * @param [target] Specifies the target to which the framebuffer is bound for
 * all commands except glNamedFramebufferTexture.
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glNamedFramebufferTexture.
 *
 * @param [attachment] Specifies the attachment point of the framebuffer.
 *
 * @param [textarget] For glFramebufferTexture1D, glFramebufferTexture2D and
 * glFramebufferTexture3D, specifies what type of texture is expected in the
 * texture parameter, or for cube map textures, which face is to be attached.
 *
 * @param [texture] Specifies the name of an existing texture object to
 * attach.
 *
 * @param [level] Specifies the mipmap level of the texture object to attach.
 */
static inline void glFramebufferTexture1D(GLenum target, GLenum attachment,
                                          GLenum textarget, GLuint texture,
                                          GLint level) {
  glad_glFramebufferTexture1D(target, attachment, textarget, texture, level);
}
/**
 * glFramebufferTexture — attach a level of a texture object as a logical
 * buffer of a framebuffer object
 *
 * @param [target] Specifies the target to which the framebuffer is bound for
 * all commands except glNamedFramebufferTexture.
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glNamedFramebufferTexture.
 *
 * @param [attachment] Specifies the attachment point of the framebuffer.
 *
 * @param [textarget] For glFramebufferTexture1D, glFramebufferTexture2D and
 * glFramebufferTexture3D, specifies what type of texture is expected in the
 * texture parameter, or for cube map textures, which face is to be attached.
 *
 * @param [texture] Specifies the name of an existing texture object to
 * attach.
 *
 * @param [level] Specifies the mipmap level of the texture object to attach.
 */
static inline void glFramebufferTexture2D(GLenum target, GLenum attachment,
                                          GLenum textarget, GLuint texture,
                                          GLint level) {
  glad_glFramebufferTexture2D(target, attachment, textarget, texture, level);
}
/**
 * glFramebufferTexture — attach a level of a texture object as a logical
 * buffer of a framebuffer object
 *
 * @param [target] Specifies the target to which the framebuffer is bound for
 * all commands except glNamedFramebufferTexture.
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glNamedFramebufferTexture.
 *
 * @param [attachment] Specifies the attachment point of the framebuffer.
 *
 * @param [textarget] For glFramebufferTexture1D, glFramebufferTexture2D and
 * glFramebufferTexture3D, specifies what type of texture is expected in the
 * texture parameter, or for cube map textures, which face is to be attached.
 *
 * @param [texture] Specifies the name of an existing texture object to
 * attach.
 *
 * @param [level] Specifies the mipmap level of the texture object to attach.
 */
static inline void glFramebufferTexture3D(GLenum target, GLenum attachment,
                                          GLenum textarget, GLuint texture,
                                          GLint level, GLint layer) {
  glad_glFramebufferTexture3D(target, attachment, textarget, texture, level,
                              layer);
}
/**
 * glFramebufferTexture — attach a level of a texture object as a logical
 * buffer of a framebuffer object
 *
 * @param [target] Specifies the target to which the framebuffer is bound for
 * all commands except glNamedFramebufferTexture.
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glNamedFramebufferTexture.
 *
 * @param [attachment] Specifies the attachment point of the framebuffer.
 *
 * @param [textarget] For glFramebufferTexture1D, glFramebufferTexture2D and
 * glFramebufferTexture3D, specifies what type of texture is expected in the
 * texture parameter, or for cube map textures, which face is to be attached.
 *
 * @param [texture] Specifies the name of an existing texture object to
 * attach.
 *
 * @param [level] Specifies the mipmap level of the texture object to attach.
 */
static inline void glNamedFramebufferTexture(GLuint framebuffer,
                                             GLenum attachment, GLuint texture,
                                             GLint level) {
  glad_glNamedFramebufferTexture(framebuffer, attachment, texture, level);
}
/**
 * glFramebufferTextureLayer, glNamedFramebufferTextureLayer — attach a single
 * layer of a texture object as a logical buffer of a framebuffer object
 *
 * @param [target] Specifies the target to which the framebuffer is bound for
 * glFramebufferTextureLayer.
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glNamedFramebufferTextureLayer.
 *
 * @param [attachment] Specifies the attachment point of the framebuffer.
 *
 * @param [texture] Specifies the name of an existing texture object to
 * attach.
 *
 * @param [level] Specifies the mipmap level of the texture object to attach.
 *
 * @param [layer] Specifies the layer of the texture object to attach.
 */
static inline void glFramebufferTextureLayer(GLenum target, GLenum attachment,
                                             GLuint texture, GLint level,
                                             GLint layer) {
  glad_glFramebufferTextureLayer(target, attachment, texture, level, layer);
}
/**
 * glFramebufferTextureLayer, glNamedFramebufferTextureLayer — attach a single
 * layer of a texture object as a logical buffer of a framebuffer object
 *
 * @param [target] Specifies the target to which the framebuffer is bound for
 * glFramebufferTextureLayer.
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glNamedFramebufferTextureLayer.
 *
 * @param [attachment] Specifies the attachment point of the framebuffer.
 *
 * @param [texture] Specifies the name of an existing texture object to
 * attach.
 *
 * @param [level] Specifies the mipmap level of the texture object to attach.
 *
 * @param [layer] Specifies the layer of the texture object to attach.
 */
static inline void glNamedFramebufferTextureLayer(GLuint framebuffer,
                                                  GLenum attachment,
                                                  GLuint texture, GLint level,
                                                  GLint layer) {
  glad_glNamedFramebufferTextureLayer(framebuffer, attachment, texture, level,
                                      layer);
}
/**
 * glFrontFace — define front- and back-facing polygons
 *
 * @param [mode] Specifies the orientation of front-facing polygons. GL_CW and
 * GL_CCW are accepted. The initial value is GL_CCW.
 */
static inline void glFrontFace(GLenum mode) { glad_glFrontFace(mode); }
/**
 * glGenBuffers — generate buffer object names
 *
 * @param [n] Specifies the number of buffer object names to be generated.
 *
 * @param [buffers] Specifies an array in which the generated buffer object
 * names are stored.
 */
static inline void glGenBuffers(GLsizei n, GLuint *buffers) {
  glad_glGenBuffers(n, buffers);
}
/**
 * glGenFramebuffers — generate framebuffer object names
 *
 * @param [n] Specifies the number of framebuffer object names to generate.
 *
 * @param [ids] Specifies an array in which the generated framebuffer object
 * names are stored.
 */
static inline void glGenFramebuffers(GLsizei n, GLuint *ids) {
  glad_glGenFramebuffers(n, ids);
}
/**
 * glGenProgramPipelines — reserve program pipeline object names
 *
 * @param [n] Specifies the number of program pipeline object names to
 * reserve.
 *
 * @param [pipelines] Specifies an array of into which the reserved names will
 * be written.
 */
static inline void glGenProgramPipelines(GLsizei n, GLuint *pipelines) {
  glad_glGenProgramPipelines(n, pipelines);
}
/**
 * glGenQueries — generate query object names
 *
 * @param [n] Specifies the number of query object names to be generated.
 *
 * @param [ids] Specifies an array in which the generated query object names
 * are stored.
 */
static inline void glGenQueries(GLsizei n, GLuint *ids) {
  glad_glGenQueries(n, ids);
}
/**
 * glGenRenderbuffers — generate renderbuffer object names
 *
 * @param [n] Specifies the number of renderbuffer object names to generate.
 *
 * @param [renderbuffers] Specifies an array in which the generated
 * renderbuffer object names are stored.
 */
static inline void glGenRenderbuffers(GLsizei n, GLuint *renderbuffers) {
  glad_glGenRenderbuffers(n, renderbuffers);
}
/**
 * glGenSamplers — generate sampler object names
 *
 * @param [n] Specifies the number of sampler object names to generate.
 *
 * @param [samplers] Specifies an array in which the generated sampler object
 * names are stored.
 */
static inline void glGenSamplers(GLsizei n, GLuint *samplers) {
  glad_glGenSamplers(n, samplers);
}
/**
 * glGenTextures — generate texture names
 *
 * @param [n] Specifies the number of texture names to be generated.
 *
 * @param [textures] Specifies an array in which the generated texture names
 * are stored.
 */
static inline void glGenTextures(GLsizei n, GLuint *textures) {
  glad_glGenTextures(n, textures);
}
/**
 * glGenTransformFeedbacks — reserve transform feedback object names
 *
 * @param [n] Specifies the number of transform feedback object names to
 * reserve.
 *
 * @param [ids] Specifies an array of into which the reserved names will be
 * written.
 */
static inline void glGenTransformFeedbacks(GLsizei n, GLuint *ids) {
  glad_glGenTransformFeedbacks(n, ids);
}
/**
 * glGenVertexArrays — generate vertex array object names
 *
 * @param [n] Specifies the number of vertex array object names to generate.
 *
 * @param [arrays] Specifies an array in which the generated vertex array
 * object names are stored.
 */
static inline void glGenVertexArrays(GLsizei n, GLuint *arrays) {
  glad_glGenVertexArrays(n, arrays);
}
/**
 * glGenerateMipmap, glGenerateTextureMipmap — generate mipmaps for a
 * specified texture object
 *
 * @param [target] Specifies the target to which the texture object is bound
 * for glGenerateMipmap. Must be one of GL_TEXTURE_1D, GL_TEXTURE_2D,
 * GL_TEXTURE_3D, GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D_ARRAY,
 * GL_TEXTURE_CUBE_MAP, or GL_TEXTURE_CUBE_MAP_ARRAY.
 *
 * @param [texture] Specifies the texture object name for
 * glGenerateTextureMipmap.
 */
static inline void glGenerateMipmap(GLenum target) {
  glad_glGenerateMipmap(target);
}
/**
 * glGenerateMipmap, glGenerateTextureMipmap — generate mipmaps for a
 * specified texture object
 *
 * @param [target] Specifies the target to which the texture object is bound
 * for glGenerateMipmap. Must be one of GL_TEXTURE_1D, GL_TEXTURE_2D,
 * GL_TEXTURE_3D, GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D_ARRAY,
 * GL_TEXTURE_CUBE_MAP, or GL_TEXTURE_CUBE_MAP_ARRAY.
 *
 * @param [texture] Specifies the texture object name for
 * glGenerateTextureMipmap.
 */
static inline void glGenerateTextureMipmap(GLuint texture) {
  glad_glGenerateTextureMipmap(texture);
}
/**
 * glGet — return the value or values of a selected parameter
 *
 * @param [pname] Specifies the parameter value to be returned for non-indexed
 * versions of glGet. The symbolic constants in the list below are accepted.
 *
 * @param [target] Specifies the parameter value to be returned for indexed
 * versions of glGet. The symbolic constants in the list below are accepted.
 *
 * @param [index] Specifies the index of the particular element being queried.
 *
 * @param [data] Returns the value or values of the specified parameter.
 */
static inline void glGetBooleanv(GLenum pname, GLboolean *data) {
  glad_glGetBooleanv(pname, data);
}
/**
 * glGet — return the value or values of a selected parameter
 *
 * @param [pname] Specifies the parameter value to be returned for non-indexed
 * versions of glGet. The symbolic constants in the list below are accepted.
 *
 * @param [target] Specifies the parameter value to be returned for indexed
 * versions of glGet. The symbolic constants in the list below are accepted.
 *
 * @param [index] Specifies the index of the particular element being queried.
 *
 * @param [data] Returns the value or values of the specified parameter.
 */
static inline void glGetDoublev(GLenum pname, GLdouble *data) {
  glad_glGetDoublev(pname, data);
}
/**
 * glGet — return the value or values of a selected parameter
 *
 * @param [pname] Specifies the parameter value to be returned for non-indexed
 * versions of glGet. The symbolic constants in the list below are accepted.
 *
 * @param [target] Specifies the parameter value to be returned for indexed
 * versions of glGet. The symbolic constants in the list below are accepted.
 *
 * @param [index] Specifies the index of the particular element being queried.
 *
 * @param [data] Returns the value or values of the specified parameter.
 */
static inline void glGetFloatv(GLenum pname, GLfloat *data) {
  glad_glGetFloatv(pname, data);
}
/**
 * glGet — return the value or values of a selected parameter
 *
 * @param [pname] Specifies the parameter value to be returned for non-indexed
 * versions of glGet. The symbolic constants in the list below are accepted.
 *
 * @param [target] Specifies the parameter value to be returned for indexed
 * versions of glGet. The symbolic constants in the list below are accepted.
 *
 * @param [index] Specifies the index of the particular element being queried.
 *
 * @param [data] Returns the value or values of the specified parameter.
 */
static inline void glGetIntegerv(GLenum pname, GLint *data) {
  glad_glGetIntegerv(pname, data);
}
/**
 * glGet — return the value or values of a selected parameter
 *
 * @param [pname] Specifies the parameter value to be returned for non-indexed
 * versions of glGet. The symbolic constants in the list below are accepted.
 *
 * @param [target] Specifies the parameter value to be returned for indexed
 * versions of glGet. The symbolic constants in the list below are accepted.
 *
 * @param [index] Specifies the index of the particular element being queried.
 *
 * @param [data] Returns the value or values of the specified parameter.
 */
static inline void glGetInteger64v(GLenum pname, GLint64 *data) {
  glad_glGetInteger64v(pname, data);
}
/**
 * glGet — return the value or values of a selected parameter
 *
 * @param [pname] Specifies the parameter value to be returned for non-indexed
 * versions of glGet. The symbolic constants in the list below are accepted.
 *
 * @param [target] Specifies the parameter value to be returned for indexed
 * versions of glGet. The symbolic constants in the list below are accepted.
 *
 * @param [index] Specifies the index of the particular element being queried.
 *
 * @param [data] Returns the value or values of the specified parameter.
 */
static inline void glGetBooleani_v(GLenum target, GLuint index,
                                   GLboolean *data) {
  glad_glGetBooleani_v(target, index, data);
}
/**
 * glGet — return the value or values of a selected parameter
 *
 * @param [pname] Specifies the parameter value to be returned for non-indexed
 * versions of glGet. The symbolic constants in the list below are accepted.
 *
 * @param [target] Specifies the parameter value to be returned for indexed
 * versions of glGet. The symbolic constants in the list below are accepted.
 *
 * @param [index] Specifies the index of the particular element being queried.
 *
 * @param [data] Returns the value or values of the specified parameter.
 */
static inline void glGetIntegeri_v(GLenum target, GLuint index, GLint *data) {
  glad_glGetIntegeri_v(target, index, data);
}
/**
 * glGet — return the value or values of a selected parameter
 *
 * @param [pname] Specifies the parameter value to be returned for non-indexed
 * versions of glGet. The symbolic constants in the list below are accepted.
 *
 * @param [target] Specifies the parameter value to be returned for indexed
 * versions of glGet. The symbolic constants in the list below are accepted.
 *
 * @param [index] Specifies the index of the particular element being queried.
 *
 * @param [data] Returns the value or values of the specified parameter.
 */
static inline void glGetFloati_v(GLenum target, GLuint index, GLfloat *data) {
  glad_glGetFloati_v(target, index, data);
}
/**
 * glGet — return the value or values of a selected parameter
 *
 * @param [pname] Specifies the parameter value to be returned for non-indexed
 * versions of glGet. The symbolic constants in the list below are accepted.
 *
 * @param [target] Specifies the parameter value to be returned for indexed
 * versions of glGet. The symbolic constants in the list below are accepted.
 *
 * @param [index] Specifies the index of the particular element being queried.
 *
 * @param [data] Returns the value or values of the specified parameter.
 */
static inline void glGetDoublei_v(GLenum target, GLuint index, GLdouble *data) {
  glad_glGetDoublei_v(target, index, data);
}
/**
 * glGet — return the value or values of a selected parameter
 *
 * @param [pname] Specifies the parameter value to be returned for non-indexed
 * versions of glGet. The symbolic constants in the list below are accepted.
 *
 * @param [target] Specifies the parameter value to be returned for indexed
 * versions of glGet. The symbolic constants in the list below are accepted.
 *
 * @param [index] Specifies the index of the particular element being queried.
 *
 * @param [data] Returns the value or values of the specified parameter.
 */
static inline void glGetInteger64i_v(GLenum target, GLuint index,
                                     GLint64 *data) {
  glad_glGetInteger64i_v(target, index, data);
}
/**
 * glGetActiveAtomicCounterBufferiv — retrieve information about the set of
 * active atomic counter buffers for a program
 *
 * @param [program] The name of a program object from which to retrieve
 * information.
 *
 * @param [bufferIndex] Specifies index of an active atomic counter buffer.
 *
 * @param [pname] Specifies which parameter of the atomic counter buffer to
 * retrieve.
 *
 * @param [params] Specifies the address of a variable into which to write the
 * retrieved information.
 */
static inline void glGetActiveAtomicCounterBufferiv(GLuint program,
                                                    GLuint bufferIndex,
                                                    GLenum pname,
                                                    GLint *params) {
  glad_glGetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params);
}
/**
 * glGetActiveAttrib — Returns information about an active attribute variable
 * for the specified program object
 *
 * @param [program] Specifies the program object to be queried.
 *
 * @param [index] Specifies the index of the attribute variable to be queried.
 *
 * @param [bufSize] Specifies the maximum number of characters OpenGL is
 * allowed to write in the character buffer indicated by name.
 *
 * @param [length] Returns the number of characters actually written by OpenGL
 * in the string indicated by name (excluding the null terminator) if a value
 * other than NULL is passed.
 *
 * @param [size] Returns the size of the attribute variable.
 *
 * @param [type] Returns the data type of the attribute variable.
 *
 * @param [name] Returns a null terminated string containing the name of the
 * attribute variable.
 */
static inline void glGetActiveAttrib(GLuint program, GLuint index,
                                     GLsizei bufSize, GLsizei *length,
                                     GLint *size, GLenum *type, GLchar *name) {
  glad_glGetActiveAttrib(program, index, bufSize, length, size, type, name);
}
/**
 * glGetActiveSubroutineName — query the name of an active shader subroutine
 *
 * @param [program] Specifies the name of the program containing the
 * subroutine.
 *
 * @param [shadertype] Specifies the shader stage from which to query the
 * subroutine name.
 *
 * @param [index] Specifies the index of the shader subroutine uniform.
 *
 * @param [bufsize] Specifies the size of the buffer whose address is given in
 * name.
 *
 * @param [length] Specifies the address of a variable which is to receive the
 * length of the shader subroutine uniform name.
 *
 * @param [name] Specifies the address of an array into which the name of the
 * shader subroutine uniform will be written.
 */
static inline void glGetActiveSubroutineName(GLuint program, GLenum shadertype,
                                             GLuint index, GLsizei bufsize,
                                             GLsizei *length, GLchar *name) {
  glad_glGetActiveSubroutineName(program, shadertype, index, bufsize, length,
                                 name);
}
/**
 * glGetActiveSubroutineUniform — query a property of an active shader
 * subroutine uniform
 *
 * @param [program] Specifies the name of the program containing the
 * subroutine.
 *
 * @param [shadertype] Specifies the shader stage from which to query for the
 * subroutine parameter. shadertype must be one of GL_VERTEX_SHADER,
 * GL_TESS_CONTROL_SHADER, GL_TESS_EVALUATION_SHADER, GL_GEOMETRY_SHADER or
 * GL_FRAGMENT_SHADER.
 *
 * @param [index] Specifies the index of the shader subroutine uniform.
 *
 * @param [pname] Specifies the parameter of the shader subroutine uniform to
 * query. pname must be GL_NUM_COMPATIBLE_SUBROUTINES,
 * GL_COMPATIBLE_SUBROUTINES, GL_UNIFORM_SIZE or GL_UNIFORM_NAME_LENGTH.
 *
 * @param [values] Specifies the address of a into which the queried value or
 * values will be placed.
 */
static inline void glGetActiveSubroutineUniformiv(GLuint program,
                                                  GLenum shadertype,
                                                  GLuint index, GLenum pname,
                                                  GLint *values) {
  glad_glGetActiveSubroutineUniformiv(program, shadertype, index, pname,
                                      values);
}
/**
 * glGetActiveSubroutineUniformName — query the name of an active shader
 * subroutine uniform
 *
 * @param [program] Specifies the name of the program containing the
 * subroutine.
 *
 * @param [shadertype] Specifies the shader stage from which to query for the
 * subroutine parameter. shadertype must be one of GL_VERTEX_SHADER,
 * GL_TESS_CONTROL_SHADER, GL_TESS_EVALUATION_SHADER, GL_GEOMETRY_SHADER or
 * GL_FRAGMENT_SHADER.
 *
 * @param [index] Specifies the index of the shader subroutine uniform.
 *
 * @param [bufsize] Specifies the size of the buffer whose address is given in
 * name.
 *
 * @param [length] Specifies the address of a variable into which is written
 * the number of characters copied into name.
 *
 * @param [name] Specifies the address of a buffer that will receive the name
 * of the specified shader subroutine uniform.
 */
static inline void
glGetActiveSubroutineUniformName(GLuint program, GLenum shadertype,
                                 GLuint index, GLsizei bufsize, GLsizei *length,
                                 GLchar *name) {
  glad_glGetActiveSubroutineUniformName(program, shadertype, index, bufsize,
                                        length, name);
}
/**
 * glGetActiveUniform — Returns information about an active uniform variable
 * for the specified program object
 *
 * @param [program] Specifies the program object to be queried.
 *
 * @param [index] Specifies the index of the uniform variable to be queried.
 *
 * @param [bufSize] Specifies the maximum number of characters OpenGL is
 * allowed to write in the character buffer indicated by name.
 *
 * @param [length] Returns the number of characters actually written by OpenGL
 * in the string indicated by name (excluding the null terminator) if a value
 * other than NULL is passed.
 *
 * @param [size] Returns the size of the uniform variable.
 *
 * @param [type] Returns the data type of the uniform variable.
 *
 * @param [name] Returns a null terminated string containing the name of the
 * uniform variable.
 */
static inline void glGetActiveUniform(GLuint program, GLuint index,
                                      GLsizei bufSize, GLsizei *length,
                                      GLint *size, GLenum *type, GLchar *name) {
  glad_glGetActiveUniform(program, index, bufSize, length, size, type, name);
}
/**
 * glGetActiveUniformBlock — query information about an active uniform block
 *
 * @param [program] Specifies the name of a program containing the uniform
 * block.
 *
 * @param [uniformBlockIndex] Specifies the index of the uniform block within
 * program.
 *
 * @param [pname] Specifies the name of the parameter to query.
 *
 * @param [params] Specifies the address of a variable to receive the result
 * of the query.
 */
static inline void glGetActiveUniformBlockiv(GLuint program,
                                             GLuint uniformBlockIndex,
                                             GLenum pname, GLint *params) {
  glad_glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}
/**
 * glGetActiveUniformBlockName — retrieve the name of an active uniform block
 *
 * @param [program] Specifies the name of a program containing the uniform
 * block.
 *
 * @param [uniformBlockIndex] Specifies the index of the uniform block within
 * program.
 *
 * @param [bufSize] Specifies the size of the buffer addressed by
 * uniformBlockName.
 *
 * @param [length] Specifies the address of a variable to receive the number
 * of characters that were written to uniformBlockName.
 *
 * @param [uniformBlockName] Specifies the address an array of characters to
 * receive the name of the uniform block at uniformBlockIndex.
 */
static inline void glGetActiveUniformBlockName(GLuint program,
                                               GLuint uniformBlockIndex,
                                               GLsizei bufSize, GLsizei *length,
                                               GLchar *uniformBlockName) {
  glad_glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length,
                                   uniformBlockName);
}
/**
 * glGetActiveUniformName — query the name of an active uniform
 *
 * @param [program] Specifies the program containing the active uniform index
 * uniformIndex.
 *
 * @param [uniformIndex] Specifies the index of the active uniform whose name
 * to query.
 *
 * @param [bufSize] Specifies the size of the buffer, in units of GLchar, of
 * the buffer whose address is specified in uniformName.
 *
 * @param [length] Specifies the address of a variable that will receive the
 * number of characters that were or would have been written to the buffer
 * addressed by uniformName.
 *
 * @param [uniformName] Specifies the address of a buffer into which the GL
 * will place the name of the active uniform at uniformIndex within program.
 */
static inline void glGetActiveUniformName(GLuint program, GLuint uniformIndex,
                                          GLsizei bufSize, GLsizei *length,
                                          GLchar *uniformName) {
  glad_glGetActiveUniformName(program, uniformIndex, bufSize, length,
                              uniformName);
}
/**
 * glGetActiveUniformsiv — Returns information about several active uniform
 * variables for the specified program object
 *
 * @param [program] Specifies the program object to be queried.
 *
 * @param [uniformCount] Specifies both the number of elements in the array of
 * indices uniformIndices and the number of parameters written to params upon
 * successful return.
 *
 * @param [uniformIndices] Specifies the address of an array of uniformCount
 * integers containing the indices of uniforms within program whose parameter
 * pname should be queried.
 *
 * @param [pname] Specifies the property of each uniform in uniformIndices
 * that should be written into the corresponding element of params.
 *
 * @param [params] Specifies the address of an array of uniformCount integers
 * which are to receive the value of pname for each uniform in uniformIndices.
 */
static inline void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount,
                                         const GLuint *uniformIndices,
                                         GLenum pname, GLint *params) {
  glad_glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname,
                             params);
}
/**
 * glGetAttachedShaders — Returns the handles of the shader objects attached
 * to a program object
 *
 * @param [program] Specifies the program object to be queried.
 *
 * @param [maxCount] Specifies the size of the array for storing the returned
 * object names.
 *
 * @param [count] Returns the number of names actually returned in shaders.
 *
 * @param [shaders] Specifies an array that is used to return the names of
 * attached shader objects.
 */
static inline void glGetAttachedShaders(GLuint program, GLsizei maxCount,
                                        GLsizei *count, GLuint *shaders) {
  glad_glGetAttachedShaders(program, maxCount, count, shaders);
}
/**
 * glGetAttribLocation — Returns the location of an attribute variable
 *
 * @param [program] Specifies the program object to be queried.
 *
 * @param [name] Points to a null terminated string containing the name of the
 * attribute variable whose location is to be queried.
 */
static inline GLint glGetAttribLocation(GLuint program, const GLchar *name) {
  return glad_glGetAttribLocation(program, name);
}
/**
 * glGetBufferParameter — return parameters of a buffer object
 *
 * @param [target] Specifies the target to which the buffer object is bound
 * for glGetBufferParameteriv and glGetBufferParameteri64v. Must be one of the
 * buffer binding targets in the following table:
 *
 * GL_ARRAY_BUFFER - Vertex attributes,
 * GL_ATOMIC_COUNTER_BUFFER - Atomic counter storage,
 * GL_COPY_READ_BUFFER - Buffer copy source,
 * GL_COPY_WRITE_BUFFER - Buffer copy destination,
 * GL_DISPATCH_INDIRECT_BUFFER - Indirect compute dispatch commands,
 * GL_DRAW_INDIRECT_BUFFER - Indirect command arguments,
 * GL_ELEMENT_ARRAY_BUFFER - Vertex array indices,
 * GL_PIXEL_PACK_BUFFER - Pixel read target,
 * GL_PIXEL_UNPACK_BUFFER - Texture data source,
 * GL_QUERY_BUFFER - Query result buffer,
 * GL_SHADER_STORAGE_BUFFER - Read-write storage for shaders,
 * GL_TEXTURE_BUFFER - Texture data buffer,
 * GL_TRANSFORM_FEEDBACK_BUFFER - Transform feedback buffer,
 * GL_UNIFORM_BUFFER - Uniform block storage,
 *
 * @param [buffer] Specifies the name of the buffer object for
 * glGetNamedBufferParameteriv and glGetNamedBufferParameteri64v.
 *
 * @param [value] Specifies the name of the buffer object parameter to query.
 *
 * @param [data] Returns the requested parameter.
 */
static inline void glGetBufferParameteriv(GLenum target, GLenum value,
                                          GLint *data) {
  glad_glGetBufferParameteriv(target, value, data);
}
/**
 * glGetBufferParameter — return parameters of a buffer object
 *
 * @param [target] Specifies the target to which the buffer object is bound
 * for glGetBufferParameteriv and glGetBufferParameteri64v. Must be one of the
 * buffer binding targets in the following table:
 *
 * GL_ARRAY_BUFFER - Vertex attributes,
 * GL_ATOMIC_COUNTER_BUFFER - Atomic counter storage,
 * GL_COPY_READ_BUFFER - Buffer copy source,
 * GL_COPY_WRITE_BUFFER - Buffer copy destination,
 * GL_DISPATCH_INDIRECT_BUFFER - Indirect compute dispatch commands,
 * GL_DRAW_INDIRECT_BUFFER - Indirect command arguments,
 * GL_ELEMENT_ARRAY_BUFFER - Vertex array indices,
 * GL_PIXEL_PACK_BUFFER - Pixel read target,
 * GL_PIXEL_UNPACK_BUFFER - Texture data source,
 * GL_QUERY_BUFFER - Query result buffer,
 * GL_SHADER_STORAGE_BUFFER - Read-write storage for shaders,
 * GL_TEXTURE_BUFFER - Texture data buffer,
 * GL_TRANSFORM_FEEDBACK_BUFFER - Transform feedback buffer,
 * GL_UNIFORM_BUFFER - Uniform block storage,
 *
 * @param [buffer] Specifies the name of the buffer object for
 * glGetNamedBufferParameteriv and glGetNamedBufferParameteri64v.
 *
 * @param [value] Specifies the name of the buffer object parameter to query.
 *
 * @param [data] Returns the requested parameter.
 */
static inline void glGetBufferParameteri64v(GLenum target, GLenum value,
                                            GLint64 *data) {
  glad_glGetBufferParameteri64v(target, value, data);
}
/**
 * glGetBufferParameter — return parameters of a buffer object
 *
 * @param [target] Specifies the target to which the buffer object is bound
 * for glGetBufferParameteriv and glGetBufferParameteri64v. Must be one of the
 * buffer binding targets in the following table:
 *
 * GL_ARRAY_BUFFER - Vertex attributes,
 * GL_ATOMIC_COUNTER_BUFFER - Atomic counter storage,
 * GL_COPY_READ_BUFFER - Buffer copy source,
 * GL_COPY_WRITE_BUFFER - Buffer copy destination,
 * GL_DISPATCH_INDIRECT_BUFFER - Indirect compute dispatch commands,
 * GL_DRAW_INDIRECT_BUFFER - Indirect command arguments,
 * GL_ELEMENT_ARRAY_BUFFER - Vertex array indices,
 * GL_PIXEL_PACK_BUFFER - Pixel read target,
 * GL_PIXEL_UNPACK_BUFFER - Texture data source,
 * GL_QUERY_BUFFER - Query result buffer,
 * GL_SHADER_STORAGE_BUFFER - Read-write storage for shaders,
 * GL_TEXTURE_BUFFER - Texture data buffer,
 * GL_TRANSFORM_FEEDBACK_BUFFER - Transform feedback buffer,
 * GL_UNIFORM_BUFFER - Uniform block storage,
 *
 * @param [buffer] Specifies the name of the buffer object for
 * glGetNamedBufferParameteriv and glGetNamedBufferParameteri64v.
 *
 * @param [value] Specifies the name of the buffer object parameter to query.
 *
 * @param [data] Returns the requested parameter.
 */
static inline void glGetNamedBufferParameteriv(GLuint buffer, GLenum pname,
                                               GLint *params) {
  glad_glGetNamedBufferParameteriv(buffer, pname, params);
}
/**
 * glGetBufferParameter — return parameters of a buffer object
 *
 * @param [target] Specifies the target to which the buffer object is bound
 * for glGetBufferParameteriv and glGetBufferParameteri64v. Must be one of the
 * buffer binding targets in the following table:
 *
 * GL_ARRAY_BUFFER - Vertex attributes,
 * GL_ATOMIC_COUNTER_BUFFER - Atomic counter storage,
 * GL_COPY_READ_BUFFER - Buffer copy source,
 * GL_COPY_WRITE_BUFFER - Buffer copy destination,
 * GL_DISPATCH_INDIRECT_BUFFER - Indirect compute dispatch commands,
 * GL_DRAW_INDIRECT_BUFFER - Indirect command arguments,
 * GL_ELEMENT_ARRAY_BUFFER - Vertex array indices,
 * GL_PIXEL_PACK_BUFFER - Pixel read target,
 * GL_PIXEL_UNPACK_BUFFER - Texture data source,
 * GL_QUERY_BUFFER - Query result buffer,
 * GL_SHADER_STORAGE_BUFFER - Read-write storage for shaders,
 * GL_TEXTURE_BUFFER - Texture data buffer,
 * GL_TRANSFORM_FEEDBACK_BUFFER - Transform feedback buffer,
 * GL_UNIFORM_BUFFER - Uniform block storage,
 *
 * @param [buffer] Specifies the name of the buffer object for
 * glGetNamedBufferParameteriv and glGetNamedBufferParameteri64v.
 *
 * @param [value] Specifies the name of the buffer object parameter to query.
 *
 * @param [data] Returns the requested parameter.
 */
static inline void glGetNamedBufferParameteri64v(GLuint buffer, GLenum pname,
                                                 GLint64 *params) {
  glad_glGetNamedBufferParameteri64v(buffer, pname, params);
}
/**
 * glGetBufferPointerv, glGetNamedBufferPointerv — return the pointer to a
 * mapped buffer object's data store
 *
 * @param [target] Specifies the target to which the buffer object is bound
 * for glGetBufferPointerv, which must be one of the buffer binding targets in
 * the following table:
 *
 * GL_ARRAY_BUFFER - Vertex attributes,
 * GL_ATOMIC_COUNTER_BUFFER - Atomic counter storage,
 * GL_COPY_READ_BUFFER - Buffer copy source,
 * GL_COPY_WRITE_BUFFER - Buffer copy destination,
 * GL_DISPATCH_INDIRECT_BUFFER - Indirect compute dispatch commands,
 * GL_DRAW_INDIRECT_BUFFER - Indirect command arguments,
 * GL_ELEMENT_ARRAY_BUFFER - Vertex array indices,
 * GL_PIXEL_PACK_BUFFER - Pixel read target,
 * GL_PIXEL_UNPACK_BUFFER - Texture data source,
 * GL_QUERY_BUFFER - Query result buffer,
 * GL_SHADER_STORAGE_BUFFER - Read-write storage for shaders,
 * GL_TEXTURE_BUFFER - Texture data buffer,
 * GL_TRANSFORM_FEEDBACK_BUFFER - Transform feedback buffer,
 * GL_UNIFORM_BUFFER - Uniform block storage,
 *
 * @param [buffer] Specifies the name of the buffer object for
 * glGetNamedBufferPointerv.
 *
 * @param [pname] Specifies the name of the pointer to be returned. Must be
 * GL_BUFFER_MAP_POINTER.
 *
 * @param [params] Returns the pointer value specified by pname.
 */
static inline void glGetBufferPointerv(GLenum target, GLenum pname,
                                       GLvoid **params) {
  glad_glGetBufferPointerv(target, pname, params);
}
/**
 * glGetBufferPointerv, glGetNamedBufferPointerv — return the pointer to a
 * mapped buffer object's data store
 *
 * @param [target] Specifies the target to which the buffer object is bound
 * for glGetBufferPointerv, which must be one of the buffer binding targets in
 * the following table:
 *
 * GL_ARRAY_BUFFER - Vertex attributes,
 * GL_ATOMIC_COUNTER_BUFFER - Atomic counter storage,
 * GL_COPY_READ_BUFFER - Buffer copy source,
 * GL_COPY_WRITE_BUFFER - Buffer copy destination,
 * GL_DISPATCH_INDIRECT_BUFFER - Indirect compute dispatch commands,
 * GL_DRAW_INDIRECT_BUFFER - Indirect command arguments,
 * GL_ELEMENT_ARRAY_BUFFER - Vertex array indices,
 * GL_PIXEL_PACK_BUFFER - Pixel read target,
 * GL_PIXEL_UNPACK_BUFFER - Texture data source,
 * GL_QUERY_BUFFER - Query result buffer,
 * GL_SHADER_STORAGE_BUFFER - Read-write storage for shaders,
 * GL_TEXTURE_BUFFER - Texture data buffer,
 * GL_TRANSFORM_FEEDBACK_BUFFER - Transform feedback buffer,
 * GL_UNIFORM_BUFFER - Uniform block storage,
 *
 * @param [buffer] Specifies the name of the buffer object for
 * glGetNamedBufferPointerv.
 *
 * @param [pname] Specifies the name of the pointer to be returned. Must be
 * GL_BUFFER_MAP_POINTER.
 *
 * @param [params] Returns the pointer value specified by pname.
 */
static inline void glGetNamedBufferPointerv(GLuint buffer, GLenum pname,
                                            void **params) {
  glad_glGetNamedBufferPointerv(buffer, pname, params);
}
/**
 * glGetBufferSubData, glGetNamedBufferSubData — returns a subset of a buffer
 * object's data store
 *
 * @param [target] Specifies the target to which the buffer object is bound
 * for glGetBufferSubData, which must be one of the buffer binding targets in
 * the following table:
 *
 * GL_ARRAY_BUFFER - Vertex attributes,
 * GL_ATOMIC_COUNTER_BUFFER - Atomic counter storage,
 * GL_COPY_READ_BUFFER - Buffer copy source,
 * GL_COPY_WRITE_BUFFER - Buffer copy destination,
 * GL_DISPATCH_INDIRECT_BUFFER - Indirect compute dispatch commands,
 * GL_DRAW_INDIRECT_BUFFER - Indirect command arguments,
 * GL_ELEMENT_ARRAY_BUFFER - Vertex array indices,
 * GL_PIXEL_PACK_BUFFER - Pixel read target,
 * GL_PIXEL_UNPACK_BUFFER - Texture data source,
 * GL_QUERY_BUFFER - Query result buffer,
 * GL_SHADER_STORAGE_BUFFER - Read-write storage for shaders,
 * GL_TEXTURE_BUFFER - Texture data buffer,
 * GL_TRANSFORM_FEEDBACK_BUFFER - Transform feedback buffer,
 * GL_UNIFORM_BUFFER - Uniform block storage,
 *
 * @param [buffer] Specifies the name of the buffer object for
 * glGetNamedBufferSubData.
 *
 * @param [offset] Specifies the offset into the buffer object's data store
 * from which data will be returned, measured in bytes.
 *
 * @param [size] Specifies the size in bytes of the data store region being
 * returned.
 *
 * @param [data] Specifies a pointer to the location where buffer object data
 * is returned.
 */
static inline void glGetBufferSubData(GLenum target, GLintptr offset,
                                      GLsizeiptr size, GLvoid *data) {
  glad_glGetBufferSubData(target, offset, size, data);
}
/**
 * glGetBufferSubData, glGetNamedBufferSubData — returns a subset of a buffer
 * object's data store
 *
 * @param [target] Specifies the target to which the buffer object is bound
 * for glGetBufferSubData, which must be one of the buffer binding targets in
 * the following table:
 *
 * GL_ARRAY_BUFFER - Vertex attributes,
 * GL_ATOMIC_COUNTER_BUFFER - Atomic counter storage,
 * GL_COPY_READ_BUFFER - Buffer copy source,
 * GL_COPY_WRITE_BUFFER - Buffer copy destination,
 * GL_DISPATCH_INDIRECT_BUFFER - Indirect compute dispatch commands,
 * GL_DRAW_INDIRECT_BUFFER - Indirect command arguments,
 * GL_ELEMENT_ARRAY_BUFFER - Vertex array indices,
 * GL_PIXEL_PACK_BUFFER - Pixel read target,
 * GL_PIXEL_UNPACK_BUFFER - Texture data source,
 * GL_QUERY_BUFFER - Query result buffer,
 * GL_SHADER_STORAGE_BUFFER - Read-write storage for shaders,
 * GL_TEXTURE_BUFFER - Texture data buffer,
 * GL_TRANSFORM_FEEDBACK_BUFFER - Transform feedback buffer,
 * GL_UNIFORM_BUFFER - Uniform block storage,
 *
 * @param [buffer] Specifies the name of the buffer object for
 * glGetNamedBufferSubData.
 *
 * @param [offset] Specifies the offset into the buffer object's data store
 * from which data will be returned, measured in bytes.
 *
 * @param [size] Specifies the size in bytes of the data store region being
 * returned.
 *
 * @param [data] Specifies a pointer to the location where buffer object data
 * is returned.
 */
static inline void glGetNamedBufferSubData(GLuint buffer, GLintptr offset,
                                           GLsizei size, void *data) {
  glad_glGetNamedBufferSubData(buffer, offset, size, data);
}
/**
 * glGetCompressedTexImage — return a compressed texture image
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glGetCompressedTexImage and glGetnCompressedTexImage functions.
 * GL_TEXTURE_1D, GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D, GL_TEXTURE_2D_ARRAY,
 * GL_TEXTURE_3D, GL_TEXTURE_CUBE_MAP_ARRAY, GL_TEXTURE_CUBE_MAP_POSITIVE_X,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_X, GL_TEXTURE_CUBE_MAP_POSITIVE_Y,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_Y, GL_TEXTURE_CUBE_MAP_POSITIVE_Z, and
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_Z, GL_TEXTURE_RECTANGLE are accepted.
 *
 * @param [texture] Specifies the texture object name for
 * glGetCompressedTextureImage function.
 *
 * @param [level] Specifies the level-of-detail number of the desired image.
 * Level 0 is the base image level. Level $n$ is the $n$-th mipmap reduction
 * image.
 *
 * @param [bufSize] Specifies the size of the buffer pixels for
 * glGetCompressedTextureImage and glGetnCompressedTexImage functions.
 *
 * @param [pixels] Returns the compressed texture image.
 */
static inline void glGetCompressedTexImage(GLenum target, GLint level,
                                           GLvoid *pixels) {
  glad_glGetCompressedTexImage(target, level, pixels);
}
/**
 * glGetCompressedTexImage — return a compressed texture image
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glGetCompressedTexImage and glGetnCompressedTexImage functions.
 * GL_TEXTURE_1D, GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D, GL_TEXTURE_2D_ARRAY,
 * GL_TEXTURE_3D, GL_TEXTURE_CUBE_MAP_ARRAY, GL_TEXTURE_CUBE_MAP_POSITIVE_X,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_X, GL_TEXTURE_CUBE_MAP_POSITIVE_Y,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_Y, GL_TEXTURE_CUBE_MAP_POSITIVE_Z, and
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_Z, GL_TEXTURE_RECTANGLE are accepted.
 *
 * @param [texture] Specifies the texture object name for
 * glGetCompressedTextureImage function.
 *
 * @param [level] Specifies the level-of-detail number of the desired image.
 * Level 0 is the base image level. Level $n$ is the $n$-th mipmap reduction
 * image.
 *
 * @param [bufSize] Specifies the size of the buffer pixels for
 * glGetCompressedTextureImage and glGetnCompressedTexImage functions.
 *
 * @param [pixels] Returns the compressed texture image.
 */
static inline void glGetnCompressedTexImage(GLenum target, GLint level,
                                            GLsizei bufSize, void *pixels) {
  glad_glGetnCompressedTexImage(target, level, bufSize, pixels);
}
/**
 * glGetCompressedTexImage — return a compressed texture image
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glGetCompressedTexImage and glGetnCompressedTexImage functions.
 * GL_TEXTURE_1D, GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D, GL_TEXTURE_2D_ARRAY,
 * GL_TEXTURE_3D, GL_TEXTURE_CUBE_MAP_ARRAY, GL_TEXTURE_CUBE_MAP_POSITIVE_X,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_X, GL_TEXTURE_CUBE_MAP_POSITIVE_Y,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_Y, GL_TEXTURE_CUBE_MAP_POSITIVE_Z, and
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_Z, GL_TEXTURE_RECTANGLE are accepted.
 *
 * @param [texture] Specifies the texture object name for
 * glGetCompressedTextureImage function.
 *
 * @param [level] Specifies the level-of-detail number of the desired image.
 * Level 0 is the base image level. Level $n$ is the $n$-th mipmap reduction
 * image.
 *
 * @param [bufSize] Specifies the size of the buffer pixels for
 * glGetCompressedTextureImage and glGetnCompressedTexImage functions.
 *
 * @param [pixels] Returns the compressed texture image.
 */
static inline void glGetCompressedTextureImage(GLuint texture, GLint level,
                                               GLsizei bufSize, void *pixels) {
  glad_glGetCompressedTextureImage(texture, level, bufSize, pixels);
}
/**
 * glGetCompressedTextureSubImage — retrieve a sub-region of a compressed
 texture image from a compressed texture object
 *
 * @param [texture] Specifies the name of the source texture object. Must be
 GL_TEXTURE_1D, GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D, GL_TEXTURE_2D_ARRAY,
 GL_TEXTURE_3D, GL_TEXTURE_CUBE_MAP, GL_TEXTURE_CUBE_MAP_ARRAY or
 GL_TEXTURE_RECTANGLE. In specific, buffer and multisample textures are not
 permitted.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 image level. Level $n$ is the $n$th mipmap reduction image.
 *
 * @param [xoffset] Specifies a texel offset in the x direction within the
 texture array.
 *
 * @param [yoffset] Specifies a texel offset in the y direction within the
 texture array.
 *
 * @param [zoffset] Specifies a texel offset in the z direction within the
 texture array.
 *
 * @param [width] Specifies the width of the texture subimage. Must be a
 multiple of the compressed block's width, unless the offset is zero and the
 size equals the texture image size.
 *
 * @param [height] Specifies the height of the texture subimage. Must be a
 multiple of the compressed block's height, unless the offset is zero and the
 size equals the texture image size.
 *
 * @param [depth] Specifies the depth of the texture subimage. Must be a
 multiple of the compressed block's depth, unless the offset is zero and the
 size equals the texture image size.
 *
 * @param [bufSize] Specifies the size of the buffer to receive the retrieved
 pixel data.
 *
 * @param [pixels] Returns the texture subimage. Should be a pointer to an
 array of the type specified by type.
 */
static inline void glGetCompressedTextureSubImage(GLuint texture, GLint level,
                                                  GLint xoffset, GLint yoffset,
                                                  GLint zoffset, GLsizei width,
                                                  GLsizei height, GLsizei depth,
                                                  GLsizei bufSize,
                                                  void *pixels) {
  glad_glGetCompressedTextureSubImage(texture, level, xoffset, yoffset, zoffset,
                                      width, height, depth, bufSize, pixels);
}
/**
 * glGetDebugMessageLog — retrieve messages from the debug message log
 *
 * @param [count] The number of debug messages to retrieve from the log.
 *
 * @param [bufSize] The size of the buffer whose address is given by
 * messageLog.
 *
 * @param [sources] The address of an array of variables to receive the
 * sources of the retrieved messages.
 *
 * @param [types] The address of an array of variables to receive the types of
 * the retrieved messages.
 *
 * @param [ids] The address of an array of unsigned integers to receive the
 * ids of the retrieved messages.
 *
 * @param [severities] The address of an array of variables to receive the
 * severites of the retrieved messages.
 *
 * @param [lengths] The address of an array of variables to receive the
 * lengths of the received messages.
 *
 * @param [messageLog] The address of an array of characters that will receive
 * the messages.
 */
static inline GLuint glGetDebugMessageLog(GLuint count, GLsizei bufSize,
                                          GLenum *sources, GLenum *types,
                                          GLuint *ids, GLenum *severities,
                                          GLsizei *lengths,
                                          GLchar *messageLog) {
  return glad_glGetDebugMessageLog(count, bufSize, sources, types, ids,
                                   severities, lengths, messageLog);
}
/**
 * glGetError — return error information
 */
static inline GLenum glGetError(void) { return glad_glGetError(); }
/**
 * glGetFragDataIndex — query the bindings of color indices to user-defined
 * varying out variables
 *
 * @param [program] The name of the program containing varying out variable
 * whose binding to query
 *
 * @param [name] The name of the user-defined varying out variable whose index
 * to query
 */
static inline GLint glGetFragDataIndex(GLuint program, const char *name) {
  return glad_glGetFragDataIndex(program, name);
}
/**
 * glGetFragDataLocation — query the bindings of color numbers to user-defined
 * varying out variables
 *
 * @param [program] The name of the program containing varying out variable
 * whose binding to query
 *
 * @param [name] The name of the user-defined varying out variable whose
 * binding to query
 */
static inline GLint glGetFragDataLocation(GLuint program, const char *name) {
  return glad_glGetFragDataLocation(program, name);
}
/**
 * glGetFramebufferAttachmentParameteriv,
 * glGetNamedFramebufferAttachmentParameteriv — retrieve information about
 * attachments of a framebuffer object
 *
 * @param [target] Specifies the target to which the framebuffer object is
 * bound for glGetFramebufferAttachmentParameteriv.
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glGetNamedFramebufferAttachmentParameteriv.
 *
 * @param [attachment] Specifies the attachment of the framebuffer object to
 * query.
 *
 * @param [pname] Specifies the parameter of attachment to query.
 *
 * @param [params] Returns the value of parameter pname for attachment.
 */
static inline void glGetFramebufferAttachmentParameteriv(GLenum target,
                                                         GLenum attachment,
                                                         GLenum pname,
                                                         GLint *params) {
  glad_glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}
/**
 * glGetFramebufferAttachmentParameteriv,
 * glGetNamedFramebufferAttachmentParameteriv — retrieve information about
 * attachments of a framebuffer object
 *
 * @param [target] Specifies the target to which the framebuffer object is
 * bound for glGetFramebufferAttachmentParameteriv.
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glGetNamedFramebufferAttachmentParameteriv.
 *
 * @param [attachment] Specifies the attachment of the framebuffer object to
 * query.
 *
 * @param [pname] Specifies the parameter of attachment to query.
 *
 * @param [params] Returns the value of parameter pname for attachment.
 */
static inline void glGetNamedFramebufferAttachmentParameteriv(
    GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params) {
  glad_glGetNamedFramebufferAttachmentParameteriv(framebuffer, attachment,
                                                  pname, params);
}
/**
 * glGetFramebufferParameteriv, glGetNamedFramebufferParameteriv — query a
 * named parameter of a framebuffer object
 *
 * @param [target] Specifies the target to which the framebuffer object is
 * bound for glGetFramebufferParameteriv.
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glGetNamedFramebufferParameteriv.
 *
 * @param [pname] Specifies the parameter of the framebuffer object to query.
 *
 * @param [params] Returns the value of parameter pname for the framebuffer
 * object.
 */
static inline void glGetFramebufferParameteriv(GLenum target, GLenum pname,
                                               GLint *params) {
  glad_glGetFramebufferParameteriv(target, pname, params);
}
/**
 * glGetFramebufferParameteriv, glGetNamedFramebufferParameteriv — query a
 * named parameter of a framebuffer object
 *
 * @param [target] Specifies the target to which the framebuffer object is
 * bound for glGetFramebufferParameteriv.
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glGetNamedFramebufferParameteriv.
 *
 * @param [pname] Specifies the parameter of the framebuffer object to query.
 *
 * @param [params] Returns the value of parameter pname for the framebuffer
 * object.
 */
static inline void glGetNamedFramebufferParameteriv(GLuint framebuffer,
                                                    GLenum pname,
                                                    GLint *param) {
  glad_glGetNamedFramebufferParameteriv(framebuffer, pname, param);
}
/**
 * glGetGraphicsResetStatus — check if the rendering context has not been lost
 * due to software or hardware issues
 */
static inline GLenum glGetGraphicsResetStatus(void) {
  return glad_glGetGraphicsResetStatus();
}
/**
 * glGetInternalformat — retrieve information about implementation-dependent
 * support for internal formats
 *
 * @param [target] Indicates the usage of the internal format. target must be
 * GL_TEXTURE_1D, GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D, GL_TEXTURE_2D_ARRAY,
 * GL_TEXTURE_3D, GL_TEXTURE_CUBE_MAP, GL_TEXTURE_CUBE_MAP_ARRAY,
 * GL_TEXTURE_RECTANGLE, GL_TEXTURE_BUFFER, GL_RENDERBUFFER,
 * GL_TEXTURE_2D_MULTISAMPLE or GL_TEXTURE_2D_MULTISAMPLE_ARRAY.
 *
 * @param [internalformat] Specifies the internal format about which to
 * retrieve information.
 *
 * @param [pname] Specifies the type of information to query.
 *
 * @param [bufSize] Specifies the maximum number of basic machine units that
 * may be written to params by the function.
 *
 * @param [params] Specifies the address of a variable into which to write the
 * retrieved information.
 */
static inline void glGetInternalformativ(GLenum target, GLenum internalformat,
                                         GLenum pname, GLsizei bufSize,
                                         GLint *params) {
  glad_glGetInternalformativ(target, internalformat, pname, bufSize, params);
}
/**
 * glGetInternalformat — retrieve information about implementation-dependent
 * support for internal formats
 *
 * @param [target] Indicates the usage of the internal format. target must be
 * GL_TEXTURE_1D, GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D, GL_TEXTURE_2D_ARRAY,
 * GL_TEXTURE_3D, GL_TEXTURE_CUBE_MAP, GL_TEXTURE_CUBE_MAP_ARRAY,
 * GL_TEXTURE_RECTANGLE, GL_TEXTURE_BUFFER, GL_RENDERBUFFER,
 * GL_TEXTURE_2D_MULTISAMPLE or GL_TEXTURE_2D_MULTISAMPLE_ARRAY.
 *
 * @param [internalformat] Specifies the internal format about which to
 * retrieve information.
 *
 * @param [pname] Specifies the type of information to query.
 *
 * @param [bufSize] Specifies the maximum number of basic machine units that
 * may be written to params by the function.
 *
 * @param [params] Specifies the address of a variable into which to write the
 * retrieved information.
 */
static inline void glGetInternalformati64v(GLenum target, GLenum internalformat,
                                           GLenum pname, GLsizei bufSize,
                                           GLint64 *params) {
  glad_glGetInternalformati64v(target, internalformat, pname, bufSize, params);
}
/**
 * glGetMultisamplefv — retrieve the location of a sample
 *
 * @param [pname] Specifies the sample parameter name. pname must be
 * GL_SAMPLE_POSITION.
 *
 * @param [index] Specifies the index of the sample whose position to query.
 *
 * @param [val] Specifies the address of an array to receive the position of
 * the sample.
 */
static inline void glGetMultisamplefv(GLenum pname, GLuint index,
                                      GLfloat *val) {
  glad_glGetMultisamplefv(pname, index, val);
}
/**
 * glGetObjectLabel — retrieve the label of a named object identified within a
 * namespace
 *
 * @param [identifier] The namespace from which the name of the object is
 * allocated.
 *
 * @param [name] The name of the object whose label to retrieve.
 *
 * @param [bufSize] The length of the buffer whose address is in label.
 *
 * @param [length] The address of a variable to receive the length of the
 * object label.
 *
 * @param [label] The address of a string that will receive the object label.
 */
static inline void glGetObjectLabel(GLenum identifier, GLuint name,
                                    GLsizei bifSize, GLsizei *length,
                                    char *label) {
  glad_glGetObjectLabel(identifier, name, bifSize, length, label);
}
/**
 * glGetObjectPtrLabel — retrieve the label of a sync object identified by a
 * pointer
 *
 * @param [ptr] The name of the sync object whose label to retrieve.
 *
 * @param [bufSize] The length of the buffer whose address is in label.
 *
 * @param [length] The address of a variable to receive the length of the
 * object label.
 *
 * @param [label] The address of a string that will receive the object label.
 */
static inline void glGetObjectPtrLabel(void *ptr, GLsizei bifSize,
                                       GLsizei *length, char *label) {
  glad_glGetObjectPtrLabel(ptr, bifSize, length, label);
}
/**
 * glGetPointerv — return the address of the specified pointer
 *
 * @param [pname] Specifies the pointer to be returned. Must be one of
 * GL_DEBUG_CALLBACK_FUNCTION or GL_DEBUG_CALLBACK_USER_PARAM.
 *
 * @param [params] Returns the pointer value specified by pname.
 */
static inline void glGetPointerv(GLenum pname, GLvoid **params) {
  glad_glGetPointerv(pname, params);
}
/**
 * glGetProgramiv — Returns a parameter from a program object
 *
 * @param [program] Specifies the program object to be queried.
 *
 * @param [pname] Specifies the object parameter. Accepted symbolic names are
 * GL_DELETE_STATUS, GL_LINK_STATUS, GL_VALIDATE_STATUS, GL_INFO_LOG_LENGTH,
 * GL_ATTACHED_SHADERS, GL_ACTIVE_ATOMIC_COUNTER_BUFFERS,
 * GL_ACTIVE_ATTRIBUTES, GL_ACTIVE_ATTRIBUTE_MAX_LENGTH, GL_ACTIVE_UNIFORMS,
 * GL_ACTIVE_UNIFORM_BLOCKS, GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH,
 * GL_ACTIVE_UNIFORM_MAX_LENGTH, GL_COMPUTE_WORK_GROUP_SIZE,
 * GL_PROGRAM_BINARY_LENGTH, GL_TRANSFORM_FEEDBACK_BUFFER_MODE,
 * GL_TRANSFORM_FEEDBACK_VARYINGS, GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH,
 * GL_GEOMETRY_VERTICES_OUT, GL_GEOMETRY_INPUT_TYPE, and
 * GL_GEOMETRY_OUTPUT_TYPE.
 *
 * @param [params] Returns the requested object parameter.
 */
static inline void glGetProgramiv(GLuint program, GLenum pname, GLint *params) {
  glad_glGetProgramiv(program, pname, params);
}
/**
 * glGetProgramBinary — return a binary representation of a program object's
 * compiled and linked executable source
 *
 * @param [program] Specifies the name of a program object whose binary
 * representation to retrieve.
 *
 * @param [bufSize] Specifies the size of the buffer whose address is given by
 * binary.
 *
 * @param [length] Specifies the address of a variable to receive the number
 * of bytes written into binary.
 *
 * @param [binaryFormat] Specifies the address of a variable to receive a
 * token indicating the format of the binary data returned by the GL.
 *
 * @param [binary] Specifies the address an array into which the GL will
 * return program's binary representation.
 */
static inline void glGetProgramBinary(GLuint program, GLsizei bufsize,
                                      GLsizei *length, GLenum *binaryFormat,
                                      void *binary) {
  glad_glGetProgramBinary(program, bufsize, length, binaryFormat, binary);
}
/**
 * glGetProgramInfoLog — Returns the information log for a program object
 *
 * @param [program] Specifies the program object whose information log is to
 * be queried.
 *
 * @param [maxLength] Specifies the size of the character buffer for storing
 * the returned information log.
 *
 * @param [length] Returns the length of the string returned in infoLog
 * (excluding the null terminator).
 *
 * @param [infoLog] Specifies an array of characters that is used to return
 * the information log.
 */
static inline void glGetProgramInfoLog(GLuint program, GLsizei maxLength,
                                       GLsizei *length, GLchar *infoLog) {
  glad_glGetProgramInfoLog(program, maxLength, length, infoLog);
}
/**
 * glGetProgramInterface — query a property of an interface in a program
 *
 * @param [program] The name of a program object whose interface to query.
 *
 * @param [programInterface] A token identifying the interface within program
 * to query.
 *
 * @param [pname] The name of the parameter within programInterface to query.
 *
 * @param [params] The address of a variable to retrieve the value of pname
 * for the program interface.
 */
static inline void glGetProgramInterfaceiv(GLuint program,
                                           GLenum programInterface,
                                           GLenum pname, GLint *params) {
  glad_glGetProgramInterfaceiv(program, programInterface, pname, params);
}
/**
 * glGetProgramPipeline — retrieve properties of a program pipeline object
 *
 * @param [pipeline] Specifies the name of a program pipeline object whose
 * parameter retrieve.
 *
 * @param [pname] Specifies the name of the parameter to retrieve.
 *
 * @param [params] Specifies the address of a variable into which will be
 * written the value or values of pname for pipeline.
 */
static inline void glGetProgramPipelineiv(GLuint pipeline, GLenum pname,
                                          GLint *params) {
  glad_glGetProgramPipelineiv(pipeline, pname, params);
}
/**
 * glGetProgramPipelineInfoLog — retrieve the info log string from a program
 * pipeline object
 *
 * @param [pipeline] Specifies the name of a program pipeline object from
 * which to retrieve the info log.
 *
 * @param [bufSize] Specifies the maximum number of characters, including the
 * null terminator, that may be written into infoLog.
 *
 * @param [length] Specifies the address of a variable into which will be
 * written the number of characters written into infoLog.
 *
 * @param [infoLog] Specifies the address of an array of characters into which
 * will be written the info log for pipeline.
 */
static inline void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize,
                                               GLsizei *length,
                                               GLchar *infoLog) {
  glad_glGetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}
/**
 * glGetProgramResource — retrieve values for multiple properties of a single
 * active resource within a program object
 *
 * @param [program] The name of a program object whose resources to query.
 *
 * @param [programInterface] A token identifying the interface within program
 * containing the resource named name.
 */
static inline void glGetProgramResourceiv(GLuint program,
                                          GLenum programInterface, GLuint index,
                                          GLsizei propCount,
                                          const GLenum *props, GLsizei bufSize,
                                          GLsizei *length, GLint *params) {
  glad_glGetProgramResourceiv(program, programInterface, index, propCount,
                              props, bufSize, length, params);
}
/**
 * glGetProgramResourceIndex — query the index of a named resource within a
 * program
 *
 * @param [program] The name of a program object whose resources to query.
 *
 * @param [programInterface] A token identifying the interface within program
 * containing the resource named name.
 *
 * @param [name] The name of the resource to query the index of.
 */
static inline GLuint glGetProgramResourceIndex(GLuint program,
                                               GLenum programInterface,
                                               const char *name) {
  return glad_glGetProgramResourceIndex(program, programInterface, name);
}
/**
 * glGetProgramResourceLocation — query the location of a named resource
 * within a program
 *
 * @param [program] The name of a program object whose resources to query.
 *
 * @param [programInterface] A token identifying the interface within program
 * containing the resource named name.
 *
 * @param [name] The name of the resource to query the location of.
 */
static inline GLint glGetProgramResourceLocation(GLuint program,
                                                 GLenum programInterface,
                                                 const char *name) {
  return glad_glGetProgramResourceLocation(program, programInterface, name);
}
/**
 * glGetProgramResourceLocationIndex — query the fragment color index of a
 * named variable within a program
 *
 * @param [program] The name of a program object whose resources to query.
 *
 * @param [programInterface] A token identifying the interface within program
 * containing the resource named name.
 *
 * @param [name] The name of the resource to query the location of.
 */
static inline GLint glGetProgramResourceLocationIndex(GLuint program,
                                                      GLenum programInterface,
                                                      const char *name) {
  return glad_glGetProgramResourceLocationIndex(program, programInterface,
                                                name);
}
/**
 * glGetProgramResourceName — query the name of an indexed resource within a
 * program
 *
 * @param [program] The name of a program object whose resources to query.
 *
 * @param [programInterface] A token identifying the interface within program
 * containing the indexed resource.
 *
 * @param [index] The index of the resource within programInterface of
 * program.
 *
 * @param [bufSize] The size of the character array whose address is given by
 * name.
 *
 * @param [length] The address of a variable which will receive the length of
 * the resource name.
 *
 * @param [name] The address of a character array into which will be written
 * the name of the resource.
 */
static inline void glGetProgramResourceName(GLuint program,
                                            GLenum programInterface,
                                            GLuint index, GLsizei bufSize,
                                            GLsizei *length, char *name) {
  glad_glGetProgramResourceName(program, programInterface, index, bufSize,
                                length, name);
}
/**
 * glGetProgramStage — retrieve properties of a program object corresponding
 * to a specified shader stage
 *
 * @param [program] Specifies the name of the program containing shader stage.
 *
 * @param [shadertype] Specifies the shader stage from which to query for the
 * subroutine parameter. shadertype must be one of GL_VERTEX_SHADER,
 * GL_TESS_CONTROL_SHADER, GL_TESS_EVALUATION_SHADER, GL_GEOMETRY_SHADER or
 * GL_FRAGMENT_SHADER.
 *
 * @param [pname] Specifies the parameter of the shader to query. pname must
 * be GL_ACTIVE_SUBROUTINE_UNIFORMS, GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS,
 * GL_ACTIVE_SUBROUTINES, GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH, or
 * GL_ACTIVE_SUBROUTINE_MAX_LENGTH.
 *
 * @param [values] Specifies the address of a variable into which the queried
 * value or values will be placed.
 */
static inline void glGetProgramStageiv(GLuint program, GLenum shadertype,
                                       GLenum pname, GLint *values) {
  glad_glGetProgramStageiv(program, shadertype, pname, values);
}
/**
 * glGetQueryIndexediv — return parameters of an indexed query object target
 *
 * @param [target] Specifies a query object target. Must be GL_SAMPLES_PASSED,
 * GL_ANY_SAMPLES_PASSED, GL_ANY_SAMPLES_PASSED_CONSERVATIVE
 * GL_PRIMITIVES_GENERATED, GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN,
 * GL_TIME_ELAPSED, or GL_TIMESTAMP.
 *
 * @param [index] Specifies the index of the query object target.
 *
 * @param [pname] Specifies the symbolic name of a query object target
 * parameter. Accepted values are GL_CURRENT_QUERY or GL_QUERY_COUNTER_BITS.
 *
 * @param [params] Returns the requested data.
 */
static inline void glGetQueryIndexediv(GLenum target, GLuint index,
                                       GLenum pname, GLint *params) {
  glad_glGetQueryIndexediv(target, index, pname, params);
}
/**
 * glGetQueryObject — return parameters of a query object
 *
 * @param [id] Specifies the name of a query object.
 *
 * @param [pname] Specifies the symbolic name of a query object parameter.
 * Accepted values are GL_QUERY_RESULT, GL_QUERY_RESULT_NO_WAIT or
 * GL_QUERY_RESULT_AVAILABLE.
 *
 * @param [params] If a buffer is bound to the GL_QUERY_RESULT_BUFFER target,
 * then params is treated as an offset to a location within that buffer's data
 * store to receive the result of the query. If no buffer is bound to
 * GL_QUERY_RESULT_BUFFER, then params is treated as an address in client
 * memory of a variable to receive the resulting data.
 */
static inline void glGetQueryObjectiv(GLuint id, GLenum pname, GLint *params) {
  glad_glGetQueryObjectiv(id, pname, params);
}
/**
 * glGetQueryObject — return parameters of a query object
 *
 * @param [id] Specifies the name of a query object.
 *
 * @param [pname] Specifies the symbolic name of a query object parameter.
 * Accepted values are GL_QUERY_RESULT, GL_QUERY_RESULT_NO_WAIT or
 * GL_QUERY_RESULT_AVAILABLE.
 *
 * @param [params] If a buffer is bound to the GL_QUERY_RESULT_BUFFER target,
 * then params is treated as an offset to a location within that buffer's data
 * store to receive the result of the query. If no buffer is bound to
 * GL_QUERY_RESULT_BUFFER, then params is treated as an address in client
 * memory of a variable to receive the resulting data.
 */
static inline void glGetQueryObjectuiv(GLuint id, GLenum pname,
                                       GLuint *params) {
  glad_glGetQueryObjectuiv(id, pname, params);
}
/**
 * glGetQueryObject — return parameters of a query object
 *
 * @param [id] Specifies the name of a query object.
 *
 * @param [pname] Specifies the symbolic name of a query object parameter.
 * Accepted values are GL_QUERY_RESULT, GL_QUERY_RESULT_NO_WAIT or
 * GL_QUERY_RESULT_AVAILABLE.
 *
 * @param [params] If a buffer is bound to the GL_QUERY_RESULT_BUFFER target,
 * then params is treated as an offset to a location within that buffer's data
 * store to receive the result of the query. If no buffer is bound to
 * GL_QUERY_RESULT_BUFFER, then params is treated as an address in client
 * memory of a variable to receive the resulting data.
 */
static inline void glGetQueryObjecti64v(GLuint id, GLenum pname,
                                        GLint64 *params) {
  glad_glGetQueryObjecti64v(id, pname, params);
}
/**
 * glGetQueryObject — return parameters of a query object
 *
 * @param [id] Specifies the name of a query object.
 *
 * @param [pname] Specifies the symbolic name of a query object parameter.
 * Accepted values are GL_QUERY_RESULT, GL_QUERY_RESULT_NO_WAIT or
 * GL_QUERY_RESULT_AVAILABLE.
 *
 * @param [params] If a buffer is bound to the GL_QUERY_RESULT_BUFFER target,
 * then params is treated as an offset to a location within that buffer's data
 * store to receive the result of the query. If no buffer is bound to
 * GL_QUERY_RESULT_BUFFER, then params is treated as an address in client
 * memory of a variable to receive the resulting data.
 */
static inline void glGetQueryObjectui64v(GLuint id, GLenum pname,
                                         GLuint64 *params) {
  glad_glGetQueryObjectui64v(id, pname, params);
}
/**
 * glGetQueryiv — return parameters of a query object target
 *
 * @param [target] Specifies a query object target. Must be GL_SAMPLES_PASSED,
 * GL_ANY_SAMPLES_PASSED, GL_ANY_SAMPLES_PASSED_CONSERVATIVE
 * GL_PRIMITIVES_GENERATED, GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN,
 * GL_TIME_ELAPSED, or GL_TIMESTAMP.
 *
 * @param [pname] Specifies the symbolic name of a query object target
 * parameter. Accepted values are GL_CURRENT_QUERY or GL_QUERY_COUNTER_BITS.
 *
 * @param [params] Returns the requested data.
 */
static inline void glGetQueryiv(GLenum target, GLenum pname, GLint *params) {
  glad_glGetQueryiv(target, pname, params);
}
/**
 * glGetRenderbufferParameteriv, glGetNamedRenderbufferParameteriv — query a
 * named parameter of a renderbuffer object
 *
 * @param [target] Specifies the target to which the renderbuffer object is
 * bound for glGetRenderbufferParameteriv. target must be GL_RENDERBUFFER.
 *
 * @param [renderbuffer] Specifies the name of the renderbuffer object for
 * glGetNamedRenderbufferParameteriv.
 *
 * @param [pname] Specifies the parameter of the renderbuffer object to query.
 *
 * @param [params] Returns the value of parameter pname for the renderbuffer
 * object.
 */
static inline void glGetRenderbufferParameteriv(GLenum target, GLenum pname,
                                                GLint *params) {
  glad_glGetRenderbufferParameteriv(target, pname, params);
}
/**
 * glGetRenderbufferParameteriv, glGetNamedRenderbufferParameteriv — query a
 * named parameter of a renderbuffer object
 *
 * @param [target] Specifies the target to which the renderbuffer object is
 * bound for glGetRenderbufferParameteriv. target must be GL_RENDERBUFFER.
 *
 * @param [renderbuffer] Specifies the name of the renderbuffer object for
 * glGetNamedRenderbufferParameteriv.
 *
 * @param [pname] Specifies the parameter of the renderbuffer object to query.
 *
 * @param [params] Returns the value of parameter pname for the renderbuffer
 * object.
 */
static inline void glGetNamedRenderbufferParameteriv(GLuint renderbuffer,
                                                     GLenum pname,
                                                     GLint *params) {
  glad_glGetNamedRenderbufferParameteriv(renderbuffer, pname, params);
}
/**
 * glGetSamplerParameter — return sampler parameter values
 *
 * @param [sampler] Specifies name of the sampler object from which to
 * retrieve parameters.
 *
 * @param [pname] Specifies the symbolic name of a sampler parameter.
 * GL_TEXTURE_MAG_FILTER, GL_TEXTURE_MIN_FILTER, GL_TEXTURE_MIN_LOD,
 * GL_TEXTURE_MAX_LOD, GL_TEXTURE_LOD_BIAS, GL_TEXTURE_WRAP_S,
 * GL_TEXTURE_WRAP_T, GL_TEXTURE_WRAP_R, GL_TEXTURE_BORDER_COLOR,
 * GL_TEXTURE_COMPARE_MODE, and GL_TEXTURE_COMPARE_FUNC are accepted.
 *
 * @param [params] Returns the sampler parameters.
 */
static inline void glGetSamplerParameterfv(GLuint sampler, GLenum pname,
                                           GLfloat *params) {
  glad_glGetSamplerParameterfv(sampler, pname, params);
}
/**
 * glGetSamplerParameter — return sampler parameter values
 *
 * @param [sampler] Specifies name of the sampler object from which to
 * retrieve parameters.
 *
 * @param [pname] Specifies the symbolic name of a sampler parameter.
 * GL_TEXTURE_MAG_FILTER, GL_TEXTURE_MIN_FILTER, GL_TEXTURE_MIN_LOD,
 * GL_TEXTURE_MAX_LOD, GL_TEXTURE_LOD_BIAS, GL_TEXTURE_WRAP_S,
 * GL_TEXTURE_WRAP_T, GL_TEXTURE_WRAP_R, GL_TEXTURE_BORDER_COLOR,
 * GL_TEXTURE_COMPARE_MODE, and GL_TEXTURE_COMPARE_FUNC are accepted.
 *
 * @param [params] Returns the sampler parameters.
 */
static inline void glGetSamplerParameteriv(GLuint sampler, GLenum pname,
                                           GLint *params) {
  glad_glGetSamplerParameteriv(sampler, pname, params);
}
/**
 * glGetSamplerParameter — return sampler parameter values
 *
 * @param [sampler] Specifies name of the sampler object from which to
 * retrieve parameters.
 *
 * @param [pname] Specifies the symbolic name of a sampler parameter.
 * GL_TEXTURE_MAG_FILTER, GL_TEXTURE_MIN_FILTER, GL_TEXTURE_MIN_LOD,
 * GL_TEXTURE_MAX_LOD, GL_TEXTURE_LOD_BIAS, GL_TEXTURE_WRAP_S,
 * GL_TEXTURE_WRAP_T, GL_TEXTURE_WRAP_R, GL_TEXTURE_BORDER_COLOR,
 * GL_TEXTURE_COMPARE_MODE, and GL_TEXTURE_COMPARE_FUNC are accepted.
 *
 * @param [params] Returns the sampler parameters.
 */
static inline void glGetSamplerParameterIiv(GLuint sampler, GLenum pname,
                                            GLint *params) {
  glad_glGetSamplerParameterIiv(sampler, pname, params);
}
/**
 * glGetSamplerParameter — return sampler parameter values
 *
 * @param [sampler] Specifies name of the sampler object from which to
 * retrieve parameters.
 *
 * @param [pname] Specifies the symbolic name of a sampler parameter.
 * GL_TEXTURE_MAG_FILTER, GL_TEXTURE_MIN_FILTER, GL_TEXTURE_MIN_LOD,
 * GL_TEXTURE_MAX_LOD, GL_TEXTURE_LOD_BIAS, GL_TEXTURE_WRAP_S,
 * GL_TEXTURE_WRAP_T, GL_TEXTURE_WRAP_R, GL_TEXTURE_BORDER_COLOR,
 * GL_TEXTURE_COMPARE_MODE, and GL_TEXTURE_COMPARE_FUNC are accepted.
 *
 * @param [params] Returns the sampler parameters.
 */
static inline void glGetSamplerParameterIuiv(GLuint sampler, GLenum pname,
                                             GLuint *params) {
  glad_glGetSamplerParameterIuiv(sampler, pname, params);
}
/**
 * glGetShaderiv — Returns a parameter from a shader object
 *
 * @param [shader] Specifies the shader object to be queried.
 *
 * @param [pname] Specifies the object parameter. Accepted symbolic names are
 * GL_SHADER_TYPE, GL_DELETE_STATUS, GL_COMPILE_STATUS, GL_INFO_LOG_LENGTH,
 * GL_SHADER_SOURCE_LENGTH.
 *
 * @param [params] Returns the requested object parameter.
 */
static inline void glGetShaderiv(GLuint shader, GLenum pname, GLint *params) {
  glad_glGetShaderiv(shader, pname, params);
}
/**
 * glGetShaderInfoLog — Returns the information log for a shader object
 *
 * @param [shader] Specifies the shader object whose information log is to be
 * queried.
 *
 * @param [maxLength] Specifies the size of the character buffer for storing
 * the returned information log.
 *
 * @param [length] Returns the length of the string returned in infoLog
 * (excluding the null terminator).
 *
 * @param [infoLog] Specifies an array of characters that is used to return
 * the information log.
 */
static inline void glGetShaderInfoLog(GLuint shader, GLsizei maxLength,
                                      GLsizei *length, GLchar *infoLog) {
  glad_glGetShaderInfoLog(shader, maxLength, length, infoLog);
}
/**
 * glGetShaderPrecisionFormat — retrieve the range and precision for numeric
 * formats supported by the shader compiler
 *
 * @param [shaderType] Specifies the type of shader whose precision to query.
 * shaderType must be GL_VERTEX_SHADER or GL_FRAGMENT_SHADER.
 *
 * @param [precisionType] Specifies the numeric format whose precision and
 * range to query.
 *
 * @param [range] Specifies the address of array of two integers into which
 * encodings of the implementation's numeric range are returned.
 *
 * @param [precision] Specifies the address of an integer into which the
 * numeric precision of the implementation is written.
 */
static inline void glGetShaderPrecisionFormat(GLenum shaderType,
                                              GLenum precisionType,
                                              GLint *range, GLint *precision) {
  glad_glGetShaderPrecisionFormat(shaderType, precisionType, range, precision);
}
/**
 * glGetShaderSource — Returns the source code string from a shader object
 *
 * @param [shader] Specifies the shader object to be queried.
 *
 * @param [bufSize] Specifies the size of the character buffer for storing the
 * returned source code string.
 *
 * @param [length] Returns the length of the string returned in source
 * (excluding the null terminator).
 *
 * @param [source] Specifies an array of characters that is used to return the
 * source code string.
 */
static inline void glGetShaderSource(GLuint shader, GLsizei bufSize,
                                     GLsizei *length, GLchar *source) {
  glad_glGetShaderSource(shader, bufSize, length, source);
}
/**
 * glGetString — return a string describing the current GL connection
 *
 * @param [name] Specifies a symbolic constant, one of GL_VENDOR, GL_RENDERER,
 * GL_VERSION, or GL_SHADING_LANGUAGE_VERSION. Additionally, glGetStringi
 * accepts the GL_EXTENSIONS token.
 *
 * @param [index] For glGetStringi, specifies the index of the string to
 * return.
 */
static inline const GLubyte *glGetString(GLenum name) {
  return glad_glGetString(name);
}
/**
 * glGetString — return a string describing the current GL connection
 *
 * @param [name] Specifies a symbolic constant, one of GL_VENDOR, GL_RENDERER,
 * GL_VERSION, or GL_SHADING_LANGUAGE_VERSION. Additionally, glGetStringi
 * accepts the GL_EXTENSIONS token.
 *
 * @param [index] For glGetStringi, specifies the index of the string to
 * return.
 */
static inline const GLubyte *glGetStringi(GLenum name, GLuint index) {
  return glad_glGetStringi(name, index);
}
/**
 * glGetSubroutineIndex — retrieve the index of a subroutine uniform of a
 * given shader stage within a program
 *
 * @param [program] Specifies the name of the program containing shader stage.
 *
 * @param [shadertype] Specifies the shader stage from which to query for
 * subroutine uniform index. shadertype must be one of GL_VERTEX_SHADER,
 * GL_TESS_CONTROL_SHADER, GL_TESS_EVALUATION_SHADER, GL_GEOMETRY_SHADER or
 * GL_FRAGMENT_SHADER.
 *
 * @param [name] Specifies the name of the subroutine uniform whose index to
 * query.
 */
static inline GLuint glGetSubroutineIndex(GLuint program, GLenum shadertype,
                                          const GLchar *name) {
  return glad_glGetSubroutineIndex(program, shadertype, name);
}
/**
 * glGetSubroutineUniformLocation — retrieve the location of a subroutine
 * uniform of a given shader stage within a program
 *
 * @param [program] Specifies the name of the program containing shader stage.
 *
 * @param [shadertype] Specifies the shader stage from which to query for
 * subroutine uniform index. shadertype must be one of GL_VERTEX_SHADER,
 * GL_TESS_CONTROL_SHADER, GL_TESS_EVALUATION_SHADER, GL_GEOMETRY_SHADER or
 * GL_FRAGMENT_SHADER.
 *
 * @param [name] Specifies the name of the subroutine uniform whose index to
 * query.
 */
static inline GLint glGetSubroutineUniformLocation(GLuint program,
                                                   GLenum shadertype,
                                                   const GLchar *name) {
  return glad_glGetSubroutineUniformLocation(program, shadertype, name);
}
/**
 * glGetSynciv — query the properties of a sync object
 *
 * @param [sync] Specifies the sync object whose properties to query.
 *
 * @param [pname] Specifies the parameter whose value to retrieve from the
 * sync object specified in sync.
 *
 * @param [bufSize] Specifies the size of the buffer whose address is given in
 * values.
 *
 * @param [length] Specifies the address of an variable to receive the number
 * of integers placed in values.
 *
 * @param [values] Specifies the address of an array to receive the values of
 * the queried parameter.
 */
static inline void glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize,
                               GLsizei *length, GLint *values) {
  glad_glGetSynciv(sync, pname, bufSize, length, values);
}
/**
 * glGetTexImage — return a texture image
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glGetTexImage and glGetnTexImage functions. GL_TEXTURE_1D, GL_TEXTURE_2D,
 * GL_TEXTURE_3D, GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D_ARRAY,
 * GL_TEXTURE_RECTANGLE, GL_TEXTURE_CUBE_MAP_POSITIVE_X,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_X, GL_TEXTURE_CUBE_MAP_POSITIVE_Y,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_Y, GL_TEXTURE_CUBE_MAP_POSITIVE_Z,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_Z, and GL_TEXTURE_CUBE_MAP_ARRAY are
 * acceptable.
 *
 * @param [texture] Specifies the texture object name.
 *
 * @param [level] Specifies the level-of-detail number of the desired image.
 * Level 0 is the base image level. Level n is the nth mipmap reduction image.
 *
 * @param [format] Specifies a pixel format for the returned data. The
 * supported formats are GL_STENCIL_INDEX, GL_DEPTH_COMPONENT,
 * GL_DEPTH_STENCIL, GL_RED, GL_GREEN, GL_BLUE, GL_RG, GL_RGB, GL_RGBA,
 * GL_BGR, GL_BGRA, GL_RED_INTEGER, GL_GREEN_INTEGER, GL_BLUE_INTEGER,
 * GL_RG_INTEGER, GL_RGB_INTEGER, GL_RGBA_INTEGER, GL_BGR_INTEGER,
 * GL_BGRA_INTEGER.
 *
 * @param [type] Specifies a pixel type for the returned data. The supported
 * types are GL_UNSIGNED_BYTE, GL_BYTE, GL_UNSIGNED_SHORT, GL_SHORT,
 * GL_UNSIGNED_INT, GL_INT, GL_HALF_FLOAT, GL_FLOAT, GL_UNSIGNED_BYTE_3_3_2,
 * GL_UNSIGNED_BYTE_2_3_3_REV, GL_UNSIGNED_SHORT_5_6_5,
 * GL_UNSIGNED_SHORT_5_6_5_REV, GL_UNSIGNED_SHORT_4_4_4_4,
 * GL_UNSIGNED_SHORT_4_4_4_4_REV, GL_UNSIGNED_SHORT_5_5_5_1,
 * GL_UNSIGNED_SHORT_1_5_5_5_REV, GL_UNSIGNED_INT_8_8_8_8,
 * GL_UNSIGNED_INT_8_8_8_8_REV, GL_UNSIGNED_INT_10_10_10_2,
 * GL_UNSIGNED_INT_2_10_10_10_REV, GL_UNSIGNED_INT_24_8,
 * GL_UNSIGNED_INT_10F_11F_11F_REV, GL_UNSIGNED_INT_5_9_9_9_REV, and
 * GL_FLOAT_32_UNSIGNED_INT_24_8_REV.
 *
 * @param [bufSize] Specifies the size of the buffer pixels for glGetnTexImage
 * and glGetTextureImage functions.
 *
 * @param [pixels] Returns the texture image. Should be a pointer to an array
 * of the type specified by type.
 */
static inline void glGetTexImage(GLenum target, GLint level, GLenum format,
                                 GLenum type, GLvoid *pixels) {
  glad_glGetTexImage(target, level, format, type, pixels);
}
/**
 * glGetTexImage — return a texture image
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glGetTexImage and glGetnTexImage functions. GL_TEXTURE_1D, GL_TEXTURE_2D,
 * GL_TEXTURE_3D, GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D_ARRAY,
 * GL_TEXTURE_RECTANGLE, GL_TEXTURE_CUBE_MAP_POSITIVE_X,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_X, GL_TEXTURE_CUBE_MAP_POSITIVE_Y,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_Y, GL_TEXTURE_CUBE_MAP_POSITIVE_Z,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_Z, and GL_TEXTURE_CUBE_MAP_ARRAY are
 * acceptable.
 *
 * @param [texture] Specifies the texture object name.
 *
 * @param [level] Specifies the level-of-detail number of the desired image.
 * Level 0 is the base image level. Level n is the nth mipmap reduction image.
 *
 * @param [format] Specifies a pixel format for the returned data. The
 * supported formats are GL_STENCIL_INDEX, GL_DEPTH_COMPONENT,
 * GL_DEPTH_STENCIL, GL_RED, GL_GREEN, GL_BLUE, GL_RG, GL_RGB, GL_RGBA,
 * GL_BGR, GL_BGRA, GL_RED_INTEGER, GL_GREEN_INTEGER, GL_BLUE_INTEGER,
 * GL_RG_INTEGER, GL_RGB_INTEGER, GL_RGBA_INTEGER, GL_BGR_INTEGER,
 * GL_BGRA_INTEGER.
 *
 * @param [type] Specifies a pixel type for the returned data. The supported
 * types are GL_UNSIGNED_BYTE, GL_BYTE, GL_UNSIGNED_SHORT, GL_SHORT,
 * GL_UNSIGNED_INT, GL_INT, GL_HALF_FLOAT, GL_FLOAT, GL_UNSIGNED_BYTE_3_3_2,
 * GL_UNSIGNED_BYTE_2_3_3_REV, GL_UNSIGNED_SHORT_5_6_5,
 * GL_UNSIGNED_SHORT_5_6_5_REV, GL_UNSIGNED_SHORT_4_4_4_4,
 * GL_UNSIGNED_SHORT_4_4_4_4_REV, GL_UNSIGNED_SHORT_5_5_5_1,
 * GL_UNSIGNED_SHORT_1_5_5_5_REV, GL_UNSIGNED_INT_8_8_8_8,
 * GL_UNSIGNED_INT_8_8_8_8_REV, GL_UNSIGNED_INT_10_10_10_2,
 * GL_UNSIGNED_INT_2_10_10_10_REV, GL_UNSIGNED_INT_24_8,
 * GL_UNSIGNED_INT_10F_11F_11F_REV, GL_UNSIGNED_INT_5_9_9_9_REV, and
 * GL_FLOAT_32_UNSIGNED_INT_24_8_REV.
 *
 * @param [bufSize] Specifies the size of the buffer pixels for glGetnTexImage
 * and glGetTextureImage functions.
 *
 * @param [pixels] Returns the texture image. Should be a pointer to an array
 * of the type specified by type.
 */
static inline void glGetnTexImage(GLenum target, GLint level, GLenum format,
                                  GLenum type, GLsizei bufSize, void *pixels) {
  glad_glGetnTexImage(target, level, format, type, bufSize, pixels);
}
/**
 * glGetTexImage — return a texture image
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glGetTexImage and glGetnTexImage functions. GL_TEXTURE_1D, GL_TEXTURE_2D,
 * GL_TEXTURE_3D, GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D_ARRAY,
 * GL_TEXTURE_RECTANGLE, GL_TEXTURE_CUBE_MAP_POSITIVE_X,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_X, GL_TEXTURE_CUBE_MAP_POSITIVE_Y,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_Y, GL_TEXTURE_CUBE_MAP_POSITIVE_Z,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_Z, and GL_TEXTURE_CUBE_MAP_ARRAY are
 * acceptable.
 *
 * @param [texture] Specifies the texture object name.
 *
 * @param [level] Specifies the level-of-detail number of the desired image.
 * Level 0 is the base image level. Level n is the nth mipmap reduction image.
 *
 * @param [format] Specifies a pixel format for the returned data. The
 * supported formats are GL_STENCIL_INDEX, GL_DEPTH_COMPONENT,
 * GL_DEPTH_STENCIL, GL_RED, GL_GREEN, GL_BLUE, GL_RG, GL_RGB, GL_RGBA,
 * GL_BGR, GL_BGRA, GL_RED_INTEGER, GL_GREEN_INTEGER, GL_BLUE_INTEGER,
 * GL_RG_INTEGER, GL_RGB_INTEGER, GL_RGBA_INTEGER, GL_BGR_INTEGER,
 * GL_BGRA_INTEGER.
 *
 * @param [type] Specifies a pixel type for the returned data. The supported
 * types are GL_UNSIGNED_BYTE, GL_BYTE, GL_UNSIGNED_SHORT, GL_SHORT,
 * GL_UNSIGNED_INT, GL_INT, GL_HALF_FLOAT, GL_FLOAT, GL_UNSIGNED_BYTE_3_3_2,
 * GL_UNSIGNED_BYTE_2_3_3_REV, GL_UNSIGNED_SHORT_5_6_5,
 * GL_UNSIGNED_SHORT_5_6_5_REV, GL_UNSIGNED_SHORT_4_4_4_4,
 * GL_UNSIGNED_SHORT_4_4_4_4_REV, GL_UNSIGNED_SHORT_5_5_5_1,
 * GL_UNSIGNED_SHORT_1_5_5_5_REV, GL_UNSIGNED_INT_8_8_8_8,
 * GL_UNSIGNED_INT_8_8_8_8_REV, GL_UNSIGNED_INT_10_10_10_2,
 * GL_UNSIGNED_INT_2_10_10_10_REV, GL_UNSIGNED_INT_24_8,
 * GL_UNSIGNED_INT_10F_11F_11F_REV, GL_UNSIGNED_INT_5_9_9_9_REV, and
 * GL_FLOAT_32_UNSIGNED_INT_24_8_REV.
 *
 * @param [bufSize] Specifies the size of the buffer pixels for glGetnTexImage
 * and glGetTextureImage functions.
 *
 * @param [pixels] Returns the texture image. Should be a pointer to an array
 * of the type specified by type.
 */
static inline void glGetTextureImage(GLuint texture, GLint level, GLenum format,
                                     GLenum type, GLsizei bufSize,
                                     void *pixels) {
  glad_glGetTextureImage(texture, level, format, type, bufSize, pixels);
}
/**
 * glGetTexLevelParameter — return texture parameter values for a specific
 level of detail
 *
 * @param [target] Specifies the target to which the texture is bound for
 glGetTexLevelParameterfv and glGetTexLevelParameteriv functions. Must be one
 of the following values: GL_TEXTURE_1D, GL_TEXTURE_2D, GL_TEXTURE_3D,
 GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D_ARRAY, GL_TEXTURE_RECTANGLE,
 GL_TEXTURE_2D_MULTISAMPLE, GL_TEXTURE_2D_MULTISAMPLE_ARRAY,
 GL_TEXTURE_CUBE_MAP_POSITIVE_X, GL_TEXTURE_CUBE_MAP_NEGATIVE_X,
 GL_TEXTURE_CUBE_MAP_POSITIVE_Y, GL_TEXTURE_CUBE_MAP_NEGATIVE_Y,
 GL_TEXTURE_CUBE_MAP_POSITIVE_Z, GL_TEXTURE_CUBE_MAP_NEGATIVE_Z,
 GL_PROXY_TEXTURE_1D, GL_PROXY_TEXTURE_2D, GL_PROXY_TEXTURE_3D,
 GL_PROXY_TEXTURE_1D_ARRAY, GL_PROXY_TEXTURE_2D_ARRAY,
 GL_PROXY_TEXTURE_RECTANGLE, GL_PROXY_TEXTURE_2D_MULTISAMPLE,
 GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY, GL_PROXY_TEXTURE_CUBE_MAP, or
 GL_TEXTURE_BUFFER.
 *
 * @param [texture] Specifies the texture object name for
 glGetTextureLevelParameterfv and glGetTextureLevelParameteriv functions.
 *
 * @param [level] Specifies the level-of-detail number of the desired image.
 Level 0 is the base image level. Level n is the nth mipmap reduction image.
 *
 * @param [pname] Specifies the symbolic name of a texture parameter.
 GL_TEXTURE_WIDTH, GL_TEXTURE_HEIGHT, GL_TEXTURE_DEPTH,
 GL_TEXTURE_INTERNAL_FORMAT, GL_TEXTURE_RED_SIZE, GL_TEXTURE_GREEN_SIZE,
 GL_TEXTURE_BLUE_SIZE, GL_TEXTURE_ALPHA_SIZE, GL_TEXTURE_DEPTH_SIZE,
 GL_TEXTURE_COMPRESSED, GL_TEXTURE_COMPRESSED_IMAGE_SIZE, and
 GL_TEXTURE_BUFFER_OFFSET are accepted.
 *
 * @param [params] Returns the requested data.
 */
static inline void glGetTexLevelParameterfv(GLenum target, GLint level,
                                            GLenum pname, GLfloat *params) {
  glad_glGetTexLevelParameterfv(target, level, pname, params);
}
/**
 * glGetTexLevelParameter — return texture parameter values for a specific
 level of detail
 *
 * @param [target] Specifies the target to which the texture is bound for
 glGetTexLevelParameterfv and glGetTexLevelParameteriv functions. Must be one
 of the following values: GL_TEXTURE_1D, GL_TEXTURE_2D, GL_TEXTURE_3D,
 GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D_ARRAY, GL_TEXTURE_RECTANGLE,
 GL_TEXTURE_2D_MULTISAMPLE, GL_TEXTURE_2D_MULTISAMPLE_ARRAY,
 GL_TEXTURE_CUBE_MAP_POSITIVE_X, GL_TEXTURE_CUBE_MAP_NEGATIVE_X,
 GL_TEXTURE_CUBE_MAP_POSITIVE_Y, GL_TEXTURE_CUBE_MAP_NEGATIVE_Y,
 GL_TEXTURE_CUBE_MAP_POSITIVE_Z, GL_TEXTURE_CUBE_MAP_NEGATIVE_Z,
 GL_PROXY_TEXTURE_1D, GL_PROXY_TEXTURE_2D, GL_PROXY_TEXTURE_3D,
 GL_PROXY_TEXTURE_1D_ARRAY, GL_PROXY_TEXTURE_2D_ARRAY,
 GL_PROXY_TEXTURE_RECTANGLE, GL_PROXY_TEXTURE_2D_MULTISAMPLE,
 GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY, GL_PROXY_TEXTURE_CUBE_MAP, or
 GL_TEXTURE_BUFFER.
 *
 * @param [texture] Specifies the texture object name for
 glGetTextureLevelParameterfv and glGetTextureLevelParameteriv functions.
 *
 * @param [level] Specifies the level-of-detail number of the desired image.
 Level 0 is the base image level. Level n is the nth mipmap reduction image.
 *
 * @param [pname] Specifies the symbolic name of a texture parameter.
 GL_TEXTURE_WIDTH, GL_TEXTURE_HEIGHT, GL_TEXTURE_DEPTH,
 GL_TEXTURE_INTERNAL_FORMAT, GL_TEXTURE_RED_SIZE, GL_TEXTURE_GREEN_SIZE,
 GL_TEXTURE_BLUE_SIZE, GL_TEXTURE_ALPHA_SIZE, GL_TEXTURE_DEPTH_SIZE,
 GL_TEXTURE_COMPRESSED, GL_TEXTURE_COMPRESSED_IMAGE_SIZE, and
 GL_TEXTURE_BUFFER_OFFSET are accepted.
 *
 * @param [params] Returns the requested data.
 */
static inline void glGetTexLevelParameteriv(GLenum target, GLint level,
                                            GLenum pname, GLint *params) {
  glad_glGetTexLevelParameteriv(target, level, pname, params);
}
/**
 * glGetTexLevelParameter — return texture parameter values for a specific
 level of detail
 *
 * @param [target] Specifies the target to which the texture is bound for
 glGetTexLevelParameterfv and glGetTexLevelParameteriv functions. Must be one
 of the following values: GL_TEXTURE_1D, GL_TEXTURE_2D, GL_TEXTURE_3D,
 GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D_ARRAY, GL_TEXTURE_RECTANGLE,
 GL_TEXTURE_2D_MULTISAMPLE, GL_TEXTURE_2D_MULTISAMPLE_ARRAY,
 GL_TEXTURE_CUBE_MAP_POSITIVE_X, GL_TEXTURE_CUBE_MAP_NEGATIVE_X,
 GL_TEXTURE_CUBE_MAP_POSITIVE_Y, GL_TEXTURE_CUBE_MAP_NEGATIVE_Y,
 GL_TEXTURE_CUBE_MAP_POSITIVE_Z, GL_TEXTURE_CUBE_MAP_NEGATIVE_Z,
 GL_PROXY_TEXTURE_1D, GL_PROXY_TEXTURE_2D, GL_PROXY_TEXTURE_3D,
 GL_PROXY_TEXTURE_1D_ARRAY, GL_PROXY_TEXTURE_2D_ARRAY,
 GL_PROXY_TEXTURE_RECTANGLE, GL_PROXY_TEXTURE_2D_MULTISAMPLE,
 GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY, GL_PROXY_TEXTURE_CUBE_MAP, or
 GL_TEXTURE_BUFFER.
 *
 * @param [texture] Specifies the texture object name for
 glGetTextureLevelParameterfv and glGetTextureLevelParameteriv functions.
 *
 * @param [level] Specifies the level-of-detail number of the desired image.
 Level 0 is the base image level. Level n is the nth mipmap reduction image.
 *
 * @param [pname] Specifies the symbolic name of a texture parameter.
 GL_TEXTURE_WIDTH, GL_TEXTURE_HEIGHT, GL_TEXTURE_DEPTH,
 GL_TEXTURE_INTERNAL_FORMAT, GL_TEXTURE_RED_SIZE, GL_TEXTURE_GREEN_SIZE,
 GL_TEXTURE_BLUE_SIZE, GL_TEXTURE_ALPHA_SIZE, GL_TEXTURE_DEPTH_SIZE,
 GL_TEXTURE_COMPRESSED, GL_TEXTURE_COMPRESSED_IMAGE_SIZE, and
 GL_TEXTURE_BUFFER_OFFSET are accepted.
 *
 * @param [params] Returns the requested data.
 */
static inline void glGetTextureLevelParameterfv(GLuint texture, GLint level,
                                                GLenum pname, GLfloat *params) {
  glad_glGetTextureLevelParameterfv(texture, level, pname, params);
}
/**
 * glGetTexLevelParameter — return texture parameter values for a specific
 level of detail
 *
 * @param [target] Specifies the target to which the texture is bound for
 glGetTexLevelParameterfv and glGetTexLevelParameteriv functions. Must be one
 of the following values: GL_TEXTURE_1D, GL_TEXTURE_2D, GL_TEXTURE_3D,
 GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D_ARRAY, GL_TEXTURE_RECTANGLE,
 GL_TEXTURE_2D_MULTISAMPLE, GL_TEXTURE_2D_MULTISAMPLE_ARRAY,
 GL_TEXTURE_CUBE_MAP_POSITIVE_X, GL_TEXTURE_CUBE_MAP_NEGATIVE_X,
 GL_TEXTURE_CUBE_MAP_POSITIVE_Y, GL_TEXTURE_CUBE_MAP_NEGATIVE_Y,
 GL_TEXTURE_CUBE_MAP_POSITIVE_Z, GL_TEXTURE_CUBE_MAP_NEGATIVE_Z,
 GL_PROXY_TEXTURE_1D, GL_PROXY_TEXTURE_2D, GL_PROXY_TEXTURE_3D,
 GL_PROXY_TEXTURE_1D_ARRAY, GL_PROXY_TEXTURE_2D_ARRAY,
 GL_PROXY_TEXTURE_RECTANGLE, GL_PROXY_TEXTURE_2D_MULTISAMPLE,
 GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY, GL_PROXY_TEXTURE_CUBE_MAP, or
 GL_TEXTURE_BUFFER.
 *
 * @param [texture] Specifies the texture object name for
 glGetTextureLevelParameterfv and glGetTextureLevelParameteriv functions.
 *
 * @param [level] Specifies the level-of-detail number of the desired image.
 Level 0 is the base image level. Level n is the nth mipmap reduction image.
 *
 * @param [pname] Specifies the symbolic name of a texture parameter.
 GL_TEXTURE_WIDTH, GL_TEXTURE_HEIGHT, GL_TEXTURE_DEPTH,
 GL_TEXTURE_INTERNAL_FORMAT, GL_TEXTURE_RED_SIZE, GL_TEXTURE_GREEN_SIZE,
 GL_TEXTURE_BLUE_SIZE, GL_TEXTURE_ALPHA_SIZE, GL_TEXTURE_DEPTH_SIZE,
 GL_TEXTURE_COMPRESSED, GL_TEXTURE_COMPRESSED_IMAGE_SIZE, and
 GL_TEXTURE_BUFFER_OFFSET are accepted.
 *
 * @param [params] Returns the requested data.
 */
static inline void glGetTextureLevelParameteriv(GLuint texture, GLint level,
                                                GLenum pname, GLint *params) {
  glad_glGetTextureLevelParameteriv(texture, level, pname, params);
}
/**
 * glGetTexParameter — return texture parameter values
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glGetTexParameterfv, glGetTexParameteriv, glGetTexParameterIiv, and
 * glGetTexParameterIuiv functions. GL_TEXTURE_1D, GL_TEXTURE_1D_ARRAY,
 * GL_TEXTURE_2D, GL_TEXTURE_2D_ARRAY, GL_TEXTURE_2D_MULTISAMPLE,
 * GL_TEXTURE_2D_MULTISAMPLE_ARRAY, GL_TEXTURE_3D, GL_TEXTURE_CUBE_MAP,
 * GL_TEXTURE_RECTANGLE, and GL_TEXTURE_CUBE_MAP_ARRAY are accepted.
 *
 * @param [texture] Specifies the texture object name for
 * glGetTextureParameterfv, glGetTextureParameteriv, glGetTextureParameterIiv,
 * and glGetTextureParameterIuiv functions.
 *
 * @param [pname] Specifies the symbolic name of a texture parameter.
 * GL_DEPTH_STENCIL_TEXTURE_MODE, GL_IMAGE_FORMAT_COMPATIBILITY_TYPE,
 * GL_TEXTURE_BASE_LEVEL, GL_TEXTURE_BORDER_COLOR, GL_TEXTURE_COMPARE_MODE,
 * GL_TEXTURE_COMPARE_FUNC, GL_TEXTURE_IMMUTABLE_FORMAT,
 * GL_TEXTURE_IMMUTABLE_LEVELS, GL_TEXTURE_LOD_BIAS, GL_TEXTURE_MAG_FILTER,
 * GL_TEXTURE_MAX_LEVEL, GL_TEXTURE_MAX_LOD, GL_TEXTURE_MIN_FILTER,
 * GL_TEXTURE_MIN_LOD, GL_TEXTURE_SWIZZLE_R, GL_TEXTURE_SWIZZLE_G,
 * GL_TEXTURE_SWIZZLE_B, GL_TEXTURE_SWIZZLE_A, GL_TEXTURE_SWIZZLE_RGBA,
 * GL_TEXTURE_TARGET, GL_TEXTURE_VIEW_MIN_LAYER, GL_TEXTURE_VIEW_MIN_LEVEL,
 * GL_TEXTURE_VIEW_NUM_LAYERS, GL_TEXTURE_VIEW_NUM_LEVELS, GL_TEXTURE_WRAP_S,
 * GL_TEXTURE_WRAP_T, and GL_TEXTURE_WRAP_R are accepted.
 *
 * @param [params] Returns the texture parameters.
 */
static inline void glGetTexParameterfv(GLenum target, GLenum pname,
                                       GLfloat *params) {
  glad_glGetTexParameterfv(target, pname, params);
}
/**
 * glGetTexParameter — return texture parameter values
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glGetTexParameterfv, glGetTexParameteriv, glGetTexParameterIiv, and
 * glGetTexParameterIuiv functions. GL_TEXTURE_1D, GL_TEXTURE_1D_ARRAY,
 * GL_TEXTURE_2D, GL_TEXTURE_2D_ARRAY, GL_TEXTURE_2D_MULTISAMPLE,
 * GL_TEXTURE_2D_MULTISAMPLE_ARRAY, GL_TEXTURE_3D, GL_TEXTURE_CUBE_MAP,
 * GL_TEXTURE_RECTANGLE, and GL_TEXTURE_CUBE_MAP_ARRAY are accepted.
 *
 * @param [texture] Specifies the texture object name for
 * glGetTextureParameterfv, glGetTextureParameteriv, glGetTextureParameterIiv,
 * and glGetTextureParameterIuiv functions.
 *
 * @param [pname] Specifies the symbolic name of a texture parameter.
 * GL_DEPTH_STENCIL_TEXTURE_MODE, GL_IMAGE_FORMAT_COMPATIBILITY_TYPE,
 * GL_TEXTURE_BASE_LEVEL, GL_TEXTURE_BORDER_COLOR, GL_TEXTURE_COMPARE_MODE,
 * GL_TEXTURE_COMPARE_FUNC, GL_TEXTURE_IMMUTABLE_FORMAT,
 * GL_TEXTURE_IMMUTABLE_LEVELS, GL_TEXTURE_LOD_BIAS, GL_TEXTURE_MAG_FILTER,
 * GL_TEXTURE_MAX_LEVEL, GL_TEXTURE_MAX_LOD, GL_TEXTURE_MIN_FILTER,
 * GL_TEXTURE_MIN_LOD, GL_TEXTURE_SWIZZLE_R, GL_TEXTURE_SWIZZLE_G,
 * GL_TEXTURE_SWIZZLE_B, GL_TEXTURE_SWIZZLE_A, GL_TEXTURE_SWIZZLE_RGBA,
 * GL_TEXTURE_TARGET, GL_TEXTURE_VIEW_MIN_LAYER, GL_TEXTURE_VIEW_MIN_LEVEL,
 * GL_TEXTURE_VIEW_NUM_LAYERS, GL_TEXTURE_VIEW_NUM_LEVELS, GL_TEXTURE_WRAP_S,
 * GL_TEXTURE_WRAP_T, and GL_TEXTURE_WRAP_R are accepted.
 *
 * @param [params] Returns the texture parameters.
 */
static inline void glGetTexParameteriv(GLenum target, GLenum pname,
                                       GLint *params) {
  glad_glGetTexParameteriv(target, pname, params);
}
/**
 * glGetTexParameter — return texture parameter values
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glGetTexParameterfv, glGetTexParameteriv, glGetTexParameterIiv, and
 * glGetTexParameterIuiv functions. GL_TEXTURE_1D, GL_TEXTURE_1D_ARRAY,
 * GL_TEXTURE_2D, GL_TEXTURE_2D_ARRAY, GL_TEXTURE_2D_MULTISAMPLE,
 * GL_TEXTURE_2D_MULTISAMPLE_ARRAY, GL_TEXTURE_3D, GL_TEXTURE_CUBE_MAP,
 * GL_TEXTURE_RECTANGLE, and GL_TEXTURE_CUBE_MAP_ARRAY are accepted.
 *
 * @param [texture] Specifies the texture object name for
 * glGetTextureParameterfv, glGetTextureParameteriv, glGetTextureParameterIiv,
 * and glGetTextureParameterIuiv functions.
 *
 * @param [pname] Specifies the symbolic name of a texture parameter.
 * GL_DEPTH_STENCIL_TEXTURE_MODE, GL_IMAGE_FORMAT_COMPATIBILITY_TYPE,
 * GL_TEXTURE_BASE_LEVEL, GL_TEXTURE_BORDER_COLOR, GL_TEXTURE_COMPARE_MODE,
 * GL_TEXTURE_COMPARE_FUNC, GL_TEXTURE_IMMUTABLE_FORMAT,
 * GL_TEXTURE_IMMUTABLE_LEVELS, GL_TEXTURE_LOD_BIAS, GL_TEXTURE_MAG_FILTER,
 * GL_TEXTURE_MAX_LEVEL, GL_TEXTURE_MAX_LOD, GL_TEXTURE_MIN_FILTER,
 * GL_TEXTURE_MIN_LOD, GL_TEXTURE_SWIZZLE_R, GL_TEXTURE_SWIZZLE_G,
 * GL_TEXTURE_SWIZZLE_B, GL_TEXTURE_SWIZZLE_A, GL_TEXTURE_SWIZZLE_RGBA,
 * GL_TEXTURE_TARGET, GL_TEXTURE_VIEW_MIN_LAYER, GL_TEXTURE_VIEW_MIN_LEVEL,
 * GL_TEXTURE_VIEW_NUM_LAYERS, GL_TEXTURE_VIEW_NUM_LEVELS, GL_TEXTURE_WRAP_S,
 * GL_TEXTURE_WRAP_T, and GL_TEXTURE_WRAP_R are accepted.
 *
 * @param [params] Returns the texture parameters.
 */
static inline void glGetTexParameterIiv(GLenum target, GLenum pname,
                                        GLint *params) {
  glad_glGetTexParameterIiv(target, pname, params);
}
/**
 * glGetTexParameter — return texture parameter values
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glGetTexParameterfv, glGetTexParameteriv, glGetTexParameterIiv, and
 * glGetTexParameterIuiv functions. GL_TEXTURE_1D, GL_TEXTURE_1D_ARRAY,
 * GL_TEXTURE_2D, GL_TEXTURE_2D_ARRAY, GL_TEXTURE_2D_MULTISAMPLE,
 * GL_TEXTURE_2D_MULTISAMPLE_ARRAY, GL_TEXTURE_3D, GL_TEXTURE_CUBE_MAP,
 * GL_TEXTURE_RECTANGLE, and GL_TEXTURE_CUBE_MAP_ARRAY are accepted.
 *
 * @param [texture] Specifies the texture object name for
 * glGetTextureParameterfv, glGetTextureParameteriv, glGetTextureParameterIiv,
 * and glGetTextureParameterIuiv functions.
 *
 * @param [pname] Specifies the symbolic name of a texture parameter.
 * GL_DEPTH_STENCIL_TEXTURE_MODE, GL_IMAGE_FORMAT_COMPATIBILITY_TYPE,
 * GL_TEXTURE_BASE_LEVEL, GL_TEXTURE_BORDER_COLOR, GL_TEXTURE_COMPARE_MODE,
 * GL_TEXTURE_COMPARE_FUNC, GL_TEXTURE_IMMUTABLE_FORMAT,
 * GL_TEXTURE_IMMUTABLE_LEVELS, GL_TEXTURE_LOD_BIAS, GL_TEXTURE_MAG_FILTER,
 * GL_TEXTURE_MAX_LEVEL, GL_TEXTURE_MAX_LOD, GL_TEXTURE_MIN_FILTER,
 * GL_TEXTURE_MIN_LOD, GL_TEXTURE_SWIZZLE_R, GL_TEXTURE_SWIZZLE_G,
 * GL_TEXTURE_SWIZZLE_B, GL_TEXTURE_SWIZZLE_A, GL_TEXTURE_SWIZZLE_RGBA,
 * GL_TEXTURE_TARGET, GL_TEXTURE_VIEW_MIN_LAYER, GL_TEXTURE_VIEW_MIN_LEVEL,
 * GL_TEXTURE_VIEW_NUM_LAYERS, GL_TEXTURE_VIEW_NUM_LEVELS, GL_TEXTURE_WRAP_S,
 * GL_TEXTURE_WRAP_T, and GL_TEXTURE_WRAP_R are accepted.
 *
 * @param [params] Returns the texture parameters.
 */
static inline void glGetTexParameterIuiv(GLenum target, GLenum pname,
                                         GLuint *params) {
  glad_glGetTexParameterIuiv(target, pname, params);
}
/**
 * glGetTexParameter — return texture parameter values
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glGetTexParameterfv, glGetTexParameteriv, glGetTexParameterIiv, and
 * glGetTexParameterIuiv functions. GL_TEXTURE_1D, GL_TEXTURE_1D_ARRAY,
 * GL_TEXTURE_2D, GL_TEXTURE_2D_ARRAY, GL_TEXTURE_2D_MULTISAMPLE,
 * GL_TEXTURE_2D_MULTISAMPLE_ARRAY, GL_TEXTURE_3D, GL_TEXTURE_CUBE_MAP,
 * GL_TEXTURE_RECTANGLE, and GL_TEXTURE_CUBE_MAP_ARRAY are accepted.
 *
 * @param [texture] Specifies the texture object name for
 * glGetTextureParameterfv, glGetTextureParameteriv, glGetTextureParameterIiv,
 * and glGetTextureParameterIuiv functions.
 *
 * @param [pname] Specifies the symbolic name of a texture parameter.
 * GL_DEPTH_STENCIL_TEXTURE_MODE, GL_IMAGE_FORMAT_COMPATIBILITY_TYPE,
 * GL_TEXTURE_BASE_LEVEL, GL_TEXTURE_BORDER_COLOR, GL_TEXTURE_COMPARE_MODE,
 * GL_TEXTURE_COMPARE_FUNC, GL_TEXTURE_IMMUTABLE_FORMAT,
 * GL_TEXTURE_IMMUTABLE_LEVELS, GL_TEXTURE_LOD_BIAS, GL_TEXTURE_MAG_FILTER,
 * GL_TEXTURE_MAX_LEVEL, GL_TEXTURE_MAX_LOD, GL_TEXTURE_MIN_FILTER,
 * GL_TEXTURE_MIN_LOD, GL_TEXTURE_SWIZZLE_R, GL_TEXTURE_SWIZZLE_G,
 * GL_TEXTURE_SWIZZLE_B, GL_TEXTURE_SWIZZLE_A, GL_TEXTURE_SWIZZLE_RGBA,
 * GL_TEXTURE_TARGET, GL_TEXTURE_VIEW_MIN_LAYER, GL_TEXTURE_VIEW_MIN_LEVEL,
 * GL_TEXTURE_VIEW_NUM_LAYERS, GL_TEXTURE_VIEW_NUM_LEVELS, GL_TEXTURE_WRAP_S,
 * GL_TEXTURE_WRAP_T, and GL_TEXTURE_WRAP_R are accepted.
 *
 * @param [params] Returns the texture parameters.
 */
static inline void glGetTextureParameterfv(GLuint texture, GLenum pname,
                                           GLfloat *params) {
  glad_glGetTextureParameterfv(texture, pname, params);
}
/**
 * glGetTexParameter — return texture parameter values
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glGetTexParameterfv, glGetTexParameteriv, glGetTexParameterIiv, and
 * glGetTexParameterIuiv functions. GL_TEXTURE_1D, GL_TEXTURE_1D_ARRAY,
 * GL_TEXTURE_2D, GL_TEXTURE_2D_ARRAY, GL_TEXTURE_2D_MULTISAMPLE,
 * GL_TEXTURE_2D_MULTISAMPLE_ARRAY, GL_TEXTURE_3D, GL_TEXTURE_CUBE_MAP,
 * GL_TEXTURE_RECTANGLE, and GL_TEXTURE_CUBE_MAP_ARRAY are accepted.
 *
 * @param [texture] Specifies the texture object name for
 * glGetTextureParameterfv, glGetTextureParameteriv, glGetTextureParameterIiv,
 * and glGetTextureParameterIuiv functions.
 *
 * @param [pname] Specifies the symbolic name of a texture parameter.
 * GL_DEPTH_STENCIL_TEXTURE_MODE, GL_IMAGE_FORMAT_COMPATIBILITY_TYPE,
 * GL_TEXTURE_BASE_LEVEL, GL_TEXTURE_BORDER_COLOR, GL_TEXTURE_COMPARE_MODE,
 * GL_TEXTURE_COMPARE_FUNC, GL_TEXTURE_IMMUTABLE_FORMAT,
 * GL_TEXTURE_IMMUTABLE_LEVELS, GL_TEXTURE_LOD_BIAS, GL_TEXTURE_MAG_FILTER,
 * GL_TEXTURE_MAX_LEVEL, GL_TEXTURE_MAX_LOD, GL_TEXTURE_MIN_FILTER,
 * GL_TEXTURE_MIN_LOD, GL_TEXTURE_SWIZZLE_R, GL_TEXTURE_SWIZZLE_G,
 * GL_TEXTURE_SWIZZLE_B, GL_TEXTURE_SWIZZLE_A, GL_TEXTURE_SWIZZLE_RGBA,
 * GL_TEXTURE_TARGET, GL_TEXTURE_VIEW_MIN_LAYER, GL_TEXTURE_VIEW_MIN_LEVEL,
 * GL_TEXTURE_VIEW_NUM_LAYERS, GL_TEXTURE_VIEW_NUM_LEVELS, GL_TEXTURE_WRAP_S,
 * GL_TEXTURE_WRAP_T, and GL_TEXTURE_WRAP_R are accepted.
 *
 * @param [params] Returns the texture parameters.
 */
static inline void glGetTextureParameteriv(GLuint texture, GLenum pname,
                                           GLint *params) {
  glad_glGetTextureParameteriv(texture, pname, params);
}
/**
 * glGetTexParameter — return texture parameter values
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glGetTexParameterfv, glGetTexParameteriv, glGetTexParameterIiv, and
 * glGetTexParameterIuiv functions. GL_TEXTURE_1D, GL_TEXTURE_1D_ARRAY,
 * GL_TEXTURE_2D, GL_TEXTURE_2D_ARRAY, GL_TEXTURE_2D_MULTISAMPLE,
 * GL_TEXTURE_2D_MULTISAMPLE_ARRAY, GL_TEXTURE_3D, GL_TEXTURE_CUBE_MAP,
 * GL_TEXTURE_RECTANGLE, and GL_TEXTURE_CUBE_MAP_ARRAY are accepted.
 *
 * @param [texture] Specifies the texture object name for
 * glGetTextureParameterfv, glGetTextureParameteriv, glGetTextureParameterIiv,
 * and glGetTextureParameterIuiv functions.
 *
 * @param [pname] Specifies the symbolic name of a texture parameter.
 * GL_DEPTH_STENCIL_TEXTURE_MODE, GL_IMAGE_FORMAT_COMPATIBILITY_TYPE,
 * GL_TEXTURE_BASE_LEVEL, GL_TEXTURE_BORDER_COLOR, GL_TEXTURE_COMPARE_MODE,
 * GL_TEXTURE_COMPARE_FUNC, GL_TEXTURE_IMMUTABLE_FORMAT,
 * GL_TEXTURE_IMMUTABLE_LEVELS, GL_TEXTURE_LOD_BIAS, GL_TEXTURE_MAG_FILTER,
 * GL_TEXTURE_MAX_LEVEL, GL_TEXTURE_MAX_LOD, GL_TEXTURE_MIN_FILTER,
 * GL_TEXTURE_MIN_LOD, GL_TEXTURE_SWIZZLE_R, GL_TEXTURE_SWIZZLE_G,
 * GL_TEXTURE_SWIZZLE_B, GL_TEXTURE_SWIZZLE_A, GL_TEXTURE_SWIZZLE_RGBA,
 * GL_TEXTURE_TARGET, GL_TEXTURE_VIEW_MIN_LAYER, GL_TEXTURE_VIEW_MIN_LEVEL,
 * GL_TEXTURE_VIEW_NUM_LAYERS, GL_TEXTURE_VIEW_NUM_LEVELS, GL_TEXTURE_WRAP_S,
 * GL_TEXTURE_WRAP_T, and GL_TEXTURE_WRAP_R are accepted.
 *
 * @param [params] Returns the texture parameters.
 */
static inline void glGetTextureParameterIiv(GLuint texture, GLenum pname,
                                            GLint *params) {
  glad_glGetTextureParameterIiv(texture, pname, params);
}
/**
 * glGetTexParameter — return texture parameter values
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glGetTexParameterfv, glGetTexParameteriv, glGetTexParameterIiv, and
 * glGetTexParameterIuiv functions. GL_TEXTURE_1D, GL_TEXTURE_1D_ARRAY,
 * GL_TEXTURE_2D, GL_TEXTURE_2D_ARRAY, GL_TEXTURE_2D_MULTISAMPLE,
 * GL_TEXTURE_2D_MULTISAMPLE_ARRAY, GL_TEXTURE_3D, GL_TEXTURE_CUBE_MAP,
 * GL_TEXTURE_RECTANGLE, and GL_TEXTURE_CUBE_MAP_ARRAY are accepted.
 *
 * @param [texture] Specifies the texture object name for
 * glGetTextureParameterfv, glGetTextureParameteriv, glGetTextureParameterIiv,
 * and glGetTextureParameterIuiv functions.
 *
 * @param [pname] Specifies the symbolic name of a texture parameter.
 * GL_DEPTH_STENCIL_TEXTURE_MODE, GL_IMAGE_FORMAT_COMPATIBILITY_TYPE,
 * GL_TEXTURE_BASE_LEVEL, GL_TEXTURE_BORDER_COLOR, GL_TEXTURE_COMPARE_MODE,
 * GL_TEXTURE_COMPARE_FUNC, GL_TEXTURE_IMMUTABLE_FORMAT,
 * GL_TEXTURE_IMMUTABLE_LEVELS, GL_TEXTURE_LOD_BIAS, GL_TEXTURE_MAG_FILTER,
 * GL_TEXTURE_MAX_LEVEL, GL_TEXTURE_MAX_LOD, GL_TEXTURE_MIN_FILTER,
 * GL_TEXTURE_MIN_LOD, GL_TEXTURE_SWIZZLE_R, GL_TEXTURE_SWIZZLE_G,
 * GL_TEXTURE_SWIZZLE_B, GL_TEXTURE_SWIZZLE_A, GL_TEXTURE_SWIZZLE_RGBA,
 * GL_TEXTURE_TARGET, GL_TEXTURE_VIEW_MIN_LAYER, GL_TEXTURE_VIEW_MIN_LEVEL,
 * GL_TEXTURE_VIEW_NUM_LAYERS, GL_TEXTURE_VIEW_NUM_LEVELS, GL_TEXTURE_WRAP_S,
 * GL_TEXTURE_WRAP_T, and GL_TEXTURE_WRAP_R are accepted.
 *
 * @param [params] Returns the texture parameters.
 */
static inline void glGetTextureParameterIuiv(GLuint texture, GLenum pname,
                                             GLuint *params) {
  glad_glGetTextureParameterIuiv(texture, pname, params);
}
/**
 * glGetTextureSubImage — retrieve a sub-region of a texture image from a
 texture object
 *
 * @param [texture] Specifies the name of the source texture object. Must be
 GL_TEXTURE_1D, GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D, GL_TEXTURE_2D_ARRAY,
 GL_TEXTURE_3D, GL_TEXTURE_CUBE_MAP, GL_TEXTURE_CUBE_MAP_ARRAY or
 GL_TEXTURE_RECTANGLE. In specific, buffer and multisample textures are not
 permitted.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 image level. Level $n$ is the $n$th mipmap reduction image.
 *
 * @param [xoffset] Specifies a texel offset in the x direction within the
 texture array.
 *
 * @param [yoffset] Specifies a texel offset in the y direction within the
 texture array.
 *
 * @param [zoffset] Specifies a texel offset in the z direction within the
 texture array.
 *
 * @param [width] Specifies the width of the texture subimage.
 *
 * @param [height] Specifies the height of the texture subimage.
 *
 * @param [depth] Specifies the depth of the texture subimage.
 *
 * @param [format] Specifies the format of the pixel data. The following
 symbolic values are accepted: GL_RED, GL_RG, GL_RGB, GL_BGR, GL_RGBA,
 GL_BGRA, GL_DEPTH_COMPONENT and GL_STENCIL_INDEX.
 *
 * @param [type] Specifies the data type of the pixel data. The following
 symbolic values are accepted: GL_UNSIGNED_BYTE, GL_BYTE, GL_UNSIGNED_SHORT,
 GL_SHORT, GL_UNSIGNED_INT, GL_INT, GL_FLOAT, GL_UNSIGNED_BYTE_3_3_2,
 GL_UNSIGNED_BYTE_2_3_3_REV, GL_UNSIGNED_SHORT_5_6_5,
 GL_UNSIGNED_SHORT_5_6_5_REV, GL_UNSIGNED_SHORT_4_4_4_4,
 GL_UNSIGNED_SHORT_4_4_4_4_REV, GL_UNSIGNED_SHORT_5_5_5_1,
 GL_UNSIGNED_SHORT_1_5_5_5_REV, GL_UNSIGNED_INT_8_8_8_8,
 GL_UNSIGNED_INT_8_8_8_8_REV, GL_UNSIGNED_INT_10_10_10_2, and
 GL_UNSIGNED_INT_2_10_10_10_REV.
 *
 * @param [bufSize] Specifies the size of the buffer to receive the retrieved
 pixel data.
 *
 * @param [pixels] Returns the texture subimage. Should be a pointer to an
 array of the type specified by type.
 */
static inline void glGetTextureSubImage(GLuint texture, GLint level,
                                        GLint xoffset, GLint yoffset,
                                        GLint zoffset, GLsizei width,
                                        GLsizei height, GLsizei depth,
                                        GLenum format, GLenum type,
                                        GLsizei bufSize, void *pixels) {
  glad_glGetTextureSubImage(texture, level, xoffset, yoffset, zoffset, width,
                            height, depth, format, type, bufSize, pixels);
}
/**
 * glGetTransformFeedbackiv — query the state of a transform feedback object.
 *
 * @param [xfb] The name of an existing transform feedback object, or zero for
 * the default transform feedback object.
 *
 * @param [pname] Property to use for the query. Must be one of the values:
 * GL_TRANSFORM_FEEDBACK_BUFFER_BINDING, GL_TRANSFORM_FEEDBACK_BUFFER_START,
 * GL_TRANSFORM_FEEDBACK_BUFFER_SIZE, GL_TRANSFORM_FEEDBACK_PAUSED,
 * GL_TRANSFORM_FEEDBACK_ACTIVE.
 *
 * @param [index] Index of the transform feedback stream (for indexed state).
 *
 * @param [param] The address of a buffer into which will be written the
 * requested state information.
 */
static inline void glGetTransformFeedbackiv(GLuint xfb, GLenum pname,
                                            GLint *param) {
  glad_glGetTransformFeedbackiv(xfb, pname, param);
}
/**
 * glGetTransformFeedbackiv — query the state of a transform feedback object.
 *
 * @param [xfb] The name of an existing transform feedback object, or zero for
 * the default transform feedback object.
 *
 * @param [pname] Property to use for the query. Must be one of the values:
 * GL_TRANSFORM_FEEDBACK_BUFFER_BINDING, GL_TRANSFORM_FEEDBACK_BUFFER_START,
 * GL_TRANSFORM_FEEDBACK_BUFFER_SIZE, GL_TRANSFORM_FEEDBACK_PAUSED,
 * GL_TRANSFORM_FEEDBACK_ACTIVE.
 *
 * @param [index] Index of the transform feedback stream (for indexed state).
 *
 * @param [param] The address of a buffer into which will be written the
 * requested state information.
 */
static inline void glGetTransformFeedbacki_v(GLuint xfb, GLenum pname,
                                             GLuint index, GLint *param) {
  glad_glGetTransformFeedbacki_v(xfb, pname, index, param);
}
/**
 * glGetTransformFeedbackiv — query the state of a transform feedback object.
 *
 * @param [xfb] The name of an existing transform feedback object, or zero for
 * the default transform feedback object.
 *
 * @param [pname] Property to use for the query. Must be one of the values:
 * GL_TRANSFORM_FEEDBACK_BUFFER_BINDING, GL_TRANSFORM_FEEDBACK_BUFFER_START,
 * GL_TRANSFORM_FEEDBACK_BUFFER_SIZE, GL_TRANSFORM_FEEDBACK_PAUSED,
 * GL_TRANSFORM_FEEDBACK_ACTIVE.
 *
 * @param [index] Index of the transform feedback stream (for indexed state).
 *
 * @param [param] The address of a buffer into which will be written the
 * requested state information.
 */
static inline void glGetTransformFeedbacki64_v(GLuint xfb, GLenum pname,
                                               GLuint index, GLint64 *param) {
  glad_glGetTransformFeedbacki64_v(xfb, pname, index, param);
}
/**
 * glGetTransformFeedbackVarying — retrieve information about varying
 * variables selected for transform feedback
 *
 * @param [program] The name of the target program object.
 *
 * @param [index] The index of the varying variable whose information to
 * retrieve.
 *
 * @param [bufSize] The maximum number of characters, including the null
 * terminator, that may be written into name.
 *
 * @param [length] The address of a variable which will receive the number of
 * characters written into name, excluding the null-terminator. If length is
 * NULL no length is returned.
 *
 * @param [size] The address of a variable that will receive the size of the
 * varying.
 *
 * @param [type] The address of a variable that will recieve the type of the
 * varying.
 *
 * @param [name] The address of a buffer into which will be written the name
 * of the varying.
 */
static inline void glGetTransformFeedbackVarying(GLuint program, GLuint index,
                                                 GLsizei bufSize,
                                                 GLsizei *length, GLsizei *size,
                                                 GLenum *type, char *name) {
  glad_glGetTransformFeedbackVarying(program, index, bufSize, length, size,
                                     type, name);
}
/**
 * glGetUniform — Returns the value of a uniform variable
 *
 * @param [program] Specifies the program object to be queried.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * queried.
 *
 * @param [bufSize] Specifies the size of the buffer params.
 *
 * @param [params] Returns the value of the specified uniform variable.
 */
static inline void glGetUniformfv(GLuint program, GLint location,
                                  GLfloat *params) {
  glad_glGetUniformfv(program, location, params);
}
/**
 * glGetUniform — Returns the value of a uniform variable
 *
 * @param [program] Specifies the program object to be queried.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * queried.
 *
 * @param [bufSize] Specifies the size of the buffer params.
 *
 * @param [params] Returns the value of the specified uniform variable.
 */
static inline void glGetUniformiv(GLuint program, GLint location,
                                  GLint *params) {
  glad_glGetUniformiv(program, location, params);
}
/**
 * glGetUniform — Returns the value of a uniform variable
 *
 * @param [program] Specifies the program object to be queried.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * queried.
 *
 * @param [bufSize] Specifies the size of the buffer params.
 *
 * @param [params] Returns the value of the specified uniform variable.
 */
static inline void glGetUniformuiv(GLuint program, GLint location,
                                   GLuint *params) {
  glad_glGetUniformuiv(program, location, params);
}
/**
 * glGetUniform — Returns the value of a uniform variable
 *
 * @param [program] Specifies the program object to be queried.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * queried.
 *
 * @param [bufSize] Specifies the size of the buffer params.
 *
 * @param [params] Returns the value of the specified uniform variable.
 */
static inline void glGetUniformdv(GLuint program, GLint location,
                                  GLdouble *params) {
  glad_glGetUniformdv(program, location, params);
}
/**
 * glGetUniform — Returns the value of a uniform variable
 *
 * @param [program] Specifies the program object to be queried.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * queried.
 *
 * @param [bufSize] Specifies the size of the buffer params.
 *
 * @param [params] Returns the value of the specified uniform variable.
 */
static inline void glGetnUniformfv(GLuint program, GLint location,
                                   GLsizei bufSize, GLfloat *params) {
  glad_glGetnUniformfv(program, location, bufSize, params);
}
/**
 * glGetUniform — Returns the value of a uniform variable
 *
 * @param [program] Specifies the program object to be queried.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * queried.
 *
 * @param [bufSize] Specifies the size of the buffer params.
 *
 * @param [params] Returns the value of the specified uniform variable.
 */
static inline void glGetnUniformiv(GLuint program, GLint location,
                                   GLsizei bufSize, GLint *params) {
  glad_glGetnUniformiv(program, location, bufSize, params);
}
/**
 * glGetUniform — Returns the value of a uniform variable
 *
 * @param [program] Specifies the program object to be queried.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * queried.
 *
 * @param [bufSize] Specifies the size of the buffer params.
 *
 * @param [params] Returns the value of the specified uniform variable.
 */
static inline void glGetnUniformuiv(GLuint program, GLint location,
                                    GLsizei bufSize, GLuint *params) {
  glad_glGetnUniformuiv(program, location, bufSize, params);
}
/**
 * glGetUniform — Returns the value of a uniform variable
 *
 * @param [program] Specifies the program object to be queried.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * queried.
 *
 * @param [bufSize] Specifies the size of the buffer params.
 *
 * @param [params] Returns the value of the specified uniform variable.
 */
static inline void glGetnUniformdv(GLuint program, GLint location,
                                   GLsizei bufSize, GLdouble *params) {
  glad_glGetnUniformdv(program, location, bufSize, params);
}
/**
 * glGetUniformBlockIndex — retrieve the index of a named uniform block
 *
 * @param [program] Specifies the name of a program containing the uniform
 * block.
 *
 * @param [uniformBlockName] Specifies the address an array of characters to
 * containing the name of the uniform block whose index to retrieve.
 */
static inline GLuint glGetUniformBlockIndex(GLuint program,
                                            const GLchar *uniformBlockName) {
  return glad_glGetUniformBlockIndex(program, uniformBlockName);
}
/**
 * glGetUniformIndices — retrieve the index of a named uniform block
 *
 * @param [program] Specifies the name of a program containing uniforms whose
 * indices to query.
 *
 * @param [uniformCount] Specifies the number of uniforms whose indices to
 * query.
 *
 * @param [uniformNames] Specifies the address of an array of pointers to
 * buffers containing the names of the queried uniforms.
 *
 * @param [uniformIndices] Specifies the address of an array that will receive
 * the indices of the uniforms.
 */
static inline void glGetUniformIndices(GLuint program, GLsizei uniformCount,
                                       const GLchar **uniformNames,
                                       GLuint *uniformIndices) {
  glad_glGetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}
/**
 * glGetUniformLocation — Returns the location of a uniform variable
 *
 * @param [program] Specifies the program object to be queried.
 *
 * @param [name] Points to a null terminated string containing the name of the
 * uniform variable whose location is to be queried.
 */
static inline GLint glGetUniformLocation(GLuint program, const GLchar *name) {
  return glad_glGetUniformLocation(program, name);
}
/**
 * glGetUniformSubroutine — retrieve the value of a subroutine uniform of a
 * given shader stage of the current program
 *
 * @param [shadertype] Specifies the shader stage from which to query for
 * subroutine uniform index. shadertype must be one of GL_VERTEX_SHADER,
 * GL_TESS_CONTROL_SHADER, GL_TESS_EVALUATION_SHADER, GL_GEOMETRY_SHADER or
 * GL_FRAGMENT_SHADER.
 *
 * @param [location] Specifies the location of the subroutine uniform.
 *
 * @param [values] Specifies the address of a variable to receive the value or
 * values of the subroutine uniform.
 */
static inline void glGetUniformSubroutineuiv(GLenum shadertype, GLint location,
                                             GLuint *values) {
  glad_glGetUniformSubroutineuiv(shadertype, location, values);
}
/**
 * glGetVertexArrayIndexed — retrieve parameters of an attribute of a vertex
 array object
 *
 * @param [vaobj] Specifies the name of a vertex array object.
 *
 * @param [index] Specifies the index of the vertex array object attribute.
 Must be a number between 0 and (GL_MAX_VERTEX_ATTRIBS - 1).
 *
 * @param [pname] Specifies the property to be used for the query. For
 glGetVertexArrayIndexediv, it must be one of the following values:
 GL_VERTEX_ATTRIB_ARRAY_ENABLED, GL_VERTEX_ATTRIB_ARRAY_SIZE,
 GL_VERTEX_ATTRIB_ARRAY_STRIDE, GL_VERTEX_ATTRIB_ARRAY_TYPE,
 GL_VERTEX_ATTRIB_ARRAY_NORMALIZED, GL_VERTEX_ATTRIB_ARRAY_INTEGER,
 GL_VERTEX_ATTRIB_ARRAY_LONG, GL_VERTEX_ATTRIB_ARRAY_DIVISOR, or
 GL_VERTEX_ATTRIB_RELATIVE_OFFSET. For glGetVertexArrayIndexed64v, it must be
 equal to GL_VERTEX_BINDING_OFFSET.
 *
 * @param [param] Returns the requested value.
 */
static inline void glGetVertexArrayIndexed64iv(GLuint vaobj, GLuint index,
                                               GLenum pname, GLint64 *param) {
  glad_glGetVertexArrayIndexed64iv(vaobj, index, pname, param);
}
/**
 * glGetVertexArrayIndexed — retrieve parameters of an attribute of a vertex
 array object
 *
 * @param [vaobj] Specifies the name of a vertex array object.
 *
 * @param [index] Specifies the index of the vertex array object attribute.
 Must be a number between 0 and (GL_MAX_VERTEX_ATTRIBS - 1).
 *
 * @param [pname] Specifies the property to be used for the query. For
 glGetVertexArrayIndexediv, it must be one of the following values:
 GL_VERTEX_ATTRIB_ARRAY_ENABLED, GL_VERTEX_ATTRIB_ARRAY_SIZE,
 GL_VERTEX_ATTRIB_ARRAY_STRIDE, GL_VERTEX_ATTRIB_ARRAY_TYPE,
 GL_VERTEX_ATTRIB_ARRAY_NORMALIZED, GL_VERTEX_ATTRIB_ARRAY_INTEGER,
 GL_VERTEX_ATTRIB_ARRAY_LONG, GL_VERTEX_ATTRIB_ARRAY_DIVISOR, or
 GL_VERTEX_ATTRIB_RELATIVE_OFFSET. For glGetVertexArrayIndexed64v, it must be
 equal to GL_VERTEX_BINDING_OFFSET.
 *
 * @param [param] Returns the requested value.
 */
static inline void glGetVertexArrayIndexediv(GLuint vaobj, GLuint index,
                                             GLenum pname, GLint *param) {
  glad_glGetVertexArrayIndexediv(vaobj, index, pname, param);
}
/**
 * glGetVertexArrayiv — retrieve parameters of a vertex array object
 *
 * @param [vaobj] specifies the name of the vertex array object to use for the
 * query.
 *
 * @param [pname] Name of the property to use for the query. Must be
 * GL_ELEMENT_ARRAY_BUFFER_BINDING.
 *
 * @param [param] Returns the requested value.
 */
static inline void glGetVertexArrayiv(GLuint vaobj, GLenum pname,
                                      GLint *param) {
  glad_glGetVertexArrayiv(vaobj, pname, param);
}
/**
 * glGetVertexAttrib — Return a generic vertex attribute parameter
 *
 * @param [index] Specifies the generic vertex attribute parameter to be
 * queried.
 *
 * @param [pname] Specifies the symbolic name of the vertex attribute
 * parameter to be queried. Accepted values are
 * GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING, GL_VERTEX_ATTRIB_ARRAY_ENABLED,
 * GL_VERTEX_ATTRIB_ARRAY_SIZE, GL_VERTEX_ATTRIB_ARRAY_STRIDE,
 * GL_VERTEX_ATTRIB_ARRAY_TYPE, GL_VERTEX_ATTRIB_ARRAY_NORMALIZED,
 * GL_VERTEX_ATTRIB_ARRAY_INTEGER, GL_VERTEX_ATTRIB_ARRAY_DIVISOR, or
 * GL_CURRENT_VERTEX_ATTRIB.
 *
 * @param [params] Returns the requested data.
 */
static inline void glGetVertexAttribdv(GLuint index, GLenum pname,
                                       GLdouble *params) {
  glad_glGetVertexAttribdv(index, pname, params);
}
/**
 * glGetVertexAttrib — Return a generic vertex attribute parameter
 *
 * @param [index] Specifies the generic vertex attribute parameter to be
 * queried.
 *
 * @param [pname] Specifies the symbolic name of the vertex attribute
 * parameter to be queried. Accepted values are
 * GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING, GL_VERTEX_ATTRIB_ARRAY_ENABLED,
 * GL_VERTEX_ATTRIB_ARRAY_SIZE, GL_VERTEX_ATTRIB_ARRAY_STRIDE,
 * GL_VERTEX_ATTRIB_ARRAY_TYPE, GL_VERTEX_ATTRIB_ARRAY_NORMALIZED,
 * GL_VERTEX_ATTRIB_ARRAY_INTEGER, GL_VERTEX_ATTRIB_ARRAY_DIVISOR, or
 * GL_CURRENT_VERTEX_ATTRIB.
 *
 * @param [params] Returns the requested data.
 */
static inline void glGetVertexAttribfv(GLuint index, GLenum pname,
                                       GLfloat *params) {
  glad_glGetVertexAttribfv(index, pname, params);
}
/**
 * glGetVertexAttrib — Return a generic vertex attribute parameter
 *
 * @param [index] Specifies the generic vertex attribute parameter to be
 * queried.
 *
 * @param [pname] Specifies the symbolic name of the vertex attribute
 * parameter to be queried. Accepted values are
 * GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING, GL_VERTEX_ATTRIB_ARRAY_ENABLED,
 * GL_VERTEX_ATTRIB_ARRAY_SIZE, GL_VERTEX_ATTRIB_ARRAY_STRIDE,
 * GL_VERTEX_ATTRIB_ARRAY_TYPE, GL_VERTEX_ATTRIB_ARRAY_NORMALIZED,
 * GL_VERTEX_ATTRIB_ARRAY_INTEGER, GL_VERTEX_ATTRIB_ARRAY_DIVISOR, or
 * GL_CURRENT_VERTEX_ATTRIB.
 *
 * @param [params] Returns the requested data.
 */
static inline void glGetVertexAttribiv(GLuint index, GLenum pname,
                                       GLint *params) {
  glad_glGetVertexAttribiv(index, pname, params);
}
/**
 * glGetVertexAttrib — Return a generic vertex attribute parameter
 *
 * @param [index] Specifies the generic vertex attribute parameter to be
 * queried.
 *
 * @param [pname] Specifies the symbolic name of the vertex attribute
 * parameter to be queried. Accepted values are
 * GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING, GL_VERTEX_ATTRIB_ARRAY_ENABLED,
 * GL_VERTEX_ATTRIB_ARRAY_SIZE, GL_VERTEX_ATTRIB_ARRAY_STRIDE,
 * GL_VERTEX_ATTRIB_ARRAY_TYPE, GL_VERTEX_ATTRIB_ARRAY_NORMALIZED,
 * GL_VERTEX_ATTRIB_ARRAY_INTEGER, GL_VERTEX_ATTRIB_ARRAY_DIVISOR, or
 * GL_CURRENT_VERTEX_ATTRIB.
 *
 * @param [params] Returns the requested data.
 */
static inline void glGetVertexAttribIiv(GLuint index, GLenum pname,
                                        GLint *params) {
  glad_glGetVertexAttribIiv(index, pname, params);
}
/**
 * glGetVertexAttrib — Return a generic vertex attribute parameter
 *
 * @param [index] Specifies the generic vertex attribute parameter to be
 * queried.
 *
 * @param [pname] Specifies the symbolic name of the vertex attribute
 * parameter to be queried. Accepted values are
 * GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING, GL_VERTEX_ATTRIB_ARRAY_ENABLED,
 * GL_VERTEX_ATTRIB_ARRAY_SIZE, GL_VERTEX_ATTRIB_ARRAY_STRIDE,
 * GL_VERTEX_ATTRIB_ARRAY_TYPE, GL_VERTEX_ATTRIB_ARRAY_NORMALIZED,
 * GL_VERTEX_ATTRIB_ARRAY_INTEGER, GL_VERTEX_ATTRIB_ARRAY_DIVISOR, or
 * GL_CURRENT_VERTEX_ATTRIB.
 *
 * @param [params] Returns the requested data.
 */
static inline void glGetVertexAttribIuiv(GLuint index, GLenum pname,
                                         GLuint *params) {
  glad_glGetVertexAttribIuiv(index, pname, params);
}
/**
 * glGetVertexAttrib — Return a generic vertex attribute parameter
 *
 * @param [index] Specifies the generic vertex attribute parameter to be
 * queried.
 *
 * @param [pname] Specifies the symbolic name of the vertex attribute
 * parameter to be queried. Accepted values are
 * GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING, GL_VERTEX_ATTRIB_ARRAY_ENABLED,
 * GL_VERTEX_ATTRIB_ARRAY_SIZE, GL_VERTEX_ATTRIB_ARRAY_STRIDE,
 * GL_VERTEX_ATTRIB_ARRAY_TYPE, GL_VERTEX_ATTRIB_ARRAY_NORMALIZED,
 * GL_VERTEX_ATTRIB_ARRAY_INTEGER, GL_VERTEX_ATTRIB_ARRAY_DIVISOR, or
 * GL_CURRENT_VERTEX_ATTRIB.
 *
 * @param [params] Returns the requested data.
 */
static inline void glGetVertexAttribLdv(GLuint index, GLenum pname,
                                        GLdouble *params) {
  glad_glGetVertexAttribLdv(index, pname, params);
}
/**
 * glGetVertexAttribPointerv — return the address of the specified generic
 * vertex attribute pointer
 *
 * @param [index] Specifies the generic vertex attribute parameter to be
 * returned.
 *
 * @param [pname] Specifies the symbolic name of the generic vertex attribute
 * parameter to be returned. Must be GL_VERTEX_ATTRIB_ARRAY_POINTER.
 *
 * @param [pointer] Returns the pointer value.
 */
static inline void glGetVertexAttribPointerv(GLuint index, GLenum pname,
                                             GLvoid **pointer) {
  glad_glGetVertexAttribPointerv(index, pname, pointer);
}
/**
 * glHint — specify implementation-specific hints
 *
 * @param [target] Specifies a symbolic constant indicating the behavior to be
 * controlled. GL_LINE_SMOOTH_HINT, GL_POLYGON_SMOOTH_HINT,
 * GL_TEXTURE_COMPRESSION_HINT, and GL_FRAGMENT_SHADER_DERIVATIVE_HINT are
 * accepted.
 *
 * @param [mode] Specifies a symbolic constant indicating the desired
 * behavior. GL_FASTEST, GL_NICEST, and GL_DONT_CARE are accepted.
 */
static inline void glHint(GLenum target, GLenum mode) {
  glad_glHint(target, mode);
}
/**
 * glInvalidateBufferData — invalidate the content of a buffer object's data
 * store
 *
 * @param [buffer] The name of a buffer object whose data store to invalidate.
 */
static inline void glInvalidateBufferData(GLuint buffer) {
  glad_glInvalidateBufferData(buffer);
}
/**
 * glInvalidateBufferSubData — invalidate a region of a buffer object's data
 * store
 *
 * @param [buffer] The name of a buffer object, a subrange of whose data store
 * to invalidate.
 *
 * @param [offset] The offset within the buffer's data store of the start of
 * the range to be invalidated.
 *
 * @param [length] The length of the range within the buffer's data store to
 * be invalidated.
 */
static inline void glInvalidateBufferSubData(GLuint buffer, GLintptr offset,
                                             GLsizeiptr length) {
  glad_glInvalidateBufferSubData(buffer, offset, length);
}
/**
 * glInvalidateFramebuffer, glInvalidateNamedFramebufferData — invalidate the
 * content of some or all of a framebuffer's attachments
 *
 * @param [target] Specifies the target to which the framebuffer object is
 * attached for glInvalidateFramebuffer.
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glInvalidateNamedFramebufferData.
 *
 * @param [numAttachments] Specifies the number of entries in the attachments
 * array.
 *
 * @param [attachments] Specifies a pointer to an array identifying the
 * attachments to be invalidated.
 */
static inline void glInvalidateFramebuffer(GLenum target,
                                           GLsizei numAttachments,
                                           const GLenum *attachments) {
  glad_glInvalidateFramebuffer(target, numAttachments, attachments);
}
/**
 * glInvalidateFramebuffer, glInvalidateNamedFramebufferData — invalidate the
 * content of some or all of a framebuffer's attachments
 *
 * @param [target] Specifies the target to which the framebuffer object is
 * attached for glInvalidateFramebuffer.
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glInvalidateNamedFramebufferData.
 *
 * @param [numAttachments] Specifies the number of entries in the attachments
 * array.
 *
 * @param [attachments] Specifies a pointer to an array identifying the
 * attachments to be invalidated.
 */
static inline void glInvalidateNamedFramebufferData(GLuint framebuffer,
                                                    GLsizei numAttachments,
                                                    const GLenum *attachments) {
  glad_glInvalidateNamedFramebufferData(framebuffer, numAttachments,
                                        attachments);
}
/**
 * glInvalidateSubFramebuffer, glInvalidateNamedFramebufferSubData —
 * invalidate the content of a region of some or all of a framebuffer's
 * attachments
 *
 * @param [target] Specifies the target to which the framebuffer object is
 * attached for glInvalidateSubFramebuffer.
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glInvalidateNamedFramebufferSubData.
 *
 * @param [numAttachments] Specifies the number of entries in the attachments
 * array.
 *
 * @param [attachments] Specifies a pointer to an array identifying the
 * attachments to be invalidated.
 *
 * @param [x] Specifies the X offset of the region to be invalidated.
 *
 * @param [y] Specifies the Y offset of the region to be invalidated.
 *
 * @param [width] Specifies the width of the region to be invalidated.
 *
 * @param [height] Specifies the height of the region to be invalidated.
 */
static inline void glInvalidateSubFramebuffer(GLenum target,
                                              GLsizei numAttachments,
                                              const GLenum *attachments,
                                              GLint x, GLint y, GLint width,
                                              GLint height) {
  glad_glInvalidateSubFramebuffer(target, numAttachments, attachments, x, y,
                                  width, height);
}
/**
 * glInvalidateSubFramebuffer, glInvalidateNamedFramebufferSubData —
 * invalidate the content of a region of some or all of a framebuffer's
 * attachments
 *
 * @param [target] Specifies the target to which the framebuffer object is
 * attached for glInvalidateSubFramebuffer.
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glInvalidateNamedFramebufferSubData.
 *
 * @param [numAttachments] Specifies the number of entries in the attachments
 * array.
 *
 * @param [attachments] Specifies a pointer to an array identifying the
 * attachments to be invalidated.
 *
 * @param [x] Specifies the X offset of the region to be invalidated.
 *
 * @param [y] Specifies the Y offset of the region to be invalidated.
 *
 * @param [width] Specifies the width of the region to be invalidated.
 *
 * @param [height] Specifies the height of the region to be invalidated.
 */
static inline void
glInvalidateNamedFramebufferSubData(GLuint framebuffer, GLsizei numAttachments,
                                    const GLenum *attachments, GLint x, GLint y,
                                    GLsizei width, GLsizei height) {
  glad_glInvalidateNamedFramebufferSubData(framebuffer, numAttachments,
                                           attachments, x, y, width, height);
}
/**
 * glInvalidateTexImage — invalidate the entirety a texture image
 *
 * @param [texture] The name of a texture object to invalidate.
 *
 * @param [level] The level of detail of the texture object to invalidate.
 */
static inline void glInvalidateTexImage(GLuint texture, GLint level) {
  glad_glInvalidateTexImage(texture, level);
}
/**
 * glInvalidateTexSubImage — invalidate a region of a texture image
 *
 * @param [texture] The name of a texture object a subregion of which to
 * invalidate.
 *
 * @param [level] The level of detail of the texture object within which the
 * region resides.
 *
 * @param [xoffset] The X offset of the region to be invalidated.
 *
 * @param [yoffset] The Y offset of the region to be invalidated.
 *
 * @param [zoffset] The Z offset of the region to be invalidated.
 *
 * @param [width] The width of the region to be invalidated.
 *
 * @param [height] The height of the region to be invalidated.
 *
 * @param [depth] The depth of the region to be invalidated.
 */
static inline void glInvalidateTexSubImage(GLuint texture, GLint level,
                                           GLint xoffset, GLint yoffset,
                                           GLint zoffset, GLsizei width,
                                           GLsizei height, GLsizei depth) {
  glad_glInvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width,
                               height, depth);
}
/**
 * glIsBuffer — determine if a name corresponds to a buffer object
 *
 * @param [buffer] Specifies a value that may be the name of a buffer object.
 */
static inline GLboolean glIsBuffer(GLuint buffer) {
  return glad_glIsBuffer(buffer);
}
/**
 * glIsEnabled, glIsEnabledi — test whether a capability is enabled
 *
 * @param [cap] Specifies a symbolic constant indicating a GL capability.
 *
 * @param [index] Specifies the index of the capability.
 */
static inline GLboolean glIsEnabled(GLenum cap) {
  return glad_glIsEnabled(cap);
}
/**
 * glIsEnabled, glIsEnabledi — test whether a capability is enabled
 *
 * @param [cap] Specifies a symbolic constant indicating a GL capability.
 *
 * @param [index] Specifies the index of the capability.
 */
static inline GLboolean glIsEnabledi(GLenum cap, GLuint index) {
  return glad_glIsEnabledi(cap, index);
}
/**
 * glIsFramebuffer — determine if a name corresponds to a framebuffer object
 *
 * @param [framebuffer] Specifies a value that may be the name of a
 * framebuffer object.
 */
static inline GLboolean glIsFramebuffer(GLuint framebuffer) {
  return glad_glIsFramebuffer(framebuffer);
}
/**
 * glIsProgram — Determines if a name corresponds to a program object
 *
 * @param [program] Specifies a potential program object.
 */
static inline GLboolean glIsProgram(GLuint program) {
  return glad_glIsProgram(program);
}
/**
 * glIsProgramPipeline — determine if a name corresponds to a program pipeline
 * object
 *
 * @param [pipeline] Specifies a value that may be the name of a program
 * pipeline object.
 */
static inline GLboolean glIsProgramPipeline(GLuint pipeline) {
  return glad_glIsProgramPipeline(pipeline);
}
/**
 * glIsQuery — determine if a name corresponds to a query object
 *
 * @param [id] Specifies a value that may be the name of a query object.
 */
static inline GLboolean glIsQuery(GLuint id) { return glad_glIsQuery(id); }
/**
 * glIsRenderbuffer — determine if a name corresponds to a renderbuffer object
 *
 * @param [renderbuffer] Specifies a value that may be the name of a
 * renderbuffer object.
 */
static inline GLboolean glIsRenderbuffer(GLuint renderbuffer) {
  return glad_glIsRenderbuffer(renderbuffer);
}
/**
 * glIsSampler — determine if a name corresponds to a sampler object
 *
 * @param [id] Specifies a value that may be the name of a sampler object.
 */
static inline GLboolean glIsSampler(GLuint id) { return glad_glIsSampler(id); }
/**
 * glIsShader — Determines if a name corresponds to a shader object
 *
 * @param [shader] Specifies a potential shader object.
 */
static inline GLboolean glIsShader(GLuint shader) {
  return glad_glIsShader(shader);
}
/**
 * glIsSync — determine if a name corresponds to a sync object
 *
 * @param [sync] Specifies a value that may be the name of a sync object.
 */
static inline GLboolean glIsSync(GLsync sync) { return glad_glIsSync(sync); }
/**
 * glIsTexture — determine if a name corresponds to a texture
 *
 * @param [texture] Specifies a value that may be the name of a texture.
 */
static inline GLboolean glIsTexture(GLuint texture) {
  return glad_glIsTexture(texture);
}
/**
 * glIsTransformFeedback — determine if a name corresponds to a transform
 * feedback object
 *
 * @param [id] Specifies a value that may be the name of a transform feedback
 * object.
 */
static inline GLboolean glIsTransformFeedback(GLuint id) {
  return glad_glIsTransformFeedback(id);
}
/**
 * glIsVertexArray — determine if a name corresponds to a vertex array object
 *
 * @param [array] Specifies a value that may be the name of a vertex array
 * object.
 */
static inline GLboolean glIsVertexArray(GLuint array) {
  return glad_glIsVertexArray(array);
}
/**
 * glLineWidth — specify the width of rasterized lines
 *
 * @param [width] Specifies the width of rasterized lines. The initial value
 * is 1.
 */
static inline void glLineWidth(GLfloat width) { glad_glLineWidth(width); }
/**
 * glLinkProgram — Links a program object
 *
 * @param [program] Specifies the handle of the program object to be linked.
 */
static inline void glLinkProgram(GLuint program) {
  glad_glLinkProgram(program);
}
/**
 * glLogicOp — specify a logical pixel operation for rendering
 *
 * @param [opcode] Specifies a symbolic constant that selects a logical
 * operation. The following symbols are accepted: GL_CLEAR, GL_SET, GL_COPY,
 * GL_COPY_INVERTED, GL_NOOP, GL_INVERT, GL_AND, GL_NAND, GL_OR, GL_NOR,
 * GL_XOR, GL_EQUIV, GL_AND_REVERSE, GL_AND_INVERTED, GL_OR_REVERSE, and
 * GL_OR_INVERTED. The initial value is GL_COPY.
 */
static inline void glLogicOp(GLenum opcode) { glad_glLogicOp(opcode); }
/**
 * glMapBuffer, glMapNamedBuffer — map all of a buffer object's data store
 * into the client's address space
 *
 * @param [target] Specifies the target to which the buffer object is bound
 * for glMapBuffer, which must be one of the buffer binding targets in the
 * following table:
 *
 * GL_ARRAY_BUFFER - Vertex attributes,
 * GL_ATOMIC_COUNTER_BUFFER - Atomic counter storage,
 * GL_COPY_READ_BUFFER - Buffer copy source,
 * GL_COPY_WRITE_BUFFER - Buffer copy destination,
 * GL_DISPATCH_INDIRECT_BUFFER - Indirect compute dispatch commands,
 * GL_DRAW_INDIRECT_BUFFER - Indirect command arguments,
 * GL_ELEMENT_ARRAY_BUFFER - Vertex array indices,
 * GL_PIXEL_PACK_BUFFER - Pixel read target,
 * GL_PIXEL_UNPACK_BUFFER - Texture data source,
 * GL_QUERY_BUFFER - Query result buffer,
 * GL_SHADER_STORAGE_BUFFER - Read-write storage for shaders,
 * GL_TEXTURE_BUFFER - Texture data buffer,
 * GL_TRANSFORM_FEEDBACK_BUFFER - Transform feedback buffer,
 * GL_UNIFORM_BUFFER - Uniform block storage,
 *
 * @param [buffer] Specifies the name of the buffer object for
 * glMapNamedBuffer.
 *
 * @param [access] Specifies the access policy for glMapBuffer and
 * glMapNamedBuffer, indicating whether it will be possible to read from,
 * write to, or both read from and write to the buffer object's mapped data
 * store. The symbolic constant must be GL_READ_ONLY, GL_WRITE_ONLY, or
 * GL_READ_WRITE.
 */
static inline void *glMapBuffer(GLenum target, GLenum access) {
  return glad_glMapBuffer(target, access);
}
/**
 * glMapBuffer, glMapNamedBuffer — map all of a buffer object's data store
 * into the client's address space
 *
 * @param [target] Specifies the target to which the buffer object is bound
 * for glMapBuffer, which must be one of the buffer binding targets in the
 * following table:
 *
 * GL_ARRAY_BUFFER - Vertex attributes,
 * GL_ATOMIC_COUNTER_BUFFER - Atomic counter storage,
 * GL_COPY_READ_BUFFER - Buffer copy source,
 * GL_COPY_WRITE_BUFFER - Buffer copy destination,
 * GL_DISPATCH_INDIRECT_BUFFER - Indirect compute dispatch commands,
 * GL_DRAW_INDIRECT_BUFFER - Indirect command arguments,
 * GL_ELEMENT_ARRAY_BUFFER - Vertex array indices,
 * GL_PIXEL_PACK_BUFFER - Pixel read target,
 * GL_PIXEL_UNPACK_BUFFER - Texture data source,
 * GL_QUERY_BUFFER - Query result buffer,
 * GL_SHADER_STORAGE_BUFFER - Read-write storage for shaders,
 * GL_TEXTURE_BUFFER - Texture data buffer,
 * GL_TRANSFORM_FEEDBACK_BUFFER - Transform feedback buffer,
 * GL_UNIFORM_BUFFER - Uniform block storage,
 *
 * @param [buffer] Specifies the name of the buffer object for
 * glMapNamedBuffer.
 *
 * @param [access] Specifies the access policy for glMapBuffer and
 * glMapNamedBuffer, indicating whether it will be possible to read from,
 * write to, or both read from and write to the buffer object's mapped data
 * store. The symbolic constant must be GL_READ_ONLY, GL_WRITE_ONLY, or
 * GL_READ_WRITE.
 */
static inline void *glMapNamedBuffer(GLuint buffer, GLenum access) {
  return glad_glMapNamedBuffer(buffer, access);
}
/**
 * glMapBufferRange, glMapNamedBufferRange — map all or part of a buffer
 * object's data store into the client's address space
 *
 * @param [target] Specifies the target to which the buffer object is bound
 * for glMapBufferRange, which must be one of the buffer binding targets in
 * the following table:
 *
 * GL_ARRAY_BUFFER - Vertex attributes,
 * GL_ATOMIC_COUNTER_BUFFER - Atomic counter storage,
 * GL_COPY_READ_BUFFER - Buffer copy source,
 * GL_COPY_WRITE_BUFFER - Buffer copy destination,
 * GL_DISPATCH_INDIRECT_BUFFER - Indirect compute dispatch commands,
 * GL_DRAW_INDIRECT_BUFFER - Indirect command arguments,
 * GL_ELEMENT_ARRAY_BUFFER - Vertex array indices,
 * GL_PIXEL_PACK_BUFFER - Pixel read target,
 * GL_PIXEL_UNPACK_BUFFER - Texture data source,
 * GL_QUERY_BUFFER - Query result buffer,
 * GL_SHADER_STORAGE_BUFFER - Read-write storage for shaders,
 * GL_TEXTURE_BUFFER - Texture data buffer,
 * GL_TRANSFORM_FEEDBACK_BUFFER - Transform feedback buffer,
 * GL_UNIFORM_BUFFER - Uniform block storage,
 *
 * @param [buffer] Specifies the name of the buffer object for
 * glMapNamedBufferRange.
 *
 * @param [offset] Specifies the starting offset within the buffer of the
 * range to be mapped.
 *
 * @param [length] Specifies the length of the range to be mapped.
 *
 * @param [access] Specifies a combination of access flags indicating the
 * desired access to the mapped range.
 */
static inline void *glMapBufferRange(GLenum target, GLintptr offset,
                                     GLsizeiptr length, GLbitfield access) {
  return glad_glMapBufferRange(target, offset, length, access);
}
/**
 * glMapBufferRange, glMapNamedBufferRange — map all or part of a buffer
 * object's data store into the client's address space
 *
 * @param [target] Specifies the target to which the buffer object is bound
 * for glMapBufferRange, which must be one of the buffer binding targets in
 * the following table:
 *
 * GL_ARRAY_BUFFER - Vertex attributes,
 * GL_ATOMIC_COUNTER_BUFFER - Atomic counter storage,
 * GL_COPY_READ_BUFFER - Buffer copy source,
 * GL_COPY_WRITE_BUFFER - Buffer copy destination,
 * GL_DISPATCH_INDIRECT_BUFFER - Indirect compute dispatch commands,
 * GL_DRAW_INDIRECT_BUFFER - Indirect command arguments,
 * GL_ELEMENT_ARRAY_BUFFER - Vertex array indices,
 * GL_PIXEL_PACK_BUFFER - Pixel read target,
 * GL_PIXEL_UNPACK_BUFFER - Texture data source,
 * GL_QUERY_BUFFER - Query result buffer,
 * GL_SHADER_STORAGE_BUFFER - Read-write storage for shaders,
 * GL_TEXTURE_BUFFER - Texture data buffer,
 * GL_TRANSFORM_FEEDBACK_BUFFER - Transform feedback buffer,
 * GL_UNIFORM_BUFFER - Uniform block storage,
 *
 * @param [buffer] Specifies the name of the buffer object for
 * glMapNamedBufferRange.
 *
 * @param [offset] Specifies the starting offset within the buffer of the
 * range to be mapped.
 *
 * @param [length] Specifies the length of the range to be mapped.
 *
 * @param [access] Specifies a combination of access flags indicating the
 * desired access to the mapped range.
 */
static inline void *glMapNamedBufferRange(GLuint buffer, GLintptr offset,
                                          GLsizei length, GLbitfield access) {
  return glad_glMapNamedBufferRange(buffer, offset, length, access);
}
/**
 * glMemoryBarrier — defines a barrier ordering memory transactions
 *
 * @param [barriers] Specifies the barriers to insert.
 */
static inline void glMemoryBarrier(GLbitfield barriers) {
  glad_glMemoryBarrier(barriers);
}
/**
 * glMemoryBarrier — defines a barrier ordering memory transactions
 *
 * @param [barriers] Specifies the barriers to insert.
 */
static inline void glMemoryBarrierByRegion(GLbitfield barriers) {
  glad_glMemoryBarrierByRegion(barriers);
}
/**
 * glMinSampleShading — specifies minimum rate at which sample shading takes
 * place
 *
 * @param [value] Specifies the rate at which samples are shaded within each
 * covered pixel.
 */
static inline void glMinSampleShading(GLfloat value) {
  glad_glMinSampleShading(value);
}
/**
 * glMultiDrawArrays — render multiple sets of primitives from array data
 *
 * @param [mode] Specifies what kind of primitives to render. Symbolic
 * constants GL_POINTS, GL_LINE_STRIP, GL_LINE_LOOP, GL_LINES,
 * GL_LINE_STRIP_ADJACENCY, GL_LINES_ADJACENCY, GL_TRIANGLE_STRIP,
 * GL_TRIANGLE_FAN, GL_TRIANGLES, GL_TRIANGLE_STRIP_ADJACENCY,
 * GL_TRIANGLES_ADJACENCY and GL_PATCHES are accepted.
 *
 * @param [first] Points to an array of starting indices in the enabled
 * arrays.
 *
 * @param [count] Points to an array of the number of indices to be rendered.
 *
 * @param [drawcount] Specifies the size of the first and count
 */
static inline void glMultiDrawArrays(GLenum mode, const GLint *first,
                                     const GLsizei *count, GLsizei drawcount) {
  glad_glMultiDrawArrays(mode, first, count, drawcount);
}
/**
 * glMultiDrawArraysIndirect — render multiple sets of primitives from array
 * data, taking parameters from memory
 *
 * @param [mode] Specifies what kind of primitives to render. Symbolic
 * constants GL_POINTS, GL_LINE_STRIP, GL_LINE_LOOP, GL_LINES,
 * GL_LINE_STRIP_ADJACENCY, GL_LINES_ADJACENCY, GL_TRIANGLE_STRIP,
 * GL_TRIANGLE_FAN, GL_TRIANGLES, GL_TRIANGLE_STRIP_ADJACENCY,
 * GL_TRIANGLES_ADJACENCY, and GL_PATCHES are accepted.
 *
 * @param [indirect] Specifies the address of an array of structures
 * containing the draw parameters.
 *
 * @param [drawcount] Specifies the the number of elements in the array of
 * draw parameter structures.
 *
 * @param [stride] Specifies the distance in basic machine units between
 * elements of the draw parameter array.
 */
static inline void glMultiDrawArraysIndirect(GLenum mode, const void *indirect,
                                             GLsizei drawcount,
                                             GLsizei stride) {
  glad_glMultiDrawArraysIndirect(mode, indirect, drawcount, stride);
}
/**
 * glMultiDrawElements — render multiple sets of primitives by specifying
 * indices of array data elements
 *
 * @param [mode] Specifies what kind of primitives to render. Symbolic
 * constants GL_POINTS, GL_LINE_STRIP, GL_LINE_LOOP, GL_LINES,
 * GL_LINE_STRIP_ADJACENCY, GL_LINES_ADJACENCY, GL_TRIANGLE_STRIP,
 * GL_TRIANGLE_FAN, GL_TRIANGLES, GL_TRIANGLE_STRIP_ADJACENCY,
 * GL_TRIANGLES_ADJACENCY and GL_PATCHES are accepted.
 *
 * @param [count] Points to an array of the elements counts.
 *
 * @param [type] Specifies the type of the values in indices. Must be one of
 * GL_UNSIGNED_BYTE, GL_UNSIGNED_SHORT, or GL_UNSIGNED_INT.
 *
 * @param [indices] Specifies a pointer to the location where the indices are
 * stored.
 *
 * @param [drawcount] Specifies the size of the count and indices arrays.
 */
static inline void glMultiDrawElements(GLenum mode, const GLsizei *count,
                                       GLenum type,
                                       const GLvoid *const *indices,
                                       GLsizei drawcount) {
  glad_glMultiDrawElements(mode, count, type, indices, drawcount);
}
/**
 * glMultiDrawElementsBaseVertex — render multiple sets of primitives by
 * specifying indices of array data elements and an index to apply to each
 * index
 *
 * @param [mode] Specifies what kind of primitives to render. Symbolic
 * constants GL_POINTS, GL_LINE_STRIP, GL_LINE_LOOP, GL_LINES,
 * GL_LINE_STRIP_ADJACENCY, GL_LINES_ADJACENCY, GL_TRIANGLE_STRIP,
 * GL_TRIANGLE_FAN, GL_TRIANGLES, GL_TRIANGLE_STRIP_ADJACENCY,
 * GL_TRIANGLES_ADJACENCY and GL_PATCHES are accepted.
 *
 * @param [count] Points to an array of the elements counts.
 *
 * @param [type] Specifies the type of the values in indices. Must be one of
 * GL_UNSIGNED_BYTE, GL_UNSIGNED_SHORT, or GL_UNSIGNED_INT.
 *
 * @param [indices] Specifies a pointer to the location where the indices are
 * stored.
 *
 * @param [drawcount] Specifies the size of the count, indices and basevertex
 * arrays.
 *
 * @param [basevertex] Specifies a pointer to the location where the base
 * vertices are stored.
 */
static inline void
glMultiDrawElementsBaseVertex(GLenum mode, const GLsizei *count, GLenum type,
                              const GLvoid *const *indices, GLsizei drawcount,
                              const GLint *basevertex) {
  glad_glMultiDrawElementsBaseVertex(mode, count, type, indices, drawcount,
                                     basevertex);
}
/**
 * glMultiDrawElementsIndirect — render indexed primitives from array data,
 * taking parameters from memory
 *
 * @param [mode] Specifies what kind of primitives to render. Symbolic
 * constants GL_POINTS, GL_LINE_STRIP, GL_LINE_LOOP, GL_LINES,
 * GL_LINE_STRIP_ADJACENCY, GL_LINES_ADJACENCY, GL_TRIANGLE_STRIP,
 * GL_TRIANGLE_FAN, GL_TRIANGLES, GL_TRIANGLE_STRIP_ADJACENCY,
 * GL_TRIANGLES_ADJACENCY, and GL_PATCHES are accepted.
 *
 * @param [type] Specifies the type of data in the buffer bound to the
 * GL_ELEMENT_ARRAY_BUFFER binding.
 *
 * @param [indirect] Specifies the address of a structure containing an array
 * of draw parameters.
 *
 * @param [drawcount] Specifies the number of elements in the array addressed
 * by indirect.
 *
 * @param [stride] Specifies the distance in basic machine units between
 * elements of the draw parameter array.
 */
static inline void glMultiDrawElementsIndirect(GLenum mode, GLenum type,
                                               const void *indirect,
                                               GLsizei drawcount,
                                               GLsizei stride) {
  glad_glMultiDrawElementsIndirect(mode, type, indirect, drawcount, stride);
}
/**
 * glObjectLabel — label a named object identified within a namespace
 *
 * @param [identifier] The namespace from which the name of the object is
 * allocated.
 *
 * @param [name] The name of the object to label.
 *
 * @param [length] The length of the label to be used for the object.
 *
 * @param [label] The address of a string containing the label to assign to
 * the object.
 */
static inline void glObjectLabel(GLenum identifier, GLuint name, GLsizei length,
                                 const char *label) {
  glad_glObjectLabel(identifier, name, length, label);
}
/**
 * glObjectPtrLabel — label a a sync object identified by a pointer
 *
 * @param [ptr] A pointer identifying a sync object.
 *
 * @param [length] The length of the label to be used for the object.
 *
 * @param [label] The address of a string containing the label to assign to
 * the object.
 */
static inline void glObjectPtrLabel(void *ptr, GLsizei length,
                                    const char *label) {
  glad_glObjectPtrLabel(ptr, length, label);
}
/**
 * glPatchParameter — specifies the parameters for patch primitives
 *
 * @param [pname] Specifies the name of the parameter to set. The symbolc
 * constants GL_PATCH_VERTICES, GL_PATCH_DEFAULT_OUTER_LEVEL, and
 * GL_PATCH_DEFAULT_INNER_LEVEL are accepted.
 *
 * @param [value] Specifies the new value for the parameter given by pname.
 *
 * @param [values] Specifies the address of an array containing the new values
 * for the parameter given by pname.
 */
static inline void glPatchParameteri(GLenum pname, GLint value) {
  glad_glPatchParameteri(pname, value);
}
/**
 * glPatchParameter — specifies the parameters for patch primitives
 *
 * @param [pname] Specifies the name of the parameter to set. The symbolc
 * constants GL_PATCH_VERTICES, GL_PATCH_DEFAULT_OUTER_LEVEL, and
 * GL_PATCH_DEFAULT_INNER_LEVEL are accepted.
 *
 * @param [value] Specifies the new value for the parameter given by pname.
 *
 * @param [values] Specifies the address of an array containing the new values
 * for the parameter given by pname.
 */
static inline void glPatchParameterfv(GLenum pname, const GLfloat *values) {
  glad_glPatchParameterfv(pname, values);
}
/**
 * glPauseTransformFeedback — pause transform feedback operations
 */
static inline void glPauseTransformFeedback(void) {
  glad_glPauseTransformFeedback();
}
/**
 * glPixelStore — set pixel storage modes
 *
 * @param [pname] Specifies the symbolic name of the parameter to be set. Six
 * values affect the packing of pixel data into memory: GL_PACK_SWAP_BYTES,
 * GL_PACK_LSB_FIRST, GL_PACK_ROW_LENGTH, GL_PACK_IMAGE_HEIGHT,
 * GL_PACK_SKIP_PIXELS, GL_PACK_SKIP_ROWS, GL_PACK_SKIP_IMAGES, and
 * GL_PACK_ALIGNMENT. Six more affect the unpacking of pixel data from memory:
 * GL_UNPACK_SWAP_BYTES, GL_UNPACK_LSB_FIRST, GL_UNPACK_ROW_LENGTH,
 * GL_UNPACK_IMAGE_HEIGHT, GL_UNPACK_SKIP_PIXELS, GL_UNPACK_SKIP_ROWS,
 * GL_UNPACK_SKIP_IMAGES, and GL_UNPACK_ALIGNMENT.
 *
 * @param [param] Specifies the value that pname is set to.
 */
static inline void glPixelStoref(GLenum pname, GLfloat param) {
  glad_glPixelStoref(pname, param);
}
/**
 * glPixelStore — set pixel storage modes
 *
 * @param [pname] Specifies the symbolic name of the parameter to be set. Six
 * values affect the packing of pixel data into memory: GL_PACK_SWAP_BYTES,
 * GL_PACK_LSB_FIRST, GL_PACK_ROW_LENGTH, GL_PACK_IMAGE_HEIGHT,
 * GL_PACK_SKIP_PIXELS, GL_PACK_SKIP_ROWS, GL_PACK_SKIP_IMAGES, and
 * GL_PACK_ALIGNMENT. Six more affect the unpacking of pixel data from memory:
 * GL_UNPACK_SWAP_BYTES, GL_UNPACK_LSB_FIRST, GL_UNPACK_ROW_LENGTH,
 * GL_UNPACK_IMAGE_HEIGHT, GL_UNPACK_SKIP_PIXELS, GL_UNPACK_SKIP_ROWS,
 * GL_UNPACK_SKIP_IMAGES, and GL_UNPACK_ALIGNMENT.
 *
 * @param [param] Specifies the value that pname is set to.
 */
static inline void glPixelStorei(GLenum pname, GLint param) {
  glad_glPixelStorei(pname, param);
}
/**
 * glPointParameter — specify point parameters
 *
 * @param [pname] Specifies a single-valued point parameter.
 * GL_POINT_FADE_THRESHOLD_SIZE, and GL_POINT_SPRITE_COORD_ORIGIN are
 * accepted.
 *
 * @param [param] For glPointParameterf and glPointParameteri, specifies the
 * value that pname will be set to.
 *
 * @param [params] For glPointParameterfv and glPointParameteriv, specifies a
 * pointer to an array where the value or values to be assigned to pname are
 * stored.
 */
static inline void glPointParameterf(GLenum pname, GLfloat param) {
  glad_glPointParameterf(pname, param);
}
/**
 * glPointParameter — specify point parameters
 *
 * @param [pname] Specifies a single-valued point parameter.
 * GL_POINT_FADE_THRESHOLD_SIZE, and GL_POINT_SPRITE_COORD_ORIGIN are
 * accepted.
 *
 * @param [param] For glPointParameterf and glPointParameteri, specifies the
 * value that pname will be set to.
 *
 * @param [params] For glPointParameterfv and glPointParameteriv, specifies a
 * pointer to an array where the value or values to be assigned to pname are
 * stored.
 */
static inline void glPointParameteri(GLenum pname, GLint param) {
  glad_glPointParameteri(pname, param);
}
/**
 * glPointParameter — specify point parameters
 *
 * @param [pname] Specifies a single-valued point parameter.
 * GL_POINT_FADE_THRESHOLD_SIZE, and GL_POINT_SPRITE_COORD_ORIGIN are
 * accepted.
 *
 * @param [param] For glPointParameterf and glPointParameteri, specifies the
 * value that pname will be set to.
 *
 * @param [params] For glPointParameterfv and glPointParameteriv, specifies a
 * pointer to an array where the value or values to be assigned to pname are
 * stored.
 */
static inline void glPointParameterfv(GLenum pname, const GLfloat *params) {
  glad_glPointParameterfv(pname, params);
}
/**
 * glPointParameter — specify point parameters
 *
 * @param [pname] Specifies a single-valued point parameter.
 * GL_POINT_FADE_THRESHOLD_SIZE, and GL_POINT_SPRITE_COORD_ORIGIN are
 * accepted.
 *
 * @param [param] For glPointParameterf and glPointParameteri, specifies the
 * value that pname will be set to.
 *
 * @param [params] For glPointParameterfv and glPointParameteriv, specifies a
 * pointer to an array where the value or values to be assigned to pname are
 * stored.
 */
static inline void glPointParameteriv(GLenum pname, const GLint *params) {
  glad_glPointParameteriv(pname, params);
}
/**
 * glPointSize — specify the diameter of rasterized points
 *
 * @param [size] Specifies the diameter of rasterized points. The initial
 * value is 1.
 */
static inline void glPointSize(GLfloat size) { glad_glPointSize(size); }
/**
 * glPolygonMode — select a polygon rasterization mode
 *
 * @param [face] Specifies the polygons that mode applies to. Must be
 * GL_FRONT_AND_BACK for front- and back-facing polygons.
 *
 * @param [mode] Specifies how polygons will be rasterized. Accepted values
 * are GL_POINT, GL_LINE, and GL_FILL. The initial value is GL_FILL for both
 * front- and back-facing polygons.
 */
static inline void glPolygonMode(GLenum face, GLenum mode) {
  glad_glPolygonMode(face, mode);
}
/**
 * glPolygonOffset — set the scale and units used to calculate depth values
 *
 * @param [factor] Specifies a scale factor that is used to create a variable
 * depth offset for each polygon. The initial value is 0.
 *
 * @param [units] Is multiplied by an implementation-specific value to create
 * a constant depth offset. The initial value is 0.
 */
static inline void glPolygonOffset(GLfloat factor, GLfloat units) {
  glad_glPolygonOffset(factor, units);
}
/**
 * glPopDebugGroup — pop the active debug group
 */
static inline void glPopDebugGroup(void) { glad_glPopDebugGroup(); }
/**
 * glPrimitiveRestartIndex — specify the primitive restart index
 *
 * @param [index] Specifies the value to be interpreted as the primitive
 * restart index.
 */
static inline void glPrimitiveRestartIndex(GLuint index) {
  glad_glPrimitiveRestartIndex(index);
}
/**
 * glProgramBinary — load a program object with a program binary
 *
 * @param [program] Specifies the name of a program object into which to load
 * a program binary.
 *
 * @param [binaryFormat] Specifies the format of the binary data in binary.
 *
 * @param [binary] Specifies the address an array containing the binary to be
 * loaded into program.
 *
 * @param [length] Specifies the number of bytes contained in binary.
 */
static inline void glProgramBinary(GLuint program, GLenum binaryFormat,
                                   const void *binary, GLsizei length) {
  glad_glProgramBinary(program, binaryFormat, binary, length);
}
/**
 * glProgramParameter — specify a parameter for a program object
 *
 * @param [program] Specifies the name of a program object whose parameter to
 * modify.
 *
 * @param [pname] Specifies the name of the parameter to modify.
 *
 * @param [value] Specifies the new value of the parameter specified by pname
 * for program.
 */
static inline void glProgramParameteri(GLuint program, GLenum pname,
                                       GLint value) {
  glad_glProgramParameteri(program, pname, value);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniform1f(GLuint program, GLint location,
                                      GLfloat v0) {
  glad_glProgramUniform1f(program, location, v0);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniform2f(GLuint program, GLint location,
                                      GLfloat v0, GLfloat v1) {
  glad_glProgramUniform2f(program, location, v0, v1);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniform3f(GLuint program, GLint location,
                                      GLfloat v0, GLfloat v1, GLfloat v2) {
  glad_glProgramUniform3f(program, location, v0, v1, v2);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniform4f(GLuint program, GLint location,
                                      GLfloat v0, GLfloat v1, GLfloat v2,
                                      GLfloat v3) {
  glad_glProgramUniform4f(program, location, v0, v1, v2, v3);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniform1i(GLuint program, GLint location,
                                      GLint v0) {
  glad_glProgramUniform1i(program, location, v0);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniform2i(GLuint program, GLint location, GLint v0,
                                      GLint v1) {
  glad_glProgramUniform2i(program, location, v0, v1);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniform3i(GLuint program, GLint location, GLint v0,
                                      GLint v1, GLint v2) {
  glad_glProgramUniform3i(program, location, v0, v1, v2);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniform4i(GLuint program, GLint location, GLint v0,
                                      GLint v1, GLint v2, GLint v3) {
  glad_glProgramUniform4i(program, location, v0, v1, v2, v3);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniform1ui(GLuint program, GLint location,
                                       GLuint v0) {
  glad_glProgramUniform1ui(program, location, v0);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniform2ui(GLuint program, GLint location,
                                       GLuint v0, GLuint v1) {
  glad_glProgramUniform2ui(program, location, v0, v1);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniform3ui(GLuint program, GLint location,
                                       GLuint v0, GLuint v1, GLuint v2) {
  glad_glProgramUniform3ui(program, location, v0, v1, v2);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniform4ui(GLuint program, GLint location,
                                       GLuint v0, GLuint v1, GLuint v2,
                                       GLuint v3) {
  glad_glProgramUniform4ui(program, location, v0, v1, v2, v3);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniform1fv(GLuint program, GLint location,
                                       GLsizei count, const GLfloat *value) {
  glad_glProgramUniform1fv(program, location, count, value);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniform2fv(GLuint program, GLint location,
                                       GLsizei count, const GLfloat *value) {
  glad_glProgramUniform2fv(program, location, count, value);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniform3fv(GLuint program, GLint location,
                                       GLsizei count, const GLfloat *value) {
  glad_glProgramUniform3fv(program, location, count, value);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniform4fv(GLuint program, GLint location,
                                       GLsizei count, const GLfloat *value) {
  glad_glProgramUniform4fv(program, location, count, value);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniform1iv(GLuint program, GLint location,
                                       GLsizei count, const GLint *value) {
  glad_glProgramUniform1iv(program, location, count, value);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniform2iv(GLuint program, GLint location,
                                       GLsizei count, const GLint *value) {
  glad_glProgramUniform2iv(program, location, count, value);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniform3iv(GLuint program, GLint location,
                                       GLsizei count, const GLint *value) {
  glad_glProgramUniform3iv(program, location, count, value);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniform4iv(GLuint program, GLint location,
                                       GLsizei count, const GLint *value) {
  glad_glProgramUniform4iv(program, location, count, value);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniform1uiv(GLuint program, GLint location,
                                        GLsizei count, const GLuint *value) {
  glad_glProgramUniform1uiv(program, location, count, value);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniform2uiv(GLuint program, GLint location,
                                        GLsizei count, const GLuint *value) {
  glad_glProgramUniform2uiv(program, location, count, value);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniform3uiv(GLuint program, GLint location,
                                        GLsizei count, const GLuint *value) {
  glad_glProgramUniform3uiv(program, location, count, value);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniform4uiv(GLuint program, GLint location,
                                        GLsizei count, const GLuint *value) {
  glad_glProgramUniform4uiv(program, location, count, value);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniformMatrix2fv(GLuint program, GLint location,
                                             GLsizei count, GLboolean transpose,
                                             const GLfloat *value) {
  glad_glProgramUniformMatrix2fv(program, location, count, transpose, value);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniformMatrix3fv(GLuint program, GLint location,
                                             GLsizei count, GLboolean transpose,
                                             const GLfloat *value) {
  glad_glProgramUniformMatrix3fv(program, location, count, transpose, value);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniformMatrix4fv(GLuint program, GLint location,
                                             GLsizei count, GLboolean transpose,
                                             const GLfloat *value) {
  glad_glProgramUniformMatrix4fv(program, location, count, transpose, value);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniformMatrix2x3fv(GLuint program, GLint location,
                                               GLsizei count,
                                               GLboolean transpose,
                                               const GLfloat *value) {
  glad_glProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniformMatrix3x2fv(GLuint program, GLint location,
                                               GLsizei count,
                                               GLboolean transpose,
                                               const GLfloat *value) {
  glad_glProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniformMatrix2x4fv(GLuint program, GLint location,
                                               GLsizei count,
                                               GLboolean transpose,
                                               const GLfloat *value) {
  glad_glProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniformMatrix4x2fv(GLuint program, GLint location,
                                               GLsizei count,
                                               GLboolean transpose,
                                               const GLfloat *value) {
  glad_glProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniformMatrix3x4fv(GLuint program, GLint location,
                                               GLsizei count,
                                               GLboolean transpose,
                                               const GLfloat *value) {
  glad_glProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}
/**
 * glProgramUniform — Specify the value of a uniform variable for a specified
 * program object
 *
 * @param [program] Specifies the handle of the program containing the uniform
 * variable to be modified.
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector commands (glProgramUniform*v), specifies the
 * number of elements that are to be modified. This should be 1 if the
 * targeted uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glProgramUniformMatrix4x3fv(GLuint program, GLint location,
                                               GLsizei count,
                                               GLboolean transpose,
                                               const GLfloat *value) {
  glad_glProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}
/**
 * glProvokingVertex — specifiy the vertex to be used as the source of data
 * for flat shaded varyings
 *
 * @param [provokeMode] Specifies the vertex to be used as the source of data
 * for flat shaded varyings.
 */
static inline void glProvokingVertex(GLenum provokeMode) {
  glad_glProvokingVertex(provokeMode);
}
/**
 * glPushDebugGroup — push a named debug group into the command stream
 *
 * @param [source] The source of the debug message.
 *
 * @param [id] The identifier of the message.
 *
 * @param [length] The length of the message to be sent to the debug output
 * stream.
 *
 * @param [message] The a string containing the message to be sent to the
 * debug output stream.
 */
static inline void glPushDebugGroup(GLenum source, GLuint id, GLsizei length,
                                    const char *message) {
  glad_glPushDebugGroup(source, id, length, message);
}
/**
 * glQueryCounter — record the GL time into a query object after all previous
 * commands have reached the GL server but have not yet necessarily executed.
 *
 * @param [id] Specify the name of a query object into which to record the GL
 * time.
 *
 * @param [target] Specify the counter to query. target must be GL_TIMESTAMP.
 */
static inline void glQueryCounter(GLuint id, GLenum target) {
  glad_glQueryCounter(id, target);
}
/**
 * glReadBuffer, glNamedFramebufferReadBuffer — select a color buffer source
 * for pixels
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glNamedFramebufferReadBuffer function.
 *
 * @param [mode] Specifies a color buffer. Accepted values are GL_FRONT_LEFT,
 * GL_FRONT_RIGHT, GL_BACK_LEFT, GL_BACK_RIGHT, GL_FRONT, GL_BACK, GL_LEFT,
 * GL_RIGHT, and the constants GL_COLOR_ATTACHMENTi.
 */
static inline void glReadBuffer(GLenum mode) { glad_glReadBuffer(mode); }
/**
 * glReadBuffer, glNamedFramebufferReadBuffer — select a color buffer source
 * for pixels
 *
 * @param [framebuffer] Specifies the name of the framebuffer object for
 * glNamedFramebufferReadBuffer function.
 *
 * @param [mode] Specifies a color buffer. Accepted values are GL_FRONT_LEFT,
 * GL_FRONT_RIGHT, GL_BACK_LEFT, GL_BACK_RIGHT, GL_FRONT, GL_BACK, GL_LEFT,
 * GL_RIGHT, and the constants GL_COLOR_ATTACHMENTi.
 */
static inline void glNamedFramebufferReadBuffer(GLuint framebuffer,
                                                GLenum mode) {
  glad_glNamedFramebufferReadBuffer(framebuffer, mode);
}
/**
 * glReadPixels, glReadnPixels — read a block of pixels from the frame buffer
 *
 * @param [x, y] Specify the window coordinates of the first pixel that is
 * read from the frame buffer. This location is the lower left corner of a
 * rectangular block of pixels.
 *
 * @param [width, height] Specify the dimensions of the pixel rectangle. width
 * and height of one correspond to a single pixel.
 *
 * @param [format] Specifies the format of the pixel data. The following
 * symbolic values are accepted: GL_STENCIL_INDEX, GL_DEPTH_COMPONENT,
 * GL_DEPTH_STENCIL, GL_RED, GL_GREEN, GL_BLUE, GL_RGB, GL_BGR, GL_RGBA, and
 * GL_BGRA.
 *
 * @param [type] Specifies the data type of the pixel data. Must be one of
 * GL_UNSIGNED_BYTE, GL_BYTE, GL_UNSIGNED_SHORT, GL_SHORT, GL_UNSIGNED_INT,
 * GL_INT, GL_HALF_FLOAT, GL_FLOAT, GL_UNSIGNED_BYTE_3_3_2,
 * GL_UNSIGNED_BYTE_2_3_3_REV, GL_UNSIGNED_SHORT_5_6_5,
 * GL_UNSIGNED_SHORT_5_6_5_REV, GL_UNSIGNED_SHORT_4_4_4_4,
 * GL_UNSIGNED_SHORT_4_4_4_4_REV, GL_UNSIGNED_SHORT_5_5_5_1,
 * GL_UNSIGNED_SHORT_1_5_5_5_REV, GL_UNSIGNED_INT_8_8_8_8,
 * GL_UNSIGNED_INT_8_8_8_8_REV, GL_UNSIGNED_INT_10_10_10_2,
 * GL_UNSIGNED_INT_2_10_10_10_REV, GL_UNSIGNED_INT_24_8,
 * GL_UNSIGNED_INT_10F_11F_11F_REV, GL_UNSIGNED_INT_5_9_9_9_REV, or
 * GL_FLOAT_32_UNSIGNED_INT_24_8_REV.
 *
 * @param [bufSize] Specifies the size of the buffer data for glReadnPixels
 * function.
 *
 * @param [data] Returns the pixel data.
 */
static inline void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height,
                                GLenum format, GLenum type, GLvoid *data) {
  glad_glReadPixels(x, y, width, height, format, type, data);
}
/**
 * glReadPixels, glReadnPixels — read a block of pixels from the frame buffer
 *
 * @param [x, y] Specify the window coordinates of the first pixel that is
 * read from the frame buffer. This location is the lower left corner of a
 * rectangular block of pixels.
 *
 * @param [width, height] Specify the dimensions of the pixel rectangle. width
 * and height of one correspond to a single pixel.
 *
 * @param [format] Specifies the format of the pixel data. The following
 * symbolic values are accepted: GL_STENCIL_INDEX, GL_DEPTH_COMPONENT,
 * GL_DEPTH_STENCIL, GL_RED, GL_GREEN, GL_BLUE, GL_RGB, GL_BGR, GL_RGBA, and
 * GL_BGRA.
 *
 * @param [type] Specifies the data type of the pixel data. Must be one of
 * GL_UNSIGNED_BYTE, GL_BYTE, GL_UNSIGNED_SHORT, GL_SHORT, GL_UNSIGNED_INT,
 * GL_INT, GL_HALF_FLOAT, GL_FLOAT, GL_UNSIGNED_BYTE_3_3_2,
 * GL_UNSIGNED_BYTE_2_3_3_REV, GL_UNSIGNED_SHORT_5_6_5,
 * GL_UNSIGNED_SHORT_5_6_5_REV, GL_UNSIGNED_SHORT_4_4_4_4,
 * GL_UNSIGNED_SHORT_4_4_4_4_REV, GL_UNSIGNED_SHORT_5_5_5_1,
 * GL_UNSIGNED_SHORT_1_5_5_5_REV, GL_UNSIGNED_INT_8_8_8_8,
 * GL_UNSIGNED_INT_8_8_8_8_REV, GL_UNSIGNED_INT_10_10_10_2,
 * GL_UNSIGNED_INT_2_10_10_10_REV, GL_UNSIGNED_INT_24_8,
 * GL_UNSIGNED_INT_10F_11F_11F_REV, GL_UNSIGNED_INT_5_9_9_9_REV, or
 * GL_FLOAT_32_UNSIGNED_INT_24_8_REV.
 *
 * @param [bufSize] Specifies the size of the buffer data for glReadnPixels
 * function.
 *
 * @param [data] Returns the pixel data.
 */
static inline void glReadnPixels(GLint x, GLint y, GLsizei width,
                                 GLsizei height, GLenum format, GLenum type,
                                 GLsizei bufSize, void *data) {
  glad_glReadnPixels(x, y, width, height, format, type, bufSize, data);
}
/**
 * glReleaseShaderCompiler — release resources consumed by the
 * implementation's shader compiler
 */
static inline void glReleaseShaderCompiler(void) {
  glad_glReleaseShaderCompiler();
}
/**
 * glRenderbufferStorage, glNamedRenderbufferStorage — establish data storage,
 format and dimensions of a renderbuffer object's image
 *
 * @param [target] Specifies a binding target of the allocation for
 glRenderbufferStorage function. Must be GL_RENDERBUFFER.
 *
 * @param [renderbuffer] Specifies the name of the renderbuffer object for
 glNamedRenderbufferStorage function.
 *
 * @param [internalformat] Specifies the internal format to use for the
 renderbuffer object's image.
 *
 * @param [width] Specifies the width of the renderbuffer, in pixels.
 *
 * @param [height] Specifies the height of the renderbuffer, in pixels.
 */
static inline void glRenderbufferStorage(GLenum target, GLenum internalformat,
                                         GLsizei width, GLsizei height) {
  glad_glRenderbufferStorage(target, internalformat, width, height);
}
/**
 * glRenderbufferStorage, glNamedRenderbufferStorage — establish data storage,
 format and dimensions of a renderbuffer object's image
 *
 * @param [target] Specifies a binding target of the allocation for
 glRenderbufferStorage function. Must be GL_RENDERBUFFER.
 *
 * @param [renderbuffer] Specifies the name of the renderbuffer object for
 glNamedRenderbufferStorage function.
 *
 * @param [internalformat] Specifies the internal format to use for the
 renderbuffer object's image.
 *
 * @param [width] Specifies the width of the renderbuffer, in pixels.
 *
 * @param [height] Specifies the height of the renderbuffer, in pixels.
 */
static inline void glNamedRenderbufferStorage(GLuint renderbuffer,
                                              GLenum internalformat,
                                              GLsizei width, GLsizei height) {
  glad_glNamedRenderbufferStorage(renderbuffer, internalformat, width, height);
}
/**
 * glRenderbufferStorageMultisample, glNamedRenderbufferStorageMultisample —
 establish data storage, format, dimensions and sample count of a renderbuffer
 object's image
 *
 * @param [target] Specifies a binding target of the allocation for
 glRenderbufferStorageMultisample function. Must be GL_RENDERBUFFER.
 *
 * @param [renderbuffer] Specifies the name of the renderbuffer object for
 glNamedRenderbufferStorageMultisample function.
 *
 * @param [samples] Specifies the number of samples to be used for the
 renderbuffer object's storage.
 *
 * @param [internalformat] Specifies the internal format to use for the
 renderbuffer object's image.
 *
 * @param [width] Specifies the width of the renderbuffer, in pixels.
 *
 * @param [height] Specifies the height of the renderbuffer, in pixels.
 */
static inline void glRenderbufferStorageMultisample(GLenum target,
                                                    GLsizei samples,
                                                    GLenum internalformat,
                                                    GLsizei width,
                                                    GLsizei height) {
  glad_glRenderbufferStorageMultisample(target, samples, internalformat, width,
                                        height);
}
/**
 * glRenderbufferStorageMultisample, glNamedRenderbufferStorageMultisample —
 establish data storage, format, dimensions and sample count of a renderbuffer
 object's image
 *
 * @param [target] Specifies a binding target of the allocation for
 glRenderbufferStorageMultisample function. Must be GL_RENDERBUFFER.
 *
 * @param [renderbuffer] Specifies the name of the renderbuffer object for
 glNamedRenderbufferStorageMultisample function.
 *
 * @param [samples] Specifies the number of samples to be used for the
 renderbuffer object's storage.
 *
 * @param [internalformat] Specifies the internal format to use for the
 renderbuffer object's image.
 *
 * @param [width] Specifies the width of the renderbuffer, in pixels.
 *
 * @param [height] Specifies the height of the renderbuffer, in pixels.
 */
static inline void glNamedRenderbufferStorageMultisample(GLuint renderbuffer,
                                                         GLsizei samples,
                                                         GLenum internalformat,
                                                         GLsizei width,
                                                         GLsizei height) {
  glad_glNamedRenderbufferStorageMultisample(renderbuffer, samples,
                                             internalformat, width, height);
}
/**
 * glResumeTransformFeedback — resume transform feedback operations
 */
static inline void glResumeTransformFeedback(void) {
  glad_glResumeTransformFeedback();
}
/**
 * glSampleCoverage — specify multisample coverage parameters
 *
 * @param [value] Specify a single floating-point sample coverage value. The
 * value is clamped to the range [0, 1]. The initial value is 1.0.
 *
 * @param [invert] Specify a single boolean value representing if the coverage
 * masks should be inverted. GL_TRUE and GL_FALSE are accepted. The initial
 * value is GL_FALSE.
 */
static inline void glSampleCoverage(GLfloat value, GLboolean invert) {
  glad_glSampleCoverage(value, invert);
}
/**
 * glSampleMaski — set the value of a sub-word of the sample mask
 *
 * @param [maskNumber] Specifies which 32-bit sub-word of the sample mask to
 * update.
 *
 * @param [mask] Specifies the new value of the mask sub-word.
 */
static inline void glSampleMaski(GLuint maskNumber, GLbitfield mask) {
  glad_glSampleMaski(maskNumber, mask);
}
/**
 * glSamplerParameter — set sampler parameters
 *
 * @param [sampler] Specifies the sampler object whose parameter to modify.
 *
 * @param [pname] Specifies the symbolic name of a sampler parameter. pname
 * can be one of the following: GL_TEXTURE_WRAP_S, GL_TEXTURE_WRAP_T,
 * GL_TEXTURE_WRAP_R, GL_TEXTURE_MIN_FILTER, GL_TEXTURE_MAG_FILTER,
 * GL_TEXTURE_BORDER_COLOR, GL_TEXTURE_MIN_LOD, GL_TEXTURE_MAX_LOD,
 * GL_TEXTURE_LOD_BIAS GL_TEXTURE_COMPARE_MODE, or GL_TEXTURE_COMPARE_FUNC.
 *
 * @param [param] For the scalar commands, specifies the value of pname.
 *
 * @param [params] For the vector commands (glSamplerParameter*v), specifies a
 * pointer to an array where the value or values of pname are stored.
 */
static inline void glSamplerParameterf(GLuint sampler, GLenum pname,
                                       GLfloat param) {
  glad_glSamplerParameterf(sampler, pname, param);
}
/**
 * glSamplerParameter — set sampler parameters
 *
 * @param [sampler] Specifies the sampler object whose parameter to modify.
 *
 * @param [pname] Specifies the symbolic name of a sampler parameter. pname
 * can be one of the following: GL_TEXTURE_WRAP_S, GL_TEXTURE_WRAP_T,
 * GL_TEXTURE_WRAP_R, GL_TEXTURE_MIN_FILTER, GL_TEXTURE_MAG_FILTER,
 * GL_TEXTURE_BORDER_COLOR, GL_TEXTURE_MIN_LOD, GL_TEXTURE_MAX_LOD,
 * GL_TEXTURE_LOD_BIAS GL_TEXTURE_COMPARE_MODE, or GL_TEXTURE_COMPARE_FUNC.
 *
 * @param [param] For the scalar commands, specifies the value of pname.
 *
 * @param [params] For the vector commands (glSamplerParameter*v), specifies a
 * pointer to an array where the value or values of pname are stored.
 */
static inline void glSamplerParameteri(GLuint sampler, GLenum pname,
                                       GLint param) {
  glad_glSamplerParameteri(sampler, pname, param);
}
/**
 * glSamplerParameter — set sampler parameters
 *
 * @param [sampler] Specifies the sampler object whose parameter to modify.
 *
 * @param [pname] Specifies the symbolic name of a sampler parameter. pname
 * can be one of the following: GL_TEXTURE_WRAP_S, GL_TEXTURE_WRAP_T,
 * GL_TEXTURE_WRAP_R, GL_TEXTURE_MIN_FILTER, GL_TEXTURE_MAG_FILTER,
 * GL_TEXTURE_BORDER_COLOR, GL_TEXTURE_MIN_LOD, GL_TEXTURE_MAX_LOD,
 * GL_TEXTURE_LOD_BIAS GL_TEXTURE_COMPARE_MODE, or GL_TEXTURE_COMPARE_FUNC.
 *
 * @param [param] For the scalar commands, specifies the value of pname.
 *
 * @param [params] For the vector commands (glSamplerParameter*v), specifies a
 * pointer to an array where the value or values of pname are stored.
 */
static inline void glSamplerParameterfv(GLuint sampler, GLenum pname,
                                        const GLfloat *params) {
  glad_glSamplerParameterfv(sampler, pname, params);
}
/**
 * glSamplerParameter — set sampler parameters
 *
 * @param [sampler] Specifies the sampler object whose parameter to modify.
 *
 * @param [pname] Specifies the symbolic name of a sampler parameter. pname
 * can be one of the following: GL_TEXTURE_WRAP_S, GL_TEXTURE_WRAP_T,
 * GL_TEXTURE_WRAP_R, GL_TEXTURE_MIN_FILTER, GL_TEXTURE_MAG_FILTER,
 * GL_TEXTURE_BORDER_COLOR, GL_TEXTURE_MIN_LOD, GL_TEXTURE_MAX_LOD,
 * GL_TEXTURE_LOD_BIAS GL_TEXTURE_COMPARE_MODE, or GL_TEXTURE_COMPARE_FUNC.
 *
 * @param [param] For the scalar commands, specifies the value of pname.
 *
 * @param [params] For the vector commands (glSamplerParameter*v), specifies a
 * pointer to an array where the value or values of pname are stored.
 */
static inline void glSamplerParameteriv(GLuint sampler, GLenum pname,
                                        const GLint *params) {
  glad_glSamplerParameteriv(sampler, pname, params);
}
/**
 * glSamplerParameter — set sampler parameters
 *
 * @param [sampler] Specifies the sampler object whose parameter to modify.
 *
 * @param [pname] Specifies the symbolic name of a sampler parameter. pname
 * can be one of the following: GL_TEXTURE_WRAP_S, GL_TEXTURE_WRAP_T,
 * GL_TEXTURE_WRAP_R, GL_TEXTURE_MIN_FILTER, GL_TEXTURE_MAG_FILTER,
 * GL_TEXTURE_BORDER_COLOR, GL_TEXTURE_MIN_LOD, GL_TEXTURE_MAX_LOD,
 * GL_TEXTURE_LOD_BIAS GL_TEXTURE_COMPARE_MODE, or GL_TEXTURE_COMPARE_FUNC.
 *
 * @param [param] For the scalar commands, specifies the value of pname.
 *
 * @param [params] For the vector commands (glSamplerParameter*v), specifies a
 * pointer to an array where the value or values of pname are stored.
 */
static inline void glSamplerParameterIiv(GLuint sampler, GLenum pname,
                                         const GLint *params) {
  glad_glSamplerParameterIiv(sampler, pname, params);
}
/**
 * glSamplerParameter — set sampler parameters
 *
 * @param [sampler] Specifies the sampler object whose parameter to modify.
 *
 * @param [pname] Specifies the symbolic name of a sampler parameter. pname
 * can be one of the following: GL_TEXTURE_WRAP_S, GL_TEXTURE_WRAP_T,
 * GL_TEXTURE_WRAP_R, GL_TEXTURE_MIN_FILTER, GL_TEXTURE_MAG_FILTER,
 * GL_TEXTURE_BORDER_COLOR, GL_TEXTURE_MIN_LOD, GL_TEXTURE_MAX_LOD,
 * GL_TEXTURE_LOD_BIAS GL_TEXTURE_COMPARE_MODE, or GL_TEXTURE_COMPARE_FUNC.
 *
 * @param [param] For the scalar commands, specifies the value of pname.
 *
 * @param [params] For the vector commands (glSamplerParameter*v), specifies a
 * pointer to an array where the value or values of pname are stored.
 */
static inline void glSamplerParameterIuiv(GLuint sampler, GLenum pname,
                                          const GLuint *params) {
  glad_glSamplerParameterIuiv(sampler, pname, params);
}
/**
 * glScissor — define the scissor box
 *
 * @param [x, y] Specify the lower left corner of the scissor box. Initially
 * (0, 0).
 *
 * @param [width, height] Specify the width and height of the scissor box.
 * When a GL context is first attached to a window, width and height are set
 * to the dimensions of that window.
 */
static inline void glScissor(GLint x, GLint y, GLsizei width, GLsizei height) {
  glad_glScissor(x, y, width, height);
}
/**
 * glScissorArray — define the scissor box for multiple viewports
 *
 * @param [first] Specifies the index of the first viewport whose scissor box
 * to modify.
 *
 * @param [count] Specifies the number of scissor boxes to modify.
 *
 * @param [v] Specifies the address of an array containing the left, bottom,
 * width and height of each scissor box, in that order.
 */
static inline void glScissorArrayv(GLuint first, GLsizei count,
                                   const GLint *v) {
  glad_glScissorArrayv(first, count, v);
}
/**
 * glScissorIndexed — define the scissor box for a specific viewport
 *
 * @param [index] Specifies the index of the viewport whose scissor box to
 * modify.
 *
 * @param [left, bottom] Specify the coordinate of the bottom left corner of
 * the scissor box, in pixels.
 *
 * @param [width, height] Specify ths dimensions of the scissor box, in
 * pixels.
 *
 * @param [v] For glScissorIndexedv, specifies the address of an array
 * containing the left, bottom, width and height of each scissor box, in that
 * order.
 */
static inline void glScissorIndexed(GLuint index, GLint left, GLint bottom,
                                    GLsizei width, GLsizei height) {
  glad_glScissorIndexed(index, left, bottom, width, height);
}
/**
 * glScissorIndexed — define the scissor box for a specific viewport
 *
 * @param [index] Specifies the index of the viewport whose scissor box to
 * modify.
 *
 * @param [left, bottom] Specify the coordinate of the bottom left corner of
 * the scissor box, in pixels.
 *
 * @param [width, height] Specify ths dimensions of the scissor box, in
 * pixels.
 *
 * @param [v] For glScissorIndexedv, specifies the address of an array
 * containing the left, bottom, width and height of each scissor box, in that
 * order.
 */
static inline void glScissorIndexedv(GLuint index, const GLint *v) {
  glad_glScissorIndexedv(index, v);
}
/**
 * glShaderBinary — load pre-compiled shader binaries
 *
 * @param [count] Specifies the number of shader object handles contained in
 * shaders.
 *
 * @param [shaders] Specifies the address of an array of shader handles into
 * which to load pre-compiled shader binaries.
 *
 * @param [binaryFormat] Specifies the format of the shader binaries contained
 * in binary.
 *
 * @param [binary] Specifies the address of an array of bytes containing
 * pre-compiled binary shader code.
 *
 * @param [length] Specifies the length of the array whose address is given in
 * binary.
 */
static inline void glShaderBinary(GLsizei count, const GLuint *shaders,
                                  GLenum binaryFormat, const void *binary,
                                  GLsizei length) {
  glad_glShaderBinary(count, shaders, binaryFormat, binary, length);
}
/**
 * glShaderSource — Replaces the source code in a shader object
 *
 * @param [shader] Specifies the handle of the shader object whose source code
 * is to be replaced.
 *
 * @param [count] Specifies the number of elements in the string and length
 * arrays.
 *
 * @param [string] Specifies an array of pointers to strings containing the
 * source code to be loaded into the shader.
 *
 * @param [length] Specifies an array of string lengths.
 */
static inline void glShaderSource(GLuint shader, GLsizei count,
                                  const GLchar **string, const GLint *length) {
  glad_glShaderSource(shader, count, string, length);
}
/**
 * glShaderStorageBlockBinding — change an active shader storage block binding
 *
 * @param [program] The name of the program containing the block whose binding
 * to change.
 *
 * @param [storageBlockIndex] The index storage block within the program.
 *
 * @param [storageBlockBinding] The index storage block binding to associate
 * with the specified storage block.
 */
static inline void glShaderStorageBlockBinding(GLuint program,
                                               GLuint storageBlockIndex,
                                               GLuint storageBlockBinding) {
  glad_glShaderStorageBlockBinding(program, storageBlockIndex,
                                   storageBlockBinding);
}
/**
 * glStencilFunc — set front and back function and reference value for stencil
 * testing
 *
 * @param [func] Specifies the test function. Eight symbolic constants are
 * valid: GL_NEVER, GL_LESS, GL_LEQUAL, GL_GREATER, GL_GEQUAL, GL_EQUAL,
 * GL_NOTEQUAL, and GL_ALWAYS. The initial value is GL_ALWAYS.
 *
 * @param [ref] Specifies the reference value for the stencil test. ref is
 * clamped to the range [0, 2^n - 1], where n is the number of bitplanes in
 * the stencil buffer. The initial value is 0.
 *
 * @param [mask] Specifies a mask that is ANDed with both the reference value
 * and the stored stencil value when the test is done. The initial value is
 * all 1's.
 */
static inline void glStencilFunc(GLenum func, GLint ref, GLuint mask) {
  glad_glStencilFunc(func, ref, mask);
}
/**
 * glStencilFuncSeparate — set front and/or back function and reference value
 * for stencil testing
 *
 * @param [face] Specifies whether front and/or back stencil state is updated.
 * Three symbolic constants are valid: GL_FRONT, GL_BACK, and
 * GL_FRONT_AND_BACK.
 *
 * @param [func] Specifies the test function. Eight symbolic constants are
 * valid: GL_NEVER, GL_LESS, GL_LEQUAL, GL_GREATER, GL_GEQUAL, GL_EQUAL,
 * GL_NOTEQUAL, and GL_ALWAYS. The initial value is GL_ALWAYS.
 *
 * @param [ref] Specifies the reference value for the stencil test. ref is
 * clamped to the range [0, 2^n - 1], where n is the number of bitplanes in
 * the stencil buffer. The initial value is 0.
 *
 * @param [mask] Specifies a mask that is ANDed with both the reference value
 * and the stored stencil value when the test is done. The initial value is
 * all 1's.
 */
static inline void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref,
                                         GLuint mask) {
  glad_glStencilFuncSeparate(face, func, ref, mask);
}
/**
 * glStencilMask — control the front and back writing of individual bits in
 * the stencil planes
 *
 * @param [mask] Specifies a bit mask to enable and disable writing of
 * individual bits in the stencil planes. Initially, the mask is all 1's.
 */
static inline void glStencilMask(GLuint mask) { glad_glStencilMask(mask); }
/**
 * glStencilMaskSeparate — control the front and/or back writing of individual
 * bits in the stencil planes
 *
 * @param [face] Specifies whether the front and/or back stencil writemask is
 * updated. Three symbolic constants are valid: GL_FRONT, GL_BACK, and
 * GL_FRONT_AND_BACK.
 *
 * @param [mask] Specifies a bit mask to enable and disable writing of
 * individual bits in the stencil planes. Initially, the mask is all 1's.
 */
static inline void glStencilMaskSeparate(GLenum face, GLuint mask) {
  glad_glStencilMaskSeparate(face, mask);
}
/**
 * glStencilOp — set front and back stencil test actions
 *
 * @param [sfail] Specifies the action to take when the stencil test fails.
 * Eight symbolic constants are accepted: GL_KEEP, GL_ZERO, GL_REPLACE,
 * GL_INCR, GL_INCR_WRAP, GL_DECR, GL_DECR_WRAP, and GL_INVERT. The initial
 * value is GL_KEEP.
 *
 * @param [dpfail] Specifies the stencil action when the stencil test passes,
 * but the depth test fails. dpfail accepts the same symbolic constants as
 * sfail. The initial value is GL_KEEP.
 *
 * @param [dppass] Specifies the stencil action when both the stencil test and
 * the depth test pass, or when the stencil test passes and either there is no
 * depth buffer or depth testing is not enabled. dppass accepts the same
 * symbolic constants as sfail. The initial value is GL_KEEP.
 */
static inline void glStencilOp(GLenum sfail, GLenum dpfail, GLenum dppass) {
  glad_glStencilOp(sfail, dpfail, dppass);
}
/**
 * glStencilOpSeparate — set front and/or back stencil test actions
 *
 * @param [face] Specifies whether front and/or back stencil state is updated.
 * Three symbolic constants are valid: GL_FRONT, GL_BACK, and
 * GL_FRONT_AND_BACK.
 *
 * @param [sfail] Specifies the action to take when the stencil test fails.
 * Eight symbolic constants are accepted: GL_KEEP, GL_ZERO, GL_REPLACE,
 * GL_INCR, GL_INCR_WRAP, GL_DECR, GL_DECR_WRAP, and GL_INVERT. The initial
 * value is GL_KEEP.
 *
 * @param [dpfail] Specifies the stencil action when the stencil test passes,
 * but the depth test fails. dpfail accepts the same symbolic constants as
 * sfail. The initial value is GL_KEEP.
 *
 * @param [dppass] Specifies the stencil action when both the stencil test and
 * the depth test pass, or when the stencil test passes and either there is no
 * depth buffer or depth testing is not enabled. dppass accepts the same
 * symbolic constants as sfail. The initial value is GL_KEEP.
 */
static inline void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail,
                                       GLenum dppass) {
  glad_glStencilOpSeparate(face, sfail, dpfail, dppass);
}
/**
 * glTexBuffer, glTextureBuffer — attach a buffer object's data store to a
 * buffer texture object
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glTexBuffer. Must be GL_TEXTURE_BUFFER.
 *
 * @param [texture] Specifies the texture object name for glTextureBuffer.
 *
 * @param [internalFormat] Specifies the internal format of the data in the
 * store belonging to buffer.
 *
 * @param [buffer] Specifies the name of the buffer object whose storage to
 * attach to the active buffer texture.
 */
static inline void glTexBuffer(GLenum target, GLenum internalFormat,
                               GLuint buffer) {
  glad_glTexBuffer(target, internalFormat, buffer);
}
/**
 * glTexBuffer, glTextureBuffer — attach a buffer object's data store to a
 * buffer texture object
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glTexBuffer. Must be GL_TEXTURE_BUFFER.
 *
 * @param [texture] Specifies the texture object name for glTextureBuffer.
 *
 * @param [internalFormat] Specifies the internal format of the data in the
 * store belonging to buffer.
 *
 * @param [buffer] Specifies the name of the buffer object whose storage to
 * attach to the active buffer texture.
 */
static inline void glTextureBuffer(GLuint texture, GLenum internalformat,
                                   GLuint buffer) {
  glad_glTextureBuffer(texture, internalformat, buffer);
}
/**
 * glTexBufferRange, glTextureBufferRange — attach a range of a buffer
 * object's data store to a buffer texture object
 *
 * @param [target] Specifies the target to which the texture object is bound
 * for glTexBufferRange. Must be GL_TEXTURE_BUFFER.
 *
 * @param [texture] Specifies the texture object name for
 * glTextureBufferRange.
 *
 * @param [internalFormat] Specifies the internal format of the data in the
 * store belonging to buffer.
 *
 * @param [buffer] Specifies the name of the buffer object whose storage to
 * attach to the active buffer texture.
 *
 * @param [offset] Specifies the offset of the start of the range of the
 * buffer's data store to attach.
 *
 * @param [size] Specifies the size of the range of the buffer's data store to
 * attach.
 */
static inline void glTexBufferRange(GLenum target, GLenum internalFormat,
                                    GLuint buffer, GLintptr offset,
                                    GLsizeiptr size) {
  glad_glTexBufferRange(target, internalFormat, buffer, offset, size);
}
/**
 * glTexBufferRange, glTextureBufferRange — attach a range of a buffer
 * object's data store to a buffer texture object
 *
 * @param [target] Specifies the target to which the texture object is bound
 * for glTexBufferRange. Must be GL_TEXTURE_BUFFER.
 *
 * @param [texture] Specifies the texture object name for
 * glTextureBufferRange.
 *
 * @param [internalFormat] Specifies the internal format of the data in the
 * store belonging to buffer.
 *
 * @param [buffer] Specifies the name of the buffer object whose storage to
 * attach to the active buffer texture.
 *
 * @param [offset] Specifies the offset of the start of the range of the
 * buffer's data store to attach.
 *
 * @param [size] Specifies the size of the range of the buffer's data store to
 * attach.
 */
static inline void glTextureBufferRange(GLuint texture, GLenum internalformat,
                                        GLuint buffer, GLintptr offset,
                                        GLsizei size) {
  glad_glTextureBufferRange(texture, internalformat, buffer, offset, size);
}
/**
 * glTexImage1D — specify a one-dimensional texture image
 *
 * @param [target] Specifies the target texture. Must be GL_TEXTURE_1D or
 * GL_PROXY_TEXTURE_1D.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 * image level. Level n is the nth mipmap reduction image.
 *
 * @param [internalFormat] Specifies the number of color components in the
 * texture. Must be one of base internal formats given in Table 1, one of the
 * sized internal formats given in Table 2, or one of the compressed internal
 * formats given in Table 3, below.
 *
 * @param [width] Specifies the width of the texture image. All
 * implementations support texture images that are at least 1024 texels wide.
 * The height of the 1D texture image is 1.
 *
 * @param [border] This value must be 0.
 *
 * @param [format] Specifies the format of the pixel data. The following
 * symbolic values are accepted: GL_RED, GL_RG, GL_RGB, GL_BGR, GL_RGBA,
 * GL_BGRA, GL_RED_INTEGER, GL_RG_INTEGER, GL_RGB_INTEGER, GL_BGR_INTEGER,
 * GL_RGBA_INTEGER, GL_BGRA_INTEGER, GL_STENCIL_INDEX, GL_DEPTH_COMPONENT,
 * GL_DEPTH_STENCIL.
 *
 * @param [type] Specifies the data type of the pixel data. The following
 * symbolic values are accepted: GL_UNSIGNED_BYTE, GL_BYTE, GL_UNSIGNED_SHORT,
 * GL_SHORT, GL_UNSIGNED_INT, GL_INT, GL_FLOAT, GL_UNSIGNED_BYTE_3_3_2,
 * GL_UNSIGNED_BYTE_2_3_3_REV, GL_UNSIGNED_SHORT_5_6_5,
 * GL_UNSIGNED_SHORT_5_6_5_REV, GL_UNSIGNED_SHORT_4_4_4_4,
 * GL_UNSIGNED_SHORT_4_4_4_4_REV, GL_UNSIGNED_SHORT_5_5_5_1,
 * GL_UNSIGNED_SHORT_1_5_5_5_REV, GL_UNSIGNED_INT_8_8_8_8,
 * GL_UNSIGNED_INT_8_8_8_8_REV, GL_UNSIGNED_INT_10_10_10_2, and
 * GL_UNSIGNED_INT_2_10_10_10_REV.
 *
 * @param [data] Specifies a pointer to the image data in memory.
 */
static inline void glTexImage1D(GLenum target, GLint level,
                                GLint internalFormat, GLsizei width,
                                GLint border, GLenum format, GLenum type,
                                const GLvoid *data) {
  glad_glTexImage1D(target, level, internalFormat, width, border, format, type,
                    data);
}
/**
 * glTexImage2D — specify a two-dimensional texture image
 *
 * @param [target] Specifies the target texture. Must be GL_TEXTURE_2D,
 * GL_PROXY_TEXTURE_2D, GL_TEXTURE_1D_ARRAY, GL_PROXY_TEXTURE_1D_ARRAY,
 * GL_TEXTURE_RECTANGLE, GL_PROXY_TEXTURE_RECTANGLE,
 * GL_TEXTURE_CUBE_MAP_POSITIVE_X, GL_TEXTURE_CUBE_MAP_NEGATIVE_X,
 * GL_TEXTURE_CUBE_MAP_POSITIVE_Y, GL_TEXTURE_CUBE_MAP_NEGATIVE_Y,
 * GL_TEXTURE_CUBE_MAP_POSITIVE_Z, GL_TEXTURE_CUBE_MAP_NEGATIVE_Z, or
 * GL_PROXY_TEXTURE_CUBE_MAP.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 * image level. Level n is the nth mipmap reduction image. If target is
 * GL_TEXTURE_RECTANGLE or GL_PROXY_TEXTURE_RECTANGLE, level must be 0.
 *
 * @param [internalFormat] Specifies the number of color components in the
 * texture. Must be one of base internal formats given in Table 1, one of the
 * sized internal formats given in Table 2, or one of the compressed internal
 * formats given in Table 3, below.
 *
 * @param [width] Specifies the width of the texture image. All
 * implementations support texture images that are at least 1024 texels wide.
 *
 * @param [height] Specifies the height of the texture image, or the number of
 * layers in a texture array, in the case of the GL_TEXTURE_1D_ARRAY and
 * GL_PROXY_TEXTURE_1D_ARRAY targets. All implementations support 2D texture
 * images that are at least 1024 texels high, and texture arrays that are at
 * least 256 layers deep.
 *
 * @param [border] This value must be 0.
 *
 * @param [format] Specifies the format of the pixel data. The following
 * symbolic values are accepted: GL_RED, GL_RG, GL_RGB, GL_BGR, GL_RGBA,
 * GL_BGRA, GL_RED_INTEGER, GL_RG_INTEGER, GL_RGB_INTEGER, GL_BGR_INTEGER,
 * GL_RGBA_INTEGER, GL_BGRA_INTEGER, GL_STENCIL_INDEX, GL_DEPTH_COMPONENT,
 * GL_DEPTH_STENCIL.
 *
 * @param [type] Specifies the data type of the pixel data. The following
 * symbolic values are accepted: GL_UNSIGNED_BYTE, GL_BYTE, GL_UNSIGNED_SHORT,
 * GL_SHORT, GL_UNSIGNED_INT, GL_INT, GL_FLOAT, GL_UNSIGNED_BYTE_3_3_2,
 * GL_UNSIGNED_BYTE_2_3_3_REV, GL_UNSIGNED_SHORT_5_6_5,
 * GL_UNSIGNED_SHORT_5_6_5_REV, GL_UNSIGNED_SHORT_4_4_4_4,
 * GL_UNSIGNED_SHORT_4_4_4_4_REV, GL_UNSIGNED_SHORT_5_5_5_1,
 * GL_UNSIGNED_SHORT_1_5_5_5_REV, GL_UNSIGNED_INT_8_8_8_8,
 * GL_UNSIGNED_INT_8_8_8_8_REV, GL_UNSIGNED_INT_10_10_10_2, and
 * GL_UNSIGNED_INT_2_10_10_10_REV.
 *
 * @param [data] Specifies a pointer to the image data in memory.
 */
static inline void glTexImage2D(GLenum target, GLint level,
                                GLint internalFormat, GLsizei width,
                                GLsizei height, GLint border, GLenum format,
                                GLenum type, const GLvoid *data) {
  glad_glTexImage2D(target, level, internalFormat, width, height, border,
                    format, type, data);
}
/**
 * glTexImage2DMultisample — establish the data storage, format, dimensions,
 * and number of samples of a multisample texture's image
 *
 * @param [target] Specifies the target of the operation. target must be
 * GL_TEXTURE_2D_MULTISAMPLE or GL_PROXY_TEXTURE_2D_MULTISAMPLE.
 *
 * @param [samples] The number of samples in the multisample texture's image.
 *
 * @param [internalformat] The internal format to be used to store the
 * multisample texture's image. internalformat must specify a
 * color-renderable, depth-renderable, or stencil-renderable format.
 *
 * @param [width] The width of the multisample texture's image, in texels.
 *
 * @param [height] The height of the multisample texture's image, in texels.
 *
 * @param [fixedsamplelocations] Specifies whether the image will use
 * identical sample locations and the same number of samples for all texels in
 * the image, and the sample locations will not depend on the internal format
 * or size of the image.
 */
static inline void glTexImage2DMultisample(GLenum target, GLsizei samples,
                                           GLenum internalformat, GLsizei width,
                                           GLsizei height,
                                           GLboolean fixedsamplelocations) {
  glad_glTexImage2DMultisample(target, samples, internalformat, width, height,
                               fixedsamplelocations);
}
/**
 * glTexImage3D — specify a three-dimensional texture image
 *
 * @param [target] Specifies the target texture. Must be one of GL_TEXTURE_3D,
 * GL_PROXY_TEXTURE_3D, GL_TEXTURE_2D_ARRAY or GL_PROXY_TEXTURE_2D_ARRAY.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 * image level. Level n is the n th mipmap reduction image.
 *
 * @param [internalFormat] Specifies the number of color components in the
 * texture. Must be one of base internal formats given in Table 1, one of the
 * sized internal formats given in Table 2, or one of the compressed internal
 * formats given in Table 3, below.
 *
 * @param [width] Specifies the width of the texture image. All
 * implementations support 3D texture images that are at least 16 texels wide.
 *
 * @param [height] Specifies the height of the texture image. All
 * implementations support 3D texture images that are at least 256 texels
 * high.
 *
 * @param [depth] Specifies the depth of the texture image, or the number of
 * layers in a texture array. All implementations support 3D texture images
 * that are at least 256 texels deep, and texture arrays that are at least 256
 * layers deep.
 *
 * @param [border] This value must be 0.
 *
 * @param [format] Specifies the format of the pixel data. The following
 * symbolic values are accepted: GL_RED, GL_RG, GL_RGB, GL_BGR, GL_RGBA,
 * GL_BGRA, GL_RED_INTEGER, GL_RG_INTEGER, GL_RGB_INTEGER, GL_BGR_INTEGER,
 * GL_RGBA_INTEGER, GL_BGRA_INTEGER, GL_STENCIL_INDEX, GL_DEPTH_COMPONENT,
 * GL_DEPTH_STENCIL.
 *
 * @param [type] Specifies the data type of the pixel data. The following
 * symbolic values are accepted: GL_UNSIGNED_BYTE, GL_BYTE, GL_UNSIGNED_SHORT,
 * GL_SHORT, GL_UNSIGNED_INT, GL_INT, GL_FLOAT, GL_UNSIGNED_BYTE_3_3_2,
 * GL_UNSIGNED_BYTE_2_3_3_REV, GL_UNSIGNED_SHORT_5_6_5,
 * GL_UNSIGNED_SHORT_5_6_5_REV, GL_UNSIGNED_SHORT_4_4_4_4,
 * GL_UNSIGNED_SHORT_4_4_4_4_REV, GL_UNSIGNED_SHORT_5_5_5_1,
 * GL_UNSIGNED_SHORT_1_5_5_5_REV, GL_UNSIGNED_INT_8_8_8_8,
 * GL_UNSIGNED_INT_8_8_8_8_REV, GL_UNSIGNED_INT_10_10_10_2, and
 * GL_UNSIGNED_INT_2_10_10_10_REV.
 *
 * @param [data] Specifies a pointer to the image data in memory.
 */
static inline void glTexImage3D(GLenum target, GLint level,
                                GLint internalFormat, GLsizei width,
                                GLsizei height, GLsizei depth, GLint border,
                                GLenum format, GLenum type,
                                const GLvoid *data) {
  glad_glTexImage3D(target, level, internalFormat, width, height, depth, border,
                    format, type, data);
}
/**
 * glTexImage3DMultisample — establish the data storage, format, dimensions,
 * and number of samples of a multisample texture's image
 *
 * @param [target] Specifies the target of the operation. target must be
 * GL_TEXTURE_2D_MULTISAMPLE_ARRAY or GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY.
 *
 * @param [samples] The number of samples in the multisample texture's image.
 *
 * @param [internalformat] The internal format to be used to store the
 * multisample texture's image. internalformat must specify a
 * color-renderable, depth-renderable, or stencil-renderable format.
 *
 * @param [width] The width of the multisample texture's image, in texels.
 *
 * @param [height] The height of the multisample texture's image, in texels.
 *
 * @param [fixedsamplelocations] Specifies whether the image will use
 * identical sample locations and the same number of samples for all texels in
 * the image, and the sample locations will not depend on the internal format
 * or size of the image.
 */
static inline void glTexImage3DMultisample(GLenum target, GLsizei samples,
                                           GLenum internalformat, GLsizei width,
                                           GLsizei height, GLsizei depth,
                                           GLboolean fixedsamplelocations) {
  glad_glTexImage3DMultisample(target, samples, internalformat, width, height,
                               depth, fixedsamplelocations);
}
/**
 * glTexParameter, glTextureParameter — set texture parameters
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glTexParameter functions. Must be one of GL_TEXTURE_1D,
 * GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D, GL_TEXTURE_2D_ARRAY,
 * GL_TEXTURE_2D_MULTISAMPLE, GL_TEXTURE_2D_MULTISAMPLE_ARRAY, GL_TEXTURE_3D,
 * GL_TEXTURE_CUBE_MAP, GL_TEXTURE_CUBE_MAP_ARRAY, or GL_TEXTURE_RECTANGLE.
 *
 * @param [texture] Specifies the texture object name for glTextureParameter
 * functions.
 *
 * @param [pname] Specifies the symbolic name of a single-valued texture
 * parameter. pname can be one of the following:
 * GL_DEPTH_STENCIL_TEXTURE_MODE, GL_TEXTURE_BASE_LEVEL,
 * GL_TEXTURE_COMPARE_FUNC, GL_TEXTURE_COMPARE_MODE, GL_TEXTURE_LOD_BIAS,
 * GL_TEXTURE_MIN_FILTER, GL_TEXTURE_MAG_FILTER, GL_TEXTURE_MIN_LOD,
 * GL_TEXTURE_MAX_LOD, GL_TEXTURE_MAX_LEVEL, GL_TEXTURE_SWIZZLE_R,
 * GL_TEXTURE_SWIZZLE_G, GL_TEXTURE_SWIZZLE_B, GL_TEXTURE_SWIZZLE_A,
 * GL_TEXTURE_WRAP_S, GL_TEXTURE_WRAP_T, or GL_TEXTURE_WRAP_R.
 *
 * @param [param] For the scalar commands, specifies the value of pname.
 *
 * @param [params] For the vector commands, specifies a pointer to an array
 * where the value or values of pname are stored.
 */
static inline void glTexParameterf(GLenum target, GLenum pname, GLfloat param) {
  glad_glTexParameterf(target, pname, param);
}
/**
 * glTexParameter, glTextureParameter — set texture parameters
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glTexParameter functions. Must be one of GL_TEXTURE_1D,
 * GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D, GL_TEXTURE_2D_ARRAY,
 * GL_TEXTURE_2D_MULTISAMPLE, GL_TEXTURE_2D_MULTISAMPLE_ARRAY, GL_TEXTURE_3D,
 * GL_TEXTURE_CUBE_MAP, GL_TEXTURE_CUBE_MAP_ARRAY, or GL_TEXTURE_RECTANGLE.
 *
 * @param [texture] Specifies the texture object name for glTextureParameter
 * functions.
 *
 * @param [pname] Specifies the symbolic name of a single-valued texture
 * parameter. pname can be one of the following:
 * GL_DEPTH_STENCIL_TEXTURE_MODE, GL_TEXTURE_BASE_LEVEL,
 * GL_TEXTURE_COMPARE_FUNC, GL_TEXTURE_COMPARE_MODE, GL_TEXTURE_LOD_BIAS,
 * GL_TEXTURE_MIN_FILTER, GL_TEXTURE_MAG_FILTER, GL_TEXTURE_MIN_LOD,
 * GL_TEXTURE_MAX_LOD, GL_TEXTURE_MAX_LEVEL, GL_TEXTURE_SWIZZLE_R,
 * GL_TEXTURE_SWIZZLE_G, GL_TEXTURE_SWIZZLE_B, GL_TEXTURE_SWIZZLE_A,
 * GL_TEXTURE_WRAP_S, GL_TEXTURE_WRAP_T, or GL_TEXTURE_WRAP_R.
 *
 * @param [param] For the scalar commands, specifies the value of pname.
 *
 * @param [params] For the vector commands, specifies a pointer to an array
 * where the value or values of pname are stored.
 */
static inline void glTexParameteri(GLenum target, GLenum pname, GLint param) {
  glad_glTexParameteri(target, pname, param);
}
/**
 * glTexParameter, glTextureParameter — set texture parameters
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glTexParameter functions. Must be one of GL_TEXTURE_1D,
 * GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D, GL_TEXTURE_2D_ARRAY,
 * GL_TEXTURE_2D_MULTISAMPLE, GL_TEXTURE_2D_MULTISAMPLE_ARRAY, GL_TEXTURE_3D,
 * GL_TEXTURE_CUBE_MAP, GL_TEXTURE_CUBE_MAP_ARRAY, or GL_TEXTURE_RECTANGLE.
 *
 * @param [texture] Specifies the texture object name for glTextureParameter
 * functions.
 *
 * @param [pname] Specifies the symbolic name of a single-valued texture
 * parameter. pname can be one of the following:
 * GL_DEPTH_STENCIL_TEXTURE_MODE, GL_TEXTURE_BASE_LEVEL,
 * GL_TEXTURE_COMPARE_FUNC, GL_TEXTURE_COMPARE_MODE, GL_TEXTURE_LOD_BIAS,
 * GL_TEXTURE_MIN_FILTER, GL_TEXTURE_MAG_FILTER, GL_TEXTURE_MIN_LOD,
 * GL_TEXTURE_MAX_LOD, GL_TEXTURE_MAX_LEVEL, GL_TEXTURE_SWIZZLE_R,
 * GL_TEXTURE_SWIZZLE_G, GL_TEXTURE_SWIZZLE_B, GL_TEXTURE_SWIZZLE_A,
 * GL_TEXTURE_WRAP_S, GL_TEXTURE_WRAP_T, or GL_TEXTURE_WRAP_R.
 *
 * @param [param] For the scalar commands, specifies the value of pname.
 *
 * @param [params] For the vector commands, specifies a pointer to an array
 * where the value or values of pname are stored.
 */
static inline void glTextureParameterf(GLuint texture, GLenum pname,
                                       GLfloat param) {
  glad_glTextureParameterf(texture, pname, param);
}
/**
 * glTexParameter, glTextureParameter — set texture parameters
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glTexParameter functions. Must be one of GL_TEXTURE_1D,
 * GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D, GL_TEXTURE_2D_ARRAY,
 * GL_TEXTURE_2D_MULTISAMPLE, GL_TEXTURE_2D_MULTISAMPLE_ARRAY, GL_TEXTURE_3D,
 * GL_TEXTURE_CUBE_MAP, GL_TEXTURE_CUBE_MAP_ARRAY, or GL_TEXTURE_RECTANGLE.
 *
 * @param [texture] Specifies the texture object name for glTextureParameter
 * functions.
 *
 * @param [pname] Specifies the symbolic name of a single-valued texture
 * parameter. pname can be one of the following:
 * GL_DEPTH_STENCIL_TEXTURE_MODE, GL_TEXTURE_BASE_LEVEL,
 * GL_TEXTURE_COMPARE_FUNC, GL_TEXTURE_COMPARE_MODE, GL_TEXTURE_LOD_BIAS,
 * GL_TEXTURE_MIN_FILTER, GL_TEXTURE_MAG_FILTER, GL_TEXTURE_MIN_LOD,
 * GL_TEXTURE_MAX_LOD, GL_TEXTURE_MAX_LEVEL, GL_TEXTURE_SWIZZLE_R,
 * GL_TEXTURE_SWIZZLE_G, GL_TEXTURE_SWIZZLE_B, GL_TEXTURE_SWIZZLE_A,
 * GL_TEXTURE_WRAP_S, GL_TEXTURE_WRAP_T, or GL_TEXTURE_WRAP_R.
 *
 * @param [param] For the scalar commands, specifies the value of pname.
 *
 * @param [params] For the vector commands, specifies a pointer to an array
 * where the value or values of pname are stored.
 */
static inline void glTextureParameteri(GLuint texture, GLenum pname,
                                       GLint param) {
  glad_glTextureParameteri(texture, pname, param);
}
/**
 * glTexParameter, glTextureParameter — set texture parameters
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glTexParameter functions. Must be one of GL_TEXTURE_1D,
 * GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D, GL_TEXTURE_2D_ARRAY,
 * GL_TEXTURE_2D_MULTISAMPLE, GL_TEXTURE_2D_MULTISAMPLE_ARRAY, GL_TEXTURE_3D,
 * GL_TEXTURE_CUBE_MAP, GL_TEXTURE_CUBE_MAP_ARRAY, or GL_TEXTURE_RECTANGLE.
 *
 * @param [texture] Specifies the texture object name for glTextureParameter
 * functions.
 *
 * @param [pname] Specifies the symbolic name of a single-valued texture
 * parameter. pname can be one of the following:
 * GL_DEPTH_STENCIL_TEXTURE_MODE, GL_TEXTURE_BASE_LEVEL,
 * GL_TEXTURE_COMPARE_FUNC, GL_TEXTURE_COMPARE_MODE, GL_TEXTURE_LOD_BIAS,
 * GL_TEXTURE_MIN_FILTER, GL_TEXTURE_MAG_FILTER, GL_TEXTURE_MIN_LOD,
 * GL_TEXTURE_MAX_LOD, GL_TEXTURE_MAX_LEVEL, GL_TEXTURE_SWIZZLE_R,
 * GL_TEXTURE_SWIZZLE_G, GL_TEXTURE_SWIZZLE_B, GL_TEXTURE_SWIZZLE_A,
 * GL_TEXTURE_WRAP_S, GL_TEXTURE_WRAP_T, or GL_TEXTURE_WRAP_R.
 *
 * @param [param] For the scalar commands, specifies the value of pname.
 *
 * @param [params] For the vector commands, specifies a pointer to an array
 * where the value or values of pname are stored.
 */
static inline void glTexParameterfv(GLenum target, GLenum pname,
                                    const GLfloat *params) {
  glad_glTexParameterfv(target, pname, params);
}
/**
 * glTexParameter, glTextureParameter — set texture parameters
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glTexParameter functions. Must be one of GL_TEXTURE_1D,
 * GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D, GL_TEXTURE_2D_ARRAY,
 * GL_TEXTURE_2D_MULTISAMPLE, GL_TEXTURE_2D_MULTISAMPLE_ARRAY, GL_TEXTURE_3D,
 * GL_TEXTURE_CUBE_MAP, GL_TEXTURE_CUBE_MAP_ARRAY, or GL_TEXTURE_RECTANGLE.
 *
 * @param [texture] Specifies the texture object name for glTextureParameter
 * functions.
 *
 * @param [pname] Specifies the symbolic name of a single-valued texture
 * parameter. pname can be one of the following:
 * GL_DEPTH_STENCIL_TEXTURE_MODE, GL_TEXTURE_BASE_LEVEL,
 * GL_TEXTURE_COMPARE_FUNC, GL_TEXTURE_COMPARE_MODE, GL_TEXTURE_LOD_BIAS,
 * GL_TEXTURE_MIN_FILTER, GL_TEXTURE_MAG_FILTER, GL_TEXTURE_MIN_LOD,
 * GL_TEXTURE_MAX_LOD, GL_TEXTURE_MAX_LEVEL, GL_TEXTURE_SWIZZLE_R,
 * GL_TEXTURE_SWIZZLE_G, GL_TEXTURE_SWIZZLE_B, GL_TEXTURE_SWIZZLE_A,
 * GL_TEXTURE_WRAP_S, GL_TEXTURE_WRAP_T, or GL_TEXTURE_WRAP_R.
 *
 * @param [param] For the scalar commands, specifies the value of pname.
 *
 * @param [params] For the vector commands, specifies a pointer to an array
 * where the value or values of pname are stored.
 */
static inline void glTexParameteriv(GLenum target, GLenum pname,
                                    const GLint *params) {
  glad_glTexParameteriv(target, pname, params);
}
/**
 * glTexParameter, glTextureParameter — set texture parameters
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glTexParameter functions. Must be one of GL_TEXTURE_1D,
 * GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D, GL_TEXTURE_2D_ARRAY,
 * GL_TEXTURE_2D_MULTISAMPLE, GL_TEXTURE_2D_MULTISAMPLE_ARRAY, GL_TEXTURE_3D,
 * GL_TEXTURE_CUBE_MAP, GL_TEXTURE_CUBE_MAP_ARRAY, or GL_TEXTURE_RECTANGLE.
 *
 * @param [texture] Specifies the texture object name for glTextureParameter
 * functions.
 *
 * @param [pname] Specifies the symbolic name of a single-valued texture
 * parameter. pname can be one of the following:
 * GL_DEPTH_STENCIL_TEXTURE_MODE, GL_TEXTURE_BASE_LEVEL,
 * GL_TEXTURE_COMPARE_FUNC, GL_TEXTURE_COMPARE_MODE, GL_TEXTURE_LOD_BIAS,
 * GL_TEXTURE_MIN_FILTER, GL_TEXTURE_MAG_FILTER, GL_TEXTURE_MIN_LOD,
 * GL_TEXTURE_MAX_LOD, GL_TEXTURE_MAX_LEVEL, GL_TEXTURE_SWIZZLE_R,
 * GL_TEXTURE_SWIZZLE_G, GL_TEXTURE_SWIZZLE_B, GL_TEXTURE_SWIZZLE_A,
 * GL_TEXTURE_WRAP_S, GL_TEXTURE_WRAP_T, or GL_TEXTURE_WRAP_R.
 *
 * @param [param] For the scalar commands, specifies the value of pname.
 *
 * @param [params] For the vector commands, specifies a pointer to an array
 * where the value or values of pname are stored.
 */
static inline void glTexParameterIiv(GLenum target, GLenum pname,
                                     const GLint *params) {
  glad_glTexParameterIiv(target, pname, params);
}
/**
 * glTexParameter, glTextureParameter — set texture parameters
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glTexParameter functions. Must be one of GL_TEXTURE_1D,
 * GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D, GL_TEXTURE_2D_ARRAY,
 * GL_TEXTURE_2D_MULTISAMPLE, GL_TEXTURE_2D_MULTISAMPLE_ARRAY, GL_TEXTURE_3D,
 * GL_TEXTURE_CUBE_MAP, GL_TEXTURE_CUBE_MAP_ARRAY, or GL_TEXTURE_RECTANGLE.
 *
 * @param [texture] Specifies the texture object name for glTextureParameter
 * functions.
 *
 * @param [pname] Specifies the symbolic name of a single-valued texture
 * parameter. pname can be one of the following:
 * GL_DEPTH_STENCIL_TEXTURE_MODE, GL_TEXTURE_BASE_LEVEL,
 * GL_TEXTURE_COMPARE_FUNC, GL_TEXTURE_COMPARE_MODE, GL_TEXTURE_LOD_BIAS,
 * GL_TEXTURE_MIN_FILTER, GL_TEXTURE_MAG_FILTER, GL_TEXTURE_MIN_LOD,
 * GL_TEXTURE_MAX_LOD, GL_TEXTURE_MAX_LEVEL, GL_TEXTURE_SWIZZLE_R,
 * GL_TEXTURE_SWIZZLE_G, GL_TEXTURE_SWIZZLE_B, GL_TEXTURE_SWIZZLE_A,
 * GL_TEXTURE_WRAP_S, GL_TEXTURE_WRAP_T, or GL_TEXTURE_WRAP_R.
 *
 * @param [param] For the scalar commands, specifies the value of pname.
 *
 * @param [params] For the vector commands, specifies a pointer to an array
 * where the value or values of pname are stored.
 */
static inline void glTexParameterIuiv(GLenum target, GLenum pname,
                                      const GLuint *params) {
  glad_glTexParameterIuiv(target, pname, params);
}
/**
 * glTexParameter, glTextureParameter — set texture parameters
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glTexParameter functions. Must be one of GL_TEXTURE_1D,
 * GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D, GL_TEXTURE_2D_ARRAY,
 * GL_TEXTURE_2D_MULTISAMPLE, GL_TEXTURE_2D_MULTISAMPLE_ARRAY, GL_TEXTURE_3D,
 * GL_TEXTURE_CUBE_MAP, GL_TEXTURE_CUBE_MAP_ARRAY, or GL_TEXTURE_RECTANGLE.
 *
 * @param [texture] Specifies the texture object name for glTextureParameter
 * functions.
 *
 * @param [pname] Specifies the symbolic name of a single-valued texture
 * parameter. pname can be one of the following:
 * GL_DEPTH_STENCIL_TEXTURE_MODE, GL_TEXTURE_BASE_LEVEL,
 * GL_TEXTURE_COMPARE_FUNC, GL_TEXTURE_COMPARE_MODE, GL_TEXTURE_LOD_BIAS,
 * GL_TEXTURE_MIN_FILTER, GL_TEXTURE_MAG_FILTER, GL_TEXTURE_MIN_LOD,
 * GL_TEXTURE_MAX_LOD, GL_TEXTURE_MAX_LEVEL, GL_TEXTURE_SWIZZLE_R,
 * GL_TEXTURE_SWIZZLE_G, GL_TEXTURE_SWIZZLE_B, GL_TEXTURE_SWIZZLE_A,
 * GL_TEXTURE_WRAP_S, GL_TEXTURE_WRAP_T, or GL_TEXTURE_WRAP_R.
 *
 * @param [param] For the scalar commands, specifies the value of pname.
 *
 * @param [params] For the vector commands, specifies a pointer to an array
 * where the value or values of pname are stored.
 */
static inline void glTextureParameterfv(GLuint texture, GLenum pname,
                                        const GLfloat *paramtexture) {
  glad_glTextureParameterfv(texture, pname, paramtexture);
}
/**
 * glTexParameter, glTextureParameter — set texture parameters
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glTexParameter functions. Must be one of GL_TEXTURE_1D,
 * GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D, GL_TEXTURE_2D_ARRAY,
 * GL_TEXTURE_2D_MULTISAMPLE, GL_TEXTURE_2D_MULTISAMPLE_ARRAY, GL_TEXTURE_3D,
 * GL_TEXTURE_CUBE_MAP, GL_TEXTURE_CUBE_MAP_ARRAY, or GL_TEXTURE_RECTANGLE.
 *
 * @param [texture] Specifies the texture object name for glTextureParameter
 * functions.
 *
 * @param [pname] Specifies the symbolic name of a single-valued texture
 * parameter. pname can be one of the following:
 * GL_DEPTH_STENCIL_TEXTURE_MODE, GL_TEXTURE_BASE_LEVEL,
 * GL_TEXTURE_COMPARE_FUNC, GL_TEXTURE_COMPARE_MODE, GL_TEXTURE_LOD_BIAS,
 * GL_TEXTURE_MIN_FILTER, GL_TEXTURE_MAG_FILTER, GL_TEXTURE_MIN_LOD,
 * GL_TEXTURE_MAX_LOD, GL_TEXTURE_MAX_LEVEL, GL_TEXTURE_SWIZZLE_R,
 * GL_TEXTURE_SWIZZLE_G, GL_TEXTURE_SWIZZLE_B, GL_TEXTURE_SWIZZLE_A,
 * GL_TEXTURE_WRAP_S, GL_TEXTURE_WRAP_T, or GL_TEXTURE_WRAP_R.
 *
 * @param [param] For the scalar commands, specifies the value of pname.
 *
 * @param [params] For the vector commands, specifies a pointer to an array
 * where the value or values of pname are stored.
 */
static inline void glTextureParameteriv(GLuint texture, GLenum pname,
                                        const GLint *param) {
  glad_glTextureParameteriv(texture, pname, param);
}
/**
 * glTexParameter, glTextureParameter — set texture parameters
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glTexParameter functions. Must be one of GL_TEXTURE_1D,
 * GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D, GL_TEXTURE_2D_ARRAY,
 * GL_TEXTURE_2D_MULTISAMPLE, GL_TEXTURE_2D_MULTISAMPLE_ARRAY, GL_TEXTURE_3D,
 * GL_TEXTURE_CUBE_MAP, GL_TEXTURE_CUBE_MAP_ARRAY, or GL_TEXTURE_RECTANGLE.
 *
 * @param [texture] Specifies the texture object name for glTextureParameter
 * functions.
 *
 * @param [pname] Specifies the symbolic name of a single-valued texture
 * parameter. pname can be one of the following:
 * GL_DEPTH_STENCIL_TEXTURE_MODE, GL_TEXTURE_BASE_LEVEL,
 * GL_TEXTURE_COMPARE_FUNC, GL_TEXTURE_COMPARE_MODE, GL_TEXTURE_LOD_BIAS,
 * GL_TEXTURE_MIN_FILTER, GL_TEXTURE_MAG_FILTER, GL_TEXTURE_MIN_LOD,
 * GL_TEXTURE_MAX_LOD, GL_TEXTURE_MAX_LEVEL, GL_TEXTURE_SWIZZLE_R,
 * GL_TEXTURE_SWIZZLE_G, GL_TEXTURE_SWIZZLE_B, GL_TEXTURE_SWIZZLE_A,
 * GL_TEXTURE_WRAP_S, GL_TEXTURE_WRAP_T, or GL_TEXTURE_WRAP_R.
 *
 * @param [param] For the scalar commands, specifies the value of pname.
 *
 * @param [params] For the vector commands, specifies a pointer to an array
 * where the value or values of pname are stored.
 */
static inline void glTextureParameterIiv(GLuint texture, GLenum pname,
                                         const GLint *params) {
  glad_glTextureParameterIiv(texture, pname, params);
}
/**
 * glTexParameter, glTextureParameter — set texture parameters
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glTexParameter functions. Must be one of GL_TEXTURE_1D,
 * GL_TEXTURE_1D_ARRAY, GL_TEXTURE_2D, GL_TEXTURE_2D_ARRAY,
 * GL_TEXTURE_2D_MULTISAMPLE, GL_TEXTURE_2D_MULTISAMPLE_ARRAY, GL_TEXTURE_3D,
 * GL_TEXTURE_CUBE_MAP, GL_TEXTURE_CUBE_MAP_ARRAY, or GL_TEXTURE_RECTANGLE.
 *
 * @param [texture] Specifies the texture object name for glTextureParameter
 * functions.
 *
 * @param [pname] Specifies the symbolic name of a single-valued texture
 * parameter. pname can be one of the following:
 * GL_DEPTH_STENCIL_TEXTURE_MODE, GL_TEXTURE_BASE_LEVEL,
 * GL_TEXTURE_COMPARE_FUNC, GL_TEXTURE_COMPARE_MODE, GL_TEXTURE_LOD_BIAS,
 * GL_TEXTURE_MIN_FILTER, GL_TEXTURE_MAG_FILTER, GL_TEXTURE_MIN_LOD,
 * GL_TEXTURE_MAX_LOD, GL_TEXTURE_MAX_LEVEL, GL_TEXTURE_SWIZZLE_R,
 * GL_TEXTURE_SWIZZLE_G, GL_TEXTURE_SWIZZLE_B, GL_TEXTURE_SWIZZLE_A,
 * GL_TEXTURE_WRAP_S, GL_TEXTURE_WRAP_T, or GL_TEXTURE_WRAP_R.
 *
 * @param [param] For the scalar commands, specifies the value of pname.
 *
 * @param [params] For the vector commands, specifies a pointer to an array
 * where the value or values of pname are stored.
 */
static inline void glTextureParameterIuiv(GLuint texture, GLenum pname,
                                          const GLuint *params) {
  glad_glTextureParameterIuiv(texture, pname, params);
}
/**
 * glTexStorage1D, glTextureStorage1D — simultaneously specify storage for all
 * levels of a one-dimensional texture
 *
 * @param [target] Specifies the target to which the texture object is bound
 * for glTexStorage1D. Must be one of GL_TEXTURE_1D or GL_PROXY_TEXTURE_1D.
 *
 * @param [texture] Specifies the texture object name for glTextureStorage1D.
 * The effective target of texture must be one of the valid non-proxy target
 * values above.
 *
 * @param [levels] Specify the number of texture levels.
 *
 * @param [internalformat] Specifies the sized internal format to be used to
 * store texture image data.
 *
 * @param [width] Specifies the width of the texture, in texels.
 */
static inline void glTexStorage1D(GLenum target, GLsizei levels,
                                  GLenum internalformat, GLsizei width) {
  glad_glTexStorage1D(target, levels, internalformat, width);
}
/**
 * glTexStorage1D, glTextureStorage1D — simultaneously specify storage for all
 * levels of a one-dimensional texture
 *
 * @param [target] Specifies the target to which the texture object is bound
 * for glTexStorage1D. Must be one of GL_TEXTURE_1D or GL_PROXY_TEXTURE_1D.
 *
 * @param [texture] Specifies the texture object name for glTextureStorage1D.
 * The effective target of texture must be one of the valid non-proxy target
 * values above.
 *
 * @param [levels] Specify the number of texture levels.
 *
 * @param [internalformat] Specifies the sized internal format to be used to
 * store texture image data.
 *
 * @param [width] Specifies the width of the texture, in texels.
 */
static inline void glTextureStorage1D(GLuint texture, GLsizei levels,
                                      GLenum internalformat, GLsizei width) {
  glad_glTextureStorage1D(texture, levels, internalformat, width);
}
/**
 * glTexStorage2D, glTextureStorage2D — simultaneously specify storage for all
 * levels of a two-dimensional or one-dimensional array texture
 *
 * @param [target] Specifies the target to which the texture object is bound
 * for glTexStorage2D. Must be one of GL_TEXTURE_2D, GL_TEXTURE_1D_ARRAY,
 * GL_TEXTURE_RECTANGLE, GL_PROXY_TEXTURE_2D, GL_PROXY_TEXTURE_1D_ARRAY,
 * GL_PROXY_TEXTURE_RECTANGLE, or GL_PROXY_TEXTURE_CUBE_MAP.
 *
 * @param [texture] Specifies the texture object name for glTextureStorage2D.
 * The effective target of texture must be one of the valid non-proxy target
 * values above.
 *
 * @param [levels] Specify the number of texture levels.
 *
 * @param [internalformat] Specifies the sized internal format to be used to
 * store texture image data.
 *
 * @param [width] Specifies the width of the texture, in texels.
 *
 * @param [height] Specifies the height of the texture, in texels.
 */
static inline void glTexStorage2D(GLenum target, GLsizei levels,
                                  GLenum internalformat, GLsizei width,
                                  GLsizei height) {
  glad_glTexStorage2D(target, levels, internalformat, width, height);
}
/**
 * glTexStorage2D, glTextureStorage2D — simultaneously specify storage for all
 * levels of a two-dimensional or one-dimensional array texture
 *
 * @param [target] Specifies the target to which the texture object is bound
 * for glTexStorage2D. Must be one of GL_TEXTURE_2D, GL_TEXTURE_1D_ARRAY,
 * GL_TEXTURE_RECTANGLE, GL_PROXY_TEXTURE_2D, GL_PROXY_TEXTURE_1D_ARRAY,
 * GL_PROXY_TEXTURE_RECTANGLE, or GL_PROXY_TEXTURE_CUBE_MAP.
 *
 * @param [texture] Specifies the texture object name for glTextureStorage2D.
 * The effective target of texture must be one of the valid non-proxy target
 * values above.
 *
 * @param [levels] Specify the number of texture levels.
 *
 * @param [internalformat] Specifies the sized internal format to be used to
 * store texture image data.
 *
 * @param [width] Specifies the width of the texture, in texels.
 *
 * @param [height] Specifies the height of the texture, in texels.
 */
static inline void glTextureStorage2D(GLuint texture, GLsizei levels,
                                      GLenum internalformat, GLsizei width,
                                      GLsizei height) {
  glad_glTextureStorage2D(texture, levels, internalformat, width, height);
}
/**
 * glTexStorage2DMultisample, glTextureStorage2DMultisample — specify storage
 * for a two-dimensional multisample texture
 *
 * @param [target] Specifies the target to which the texture object is bound
 * for glTexStorage2DMultisample. Must be one of GL_TEXTURE_2D_MULTISAMPLE or
 * GL_PROXY_TEXTURE_2D_MULTISAMPLE.
 *
 * @param [texture] Specifies the texture object name for
 * glTextureStorage2DMultisample. The effective target of texture must be one
 * of the valid non-proxy target values above.
 *
 * @param [samples] Specify the number of samples in the texture.
 *
 * @param [internalformat] Specifies the sized internal format to be used to
 * store texture image data.
 *
 * @param [width] Specifies the width of the texture, in texels.
 *
 * @param [height] Specifies the height of the texture, in texels.
 *
 * @param [fixedsamplelocations] Specifies whether the image will use
 * identical sample locations and the same number of samples for all texels in
 * the image, and the sample locations will not depend on the internal format
 * or size of the image.
 */
static inline void glTexStorage2DMultisample(GLenum target, GLsizei samples,
                                             GLenum internalformat,
                                             GLsizei width, GLsizei height,
                                             GLboolean fixedsamplelocations) {
  glad_glTexStorage2DMultisample(target, samples, internalformat, width, height,
                                 fixedsamplelocations);
}
/**
 * glTexStorage2DMultisample, glTextureStorage2DMultisample — specify storage
 * for a two-dimensional multisample texture
 *
 * @param [target] Specifies the target to which the texture object is bound
 * for glTexStorage2DMultisample. Must be one of GL_TEXTURE_2D_MULTISAMPLE or
 * GL_PROXY_TEXTURE_2D_MULTISAMPLE.
 *
 * @param [texture] Specifies the texture object name for
 * glTextureStorage2DMultisample. The effective target of texture must be one
 * of the valid non-proxy target values above.
 *
 * @param [samples] Specify the number of samples in the texture.
 *
 * @param [internalformat] Specifies the sized internal format to be used to
 * store texture image data.
 *
 * @param [width] Specifies the width of the texture, in texels.
 *
 * @param [height] Specifies the height of the texture, in texels.
 *
 * @param [fixedsamplelocations] Specifies whether the image will use
 * identical sample locations and the same number of samples for all texels in
 * the image, and the sample locations will not depend on the internal format
 * or size of the image.
 */
static inline void
glTextureStorage2DMultisample(GLuint texture, GLsizei samples,
                              GLenum internalformat, GLsizei width,
                              GLsizei height, GLboolean fixedsamplelocations) {
  glad_glTextureStorage2DMultisample(texture, samples, internalformat, width,
                                     height, fixedsamplelocations);
}
/**
 * glTexStorage3D, glTextureStorage3D — simultaneously specify storage for all
 * levels of a three-dimensional, two-dimensional array or cube-map array
 * texture
 *
 * @param [target] Specifies the target to which the texture object is bound
 * for glTexStorage3D. Must be one of GL_TEXTURE_3D, GL_TEXTURE_2D_ARRAY,
 * GL_TEXTURE_CUBE_ARRAY, GL_PROXY_TEXTURE_3D, GL_PROXY_TEXTURE_2D_ARRAY or
 * GL_PROXY_TEXTURE_CUBE_ARRAY.
 *
 * @param [texture] Specifies the texture object name for glTextureStorage3D.
 * The effective target of texture must be one of the valid non-proxy target
 * values above.
 *
 * @param [levels] Specify the number of texture levels.
 *
 * @param [internalformat] Specifies the sized internal format to be used to
 * store texture image data.
 *
 * @param [width] Specifies the width of the texture, in texels.
 *
 * @param [height] Specifies the height of the texture, in texels.
 *
 * @param [depth] Specifies the depth of the texture, in texels.
 */
static inline void glTexStorage3D(GLenum target, GLsizei levels,
                                  GLenum internalformat, GLsizei width,
                                  GLsizei height, GLsizei depth) {
  glad_glTexStorage3D(target, levels, internalformat, width, height, depth);
}
/**
 * glTexStorage3D, glTextureStorage3D — simultaneously specify storage for all
 * levels of a three-dimensional, two-dimensional array or cube-map array
 * texture
 *
 * @param [target] Specifies the target to which the texture object is bound
 * for glTexStorage3D. Must be one of GL_TEXTURE_3D, GL_TEXTURE_2D_ARRAY,
 * GL_TEXTURE_CUBE_ARRAY, GL_PROXY_TEXTURE_3D, GL_PROXY_TEXTURE_2D_ARRAY or
 * GL_PROXY_TEXTURE_CUBE_ARRAY.
 *
 * @param [texture] Specifies the texture object name for glTextureStorage3D.
 * The effective target of texture must be one of the valid non-proxy target
 * values above.
 *
 * @param [levels] Specify the number of texture levels.
 *
 * @param [internalformat] Specifies the sized internal format to be used to
 * store texture image data.
 *
 * @param [width] Specifies the width of the texture, in texels.
 *
 * @param [height] Specifies the height of the texture, in texels.
 *
 * @param [depth] Specifies the depth of the texture, in texels.
 */
static inline void glTextureStorage3D(GLuint texture, GLsizei levels,
                                      GLenum internalformat, GLsizei width,
                                      GLsizei height, GLsizei depth) {
  glad_glTextureStorage3D(texture, levels, internalformat, width, height,
                          depth);
}
/**
 * glTexStorage3DMultisample, glTextureStorage3DMultisample — specify storage
 * for a two-dimensional multisample array texture
 *
 * @param [target] Specifies the target to which the texture object is bound
 * for glTexStorage3DMultisample. Must be one of
 * GL_TEXTURE_2D_MULTISAMPLE_ARRAY or GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY.
 *
 * @param [texture] Specifies the texture object name for
 * glTextureStorage3DMultisample. The effective target of texture must be one
 * of the valid non-proxy target values above.
 *
 * @param [samples] Specify the number of samples in the texture.
 *
 * @param [internalformat] Specifies the sized internal format to be used to
 * store texture image data.
 *
 * @param [width] Specifies the width of the texture, in texels.
 *
 * @param [height] Specifies the height of the texture, in texels.
 *
 * @param [depth] Specifies the depth of the texture, in layers.
 *
 * @param [fixedsamplelocations] Specifies whether the image will use
 * identical sample locations and the same number of samples for all texels in
 * the image, and the sample locations will not depend on the internal format
 * or size of the image.
 */
static inline void glTexStorage3DMultisample(GLenum target, GLsizei samples,
                                             GLenum internalformat,
                                             GLsizei width, GLsizei height,
                                             GLsizei depth,
                                             GLboolean fixedsamplelocations) {
  glad_glTexStorage3DMultisample(target, samples, internalformat, width, height,
                                 depth, fixedsamplelocations);
}
/**
 * glTexStorage3DMultisample, glTextureStorage3DMultisample — specify storage
 * for a two-dimensional multisample array texture
 *
 * @param [target] Specifies the target to which the texture object is bound
 * for glTexStorage3DMultisample. Must be one of
 * GL_TEXTURE_2D_MULTISAMPLE_ARRAY or GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY.
 *
 * @param [texture] Specifies the texture object name for
 * glTextureStorage3DMultisample. The effective target of texture must be one
 * of the valid non-proxy target values above.
 *
 * @param [samples] Specify the number of samples in the texture.
 *
 * @param [internalformat] Specifies the sized internal format to be used to
 * store texture image data.
 *
 * @param [width] Specifies the width of the texture, in texels.
 *
 * @param [height] Specifies the height of the texture, in texels.
 *
 * @param [depth] Specifies the depth of the texture, in layers.
 *
 * @param [fixedsamplelocations] Specifies whether the image will use
 * identical sample locations and the same number of samples for all texels in
 * the image, and the sample locations will not depend on the internal format
 * or size of the image.
 */
static inline void glTextureStorage3DMultisample(
    GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width,
    GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) {
  glad_glTextureStorage3DMultisample(texture, samples, internalformat, width,
                                     height, depth, fixedsamplelocations);
}
/**
 * glTexSubImage1D, glTextureSubImage1D — specify a one-dimensional texture
 * subimage
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glTexSubImage1D. Must be GL_TEXTURE_1D.
 *
 * @param [texture] Specifies the texture object name for glTextureSubImage1D.
 * The effective target of texture must be one of the valid target values
 * above.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 * image level. Level n is the nth mipmap reduction image.
 *
 * @param [xoffset] Specifies a texel offset in the x direction within the
 * texture array.
 *
 * @param [width] Specifies the width of the texture subimage.
 *
 * @param [format] Specifies the format of the pixel data. The following
 * symbolic values are accepted: GL_RED, GL_RG, GL_RGB, GL_BGR, GL_RGBA,
 * GL_DEPTH_COMPONENT, and GL_STENCIL_INDEX.
 *
 * @param [type] Specifies the data type of the pixel data. The following
 * symbolic values are accepted: GL_UNSIGNED_BYTE, GL_BYTE, GL_UNSIGNED_SHORT,
 * GL_SHORT, GL_UNSIGNED_INT, GL_INT, GL_FLOAT, GL_UNSIGNED_BYTE_3_3_2,
 * GL_UNSIGNED_BYTE_2_3_3_REV, GL_UNSIGNED_SHORT_5_6_5,
 * GL_UNSIGNED_SHORT_5_6_5_REV, GL_UNSIGNED_SHORT_4_4_4_4,
 * GL_UNSIGNED_SHORT_4_4_4_4_REV, GL_UNSIGNED_SHORT_5_5_5_1,
 * GL_UNSIGNED_SHORT_1_5_5_5_REV, GL_UNSIGNED_INT_8_8_8_8,
 * GL_UNSIGNED_INT_8_8_8_8_REV, GL_UNSIGNED_INT_10_10_10_2, and
 * GL_UNSIGNED_INT_2_10_10_10_REV.
 *
 * @param [pixels] Specifies a pointer to the image data in memory.
 */
static inline void glTexSubImage1D(GLenum target, GLint level, GLint xoffset,
                                   GLsizei width, GLenum format, GLenum type,
                                   const GLvoid *pixels) {
  glad_glTexSubImage1D(target, level, xoffset, width, format, type, pixels);
}
/**
 * glTexSubImage1D, glTextureSubImage1D — specify a one-dimensional texture
 * subimage
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glTexSubImage1D. Must be GL_TEXTURE_1D.
 *
 * @param [texture] Specifies the texture object name for glTextureSubImage1D.
 * The effective target of texture must be one of the valid target values
 * above.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 * image level. Level n is the nth mipmap reduction image.
 *
 * @param [xoffset] Specifies a texel offset in the x direction within the
 * texture array.
 *
 * @param [width] Specifies the width of the texture subimage.
 *
 * @param [format] Specifies the format of the pixel data. The following
 * symbolic values are accepted: GL_RED, GL_RG, GL_RGB, GL_BGR, GL_RGBA,
 * GL_DEPTH_COMPONENT, and GL_STENCIL_INDEX.
 *
 * @param [type] Specifies the data type of the pixel data. The following
 * symbolic values are accepted: GL_UNSIGNED_BYTE, GL_BYTE, GL_UNSIGNED_SHORT,
 * GL_SHORT, GL_UNSIGNED_INT, GL_INT, GL_FLOAT, GL_UNSIGNED_BYTE_3_3_2,
 * GL_UNSIGNED_BYTE_2_3_3_REV, GL_UNSIGNED_SHORT_5_6_5,
 * GL_UNSIGNED_SHORT_5_6_5_REV, GL_UNSIGNED_SHORT_4_4_4_4,
 * GL_UNSIGNED_SHORT_4_4_4_4_REV, GL_UNSIGNED_SHORT_5_5_5_1,
 * GL_UNSIGNED_SHORT_1_5_5_5_REV, GL_UNSIGNED_INT_8_8_8_8,
 * GL_UNSIGNED_INT_8_8_8_8_REV, GL_UNSIGNED_INT_10_10_10_2, and
 * GL_UNSIGNED_INT_2_10_10_10_REV.
 *
 * @param [pixels] Specifies a pointer to the image data in memory.
 */
static inline void glTextureSubImage1D(GLuint texture, GLint level,
                                       GLint xoffset, GLsizei width,
                                       GLenum format, GLenum type,
                                       const void *pixels) {
  glad_glTextureSubImage1D(texture, level, xoffset, width, format, type,
                           pixels);
}
/**
 * glTexSubImage2D, glTextureSubImage2D — specify a two-dimensional texture
 * subimage
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glTexSubImage2D. Must be GL_TEXTURE_2D, GL_TEXTURE_CUBE_MAP_POSITIVE_X,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_X, GL_TEXTURE_CUBE_MAP_POSITIVE_Y,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_Y, GL_TEXTURE_CUBE_MAP_POSITIVE_Z,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_Z, or GL_TEXTURE_1D_ARRAY.
 *
 * @param [texture] Specifies the texture object name for glTextureSubImage2D.
 * The effective target of texture must be one of the valid target values
 * above.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 * image level. Level n is the nth mipmap reduction image.
 *
 * @param [xoffset] Specifies a texel offset in the x direction within the
 * texture array.
 *
 * @param [yoffset] Specifies a texel offset in the y direction within the
 * texture array.
 *
 * @param [width] Specifies the width of the texture subimage.
 *
 * @param [height] Specifies the height of the texture subimage.
 *
 * @param [format] Specifies the format of the pixel data. The following
 * symbolic values are accepted: GL_RED, GL_RG, GL_RGB, GL_BGR, GL_RGBA,
 * GL_BGRA, GL_DEPTH_COMPONENT, and GL_STENCIL_INDEX.
 *
 * @param [type] Specifies the data type of the pixel data. The following
 * symbolic values are accepted: GL_UNSIGNED_BYTE, GL_BYTE, GL_UNSIGNED_SHORT,
 * GL_SHORT, GL_UNSIGNED_INT, GL_INT, GL_FLOAT, GL_UNSIGNED_BYTE_3_3_2,
 * GL_UNSIGNED_BYTE_2_3_3_REV, GL_UNSIGNED_SHORT_5_6_5,
 * GL_UNSIGNED_SHORT_5_6_5_REV, GL_UNSIGNED_SHORT_4_4_4_4,
 * GL_UNSIGNED_SHORT_4_4_4_4_REV, GL_UNSIGNED_SHORT_5_5_5_1,
 * GL_UNSIGNED_SHORT_1_5_5_5_REV, GL_UNSIGNED_INT_8_8_8_8,
 * GL_UNSIGNED_INT_8_8_8_8_REV, GL_UNSIGNED_INT_10_10_10_2, and
 * GL_UNSIGNED_INT_2_10_10_10_REV.
 *
 * @param [pixels] Specifies a pointer to the image data in memory.
 */
static inline void glTexSubImage2D(GLenum target, GLint level, GLint xoffset,
                                   GLint yoffset, GLsizei width, GLsizei height,
                                   GLenum format, GLenum type,
                                   const GLvoid *pixels) {
  glad_glTexSubImage2D(target, level, xoffset, yoffset, width, height, format,
                       type, pixels);
}
/**
 * glTexSubImage2D, glTextureSubImage2D — specify a two-dimensional texture
 * subimage
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glTexSubImage2D. Must be GL_TEXTURE_2D, GL_TEXTURE_CUBE_MAP_POSITIVE_X,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_X, GL_TEXTURE_CUBE_MAP_POSITIVE_Y,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_Y, GL_TEXTURE_CUBE_MAP_POSITIVE_Z,
 * GL_TEXTURE_CUBE_MAP_NEGATIVE_Z, or GL_TEXTURE_1D_ARRAY.
 *
 * @param [texture] Specifies the texture object name for glTextureSubImage2D.
 * The effective target of texture must be one of the valid target values
 * above.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 * image level. Level n is the nth mipmap reduction image.
 *
 * @param [xoffset] Specifies a texel offset in the x direction within the
 * texture array.
 *
 * @param [yoffset] Specifies a texel offset in the y direction within the
 * texture array.
 *
 * @param [width] Specifies the width of the texture subimage.
 *
 * @param [height] Specifies the height of the texture subimage.
 *
 * @param [format] Specifies the format of the pixel data. The following
 * symbolic values are accepted: GL_RED, GL_RG, GL_RGB, GL_BGR, GL_RGBA,
 * GL_BGRA, GL_DEPTH_COMPONENT, and GL_STENCIL_INDEX.
 *
 * @param [type] Specifies the data type of the pixel data. The following
 * symbolic values are accepted: GL_UNSIGNED_BYTE, GL_BYTE, GL_UNSIGNED_SHORT,
 * GL_SHORT, GL_UNSIGNED_INT, GL_INT, GL_FLOAT, GL_UNSIGNED_BYTE_3_3_2,
 * GL_UNSIGNED_BYTE_2_3_3_REV, GL_UNSIGNED_SHORT_5_6_5,
 * GL_UNSIGNED_SHORT_5_6_5_REV, GL_UNSIGNED_SHORT_4_4_4_4,
 * GL_UNSIGNED_SHORT_4_4_4_4_REV, GL_UNSIGNED_SHORT_5_5_5_1,
 * GL_UNSIGNED_SHORT_1_5_5_5_REV, GL_UNSIGNED_INT_8_8_8_8,
 * GL_UNSIGNED_INT_8_8_8_8_REV, GL_UNSIGNED_INT_10_10_10_2, and
 * GL_UNSIGNED_INT_2_10_10_10_REV.
 *
 * @param [pixels] Specifies a pointer to the image data in memory.
 */
static inline void glTextureSubImage2D(GLuint texture, GLint level,
                                       GLint xoffset, GLint yoffset,
                                       GLsizei width, GLsizei height,
                                       GLenum format, GLenum type,
                                       const void *pixels) {
  glad_glTextureSubImage2D(texture, level, xoffset, yoffset, width, height,
                           format, type, pixels);
}
/**
 * glTexSubImage3D, glTextureSubImage3D — specify a three-dimensional texture
 * subimage
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glTexSubImage3D. Must be GL_TEXTURE_3D or GL_TEXTURE_2D_ARRAY.
 *
 * @param [texture] Specifies the texture object name for glTextureSubImage3D.
 * The effective target of texture must be one of the valid target values
 * above.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 * image level. Level n is the nth mipmap reduction image.
 *
 * @param [xoffset] Specifies a texel offset in the x direction within the
 * texture array.
 *
 * @param [yoffset] Specifies a texel offset in the y direction within the
 * texture array.
 *
 * @param [zoffset] Specifies a texel offset in the z direction within the
 * texture array.
 *
 * @param [width] Specifies the width of the texture subimage.
 *
 * @param [height] Specifies the height of the texture subimage.
 *
 * @param [depth] Specifies the depth of the texture subimage.
 *
 * @param [format] Specifies the format of the pixel data. The following
 * symbolic values are accepted: GL_RED, GL_RG, GL_RGB, GL_BGR, GL_RGBA,
 * GL_DEPTH_COMPONENT, and GL_STENCIL_INDEX.
 *
 * @param [type] Specifies the data type of the pixel data. The following
 * symbolic values are accepted: GL_UNSIGNED_BYTE, GL_BYTE, GL_UNSIGNED_SHORT,
 * GL_SHORT, GL_UNSIGNED_INT, GL_INT, GL_FLOAT, GL_UNSIGNED_BYTE_3_3_2,
 * GL_UNSIGNED_BYTE_2_3_3_REV, GL_UNSIGNED_SHORT_5_6_5,
 * GL_UNSIGNED_SHORT_5_6_5_REV, GL_UNSIGNED_SHORT_4_4_4_4,
 * GL_UNSIGNED_SHORT_4_4_4_4_REV, GL_UNSIGNED_SHORT_5_5_5_1,
 * GL_UNSIGNED_SHORT_1_5_5_5_REV, GL_UNSIGNED_INT_8_8_8_8,
 * GL_UNSIGNED_INT_8_8_8_8_REV, GL_UNSIGNED_INT_10_10_10_2, and
 * GL_UNSIGNED_INT_2_10_10_10_REV.
 *
 * @param [pixels] Specifies a pointer to the image data in memory.
 */
static inline void glTexSubImage3D(GLenum target, GLint level, GLint xoffset,
                                   GLint yoffset, GLint zoffset, GLsizei width,
                                   GLsizei height, GLsizei depth, GLenum format,
                                   GLenum type, const GLvoid *pixels) {
  glad_glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height,
                       depth, format, type, pixels);
}
/**
 * glTexSubImage3D, glTextureSubImage3D — specify a three-dimensional texture
 * subimage
 *
 * @param [target] Specifies the target to which the texture is bound for
 * glTexSubImage3D. Must be GL_TEXTURE_3D or GL_TEXTURE_2D_ARRAY.
 *
 * @param [texture] Specifies the texture object name for glTextureSubImage3D.
 * The effective target of texture must be one of the valid target values
 * above.
 *
 * @param [level] Specifies the level-of-detail number. Level 0 is the base
 * image level. Level n is the nth mipmap reduction image.
 *
 * @param [xoffset] Specifies a texel offset in the x direction within the
 * texture array.
 *
 * @param [yoffset] Specifies a texel offset in the y direction within the
 * texture array.
 *
 * @param [zoffset] Specifies a texel offset in the z direction within the
 * texture array.
 *
 * @param [width] Specifies the width of the texture subimage.
 *
 * @param [height] Specifies the height of the texture subimage.
 *
 * @param [depth] Specifies the depth of the texture subimage.
 *
 * @param [format] Specifies the format of the pixel data. The following
 * symbolic values are accepted: GL_RED, GL_RG, GL_RGB, GL_BGR, GL_RGBA,
 * GL_DEPTH_COMPONENT, and GL_STENCIL_INDEX.
 *
 * @param [type] Specifies the data type of the pixel data. The following
 * symbolic values are accepted: GL_UNSIGNED_BYTE, GL_BYTE, GL_UNSIGNED_SHORT,
 * GL_SHORT, GL_UNSIGNED_INT, GL_INT, GL_FLOAT, GL_UNSIGNED_BYTE_3_3_2,
 * GL_UNSIGNED_BYTE_2_3_3_REV, GL_UNSIGNED_SHORT_5_6_5,
 * GL_UNSIGNED_SHORT_5_6_5_REV, GL_UNSIGNED_SHORT_4_4_4_4,
 * GL_UNSIGNED_SHORT_4_4_4_4_REV, GL_UNSIGNED_SHORT_5_5_5_1,
 * GL_UNSIGNED_SHORT_1_5_5_5_REV, GL_UNSIGNED_INT_8_8_8_8,
 * GL_UNSIGNED_INT_8_8_8_8_REV, GL_UNSIGNED_INT_10_10_10_2, and
 * GL_UNSIGNED_INT_2_10_10_10_REV.
 *
 * @param [pixels] Specifies a pointer to the image data in memory.
 */
static inline void
glTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset,
                    GLint zoffset, GLsizei width, GLsizei height, GLsizei depth,
                    GLenum format, GLenum type, const void *pixels) {
  glad_glTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width,
                           height, depth, format, type, pixels);
}
/**
 * glTextureBarrier — controls the ordering of reads and writes to rendered
 * fragments across drawing commands
 */
static inline void glTextureBarrier(void) { glad_glTextureBarrier(); }
/**
 * glTextureView — initialize a texture as a data alias of another texture's
 * data store
 *
 * @param [texture] Specifies the texture object to be initialized as a view.
 *
 * @param [target] Specifies the target to be used for the newly initialized
 * texture.
 *
 * @param [origtexture] Specifies the name of a texture object of which to
 * make a view.
 *
 * @param [internalFormat] Specifies the internal format for the newly created
 * view.
 *
 * @param [minlevel] Specifies lowest level of detail of the view.
 *
 * @param [numlevels] Specifies the number of levels of detail to include in
 * the view.
 *
 * @param [minlayer] Specifies the index of the first layer to include in the
 * view.
 *
 * @param [numlayers] Specifies the number of layers to include in the view.
 */
static inline void glTextureView(GLuint texture, GLenum target,
                                 GLuint origtexture, GLenum internalformat,
                                 GLuint minlevel, GLuint numlevels,
                                 GLuint minlayer, GLuint numlayers) {
  glad_glTextureView(texture, target, origtexture, internalformat, minlevel,
                     numlevels, minlayer, numlayers);
}
/**
 * glTransformFeedbackBufferBase — bind a buffer object to a transform
 * feedback buffer object
 *
 * @param [xfb] Name of the transform feedback buffer object.
 *
 * @param [index] Index of the binding point within xfb.
 *
 * @param [buffer] Name of the buffer object to bind to the specified binding
 * point.
 */
static inline void glTransformFeedbackBufferBase(GLuint xfb, GLuint index,
                                                 GLuint buffer) {
  glad_glTransformFeedbackBufferBase(xfb, index, buffer);
}
/**
 * glTransformFeedbackBufferRange — bind a range within a buffer object to a
 * transform feedback buffer object
 *
 * @param [xfb] Name of the transform feedback buffer object.
 *
 * @param [index] Index of the binding point within xfb.
 *
 * @param [buffer] Name of the buffer object to bind to the specified binding
 * point.
 *
 * @param [offset] The starting offset in basic machine units into the buffer
 * object.
 *
 * @param [size] The amount of data in basic machine units that can be read
 * from or written to the buffer object while used as an indexed target.
 */
static inline void glTransformFeedbackBufferRange(GLuint xfb, GLuint index,
                                                  GLuint buffer,
                                                  GLintptr offset,
                                                  GLsizei size) {
  glad_glTransformFeedbackBufferRange(xfb, index, buffer, offset, size);
}
/**
 * glTransformFeedbackVaryings — specify values to record in transform
 * feedback buffers
 *
 * @param [program] The name of the target program object.
 *
 * @param [count] The number of varying variables used for transform feedback.
 *
 * @param [varyings] An array of count zero-terminated strings specifying the
 * names of the varying variables to use for transform feedback.
 *
 * @param [bufferMode] Identifies the mode used to capture the varying
 * variables when transform feedback is active. bufferMode must be
 * GL_INTERLEAVED_ATTRIBS or GL_SEPARATE_ATTRIBS.
 */
static inline void glTransformFeedbackVaryings(GLuint program, GLsizei count,
                                               const char **varyings,
                                               GLenum bufferMode) {
  glad_glTransformFeedbackVaryings(program, count, varyings, bufferMode);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniform1f(GLint location, GLfloat v0) {
  glad_glUniform1f(location, v0);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniform2f(GLint location, GLfloat v0, GLfloat v1) {
  glad_glUniform2f(location, v0, v1);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniform3f(GLint location, GLfloat v0, GLfloat v1,
                               GLfloat v2) {
  glad_glUniform3f(location, v0, v1, v2);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniform4f(GLint location, GLfloat v0, GLfloat v1,
                               GLfloat v2, GLfloat v3) {
  glad_glUniform4f(location, v0, v1, v2, v3);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniform1i(GLint location, GLint v0) {
  glad_glUniform1i(location, v0);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniform2i(GLint location, GLint v0, GLint v1) {
  glad_glUniform2i(location, v0, v1);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2) {
  glad_glUniform3i(location, v0, v1, v2);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2,
                               GLint v3) {
  glad_glUniform4i(location, v0, v1, v2, v3);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniform1ui(GLint location, GLuint v0) {
  glad_glUniform1ui(location, v0);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniform2ui(GLint location, GLuint v0, GLuint v1) {
  glad_glUniform2ui(location, v0, v1);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniform3ui(GLint location, GLuint v0, GLuint v1,
                                GLuint v2) {
  glad_glUniform3ui(location, v0, v1, v2);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2,
                                GLuint v3) {
  glad_glUniform4ui(location, v0, v1, v2, v3);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniform1fv(GLint location, GLsizei count,
                                const GLfloat *value) {
  glad_glUniform1fv(location, count, value);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniform2fv(GLint location, GLsizei count,
                                const GLfloat *value) {
  glad_glUniform2fv(location, count, value);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniform3fv(GLint location, GLsizei count,
                                const GLfloat *value) {
  glad_glUniform3fv(location, count, value);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniform4fv(GLint location, GLsizei count,
                                const GLfloat *value) {
  glad_glUniform4fv(location, count, value);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniform1iv(GLint location, GLsizei count,
                                const GLint *value) {
  glad_glUniform1iv(location, count, value);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniform2iv(GLint location, GLsizei count,
                                const GLint *value) {
  glad_glUniform2iv(location, count, value);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniform3iv(GLint location, GLsizei count,
                                const GLint *value) {
  glad_glUniform3iv(location, count, value);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniform4iv(GLint location, GLsizei count,
                                const GLint *value) {
  glad_glUniform4iv(location, count, value);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniform1uiv(GLint location, GLsizei count,
                                 const GLuint *value) {
  glad_glUniform1uiv(location, count, value);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniform2uiv(GLint location, GLsizei count,
                                 const GLuint *value) {
  glad_glUniform2uiv(location, count, value);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniform3uiv(GLint location, GLsizei count,
                                 const GLuint *value) {
  glad_glUniform3uiv(location, count, value);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniform4uiv(GLint location, GLsizei count,
                                 const GLuint *value) {
  glad_glUniform4uiv(location, count, value);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniformMatrix2fv(GLint location, GLsizei count,
                                      GLboolean transpose,
                                      const GLfloat *value) {
  glad_glUniformMatrix2fv(location, count, transpose, value);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniformMatrix3fv(GLint location, GLsizei count,
                                      GLboolean transpose,
                                      const GLfloat *value) {
  glad_glUniformMatrix3fv(location, count, transpose, value);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniformMatrix4fv(GLint location, GLsizei count,
                                      GLboolean transpose,
                                      const GLfloat *value) {
  glad_glUniformMatrix4fv(location, count, transpose, value);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniformMatrix2x3fv(GLint location, GLsizei count,
                                        GLboolean transpose,
                                        const GLfloat *value) {
  glad_glUniformMatrix2x3fv(location, count, transpose, value);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniformMatrix3x2fv(GLint location, GLsizei count,
                                        GLboolean transpose,
                                        const GLfloat *value) {
  glad_glUniformMatrix3x2fv(location, count, transpose, value);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniformMatrix2x4fv(GLint location, GLsizei count,
                                        GLboolean transpose,
                                        const GLfloat *value) {
  glad_glUniformMatrix2x4fv(location, count, transpose, value);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniformMatrix4x2fv(GLint location, GLsizei count,
                                        GLboolean transpose,
                                        const GLfloat *value) {
  glad_glUniformMatrix4x2fv(location, count, transpose, value);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniformMatrix3x4fv(GLint location, GLsizei count,
                                        GLboolean transpose,
                                        const GLfloat *value) {
  glad_glUniformMatrix3x4fv(location, count, transpose, value);
}
/**
 * glUniform — Specify the value of a uniform variable for the current program
 * object
 *
 * @param [location] Specifies the location of the uniform variable to be
 * modified.
 *
 * @param [count] For the vector (glUniform*v) commands, specifies the number
 * of elements that are to be modified. This should be 1 if the targeted
 * uniform variable is not an array, and 1 or more if it is an array.
 *
 * @param [transpose] For the matrix commands, specifies whether to transpose
 * the matrix as the values are loaded into the uniform variable.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified uniform variable.
 *
 * @param [value] For the vector and matrix commands, specifies a pointer to
 * an array of count values that will be used to update the specified uniform
 * variable.
 */
static inline void glUniformMatrix4x3fv(GLint location, GLsizei count,
                                        GLboolean transpose,
                                        const GLfloat *value) {
  glad_glUniformMatrix4x3fv(location, count, transpose, value);
}
/**
 * glUniformBlockBinding — assign a binding point to an active uniform block
 *
 * @param [program] The name of a program object containing the active uniform
 * block whose binding to assign.
 *
 * @param [uniformBlockIndex] The index of the active uniform block within
 * program whose binding to assign.
 *
 * @param [uniformBlockBinding] Specifies the binding point to which to bind
 * the uniform block with index uniformBlockIndex within program.
 */
static inline void glUniformBlockBinding(GLuint program,
                                         GLuint uniformBlockIndex,
                                         GLuint uniformBlockBinding) {
  glad_glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}
/**
 * glUniformSubroutines — load active subroutine uniforms
 *
 * @param [shadertype] Specifies the shader stage from which to query for
 * subroutine uniform index. shadertype must be one of GL_VERTEX_SHADER,
 * GL_TESS_CONTROL_SHADER, GL_TESS_EVALUATION_SHADER, GL_GEOMETRY_SHADER or
 * GL_FRAGMENT_SHADER.
 *
 * @param [count] Specifies the number of uniform indices stored in indices.
 *
 * @param [indices] Specifies the address of an array holding the indices to
 * load into the shader subroutine variables.
 */
static inline void glUniformSubroutinesuiv(GLenum shadertype, GLsizei count,
                                           const GLuint *indices) {
  glad_glUniformSubroutinesuiv(shadertype, count, indices);
}
/**
 * glUnmapBuffer, glUnmapNamedBuffer — release the mapping of a buffer
 * object's data store into the client's address space
 *
 * @param [target] Specifies the target to which the buffer object is bound
 * for glUnmapBuffer, which must be one of the buffer binding targets in the
 * following table:
 *
 * GL_ARRAY_BUFFER - Vertex attributes,
 * GL_ATOMIC_COUNTER_BUFFER - Atomic counter storage,
 * GL_COPY_READ_BUFFER - Buffer copy source,
 * GL_COPY_WRITE_BUFFER - Buffer copy destination,
 * GL_DISPATCH_INDIRECT_BUFFER - Indirect compute dispatch commands,
 * GL_DRAW_INDIRECT_BUFFER - Indirect command arguments,
 * GL_ELEMENT_ARRAY_BUFFER - Vertex array indices,
 * GL_PIXEL_PACK_BUFFER - Pixel read target,
 * GL_PIXEL_UNPACK_BUFFER - Texture data source,
 * GL_QUERY_BUFFER - Query result buffer,
 * GL_SHADER_STORAGE_BUFFER - Read-write storage for shaders,
 * GL_TEXTURE_BUFFER - Texture data buffer,
 * GL_TRANSFORM_FEEDBACK_BUFFER - Transform feedback buffer,
 * GL_UNIFORM_BUFFER - Uniform block storage,
 *
 * @param [buffer] Specifies the name of the buffer object for
 * glUnmapNamedBuffer.
 */
static inline GLboolean glUnmapBuffer(GLenum target) {
  return glad_glUnmapBuffer(target);
}
/**
 * glUnmapBuffer, glUnmapNamedBuffer — release the mapping of a buffer
 * object's data store into the client's address space
 *
 * @param [target] Specifies the target to which the buffer object is bound
 * for glUnmapBuffer, which must be one of the buffer binding targets in the
 * following table:
 *
 * GL_ARRAY_BUFFER - Vertex attributes,
 * GL_ATOMIC_COUNTER_BUFFER - Atomic counter storage,
 * GL_COPY_READ_BUFFER - Buffer copy source,
 * GL_COPY_WRITE_BUFFER - Buffer copy destination,
 * GL_DISPATCH_INDIRECT_BUFFER - Indirect compute dispatch commands,
 * GL_DRAW_INDIRECT_BUFFER - Indirect command arguments,
 * GL_ELEMENT_ARRAY_BUFFER - Vertex array indices,
 * GL_PIXEL_PACK_BUFFER - Pixel read target,
 * GL_PIXEL_UNPACK_BUFFER - Texture data source,
 * GL_QUERY_BUFFER - Query result buffer,
 * GL_SHADER_STORAGE_BUFFER - Read-write storage for shaders,
 * GL_TEXTURE_BUFFER - Texture data buffer,
 * GL_TRANSFORM_FEEDBACK_BUFFER - Transform feedback buffer,
 * GL_UNIFORM_BUFFER - Uniform block storage,
 *
 * @param [buffer] Specifies the name of the buffer object for
 * glUnmapNamedBuffer.
 */
static inline GLboolean glUnmapNamedBuffer(GLuint buffer) {
  return glad_glUnmapNamedBuffer(buffer);
}
/**
 * glUseProgram — Installs a program object as part of current rendering state
 *
 * @param [program] Specifies the handle of the program object whose
 * executables are to be used as part of current rendering state.
 */
static inline void glUseProgram(GLuint program) { glad_glUseProgram(program); }
/**
 * glUseProgramStages — bind stages of a program object to a program pipeline
 *
 * @param [pipeline] Specifies the program pipeline object to which to bind
 * stages from program.
 *
 * @param [stages] Specifies a set of program stages to bind to the program
 * pipeline object.
 *
 * @param [program] Specifies the program object containing the shader
 * executables to use in pipeline.
 */
static inline void glUseProgramStages(GLuint pipeline, GLbitfield stages,
                                      GLuint program) {
  glad_glUseProgramStages(pipeline, stages, program);
}
/**
 * glValidateProgram — Validates a program object
 *
 * @param [program] Specifies the handle of the program object to be
 * validated.
 */
static inline void glValidateProgram(GLuint program) {
  glad_glValidateProgram(program);
}
/**
 * glValidateProgramPipeline — validate a program pipeline object against
 * current GL state
 *
 * @param [pipeline] Specifies the name of a program pipeline object to
 * validate.
 */
static inline void glValidateProgramPipeline(GLuint pipeline) {
  glad_glValidateProgramPipeline(pipeline);
}
/**
 * glVertexArrayElementBuffer — configures element array buffer binding of a
 * vertex array object
 *
 * @param [vaobj] Specifies the name of the vertex array object.
 *
 * @param [buffer] Specifies the name of the buffer object to use for the
 * element array buffer binding.
 */
static inline void glVertexArrayElementBuffer(GLuint vaobj, GLuint buffer) {
  glad_glVertexArrayElementBuffer(vaobj, buffer);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib1f(GLuint index, GLfloat v0) {
  glad_glVertexAttrib1f(index, v0);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib1s(GLuint index, GLshort v0) {
  glad_glVertexAttrib1s(index, v0);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib1d(GLuint index, GLdouble v0) {
  glad_glVertexAttrib1d(index, v0);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribI1i(GLuint index, GLint v0) {
  glad_glVertexAttribI1i(index, v0);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribI1ui(GLuint index, GLuint v0) {
  glad_glVertexAttribI1ui(index, v0);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib2f(GLuint index, GLfloat v0, GLfloat v1) {
  glad_glVertexAttrib2f(index, v0, v1);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib2s(GLuint index, GLshort v0, GLshort v1) {
  glad_glVertexAttrib2s(index, v0, v1);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib2d(GLuint index, GLdouble v0, GLdouble v1) {
  glad_glVertexAttrib2d(index, v0, v1);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribI2i(GLuint index, GLint v0, GLint v1) {
  glad_glVertexAttribI2i(index, v0, v1);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribI2ui(GLuint index, GLuint v0, GLuint v1) {
  glad_glVertexAttribI2ui(index, v0, v1);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib3f(GLuint index, GLfloat v0, GLfloat v1,
                                    GLfloat v2) {
  glad_glVertexAttrib3f(index, v0, v1, v2);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib3s(GLuint index, GLshort v0, GLshort v1,
                                    GLshort v2) {
  glad_glVertexAttrib3s(index, v0, v1, v2);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib3d(GLuint index, GLdouble v0, GLdouble v1,
                                    GLdouble v2) {
  glad_glVertexAttrib3d(index, v0, v1, v2);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribI3i(GLuint index, GLint v0, GLint v1,
                                     GLint v2) {
  glad_glVertexAttribI3i(index, v0, v1, v2);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribI3ui(GLuint index, GLuint v0, GLuint v1,
                                      GLuint v2) {
  glad_glVertexAttribI3ui(index, v0, v1, v2);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib4f(GLuint index, GLfloat v0, GLfloat v1,
                                    GLfloat v2, GLfloat v3) {
  glad_glVertexAttrib4f(index, v0, v1, v2, v3);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib4s(GLuint index, GLshort v0, GLshort v1,
                                    GLshort v2, GLshort v3) {
  glad_glVertexAttrib4s(index, v0, v1, v2, v3);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib4d(GLuint index, GLdouble v0, GLdouble v1,
                                    GLdouble v2, GLdouble v3) {
  glad_glVertexAttrib4d(index, v0, v1, v2, v3);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib4Nub(GLuint index, GLubyte v0, GLubyte v1,
                                      GLubyte v2, GLubyte v3) {
  glad_glVertexAttrib4Nub(index, v0, v1, v2, v3);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribI4i(GLuint index, GLint v0, GLint v1, GLint v2,
                                     GLint v3) {
  glad_glVertexAttribI4i(index, v0, v1, v2, v3);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribI4ui(GLuint index, GLuint v0, GLuint v1,
                                      GLuint v2, GLuint v3) {
  glad_glVertexAttribI4ui(index, v0, v1, v2, v3);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribL1d(GLuint index, GLdouble v0) {
  glad_glVertexAttribL1d(index, v0);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribL2d(GLuint index, GLdouble v0, GLdouble v1) {
  glad_glVertexAttribL2d(index, v0, v1);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribL3d(GLuint index, GLdouble v0, GLdouble v1,
                                     GLdouble v2) {
  glad_glVertexAttribL3d(index, v0, v1, v2);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribL4d(GLuint index, GLdouble v0, GLdouble v1,
                                     GLdouble v2, GLdouble v3) {
  glad_glVertexAttribL4d(index, v0, v1, v2, v3);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib1fv(GLuint index, const GLfloat *v) {
  glad_glVertexAttrib1fv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib1sv(GLuint index, const GLshort *v) {
  glad_glVertexAttrib1sv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib1dv(GLuint index, const GLdouble *v) {
  glad_glVertexAttrib1dv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribI1iv(GLuint index, const GLint *v) {
  glad_glVertexAttribI1iv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribI1uiv(GLuint index, const GLuint *v) {
  glad_glVertexAttribI1uiv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib2fv(GLuint index, const GLfloat *v) {
  glad_glVertexAttrib2fv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib2sv(GLuint index, const GLshort *v) {
  glad_glVertexAttrib2sv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib2dv(GLuint index, const GLdouble *v) {
  glad_glVertexAttrib2dv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribI2iv(GLuint index, const GLint *v) {
  glad_glVertexAttribI2iv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribI2uiv(GLuint index, const GLuint *v) {
  glad_glVertexAttribI2uiv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib3fv(GLuint index, const GLfloat *v) {
  glad_glVertexAttrib3fv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib3sv(GLuint index, const GLshort *v) {
  glad_glVertexAttrib3sv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib3dv(GLuint index, const GLdouble *v) {
  glad_glVertexAttrib3dv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribI3iv(GLuint index, const GLint *v) {
  glad_glVertexAttribI3iv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribI3uiv(GLuint index, const GLuint *v) {
  glad_glVertexAttribI3uiv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib4fv(GLuint index, const GLfloat *v) {
  glad_glVertexAttrib4fv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib4sv(GLuint index, const GLshort *v) {
  glad_glVertexAttrib4sv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib4dv(GLuint index, const GLdouble *v) {
  glad_glVertexAttrib4dv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib4iv(GLuint index, const GLint *v) {
  glad_glVertexAttrib4iv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib4bv(GLuint index, const GLbyte *v) {
  glad_glVertexAttrib4bv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib4ubv(GLuint index, const GLubyte *v) {
  glad_glVertexAttrib4ubv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib4usv(GLuint index, const GLushort *v) {
  glad_glVertexAttrib4usv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib4uiv(GLuint index, const GLuint *v) {
  glad_glVertexAttrib4uiv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib4Nbv(GLuint index, const GLbyte *v) {
  glad_glVertexAttrib4Nbv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib4Nsv(GLuint index, const GLshort *v) {
  glad_glVertexAttrib4Nsv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib4Niv(GLuint index, const GLint *v) {
  glad_glVertexAttrib4Niv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib4Nubv(GLuint index, const GLubyte *v) {
  glad_glVertexAttrib4Nubv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib4Nusv(GLuint index, const GLushort *v) {
  glad_glVertexAttrib4Nusv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttrib4Nuiv(GLuint index, const GLuint *v) {
  glad_glVertexAttrib4Nuiv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribI4bv(GLuint index, const GLbyte *v) {
  glad_glVertexAttribI4bv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribI4ubv(GLuint index, const GLubyte *v) {
  glad_glVertexAttribI4ubv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribI4sv(GLuint index, const GLshort *v) {
  glad_glVertexAttribI4sv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribI4usv(GLuint index, const GLushort *v) {
  glad_glVertexAttribI4usv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribI4iv(GLuint index, const GLint *v) {
  glad_glVertexAttribI4iv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribI4uiv(GLuint index, const GLuint *v) {
  glad_glVertexAttribI4uiv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribL1dv(GLuint index, const GLdouble *v) {
  glad_glVertexAttribL1dv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribL2dv(GLuint index, const GLdouble *v) {
  glad_glVertexAttribL2dv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribL3dv(GLuint index, const GLdouble *v) {
  glad_glVertexAttribL3dv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribL4dv(GLuint index, const GLdouble *v) {
  glad_glVertexAttribL4dv(index, v);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribP1ui(GLuint index, GLenum type,
                                      GLboolean normalized, GLuint value) {
  glad_glVertexAttribP1ui(index, type, normalized, value);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribP2ui(GLuint index, GLenum type,
                                      GLboolean normalized, GLuint value) {
  glad_glVertexAttribP2ui(index, type, normalized, value);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribP3ui(GLuint index, GLenum type,
                                      GLboolean normalized, GLuint value) {
  glad_glVertexAttribP3ui(index, type, normalized, value);
}
/**
 * glVertexAttrib — Specifies the value of a generic vertex attribute
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [v0, v1, v2, v3] For the scalar commands, specifies the new values
 * to be used for the specified vertex attribute.
 *
 * @param [v] For the vector commands (glVertexAttrib*v), specifies a pointer
 * to an array of values to be used for the generic vertex attribute.
 *
 * @param [type] For the packed commands (glVertexAttribP*), specified the
 * type of packing used on the data. This parameter must be
 * GL_INT_2_10_10_10_REV or GL_UNSIGNED_INT_2_10_10_10_REV, to specify signed
 * or unsigned data, respectively, or GL_UNSIGNED_INT_10F_11F_11F_REV to
 * specify floating point data.
 *
 * @param [normalized] For the packed commands, if GL_TRUE, then the values
 * are to be converted to floating point values by normalizing. Otherwise,
 * they are converted directly to floating-point values. If type indicates a
 * floating-pont format, then normalized value must be GL_FALSE.
 *
 * @param [value] For the packed commands, specifies the new packed value to
 * be used for the specified vertex attribute.
 */
static inline void glVertexAttribP4ui(GLuint index, GLenum type,
                                      GLboolean normalized, GLuint value) {
  glad_glVertexAttribP4ui(index, type, normalized, value);
}
/**
 * glVertexAttribBinding — associate a vertex attribute and a vertex buffer
 * binding for a vertex array object
 *
 * @param [vaobj] Specifies the name of the vertex array object for
 * glVertexArrayAttribBinding.
 *
 * @param [attribindex] The index of the attribute to associate with a vertex
 * buffer binding.
 *
 * @param [bindingindex] The index of the vertex buffer binding with which to
 * associate the generic vertex attribute.
 */
static inline void glVertexAttribBinding(GLuint attribindex,
                                         GLuint bindingindex) {
  glad_glVertexAttribBinding(attribindex, bindingindex);
}
/**
 * glVertexAttribBinding — associate a vertex attribute and a vertex buffer
 * binding for a vertex array object
 *
 * @param [vaobj] Specifies the name of the vertex array object for
 * glVertexArrayAttribBinding.
 *
 * @param [attribindex] The index of the attribute to associate with a vertex
 * buffer binding.
 *
 * @param [bindingindex] The index of the vertex buffer binding with which to
 * associate the generic vertex attribute.
 */
static inline void glVertexArrayAttribBinding(GLuint vaobj, GLuint attribindex,
                                              GLuint bindingindex) {
  glad_glVertexArrayAttribBinding(vaobj, attribindex, bindingindex);
}
/**
 * glVertexAttribDivisor — modify the rate at which generic vertex attributes
 * advance during instanced rendering
 *
 * @param [index] Specify the index of the generic vertex attribute.
 *
 * @param [divisor] Specify the number of instances that will pass between
 * updates of the generic attribute at slot index.
 */
static inline void glVertexAttribDivisor(GLuint index, GLuint divisor) {
  glad_glVertexAttribDivisor(index, divisor);
}
/**
 * glVertexAttribFormat, glVertexArrayAttribFormat — specify the organization
 * of vertex arrays
 *
 * @param [vaobj] Specifies the name of the vertex array object for
 * glVertexArrayAttrib{I, L}Format functions.
 *
 * @param [attribindex] The generic vertex attribute array being described.
 *
 * @param [size] The number of values per vertex that are stored in the array.
 *
 * @param [type] The type of the data stored in the array.
 *
 * @param [normalized] GL_TRUE if the parameter represents a normalized
 * integer (type must be an integer type). GL_FALSE otherwise.
 *
 * @param [relativeoffset] The offset, measured in basic machine units of the
 * first element relative to the start of the vertex buffer binding this
 * attribute fetches from.
 */
static inline void glVertexAttribFormat(GLuint attribindex, GLint size,
                                        GLenum type, GLboolean normalized,
                                        GLuint relativeoffset) {
  glad_glVertexAttribFormat(attribindex, size, type, normalized,
                            relativeoffset);
}
/**
 * glVertexAttribFormat, glVertexArrayAttribFormat — specify the organization
 * of vertex arrays
 *
 * @param [vaobj] Specifies the name of the vertex array object for
 * glVertexArrayAttrib{I, L}Format functions.
 *
 * @param [attribindex] The generic vertex attribute array being described.
 *
 * @param [size] The number of values per vertex that are stored in the array.
 *
 * @param [type] The type of the data stored in the array.
 *
 * @param [normalized] GL_TRUE if the parameter represents a normalized
 * integer (type must be an integer type). GL_FALSE otherwise.
 *
 * @param [relativeoffset] The offset, measured in basic machine units of the
 * first element relative to the start of the vertex buffer binding this
 * attribute fetches from.
 */
static inline void glVertexAttribIFormat(GLuint attribindex, GLint size,
                                         GLenum type, GLuint relativeoffset) {
  glad_glVertexAttribIFormat(attribindex, size, type, relativeoffset);
}
/**
 * glVertexAttribFormat, glVertexArrayAttribFormat — specify the organization
 * of vertex arrays
 *
 * @param [vaobj] Specifies the name of the vertex array object for
 * glVertexArrayAttrib{I, L}Format functions.
 *
 * @param [attribindex] The generic vertex attribute array being described.
 *
 * @param [size] The number of values per vertex that are stored in the array.
 *
 * @param [type] The type of the data stored in the array.
 *
 * @param [normalized] GL_TRUE if the parameter represents a normalized
 * integer (type must be an integer type). GL_FALSE otherwise.
 *
 * @param [relativeoffset] The offset, measured in basic machine units of the
 * first element relative to the start of the vertex buffer binding this
 * attribute fetches from.
 */
static inline void glVertexAttribLFormat(GLuint attribindex, GLint size,
                                         GLenum type, GLuint relativeoffset) {
  glad_glVertexAttribLFormat(attribindex, size, type, relativeoffset);
}
/**
 * glVertexAttribFormat, glVertexArrayAttribFormat — specify the organization
 * of vertex arrays
 *
 * @param [vaobj] Specifies the name of the vertex array object for
 * glVertexArrayAttrib{I, L}Format functions.
 *
 * @param [attribindex] The generic vertex attribute array being described.
 *
 * @param [size] The number of values per vertex that are stored in the array.
 *
 * @param [type] The type of the data stored in the array.
 *
 * @param [normalized] GL_TRUE if the parameter represents a normalized
 * integer (type must be an integer type). GL_FALSE otherwise.
 *
 * @param [relativeoffset] The offset, measured in basic machine units of the
 * first element relative to the start of the vertex buffer binding this
 * attribute fetches from.
 */
static inline void glVertexArrayAttribFormat(GLuint vaobj, GLuint attribindex,
                                             GLint size, GLenum type,
                                             GLboolean normalized,
                                             GLuint relativeoffset) {
  glad_glVertexArrayAttribFormat(vaobj, attribindex, size, type, normalized,
                                 relativeoffset);
}
/**
 * glVertexAttribFormat, glVertexArrayAttribFormat — specify the organization
 * of vertex arrays
 *
 * @param [vaobj] Specifies the name of the vertex array object for
 * glVertexArrayAttrib{I, L}Format functions.
 *
 * @param [attribindex] The generic vertex attribute array being described.
 *
 * @param [size] The number of values per vertex that are stored in the array.
 *
 * @param [type] The type of the data stored in the array.
 *
 * @param [normalized] GL_TRUE if the parameter represents a normalized
 * integer (type must be an integer type). GL_FALSE otherwise.
 *
 * @param [relativeoffset] The offset, measured in basic machine units of the
 * first element relative to the start of the vertex buffer binding this
 * attribute fetches from.
 */
static inline void glVertexArrayAttribIFormat(GLuint vaobj, GLuint attribindex,
                                              GLint size, GLenum type,
                                              GLuint relativeoffset) {
  glad_glVertexArrayAttribIFormat(vaobj, attribindex, size, type,
                                  relativeoffset);
}
/**
 * glVertexAttribFormat, glVertexArrayAttribFormat — specify the organization
 * of vertex arrays
 *
 * @param [vaobj] Specifies the name of the vertex array object for
 * glVertexArrayAttrib{I, L}Format functions.
 *
 * @param [attribindex] The generic vertex attribute array being described.
 *
 * @param [size] The number of values per vertex that are stored in the array.
 *
 * @param [type] The type of the data stored in the array.
 *
 * @param [normalized] GL_TRUE if the parameter represents a normalized
 * integer (type must be an integer type). GL_FALSE otherwise.
 *
 * @param [relativeoffset] The offset, measured in basic machine units of the
 * first element relative to the start of the vertex buffer binding this
 * attribute fetches from.
 */
static inline void glVertexArrayAttribLFormat(GLuint vaobj, GLuint attribindex,
                                              GLint size, GLenum type,
                                              GLuint relativeoffset) {
  glad_glVertexArrayAttribLFormat(vaobj, attribindex, size, type,
                                  relativeoffset);
}
/**
 * glVertexAttribPointer — define an array of generic vertex attribute data
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [size] Specifies the number of components per generic vertex
 * attribute. Must be 1, 2, 3, 4. Additionally, the symbolic constant GL_BGRA
 * is accepted by glVertexAttribPointer. The initial value is 4.
 *
 * @param [type] Specifies the data type of each component in the array. The
 * symbolic constants GL_BYTE, GL_UNSIGNED_BYTE, GL_SHORT, GL_UNSIGNED_SHORT,
 * GL_INT, and GL_UNSIGNED_INT are accepted by glVertexAttribPointer and
 * glVertexAttribIPointer. Additionally GL_HALF_FLOAT, GL_FLOAT, GL_DOUBLE,
 * GL_FIXED, GL_INT_2_10_10_10_REV, GL_UNSIGNED_INT_2_10_10_10_REV and
 * GL_UNSIGNED_INT_10F_11F_11F_REV are accepted by glVertexAttribPointer.
 * GL_DOUBLE is also accepted by glVertexAttribLPointer and is the only token
 * accepted by the type parameter for that function. The initial value is
 * GL_FLOAT.
 *
 * @param [normalized] For glVertexAttribPointer, specifies whether
 * fixed-point data values should be normalized (GL_TRUE) or converted
 * directly as fixed-point values (GL_FALSE) when they are accessed.
 *
 * @param [stride] Specifies the byte offset between consecutive generic
 * vertex attributes. If stride is 0, the generic vertex attributes are
 * understood to be tightly packed in the array. The initial value is 0.
 *
 * @param [pointer] Specifies a offset of the first component of the first
 * generic vertex attribute in the array in the data store of the buffer
 * currently bound to the GL_ARRAY_BUFFER target. The initial value is 0.
 */
static inline void glVertexAttribPointer(GLuint index, GLint size, GLenum type,
                                         GLboolean normalized, GLsizei stride,
                                         const GLvoid *pointer) {
  glad_glVertexAttribPointer(index, size, type, normalized, stride, pointer);
}
/**
 * glVertexAttribPointer — define an array of generic vertex attribute data
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [size] Specifies the number of components per generic vertex
 * attribute. Must be 1, 2, 3, 4. Additionally, the symbolic constant GL_BGRA
 * is accepted by glVertexAttribPointer. The initial value is 4.
 *
 * @param [type] Specifies the data type of each component in the array. The
 * symbolic constants GL_BYTE, GL_UNSIGNED_BYTE, GL_SHORT, GL_UNSIGNED_SHORT,
 * GL_INT, and GL_UNSIGNED_INT are accepted by glVertexAttribPointer and
 * glVertexAttribIPointer. Additionally GL_HALF_FLOAT, GL_FLOAT, GL_DOUBLE,
 * GL_FIXED, GL_INT_2_10_10_10_REV, GL_UNSIGNED_INT_2_10_10_10_REV and
 * GL_UNSIGNED_INT_10F_11F_11F_REV are accepted by glVertexAttribPointer.
 * GL_DOUBLE is also accepted by glVertexAttribLPointer and is the only token
 * accepted by the type parameter for that function. The initial value is
 * GL_FLOAT.
 *
 * @param [normalized] For glVertexAttribPointer, specifies whether
 * fixed-point data values should be normalized (GL_TRUE) or converted
 * directly as fixed-point values (GL_FALSE) when they are accessed.
 *
 * @param [stride] Specifies the byte offset between consecutive generic
 * vertex attributes. If stride is 0, the generic vertex attributes are
 * understood to be tightly packed in the array. The initial value is 0.
 *
 * @param [pointer] Specifies a offset of the first component of the first
 * generic vertex attribute in the array in the data store of the buffer
 * currently bound to the GL_ARRAY_BUFFER target. The initial value is 0.
 */
static inline void glVertexAttribIPointer(GLuint index, GLint size, GLenum type,
                                          GLsizei stride,
                                          const GLvoid *pointer) {
  glad_glVertexAttribIPointer(index, size, type, stride, pointer);
}
/**
 * glVertexAttribPointer — define an array of generic vertex attribute data
 *
 * @param [index] Specifies the index of the generic vertex attribute to be
 * modified.
 *
 * @param [size] Specifies the number of components per generic vertex
 * attribute. Must be 1, 2, 3, 4. Additionally, the symbolic constant GL_BGRA
 * is accepted by glVertexAttribPointer. The initial value is 4.
 *
 * @param [type] Specifies the data type of each component in the array. The
 * symbolic constants GL_BYTE, GL_UNSIGNED_BYTE, GL_SHORT, GL_UNSIGNED_SHORT,
 * GL_INT, and GL_UNSIGNED_INT are accepted by glVertexAttribPointer and
 * glVertexAttribIPointer. Additionally GL_HALF_FLOAT, GL_FLOAT, GL_DOUBLE,
 * GL_FIXED, GL_INT_2_10_10_10_REV, GL_UNSIGNED_INT_2_10_10_10_REV and
 * GL_UNSIGNED_INT_10F_11F_11F_REV are accepted by glVertexAttribPointer.
 * GL_DOUBLE is also accepted by glVertexAttribLPointer and is the only token
 * accepted by the type parameter for that function. The initial value is
 * GL_FLOAT.
 *
 * @param [normalized] For glVertexAttribPointer, specifies whether
 * fixed-point data values should be normalized (GL_TRUE) or converted
 * directly as fixed-point values (GL_FALSE) when they are accessed.
 *
 * @param [stride] Specifies the byte offset between consecutive generic
 * vertex attributes. If stride is 0, the generic vertex attributes are
 * understood to be tightly packed in the array. The initial value is 0.
 *
 * @param [pointer] Specifies a offset of the first component of the first
 * generic vertex attribute in the array in the data store of the buffer
 * currently bound to the GL_ARRAY_BUFFER target. The initial value is 0.
 */
static inline void glVertexAttribLPointer(GLuint index, GLint size, GLenum type,
                                          GLsizei stride,
                                          const GLvoid *pointer) {
  glad_glVertexAttribLPointer(index, size, type, stride, pointer);
}
/**
 * glVertexBindingDivisor, glVertexArrayBindingDivisor — modify the rate at
 which generic vertex attributes advance
 *
 * @param [vaobj] Specifies the name of the vertex array object for
 glVertexArrayBindingDivisor function.
 *
 * @param [bindingindex] The index of the binding whose divisor to modify.
 *
 * @param [divisor] The new value for the instance step rate to apply.
 */
static inline void glVertexBindingDivisor(GLuint bindingindex, GLuint divisor) {
  glad_glVertexBindingDivisor(bindingindex, divisor);
}
/**
 * glVertexBindingDivisor, glVertexArrayBindingDivisor — modify the rate at
 which generic vertex attributes advance
 *
 * @param [vaobj] Specifies the name of the vertex array object for
 glVertexArrayBindingDivisor function.
 *
 * @param [bindingindex] The index of the binding whose divisor to modify.
 *
 * @param [divisor] The new value for the instance step rate to apply.
 */
static inline void
glVertexArrayBindingDivisor(GLuint vaobj, GLuint bindingindex, GLuint divisor) {
  glad_glVertexArrayBindingDivisor(vaobj, bindingindex, divisor);
}
/**
 * glViewport — set the viewport
 *
 * @param [x, y] Specify the lower left corner of the viewport rectangle, in
 * pixels. The initial value is (0,0).
 *
 * @param [width, height] Specify the width and height of the viewport. When a
 * GL context is first attached to a window, width and height are set to the
 * dimensions of that window.
 */
static inline void glViewport(GLint x, GLint y, GLsizei width, GLsizei height) {
  glad_glViewport(x, y, width, height);
}
/**
 * glViewportArray — set multiple viewports
 *
 * @param [first] Specify the first viewport to set.
 *
 * @param [count] Specify the number of viewports to set.
 *
 * @param [v] Specify the address of an array containing the viewport
 * parameters.
 */
static inline void glViewportArrayv(GLuint first, GLsizei count,
                                    const GLfloat *v) {
  glad_glViewportArrayv(first, count, v);
}
/**
 * glViewportIndexed — set a specified viewport
 *
 * @param [index] Specify the first viewport to set.
 *
 * @param [x, y] For glViewportIndexedf, specifies the lower left corner of
 * the viewport rectangle, in pixels. The initial value is (0,0).
 *
 * @param [width, height] For glViewportIndexedf, specifies the width and
 * height of the viewport. When a GL context is first attached to a window,
 * width and height are set to the dimensions of that window.
 *
 * @param [v] For glViewportIndexedfv, specifies the address of an array
 * containing the viewport parameters.
 */
static inline void glViewportIndexedf(GLuint index, GLfloat x, GLfloat y,
                                      GLfloat w, GLfloat h) {
  glad_glViewportIndexedf(index, x, y, w, h);
}
/**
 * glViewportIndexed — set a specified viewport
 *
 * @param [index] Specify the first viewport to set.
 *
 * @param [x, y] For glViewportIndexedf, specifies the lower left corner of
 * the viewport rectangle, in pixels. The initial value is (0,0).
 *
 * @param [width, height] For glViewportIndexedf, specifies the width and
 * height of the viewport. When a GL context is first attached to a window,
 * width and height are set to the dimensions of that window.
 *
 * @param [v] For glViewportIndexedfv, specifies the address of an array
 * containing the viewport parameters.
 */
static inline void glViewportIndexedfv(GLuint index, const GLfloat *v) {
  glad_glViewportIndexedfv(index, v);
}
/**
 * glWaitSync — instruct the GL server to block until the specified sync
 * object becomes signaled
 *
 * @param [sync] Specifies the sync object whose status to wait on.
 *
 * @param [flags] A bitfield controlling the command flushing behavior. flags
 * may be zero.
 *
 * @param [timeout] Specifies the timeout that the server should wait before
 * continuing. timeout must be GL_TIMEOUT_IGNORED.
 */
static inline void glWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout) {
  glad_glWaitSync(sync, flags, timeout);
}

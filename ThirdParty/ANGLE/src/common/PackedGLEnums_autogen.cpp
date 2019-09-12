// GENERATED FILE - DO NOT EDIT.
// Generated by gen_packed_gl_enums.py using data from packed_gl_enums.json.
//
// Copyright 2019 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// PackedGLEnums_autogen.cpp:
//   Implements ANGLE-specific enums classes for GLenums and functions operating
//   on them.

#include "common/PackedGLEnums_autogen.h"
#include "common/debug.h"

namespace gl
{

template <>
AlphaTestFunc FromGLenum<AlphaTestFunc>(GLenum from)
{
    switch (from)
    {
        case GL_ALWAYS:
            return AlphaTestFunc::AlwaysPass;
        case GL_EQUAL:
            return AlphaTestFunc::Equal;
        case GL_GEQUAL:
            return AlphaTestFunc::Gequal;
        case GL_GREATER:
            return AlphaTestFunc::Greater;
        case GL_LEQUAL:
            return AlphaTestFunc::Lequal;
        case GL_LESS:
            return AlphaTestFunc::Less;
        case GL_NEVER:
            return AlphaTestFunc::Never;
        case GL_NOTEQUAL:
            return AlphaTestFunc::NotEqual;
        default:
            return AlphaTestFunc::InvalidEnum;
    }
}

GLenum ToGLenum(AlphaTestFunc from)
{
    switch (from)
    {
        case AlphaTestFunc::AlwaysPass:
            return GL_ALWAYS;
        case AlphaTestFunc::Equal:
            return GL_EQUAL;
        case AlphaTestFunc::Gequal:
            return GL_GEQUAL;
        case AlphaTestFunc::Greater:
            return GL_GREATER;
        case AlphaTestFunc::Lequal:
            return GL_LEQUAL;
        case AlphaTestFunc::Less:
            return GL_LESS;
        case AlphaTestFunc::Never:
            return GL_NEVER;
        case AlphaTestFunc::NotEqual:
            return GL_NOTEQUAL;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
BufferBinding FromGLenum<BufferBinding>(GLenum from)
{
    switch (from)
    {
        case GL_ARRAY_BUFFER:
            return BufferBinding::Array;
        case GL_ATOMIC_COUNTER_BUFFER:
            return BufferBinding::AtomicCounter;
        case GL_COPY_READ_BUFFER:
            return BufferBinding::CopyRead;
        case GL_COPY_WRITE_BUFFER:
            return BufferBinding::CopyWrite;
        case GL_DISPATCH_INDIRECT_BUFFER:
            return BufferBinding::DispatchIndirect;
        case GL_DRAW_INDIRECT_BUFFER:
            return BufferBinding::DrawIndirect;
        case GL_ELEMENT_ARRAY_BUFFER:
            return BufferBinding::ElementArray;
        case GL_PIXEL_PACK_BUFFER:
            return BufferBinding::PixelPack;
        case GL_PIXEL_UNPACK_BUFFER:
            return BufferBinding::PixelUnpack;
        case GL_SHADER_STORAGE_BUFFER:
            return BufferBinding::ShaderStorage;
        case GL_TRANSFORM_FEEDBACK_BUFFER:
            return BufferBinding::TransformFeedback;
        case GL_UNIFORM_BUFFER:
            return BufferBinding::Uniform;
        default:
            return BufferBinding::InvalidEnum;
    }
}

GLenum ToGLenum(BufferBinding from)
{
    switch (from)
    {
        case BufferBinding::Array:
            return GL_ARRAY_BUFFER;
        case BufferBinding::AtomicCounter:
            return GL_ATOMIC_COUNTER_BUFFER;
        case BufferBinding::CopyRead:
            return GL_COPY_READ_BUFFER;
        case BufferBinding::CopyWrite:
            return GL_COPY_WRITE_BUFFER;
        case BufferBinding::DispatchIndirect:
            return GL_DISPATCH_INDIRECT_BUFFER;
        case BufferBinding::DrawIndirect:
            return GL_DRAW_INDIRECT_BUFFER;
        case BufferBinding::ElementArray:
            return GL_ELEMENT_ARRAY_BUFFER;
        case BufferBinding::PixelPack:
            return GL_PIXEL_PACK_BUFFER;
        case BufferBinding::PixelUnpack:
            return GL_PIXEL_UNPACK_BUFFER;
        case BufferBinding::ShaderStorage:
            return GL_SHADER_STORAGE_BUFFER;
        case BufferBinding::TransformFeedback:
            return GL_TRANSFORM_FEEDBACK_BUFFER;
        case BufferBinding::Uniform:
            return GL_UNIFORM_BUFFER;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
BufferUsage FromGLenum<BufferUsage>(GLenum from)
{
    switch (from)
    {
        case GL_DYNAMIC_COPY:
            return BufferUsage::DynamicCopy;
        case GL_DYNAMIC_DRAW:
            return BufferUsage::DynamicDraw;
        case GL_DYNAMIC_READ:
            return BufferUsage::DynamicRead;
        case GL_STATIC_COPY:
            return BufferUsage::StaticCopy;
        case GL_STATIC_DRAW:
            return BufferUsage::StaticDraw;
        case GL_STATIC_READ:
            return BufferUsage::StaticRead;
        case GL_STREAM_COPY:
            return BufferUsage::StreamCopy;
        case GL_STREAM_DRAW:
            return BufferUsage::StreamDraw;
        case GL_STREAM_READ:
            return BufferUsage::StreamRead;
        default:
            return BufferUsage::InvalidEnum;
    }
}

GLenum ToGLenum(BufferUsage from)
{
    switch (from)
    {
        case BufferUsage::DynamicCopy:
            return GL_DYNAMIC_COPY;
        case BufferUsage::DynamicDraw:
            return GL_DYNAMIC_DRAW;
        case BufferUsage::DynamicRead:
            return GL_DYNAMIC_READ;
        case BufferUsage::StaticCopy:
            return GL_STATIC_COPY;
        case BufferUsage::StaticDraw:
            return GL_STATIC_DRAW;
        case BufferUsage::StaticRead:
            return GL_STATIC_READ;
        case BufferUsage::StreamCopy:
            return GL_STREAM_COPY;
        case BufferUsage::StreamDraw:
            return GL_STREAM_DRAW;
        case BufferUsage::StreamRead:
            return GL_STREAM_READ;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
ClientVertexArrayType FromGLenum<ClientVertexArrayType>(GLenum from)
{
    switch (from)
    {
        case GL_COLOR_ARRAY:
            return ClientVertexArrayType::Color;
        case GL_NORMAL_ARRAY:
            return ClientVertexArrayType::Normal;
        case GL_POINT_SIZE_ARRAY_OES:
            return ClientVertexArrayType::PointSize;
        case GL_TEXTURE_COORD_ARRAY:
            return ClientVertexArrayType::TextureCoord;
        case GL_VERTEX_ARRAY:
            return ClientVertexArrayType::Vertex;
        default:
            return ClientVertexArrayType::InvalidEnum;
    }
}

GLenum ToGLenum(ClientVertexArrayType from)
{
    switch (from)
    {
        case ClientVertexArrayType::Color:
            return GL_COLOR_ARRAY;
        case ClientVertexArrayType::Normal:
            return GL_NORMAL_ARRAY;
        case ClientVertexArrayType::PointSize:
            return GL_POINT_SIZE_ARRAY_OES;
        case ClientVertexArrayType::TextureCoord:
            return GL_TEXTURE_COORD_ARRAY;
        case ClientVertexArrayType::Vertex:
            return GL_VERTEX_ARRAY;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
CullFaceMode FromGLenum<CullFaceMode>(GLenum from)
{
    switch (from)
    {
        case GL_BACK:
            return CullFaceMode::Back;
        case GL_FRONT:
            return CullFaceMode::Front;
        case GL_FRONT_AND_BACK:
            return CullFaceMode::FrontAndBack;
        default:
            return CullFaceMode::InvalidEnum;
    }
}

GLenum ToGLenum(CullFaceMode from)
{
    switch (from)
    {
        case CullFaceMode::Back:
            return GL_BACK;
        case CullFaceMode::Front:
            return GL_FRONT;
        case CullFaceMode::FrontAndBack:
            return GL_FRONT_AND_BACK;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
FilterMode FromGLenum<FilterMode>(GLenum from)
{
    switch (from)
    {
        case GL_NEAREST:
            return FilterMode::Nearest;
        case GL_LINEAR:
            return FilterMode::Linear;
        case GL_NEAREST_MIPMAP_NEAREST:
            return FilterMode::NearestMipmapNearest;
        case GL_NEAREST_MIPMAP_LINEAR:
            return FilterMode::NearestMipmapLinear;
        case GL_LINEAR_MIPMAP_LINEAR:
            return FilterMode::LinearMipmapLinear;
        default:
            return FilterMode::InvalidEnum;
    }
}

GLenum ToGLenum(FilterMode from)
{
    switch (from)
    {
        case FilterMode::Nearest:
            return GL_NEAREST;
        case FilterMode::Linear:
            return GL_LINEAR;
        case FilterMode::NearestMipmapNearest:
            return GL_NEAREST_MIPMAP_NEAREST;
        case FilterMode::NearestMipmapLinear:
            return GL_NEAREST_MIPMAP_LINEAR;
        case FilterMode::LinearMipmapLinear:
            return GL_LINEAR_MIPMAP_LINEAR;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
FogMode FromGLenum<FogMode>(GLenum from)
{
    switch (from)
    {
        case GL_EXP:
            return FogMode::Exp;
        case GL_EXP2:
            return FogMode::Exp2;
        case GL_LINEAR:
            return FogMode::Linear;
        default:
            return FogMode::InvalidEnum;
    }
}

GLenum ToGLenum(FogMode from)
{
    switch (from)
    {
        case FogMode::Exp:
            return GL_EXP;
        case FogMode::Exp2:
            return GL_EXP2;
        case FogMode::Linear:
            return GL_LINEAR;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
GraphicsResetStatus FromGLenum<GraphicsResetStatus>(GLenum from)
{
    switch (from)
    {
        case GL_NO_ERROR:
            return GraphicsResetStatus::NoError;
        case GL_GUILTY_CONTEXT_RESET:
            return GraphicsResetStatus::GuiltyContextReset;
        case GL_INNOCENT_CONTEXT_RESET:
            return GraphicsResetStatus::InnocentContextReset;
        case GL_UNKNOWN_CONTEXT_RESET:
            return GraphicsResetStatus::UnknownContextReset;
        default:
            return GraphicsResetStatus::InvalidEnum;
    }
}

GLenum ToGLenum(GraphicsResetStatus from)
{
    switch (from)
    {
        case GraphicsResetStatus::NoError:
            return GL_NO_ERROR;
        case GraphicsResetStatus::GuiltyContextReset:
            return GL_GUILTY_CONTEXT_RESET;
        case GraphicsResetStatus::InnocentContextReset:
            return GL_INNOCENT_CONTEXT_RESET;
        case GraphicsResetStatus::UnknownContextReset:
            return GL_UNKNOWN_CONTEXT_RESET;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
HandleType FromGLenum<HandleType>(GLenum from)
{
    switch (from)
    {
        case GL_HANDLE_TYPE_OPAQUE_FD_EXT:
            return HandleType::OpaqueFd;
        default:
            return HandleType::InvalidEnum;
    }
}

GLenum ToGLenum(HandleType from)
{
    switch (from)
    {
        case HandleType::OpaqueFd:
            return GL_HANDLE_TYPE_OPAQUE_FD_EXT;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
HintSetting FromGLenum<HintSetting>(GLenum from)
{
    switch (from)
    {
        case GL_DONT_CARE:
            return HintSetting::DontCare;
        case GL_FASTEST:
            return HintSetting::Fastest;
        case GL_NICEST:
            return HintSetting::Nicest;
        default:
            return HintSetting::InvalidEnum;
    }
}

GLenum ToGLenum(HintSetting from)
{
    switch (from)
    {
        case HintSetting::DontCare:
            return GL_DONT_CARE;
        case HintSetting::Fastest:
            return GL_FASTEST;
        case HintSetting::Nicest:
            return GL_NICEST;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
LightParameter FromGLenum<LightParameter>(GLenum from)
{
    switch (from)
    {
        case GL_AMBIENT:
            return LightParameter::Ambient;
        case GL_AMBIENT_AND_DIFFUSE:
            return LightParameter::AmbientAndDiffuse;
        case GL_CONSTANT_ATTENUATION:
            return LightParameter::ConstantAttenuation;
        case GL_DIFFUSE:
            return LightParameter::Diffuse;
        case GL_LINEAR_ATTENUATION:
            return LightParameter::LinearAttenuation;
        case GL_POSITION:
            return LightParameter::Position;
        case GL_QUADRATIC_ATTENUATION:
            return LightParameter::QuadraticAttenuation;
        case GL_SPECULAR:
            return LightParameter::Specular;
        case GL_SPOT_CUTOFF:
            return LightParameter::SpotCutoff;
        case GL_SPOT_DIRECTION:
            return LightParameter::SpotDirection;
        case GL_SPOT_EXPONENT:
            return LightParameter::SpotExponent;
        default:
            return LightParameter::InvalidEnum;
    }
}

GLenum ToGLenum(LightParameter from)
{
    switch (from)
    {
        case LightParameter::Ambient:
            return GL_AMBIENT;
        case LightParameter::AmbientAndDiffuse:
            return GL_AMBIENT_AND_DIFFUSE;
        case LightParameter::ConstantAttenuation:
            return GL_CONSTANT_ATTENUATION;
        case LightParameter::Diffuse:
            return GL_DIFFUSE;
        case LightParameter::LinearAttenuation:
            return GL_LINEAR_ATTENUATION;
        case LightParameter::Position:
            return GL_POSITION;
        case LightParameter::QuadraticAttenuation:
            return GL_QUADRATIC_ATTENUATION;
        case LightParameter::Specular:
            return GL_SPECULAR;
        case LightParameter::SpotCutoff:
            return GL_SPOT_CUTOFF;
        case LightParameter::SpotDirection:
            return GL_SPOT_DIRECTION;
        case LightParameter::SpotExponent:
            return GL_SPOT_EXPONENT;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
LogicalOperation FromGLenum<LogicalOperation>(GLenum from)
{
    switch (from)
    {
        case GL_AND:
            return LogicalOperation::And;
        case GL_AND_INVERTED:
            return LogicalOperation::AndInverted;
        case GL_AND_REVERSE:
            return LogicalOperation::AndReverse;
        case GL_CLEAR:
            return LogicalOperation::Clear;
        case GL_COPY:
            return LogicalOperation::Copy;
        case GL_COPY_INVERTED:
            return LogicalOperation::CopyInverted;
        case GL_EQUIV:
            return LogicalOperation::Equiv;
        case GL_INVERT:
            return LogicalOperation::Invert;
        case GL_NAND:
            return LogicalOperation::Nand;
        case GL_NOOP:
            return LogicalOperation::Noop;
        case GL_NOR:
            return LogicalOperation::Nor;
        case GL_OR:
            return LogicalOperation::Or;
        case GL_OR_INVERTED:
            return LogicalOperation::OrInverted;
        case GL_OR_REVERSE:
            return LogicalOperation::OrReverse;
        case GL_SET:
            return LogicalOperation::Set;
        case GL_XOR:
            return LogicalOperation::Xor;
        default:
            return LogicalOperation::InvalidEnum;
    }
}

GLenum ToGLenum(LogicalOperation from)
{
    switch (from)
    {
        case LogicalOperation::And:
            return GL_AND;
        case LogicalOperation::AndInverted:
            return GL_AND_INVERTED;
        case LogicalOperation::AndReverse:
            return GL_AND_REVERSE;
        case LogicalOperation::Clear:
            return GL_CLEAR;
        case LogicalOperation::Copy:
            return GL_COPY;
        case LogicalOperation::CopyInverted:
            return GL_COPY_INVERTED;
        case LogicalOperation::Equiv:
            return GL_EQUIV;
        case LogicalOperation::Invert:
            return GL_INVERT;
        case LogicalOperation::Nand:
            return GL_NAND;
        case LogicalOperation::Noop:
            return GL_NOOP;
        case LogicalOperation::Nor:
            return GL_NOR;
        case LogicalOperation::Or:
            return GL_OR;
        case LogicalOperation::OrInverted:
            return GL_OR_INVERTED;
        case LogicalOperation::OrReverse:
            return GL_OR_REVERSE;
        case LogicalOperation::Set:
            return GL_SET;
        case LogicalOperation::Xor:
            return GL_XOR;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
MaterialParameter FromGLenum<MaterialParameter>(GLenum from)
{
    switch (from)
    {
        case GL_AMBIENT:
            return MaterialParameter::Ambient;
        case GL_AMBIENT_AND_DIFFUSE:
            return MaterialParameter::AmbientAndDiffuse;
        case GL_DIFFUSE:
            return MaterialParameter::Diffuse;
        case GL_EMISSION:
            return MaterialParameter::Emission;
        case GL_SHININESS:
            return MaterialParameter::Shininess;
        case GL_SPECULAR:
            return MaterialParameter::Specular;
        default:
            return MaterialParameter::InvalidEnum;
    }
}

GLenum ToGLenum(MaterialParameter from)
{
    switch (from)
    {
        case MaterialParameter::Ambient:
            return GL_AMBIENT;
        case MaterialParameter::AmbientAndDiffuse:
            return GL_AMBIENT_AND_DIFFUSE;
        case MaterialParameter::Diffuse:
            return GL_DIFFUSE;
        case MaterialParameter::Emission:
            return GL_EMISSION;
        case MaterialParameter::Shininess:
            return GL_SHININESS;
        case MaterialParameter::Specular:
            return GL_SPECULAR;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
MatrixType FromGLenum<MatrixType>(GLenum from)
{
    switch (from)
    {
        case GL_MODELVIEW:
            return MatrixType::Modelview;
        case GL_PROJECTION:
            return MatrixType::Projection;
        case GL_TEXTURE:
            return MatrixType::Texture;
        default:
            return MatrixType::InvalidEnum;
    }
}

GLenum ToGLenum(MatrixType from)
{
    switch (from)
    {
        case MatrixType::Modelview:
            return GL_MODELVIEW;
        case MatrixType::Projection:
            return GL_PROJECTION;
        case MatrixType::Texture:
            return GL_TEXTURE;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
PointParameter FromGLenum<PointParameter>(GLenum from)
{
    switch (from)
    {
        case GL_POINT_SIZE_MIN:
            return PointParameter::PointSizeMin;
        case GL_POINT_SIZE_MAX:
            return PointParameter::PointSizeMax;
        case GL_POINT_FADE_THRESHOLD_SIZE:
            return PointParameter::PointFadeThresholdSize;
        case GL_POINT_DISTANCE_ATTENUATION:
            return PointParameter::PointDistanceAttenuation;
        default:
            return PointParameter::InvalidEnum;
    }
}

GLenum ToGLenum(PointParameter from)
{
    switch (from)
    {
        case PointParameter::PointSizeMin:
            return GL_POINT_SIZE_MIN;
        case PointParameter::PointSizeMax:
            return GL_POINT_SIZE_MAX;
        case PointParameter::PointFadeThresholdSize:
            return GL_POINT_FADE_THRESHOLD_SIZE;
        case PointParameter::PointDistanceAttenuation:
            return GL_POINT_DISTANCE_ATTENUATION;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
ProvokingVertex FromGLenum<ProvokingVertex>(GLenum from)
{
    switch (from)
    {
        case GL_FIRST_VERTEX_CONVENTION:
            return ProvokingVertex::FirstVertexConvention;
        case GL_LAST_VERTEX_CONVENTION:
            return ProvokingVertex::LastVertexConvention;
        default:
            return ProvokingVertex::InvalidEnum;
    }
}

GLenum ToGLenum(ProvokingVertex from)
{
    switch (from)
    {
        case ProvokingVertex::FirstVertexConvention:
            return GL_FIRST_VERTEX_CONVENTION;
        case ProvokingVertex::LastVertexConvention:
            return GL_LAST_VERTEX_CONVENTION;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
QueryType FromGLenum<QueryType>(GLenum from)
{
    switch (from)
    {
        case GL_ANY_SAMPLES_PASSED:
            return QueryType::AnySamples;
        case GL_ANY_SAMPLES_PASSED_CONSERVATIVE:
            return QueryType::AnySamplesConservative;
        case GL_COMMANDS_COMPLETED_CHROMIUM:
            return QueryType::CommandsCompleted;
        case GL_PRIMITIVES_GENERATED_EXT:
            return QueryType::PrimitivesGenerated;
        case GL_TIME_ELAPSED_EXT:
            return QueryType::TimeElapsed;
        case GL_TIMESTAMP_EXT:
            return QueryType::Timestamp;
        case GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN:
            return QueryType::TransformFeedbackPrimitivesWritten;
        default:
            return QueryType::InvalidEnum;
    }
}

GLenum ToGLenum(QueryType from)
{
    switch (from)
    {
        case QueryType::AnySamples:
            return GL_ANY_SAMPLES_PASSED;
        case QueryType::AnySamplesConservative:
            return GL_ANY_SAMPLES_PASSED_CONSERVATIVE;
        case QueryType::CommandsCompleted:
            return GL_COMMANDS_COMPLETED_CHROMIUM;
        case QueryType::PrimitivesGenerated:
            return GL_PRIMITIVES_GENERATED_EXT;
        case QueryType::TimeElapsed:
            return GL_TIME_ELAPSED_EXT;
        case QueryType::Timestamp:
            return GL_TIMESTAMP_EXT;
        case QueryType::TransformFeedbackPrimitivesWritten:
            return GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
ShaderType FromGLenum<ShaderType>(GLenum from)
{
    switch (from)
    {
        case GL_VERTEX_SHADER:
            return ShaderType::Vertex;
        case GL_FRAGMENT_SHADER:
            return ShaderType::Fragment;
        case GL_GEOMETRY_SHADER_EXT:
            return ShaderType::Geometry;
        case GL_COMPUTE_SHADER:
            return ShaderType::Compute;
        default:
            return ShaderType::InvalidEnum;
    }
}

GLenum ToGLenum(ShaderType from)
{
    switch (from)
    {
        case ShaderType::Vertex:
            return GL_VERTEX_SHADER;
        case ShaderType::Fragment:
            return GL_FRAGMENT_SHADER;
        case ShaderType::Geometry:
            return GL_GEOMETRY_SHADER_EXT;
        case ShaderType::Compute:
            return GL_COMPUTE_SHADER;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
ShadingModel FromGLenum<ShadingModel>(GLenum from)
{
    switch (from)
    {
        case GL_FLAT:
            return ShadingModel::Flat;
        case GL_SMOOTH:
            return ShadingModel::Smooth;
        default:
            return ShadingModel::InvalidEnum;
    }
}

GLenum ToGLenum(ShadingModel from)
{
    switch (from)
    {
        case ShadingModel::Flat:
            return GL_FLAT;
        case ShadingModel::Smooth:
            return GL_SMOOTH;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
TextureCombine FromGLenum<TextureCombine>(GLenum from)
{
    switch (from)
    {
        case GL_ADD:
            return TextureCombine::Add;
        case GL_ADD_SIGNED:
            return TextureCombine::AddSigned;
        case GL_DOT3_RGB:
            return TextureCombine::Dot3Rgb;
        case GL_DOT3_RGBA:
            return TextureCombine::Dot3Rgba;
        case GL_INTERPOLATE:
            return TextureCombine::Interpolate;
        case GL_MODULATE:
            return TextureCombine::Modulate;
        case GL_REPLACE:
            return TextureCombine::Replace;
        case GL_SUBTRACT:
            return TextureCombine::Subtract;
        default:
            return TextureCombine::InvalidEnum;
    }
}

GLenum ToGLenum(TextureCombine from)
{
    switch (from)
    {
        case TextureCombine::Add:
            return GL_ADD;
        case TextureCombine::AddSigned:
            return GL_ADD_SIGNED;
        case TextureCombine::Dot3Rgb:
            return GL_DOT3_RGB;
        case TextureCombine::Dot3Rgba:
            return GL_DOT3_RGBA;
        case TextureCombine::Interpolate:
            return GL_INTERPOLATE;
        case TextureCombine::Modulate:
            return GL_MODULATE;
        case TextureCombine::Replace:
            return GL_REPLACE;
        case TextureCombine::Subtract:
            return GL_SUBTRACT;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
TextureEnvMode FromGLenum<TextureEnvMode>(GLenum from)
{
    switch (from)
    {
        case GL_ADD:
            return TextureEnvMode::Add;
        case GL_BLEND:
            return TextureEnvMode::Blend;
        case GL_COMBINE:
            return TextureEnvMode::Combine;
        case GL_DECAL:
            return TextureEnvMode::Decal;
        case GL_MODULATE:
            return TextureEnvMode::Modulate;
        case GL_REPLACE:
            return TextureEnvMode::Replace;
        default:
            return TextureEnvMode::InvalidEnum;
    }
}

GLenum ToGLenum(TextureEnvMode from)
{
    switch (from)
    {
        case TextureEnvMode::Add:
            return GL_ADD;
        case TextureEnvMode::Blend:
            return GL_BLEND;
        case TextureEnvMode::Combine:
            return GL_COMBINE;
        case TextureEnvMode::Decal:
            return GL_DECAL;
        case TextureEnvMode::Modulate:
            return GL_MODULATE;
        case TextureEnvMode::Replace:
            return GL_REPLACE;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
TextureEnvParameter FromGLenum<TextureEnvParameter>(GLenum from)
{
    switch (from)
    {
        case GL_TEXTURE_ENV_MODE:
            return TextureEnvParameter::Mode;
        case GL_TEXTURE_ENV_COLOR:
            return TextureEnvParameter::Color;
        case GL_COMBINE_RGB:
            return TextureEnvParameter::CombineRgb;
        case GL_COMBINE_ALPHA:
            return TextureEnvParameter::CombineAlpha;
        case GL_RGB_SCALE:
            return TextureEnvParameter::RgbScale;
        case GL_ALPHA_SCALE:
            return TextureEnvParameter::AlphaScale;
        case GL_SRC0_RGB:
            return TextureEnvParameter::Src0Rgb;
        case GL_SRC1_RGB:
            return TextureEnvParameter::Src1Rgb;
        case GL_SRC2_RGB:
            return TextureEnvParameter::Src2Rgb;
        case GL_SRC0_ALPHA:
            return TextureEnvParameter::Src0Alpha;
        case GL_SRC1_ALPHA:
            return TextureEnvParameter::Src1Alpha;
        case GL_SRC2_ALPHA:
            return TextureEnvParameter::Src2Alpha;
        case GL_OPERAND0_RGB:
            return TextureEnvParameter::Op0Rgb;
        case GL_OPERAND1_RGB:
            return TextureEnvParameter::Op1Rgb;
        case GL_OPERAND2_RGB:
            return TextureEnvParameter::Op2Rgb;
        case GL_OPERAND0_ALPHA:
            return TextureEnvParameter::Op0Alpha;
        case GL_OPERAND1_ALPHA:
            return TextureEnvParameter::Op1Alpha;
        case GL_OPERAND2_ALPHA:
            return TextureEnvParameter::Op2Alpha;
        case GL_COORD_REPLACE_OES:
            return TextureEnvParameter::PointCoordReplace;
        default:
            return TextureEnvParameter::InvalidEnum;
    }
}

GLenum ToGLenum(TextureEnvParameter from)
{
    switch (from)
    {
        case TextureEnvParameter::Mode:
            return GL_TEXTURE_ENV_MODE;
        case TextureEnvParameter::Color:
            return GL_TEXTURE_ENV_COLOR;
        case TextureEnvParameter::CombineRgb:
            return GL_COMBINE_RGB;
        case TextureEnvParameter::CombineAlpha:
            return GL_COMBINE_ALPHA;
        case TextureEnvParameter::RgbScale:
            return GL_RGB_SCALE;
        case TextureEnvParameter::AlphaScale:
            return GL_ALPHA_SCALE;
        case TextureEnvParameter::Src0Rgb:
            return GL_SRC0_RGB;
        case TextureEnvParameter::Src1Rgb:
            return GL_SRC1_RGB;
        case TextureEnvParameter::Src2Rgb:
            return GL_SRC2_RGB;
        case TextureEnvParameter::Src0Alpha:
            return GL_SRC0_ALPHA;
        case TextureEnvParameter::Src1Alpha:
            return GL_SRC1_ALPHA;
        case TextureEnvParameter::Src2Alpha:
            return GL_SRC2_ALPHA;
        case TextureEnvParameter::Op0Rgb:
            return GL_OPERAND0_RGB;
        case TextureEnvParameter::Op1Rgb:
            return GL_OPERAND1_RGB;
        case TextureEnvParameter::Op2Rgb:
            return GL_OPERAND2_RGB;
        case TextureEnvParameter::Op0Alpha:
            return GL_OPERAND0_ALPHA;
        case TextureEnvParameter::Op1Alpha:
            return GL_OPERAND1_ALPHA;
        case TextureEnvParameter::Op2Alpha:
            return GL_OPERAND2_ALPHA;
        case TextureEnvParameter::PointCoordReplace:
            return GL_COORD_REPLACE_OES;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
TextureEnvTarget FromGLenum<TextureEnvTarget>(GLenum from)
{
    switch (from)
    {
        case GL_TEXTURE_ENV:
            return TextureEnvTarget::Env;
        case GL_POINT_SPRITE_OES:
            return TextureEnvTarget::PointSprite;
        default:
            return TextureEnvTarget::InvalidEnum;
    }
}

GLenum ToGLenum(TextureEnvTarget from)
{
    switch (from)
    {
        case TextureEnvTarget::Env:
            return GL_TEXTURE_ENV;
        case TextureEnvTarget::PointSprite:
            return GL_POINT_SPRITE_OES;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
TextureOp FromGLenum<TextureOp>(GLenum from)
{
    switch (from)
    {
        case GL_ONE_MINUS_SRC_ALPHA:
            return TextureOp::OneMinusSrcAlpha;
        case GL_ONE_MINUS_SRC_COLOR:
            return TextureOp::OneMinusSrcColor;
        case GL_SRC_ALPHA:
            return TextureOp::SrcAlpha;
        case GL_SRC_COLOR:
            return TextureOp::SrcColor;
        default:
            return TextureOp::InvalidEnum;
    }
}

GLenum ToGLenum(TextureOp from)
{
    switch (from)
    {
        case TextureOp::OneMinusSrcAlpha:
            return GL_ONE_MINUS_SRC_ALPHA;
        case TextureOp::OneMinusSrcColor:
            return GL_ONE_MINUS_SRC_COLOR;
        case TextureOp::SrcAlpha:
            return GL_SRC_ALPHA;
        case TextureOp::SrcColor:
            return GL_SRC_COLOR;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
TextureSrc FromGLenum<TextureSrc>(GLenum from)
{
    switch (from)
    {
        case GL_CONSTANT:
            return TextureSrc::Constant;
        case GL_PREVIOUS:
            return TextureSrc::Previous;
        case GL_PRIMARY_COLOR:
            return TextureSrc::PrimaryColor;
        case GL_TEXTURE:
            return TextureSrc::Texture;
        default:
            return TextureSrc::InvalidEnum;
    }
}

GLenum ToGLenum(TextureSrc from)
{
    switch (from)
    {
        case TextureSrc::Constant:
            return GL_CONSTANT;
        case TextureSrc::Previous:
            return GL_PREVIOUS;
        case TextureSrc::PrimaryColor:
            return GL_PRIMARY_COLOR;
        case TextureSrc::Texture:
            return GL_TEXTURE;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
TextureTarget FromGLenum<TextureTarget>(GLenum from)
{
    switch (from)
    {
        case GL_TEXTURE_2D:
            return TextureTarget::_2D;
        case GL_TEXTURE_2D_ARRAY:
            return TextureTarget::_2DArray;
        case GL_TEXTURE_2D_MULTISAMPLE:
            return TextureTarget::_2DMultisample;
        case GL_TEXTURE_2D_MULTISAMPLE_ARRAY_OES:
            return TextureTarget::_2DMultisampleArray;
        case GL_TEXTURE_3D:
            return TextureTarget::_3D;
        case GL_TEXTURE_EXTERNAL_OES:
            return TextureTarget::External;
        case GL_TEXTURE_RECTANGLE_ANGLE:
            return TextureTarget::Rectangle;
        case GL_TEXTURE_CUBE_MAP_POSITIVE_X:
            return TextureTarget::CubeMapPositiveX;
        case GL_TEXTURE_CUBE_MAP_NEGATIVE_X:
            return TextureTarget::CubeMapNegativeX;
        case GL_TEXTURE_CUBE_MAP_POSITIVE_Y:
            return TextureTarget::CubeMapPositiveY;
        case GL_TEXTURE_CUBE_MAP_NEGATIVE_Y:
            return TextureTarget::CubeMapNegativeY;
        case GL_TEXTURE_CUBE_MAP_POSITIVE_Z:
            return TextureTarget::CubeMapPositiveZ;
        case GL_TEXTURE_CUBE_MAP_NEGATIVE_Z:
            return TextureTarget::CubeMapNegativeZ;
        default:
            return TextureTarget::InvalidEnum;
    }
}

GLenum ToGLenum(TextureTarget from)
{
    switch (from)
    {
        case TextureTarget::_2D:
            return GL_TEXTURE_2D;
        case TextureTarget::_2DArray:
            return GL_TEXTURE_2D_ARRAY;
        case TextureTarget::_2DMultisample:
            return GL_TEXTURE_2D_MULTISAMPLE;
        case TextureTarget::_2DMultisampleArray:
            return GL_TEXTURE_2D_MULTISAMPLE_ARRAY_OES;
        case TextureTarget::_3D:
            return GL_TEXTURE_3D;
        case TextureTarget::External:
            return GL_TEXTURE_EXTERNAL_OES;
        case TextureTarget::Rectangle:
            return GL_TEXTURE_RECTANGLE_ANGLE;
        case TextureTarget::CubeMapPositiveX:
            return GL_TEXTURE_CUBE_MAP_POSITIVE_X;
        case TextureTarget::CubeMapNegativeX:
            return GL_TEXTURE_CUBE_MAP_NEGATIVE_X;
        case TextureTarget::CubeMapPositiveY:
            return GL_TEXTURE_CUBE_MAP_POSITIVE_Y;
        case TextureTarget::CubeMapNegativeY:
            return GL_TEXTURE_CUBE_MAP_NEGATIVE_Y;
        case TextureTarget::CubeMapPositiveZ:
            return GL_TEXTURE_CUBE_MAP_POSITIVE_Z;
        case TextureTarget::CubeMapNegativeZ:
            return GL_TEXTURE_CUBE_MAP_NEGATIVE_Z;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
TextureType FromGLenum<TextureType>(GLenum from)
{
    switch (from)
    {
        case GL_TEXTURE_2D:
            return TextureType::_2D;
        case GL_TEXTURE_2D_ARRAY:
            return TextureType::_2DArray;
        case GL_TEXTURE_2D_MULTISAMPLE:
            return TextureType::_2DMultisample;
        case GL_TEXTURE_2D_MULTISAMPLE_ARRAY_OES:
            return TextureType::_2DMultisampleArray;
        case GL_TEXTURE_3D:
            return TextureType::_3D;
        case GL_TEXTURE_EXTERNAL_OES:
            return TextureType::External;
        case GL_TEXTURE_RECTANGLE_ANGLE:
            return TextureType::Rectangle;
        case GL_TEXTURE_CUBE_MAP:
            return TextureType::CubeMap;
        default:
            return TextureType::InvalidEnum;
    }
}

GLenum ToGLenum(TextureType from)
{
    switch (from)
    {
        case TextureType::_2D:
            return GL_TEXTURE_2D;
        case TextureType::_2DArray:
            return GL_TEXTURE_2D_ARRAY;
        case TextureType::_2DMultisample:
            return GL_TEXTURE_2D_MULTISAMPLE;
        case TextureType::_2DMultisampleArray:
            return GL_TEXTURE_2D_MULTISAMPLE_ARRAY_OES;
        case TextureType::_3D:
            return GL_TEXTURE_3D;
        case TextureType::External:
            return GL_TEXTURE_EXTERNAL_OES;
        case TextureType::Rectangle:
            return GL_TEXTURE_RECTANGLE_ANGLE;
        case TextureType::CubeMap:
            return GL_TEXTURE_CUBE_MAP;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
VertexArrayType FromGLenum<VertexArrayType>(GLenum from)
{
    switch (from)
    {
        case GL_COLOR_ARRAY:
            return VertexArrayType::Color;
        case GL_NORMAL_ARRAY:
            return VertexArrayType::Normal;
        case GL_POINT_SIZE_ARRAY_OES:
            return VertexArrayType::PointSize;
        case GL_TEXTURE_COORD_ARRAY:
            return VertexArrayType::TextureCoord;
        case GL_VERTEX_ARRAY:
            return VertexArrayType::Vertex;
        default:
            return VertexArrayType::InvalidEnum;
    }
}

GLenum ToGLenum(VertexArrayType from)
{
    switch (from)
    {
        case VertexArrayType::Color:
            return GL_COLOR_ARRAY;
        case VertexArrayType::Normal:
            return GL_NORMAL_ARRAY;
        case VertexArrayType::PointSize:
            return GL_POINT_SIZE_ARRAY_OES;
        case VertexArrayType::TextureCoord:
            return GL_TEXTURE_COORD_ARRAY;
        case VertexArrayType::Vertex:
            return GL_VERTEX_ARRAY;
        default:
            UNREACHABLE();
            return 0;
    }
}

template <>
WrapMode FromGLenum<WrapMode>(GLenum from)
{
    switch (from)
    {
        case GL_CLAMP_TO_EDGE:
            return WrapMode::ClampToEdge;
        case GL_CLAMP_TO_BORDER:
            return WrapMode::ClampToBorder;
        case GL_MIRRORED_REPEAT:
            return WrapMode::MirroredRepeat;
        case GL_REPEAT:
            return WrapMode::Repeat;
        default:
            return WrapMode::InvalidEnum;
    }
}

GLenum ToGLenum(WrapMode from)
{
    switch (from)
    {
        case WrapMode::ClampToEdge:
            return GL_CLAMP_TO_EDGE;
        case WrapMode::ClampToBorder:
            return GL_CLAMP_TO_BORDER;
        case WrapMode::MirroredRepeat:
            return GL_MIRRORED_REPEAT;
        case WrapMode::Repeat:
            return GL_REPEAT;
        default:
            UNREACHABLE();
            return 0;
    }
}

}  // namespace gl

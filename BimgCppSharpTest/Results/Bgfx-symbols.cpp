#include <platform.h>
#include <bgfx.h>
#include <defines.h>
#include <embedded_shader.h>
#include <platform.h>
#include <new>

struct bgfx::Fatal& (bgfx::Fatal::*_0)(struct bgfx::Fatal&&) = &bgfx::Fatal::operator=;
struct bgfx::RendererType& (bgfx::RendererType::*_1)(struct bgfx::RendererType&&) = &bgfx::RendererType::operator=;
struct bgfx::Access& (bgfx::Access::*_2)(struct bgfx::Access&&) = &bgfx::Access::operator=;
struct bgfx::Attrib& (bgfx::Attrib::*_3)(struct bgfx::Attrib&&) = &bgfx::Attrib::operator=;
struct bgfx::AttribType& (bgfx::AttribType::*_4)(struct bgfx::AttribType&&) = &bgfx::AttribType::operator=;
struct bgfx::TextureFormat& (bgfx::TextureFormat::*_5)(struct bgfx::TextureFormat&&) = &bgfx::TextureFormat::operator=;
struct bgfx::UniformType& (bgfx::UniformType::*_6)(struct bgfx::UniformType&&) = &bgfx::UniformType::operator=;
struct bgfx::BackbufferRatio& (bgfx::BackbufferRatio::*_7)(struct bgfx::BackbufferRatio&&) = &bgfx::BackbufferRatio::operator=;
struct bgfx::OcclusionQueryResult& (bgfx::OcclusionQueryResult::*_8)(struct bgfx::OcclusionQueryResult&&) = &bgfx::OcclusionQueryResult::operator=;
struct bgfx::Topology& (bgfx::Topology::*_9)(struct bgfx::Topology&&) = &bgfx::Topology::operator=;
struct bgfx::TopologyConvert& (bgfx::TopologyConvert::*_10)(struct bgfx::TopologyConvert&&) = &bgfx::TopologyConvert::operator=;
struct bgfx::TopologySort& (bgfx::TopologySort::*_11)(struct bgfx::TopologySort&&) = &bgfx::TopologySort::operator=;
struct bgfx::ViewMode& (bgfx::ViewMode::*_12)(struct bgfx::ViewMode&&) = &bgfx::ViewMode::operator=;
struct bgfx::DynamicIndexBufferHandle& (bgfx::DynamicIndexBufferHandle::*_13)(struct bgfx::DynamicIndexBufferHandle&&) = &bgfx::DynamicIndexBufferHandle::operator=;
struct bgfx::DynamicVertexBufferHandle& (bgfx::DynamicVertexBufferHandle::*_14)(struct bgfx::DynamicVertexBufferHandle&&) = &bgfx::DynamicVertexBufferHandle::operator=;
struct bgfx::FrameBufferHandle& (bgfx::FrameBufferHandle::*_15)(struct bgfx::FrameBufferHandle&&) = &bgfx::FrameBufferHandle::operator=;
struct bgfx::IndexBufferHandle& (bgfx::IndexBufferHandle::*_16)(struct bgfx::IndexBufferHandle&&) = &bgfx::IndexBufferHandle::operator=;
struct bgfx::IndirectBufferHandle& (bgfx::IndirectBufferHandle::*_17)(struct bgfx::IndirectBufferHandle&&) = &bgfx::IndirectBufferHandle::operator=;
struct bgfx::OcclusionQueryHandle& (bgfx::OcclusionQueryHandle::*_18)(struct bgfx::OcclusionQueryHandle&&) = &bgfx::OcclusionQueryHandle::operator=;
struct bgfx::ProgramHandle& (bgfx::ProgramHandle::*_19)(struct bgfx::ProgramHandle&&) = &bgfx::ProgramHandle::operator=;
struct bgfx::ShaderHandle& (bgfx::ShaderHandle::*_20)(struct bgfx::ShaderHandle&&) = &bgfx::ShaderHandle::operator=;
struct bgfx::TextureHandle& (bgfx::TextureHandle::*_21)(struct bgfx::TextureHandle&&) = &bgfx::TextureHandle::operator=;
struct bgfx::UniformHandle& (bgfx::UniformHandle::*_22)(struct bgfx::UniformHandle&&) = &bgfx::UniformHandle::operator=;
struct bgfx::VertexBufferHandle& (bgfx::VertexBufferHandle::*_23)(struct bgfx::VertexBufferHandle&&) = &bgfx::VertexBufferHandle::operator=;
struct bgfx::VertexLayoutHandle& (bgfx::VertexLayoutHandle::*_24)(struct bgfx::VertexLayoutHandle&&) = &bgfx::VertexLayoutHandle::operator=;
struct bgfx::CallbackI& (bgfx::CallbackI::*_25)(const struct bgfx::CallbackI&) = &bgfx::CallbackI::operator=;
class c__N_bgfx_S_CallbackI_CallbackI___1__N_bgfx_S_CallbackICallbackI : public bgfx::CallbackI { public: c__N_bgfx_S_CallbackI_CallbackI___1__N_bgfx_S_CallbackICallbackI(const bgfx::CallbackI& _0): bgfx::CallbackI(_0) {}; void  fatal(const char*, unsigned short, bgfx::Fatal::Enum, const char*) {} void  traceVargs(const char*, unsigned short, const char*, __va_list_tag[1]) {} void  profilerBegin(const char*, unsigned int, const char*, unsigned short) {} void  profilerBeginLiteral(const char*, unsigned int, const char*, unsigned short) {} void  profilerEnd() {} unsigned int  cacheReadSize(unsigned long) { return {}; } bool  cacheRead(unsigned long, void*, unsigned int) { return {}; } void  cacheWrite(unsigned long, const void*, unsigned int) {} void  screenShot(const char*, unsigned int, unsigned int, unsigned int, const void*, unsigned int, bool) {} void  captureBegin(unsigned int, unsigned int, unsigned int, bgfx::TextureFormat::Enum, bool) {} void  captureEnd() {} void  captureFrame(const void*, unsigned int) {}  };
extern "C" void c__N_bgfx_S_CallbackI_CallbackI___1__N_bgfx_S_CallbackI(void* __instance, const bgfx::CallbackI& _0) { ::new (__instance) c__N_bgfx_S_CallbackI_CallbackI___1__N_bgfx_S_CallbackICallbackI(_0); }
struct bgfx::PlatformData& (bgfx::PlatformData::*_26)(struct bgfx::PlatformData&&) = &bgfx::PlatformData::operator=;
struct bgfx::Resolution& (bgfx::Resolution::*_27)(struct bgfx::Resolution&&) = &bgfx::Resolution::operator=;
struct bgfx::Init::Limits& (bgfx::Init::Limits::*_28)(struct bgfx::Init::Limits&&) = &bgfx::Init::Limits::operator=;
struct bgfx::Init& (bgfx::Init::*_29)(struct bgfx::Init&&) = &bgfx::Init::operator=;
struct bgfx::Memory& (bgfx::Memory::*_30)(struct bgfx::Memory&&) = &bgfx::Memory::operator=;
struct bgfx::Caps::GPU& (bgfx::Caps::GPU::*_31)(struct bgfx::Caps::GPU&&) = &bgfx::Caps::GPU::operator=;
struct bgfx::Caps::Limits& (bgfx::Caps::Limits::*_32)(struct bgfx::Caps::Limits&&) = &bgfx::Caps::Limits::operator=;
struct bgfx::Caps& (bgfx::Caps::*_33)(struct bgfx::Caps&&) = &bgfx::Caps::operator=;
struct bgfx::TransientIndexBuffer& (bgfx::TransientIndexBuffer::*_34)(struct bgfx::TransientIndexBuffer&&) = &bgfx::TransientIndexBuffer::operator=;
struct bgfx::TransientVertexBuffer& (bgfx::TransientVertexBuffer::*_35)(struct bgfx::TransientVertexBuffer&&) = &bgfx::TransientVertexBuffer::operator=;
struct bgfx::InstanceDataBuffer& (bgfx::InstanceDataBuffer::*_36)(struct bgfx::InstanceDataBuffer&&) = &bgfx::InstanceDataBuffer::operator=;
struct bgfx::TextureInfo& (bgfx::TextureInfo::*_37)(struct bgfx::TextureInfo&&) = &bgfx::TextureInfo::operator=;
struct bgfx::UniformInfo& (bgfx::UniformInfo::*_38)(struct bgfx::UniformInfo&&) = &bgfx::UniformInfo::operator=;
struct bgfx::Attachment& (bgfx::Attachment::*_39)(struct bgfx::Attachment&&) = &bgfx::Attachment::operator=;
struct bgfx::Transform& (bgfx::Transform::*_40)(struct bgfx::Transform&&) = &bgfx::Transform::operator=;
struct bgfx::ViewStats& (bgfx::ViewStats::*_41)(struct bgfx::ViewStats&&) = &bgfx::ViewStats::operator=;
struct bgfx::EncoderStats& (bgfx::EncoderStats::*_42)(struct bgfx::EncoderStats&&) = &bgfx::EncoderStats::operator=;
struct bgfx::Stats& (bgfx::Stats::*_43)(struct bgfx::Stats&&) = &bgfx::Stats::operator=;
struct bgfx::Encoder& (bgfx::Encoder::*_44)(struct bgfx::Encoder&&) = &bgfx::Encoder::operator=;
struct bgfx::VertexLayout& (bgfx::VertexLayout::*_45)(struct bgfx::VertexLayout&&) = &bgfx::VertexLayout::operator=;
struct bgfx::EmbeddedShader::Data& (bgfx::EmbeddedShader::Data::*_46)(struct bgfx::EmbeddedShader::Data&&) = &bgfx::EmbeddedShader::Data::operator=;
struct bgfx::EmbeddedShader& (bgfx::EmbeddedShader::*_47)(struct bgfx::EmbeddedShader&&) = &bgfx::EmbeddedShader::operator=;

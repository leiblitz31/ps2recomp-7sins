#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FD3D0
// Address: 0x1fd3d0 - 0x1fd510
void sub_001FD3D0_0x1fd3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD3D0_0x1fd3d0");
#endif

    switch (ctx->pc) {
        case 0x1fd4f8u: goto label_1fd4f8;
        default: break;
    }

    ctx->pc = 0x1fd3d0u;

    // 0x1fd3d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd3d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd3d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1fd3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1fd3dc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1fd3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fd3e0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fd3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fd3e4: 0xac43bf54  sw          $v1, -0x40AC($v0)
    ctx->pc = 0x1fd3e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x60BF54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BF54u, _value); } while (0);
    // 0x1fd3e8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1fd3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fd3ec: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fd3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fd3f0: 0xac43bf64  sw          $v1, -0x409C($v0)
    ctx->pc = 0x1fd3f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x60BF64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BF64u, _value); } while (0);
    // 0x1fd3f4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1fd3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fd3f8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fd3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fd3fc: 0xac43bf68  sw          $v1, -0x4098($v0)
    ctx->pc = 0x1fd3fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x60BF68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BF68u, _value); } while (0);
    // 0x1fd400: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1fd400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fd404: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fd404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fd408: 0xac43bf5c  sw          $v1, -0x40A4($v0)
    ctx->pc = 0x1fd408u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x60BF5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BF5Cu, _value); } while (0);
    // 0x1fd40c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1fd40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fd410: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fd410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fd414: 0xac43bf60  sw          $v1, -0x40A0($v0)
    ctx->pc = 0x1fd414u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x60BF60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BF60u, _value); } while (0);
    // 0x1fd418: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1fd418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1fd41c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fd41cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd420: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fd420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fd424: 0xe440bf78  swc1        $f0, -0x4088($v0)
    ctx->pc = 0x1fd424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BF78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BF78u, _value); } while (0); }
    // 0x1fd428: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1fd428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1fd42c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fd42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd430: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fd430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fd434: 0xe440bf7c  swc1        $f0, -0x4084($v0)
    ctx->pc = 0x1fd434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BF7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BF7Cu, _value); } while (0); }
    // 0x1fd438: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1fd438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1fd43c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fd43cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd440: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fd440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fd444: 0xe440bf80  swc1        $f0, -0x4080($v0)
    ctx->pc = 0x1fd444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BF80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BF80u, _value); } while (0); }
    // 0x1fd448: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1fd448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1fd44c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fd44cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd450: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fd450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fd454: 0xe440bf6c  swc1        $f0, -0x4094($v0)
    ctx->pc = 0x1fd454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BF6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BF6Cu, _value); } while (0); }
    // 0x1fd458: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1fd458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1fd45c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fd45cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd460: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fd460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fd464: 0xe440bf70  swc1        $f0, -0x4090($v0)
    ctx->pc = 0x1fd464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BF70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BF70u, _value); } while (0); }
    // 0x1fd468: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1fd468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fd46c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fd46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fd470: 0xac43bf58  sw          $v1, -0x40A8($v0)
    ctx->pc = 0x1fd470u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x60BF58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BF58u, _value); } while (0);
    // 0x1fd474: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1fd474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1fd478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fd478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd47c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fd47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fd480: 0xe440bf74  swc1        $f0, -0x408C($v0)
    ctx->pc = 0x1fd480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BF74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BF74u, _value); } while (0); }
    // 0x1fd484: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1fd484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1fd488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fd488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd48c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fd48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fd490: 0xe440bfc0  swc1        $f0, -0x4040($v0)
    ctx->pc = 0x1fd490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BFC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BFC0u, _value); } while (0); }
    // 0x1fd494: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1fd494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1fd498: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fd498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd49c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fd49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fd4a0: 0xe440bfc4  swc1        $f0, -0x403C($v0)
    ctx->pc = 0x1fd4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BFC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BFC4u, _value); } while (0); }
    // 0x1fd4a4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1fd4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1fd4a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fd4a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd4ac: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fd4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fd4b0: 0xe440bfb8  swc1        $f0, -0x4048($v0)
    ctx->pc = 0x1fd4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BFB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BFB8u, _value); } while (0); }
    // 0x1fd4b4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1fd4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1fd4b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fd4b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd4bc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fd4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fd4c0: 0xe440bfbc  swc1        $f0, -0x4044($v0)
    ctx->pc = 0x1fd4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BFBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BFBCu, _value); } while (0); }
    // 0x1fd4c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1fd4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fd4c8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fd4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fd4cc: 0xac43bfac  sw          $v1, -0x4054($v0)
    ctx->pc = 0x1fd4ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x60BFACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BFACu, _value); } while (0);
    // 0x1fd4d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1fd4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fd4d4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fd4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fd4d8: 0xac43bfb0  sw          $v1, -0x4050($v0)
    ctx->pc = 0x1fd4d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x60BFB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BFB0u, _value); } while (0);
    // 0x1fd4dc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1fd4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1fd4e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fd4e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd4e4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fd4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fd4e8: 0xe440bfc8  swc1        $f0, -0x4038($v0)
    ctx->pc = 0x1fd4e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BFC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BFC8u, _value); } while (0); }
    // 0x1fd4ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1fd4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd4f0: 0xc064ddc  jal         func_193770
    ctx->pc = 0x1FD4F0u;
    SET_GPR_U32(ctx, 31, 0x1FD4F8u);
    ctx->pc = 0x193770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193770u, 0x1FD4F0u, 0x1FD4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD4F8u;
label_1fd4f8:
    // 0x1fd4f8: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x1fd4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x1fd4fc: 0xe4608ba8  swc1        $f0, -0x7458($v1)
    ctx->pc = 0x1fd4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4E8BA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4E8BA8u, _value); } while (0); }
    // 0x1fd500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd504: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1fd504u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fd508: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD510u;
}

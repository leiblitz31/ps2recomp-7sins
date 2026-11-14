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

// Function: sub_002F0810
// Address: 0x2f0810 - 0x2f0868
void sub_002F0810_0x2f0810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0810_0x2f0810");
#endif

    ctx->pc = 0x2f0810u;

    // 0x2f0810: 0x7c900000  sq          $s0, 0x0($a0)
    ctx->pc = 0x2f0810u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 16));
    // 0x2f0814: 0x7c910010  sq          $s1, 0x10($a0)
    ctx->pc = 0x2f0814u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 17));
    // 0x2f0818: 0x7c920020  sq          $s2, 0x20($a0)
    ctx->pc = 0x2f0818u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 18));
    // 0x2f081c: 0x7c930030  sq          $s3, 0x30($a0)
    ctx->pc = 0x2f081cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 19));
    // 0x2f0820: 0x7c940040  sq          $s4, 0x40($a0)
    ctx->pc = 0x2f0820u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 20));
    // 0x2f0824: 0x7c950050  sq          $s5, 0x50($a0)
    ctx->pc = 0x2f0824u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 21));
    // 0x2f0828: 0x7c960060  sq          $s6, 0x60($a0)
    ctx->pc = 0x2f0828u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 22));
    // 0x2f082c: 0x7c970070  sq          $s7, 0x70($a0)
    ctx->pc = 0x2f082cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 23));
    // 0x2f0830: 0x7c9e0080  sq          $fp, 0x80($a0)
    ctx->pc = 0x2f0830u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 30));
    // 0x2f0834: 0xe4980090  swc1        $f24, 0x90($a0)
    ctx->pc = 0x2f0834u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x2f0838: 0xe4990094  swc1        $f25, 0x94($a0)
    ctx->pc = 0x2f0838u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x2f083c: 0xe49a0098  swc1        $f26, 0x98($a0)
    ctx->pc = 0x2f083cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x2f0840: 0xe49b009c  swc1        $f27, 0x9C($a0)
    ctx->pc = 0x2f0840u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x2f0844: 0xe49c00a0  swc1        $f28, 0xA0($a0)
    ctx->pc = 0x2f0844u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x2f0848: 0xe49d00a4  swc1        $f29, 0xA4($a0)
    ctx->pc = 0x2f0848u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x2f084c: 0xe49e00a8  swc1        $f30, 0xA8($a0)
    ctx->pc = 0x2f084cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
    // 0x2f0850: 0xe49f00ac  swc1        $f31, 0xAC($a0)
    ctx->pc = 0x2f0850u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
    // 0x2f0854: 0x7c9d00b0  sq          $sp, 0xB0($a0)
    ctx->pc = 0x2f0854u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), GPR_VEC(ctx, 29));
    // 0x2f0858: 0x7c9f00c0  sq          $ra, 0xC0($a0)
    ctx->pc = 0x2f0858u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), GPR_VEC(ctx, 31));
    // 0x2f085c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f085cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0860: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0868u;
}

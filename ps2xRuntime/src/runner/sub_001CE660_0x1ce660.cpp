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

// Function: sub_001CE660
// Address: 0x1ce660 - 0x1ce6c0
void sub_001CE660_0x1ce660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE660_0x1ce660");
#endif

    switch (ctx->pc) {
        case 0x1ce688u: goto label_1ce688;
        default: break;
    }

    ctx->pc = 0x1ce660u;

    // 0x1ce660: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ce660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ce664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce668: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ce668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ce66c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1ce66cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1ce670: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1ce670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1ce674: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ce674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce678: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ce678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce67c: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x1ce67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ce680: 0xc05db24  jal         func_176C90
    ctx->pc = 0x1CE680u;
    SET_GPR_U32(ctx, 31, 0x1CE688u);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x1CE680u, 0x1CE688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE688u;
label_1ce688:
    // 0x1ce688: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1ce688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1ce68c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ce68cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce690: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1ce690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce694: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1ce694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1ce698: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ce698u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce69c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1ce69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce6a0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1ce6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1ce6a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce6a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1ce6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ce6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE6B4u;
    // 0x1ce6b4: 0x0  nop
    ctx->pc = 0x1ce6b4u;
    // NOP
    // 0x1ce6b8: 0x0  nop
    ctx->pc = 0x1ce6b8u;
    // NOP
    // 0x1ce6bc: 0x0  nop
    ctx->pc = 0x1ce6bcu;
    // NOP
    ctx->pc = 0x1ce6c0u;
}

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

// Function: sub_002744C0
// Address: 0x2744c0 - 0x274540
void sub_002744C0_0x2744c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002744C0_0x2744c0");
#endif

    switch (ctx->pc) {
        case 0x2744d8u: goto label_2744d8;
        case 0x274514u: goto label_274514;
        default: break;
    }

    ctx->pc = 0x2744c0u;

    // 0x2744c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2744c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2744c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2744c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2744c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2744c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2744cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2744ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2744d0: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x2744D0u;
    SET_GPR_U32(ctx, 31, 0x2744D8u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x2744D0u, 0x2744D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2744D8u;
label_2744d8:
    // 0x2744d8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2744d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2744dc: 0x24635b10  addiu       $v1, $v1, 0x5B10
    ctx->pc = 0x2744dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23312));
    // 0x2744e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2744e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2744e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2744e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2744e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2744e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2744ec: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x2744ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x2744f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2744f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2744f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2744f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2744f8: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x2744f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x2744fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2744fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274500: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x274500u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x274504: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x274504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274508: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x274508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x27450c: 0xc09d114  jal         func_274450
    ctx->pc = 0x27450Cu;
    SET_GPR_U32(ctx, 31, 0x274514u);
    ctx->pc = 0x274450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274450u, 0x27450Cu, 0x274514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274514u;
label_274514:
    // 0x274514: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x274514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274518: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x274518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x27451c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27451cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274520: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x274520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274524: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x274524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x274528: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x274528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27452c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27452cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274530: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x274530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x274534: 0x3e00008  jr          $ra
    ctx->pc = 0x274534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27453Cu;
    // 0x27453c: 0x0  nop
    ctx->pc = 0x27453cu;
    // NOP
    ctx->pc = 0x274540u;
}

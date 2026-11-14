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

// Function: sub_00249270
// Address: 0x249270 - 0x2492c0
void sub_00249270_0x249270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249270_0x249270");
#endif

    switch (ctx->pc) {
        case 0x2492a8u: goto label_2492a8;
        default: break;
    }

    ctx->pc = 0x249270u;

    // 0x249270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x249270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x249274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x249278: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x249278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24927c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x24927cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x249280: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x249280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249284: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x249284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x249288: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x249288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24928c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x24928cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x249290: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x249290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249294: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x249294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x249298: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x249298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24929c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24929cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2492a0: 0xc0924b0  jal         func_2492C0
    ctx->pc = 0x2492A0u;
    SET_GPR_U32(ctx, 31, 0x2492A8u);
    ctx->pc = 0x2492C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492C0u, 0x2492A0u, 0x2492A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2492A8u;
label_2492a8:
    // 0x2492a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2492a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2492ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2492acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2492b0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2492b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2492b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2492B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2492B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2492BCu;
    // 0x2492bc: 0x0  nop
    ctx->pc = 0x2492bcu;
    // NOP
    ctx->pc = 0x2492c0u;
}

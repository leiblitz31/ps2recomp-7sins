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

// Function: sub_00299FD0
// Address: 0x299fd0 - 0x29a020
void sub_00299FD0_0x299fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299FD0_0x299fd0");
#endif

    switch (ctx->pc) {
        case 0x29a008u: goto label_29a008;
        default: break;
    }

    ctx->pc = 0x299fd0u;

    // 0x299fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x299fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x299fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x299fd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x299fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x299fdc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x299fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x299fe0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299fe4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x299fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x299fe8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299fec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x299fecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x299ff0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299ff4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x299ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299ff8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x299ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299ffc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x299ffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a000: 0xc0a6808  jal         func_29A020
    ctx->pc = 0x29A000u;
    SET_GPR_U32(ctx, 31, 0x29A008u);
    ctx->pc = 0x29A020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A020u, 0x29A000u, 0x29A008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A008u;
label_29a008:
    // 0x29a008: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29a008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a00c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a010: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29a010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29a014: 0x3e00008  jr          $ra
    ctx->pc = 0x29A014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A01Cu;
    // 0x29a01c: 0x0  nop
    ctx->pc = 0x29a01cu;
    // NOP
    ctx->pc = 0x29a020u;
}

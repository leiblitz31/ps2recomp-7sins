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

// Function: sub_00114C00
// Address: 0x114c00 - 0x114c50
void sub_00114C00_0x114c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114C00_0x114c00");
#endif

    switch (ctx->pc) {
        case 0x114c38u: goto label_114c38;
        default: break;
    }

    ctx->pc = 0x114c00u;

    // 0x114c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x114c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x114c04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114c08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x114c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x114c0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x114c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x114c10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x114c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114c14: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x114c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x114c18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x114c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114c1c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x114c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x114c20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x114c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114c24: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x114c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x114c28: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x114c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114c2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x114c2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114c30: 0xc045314  jal         func_114C50
    ctx->pc = 0x114C30u;
    SET_GPR_U32(ctx, 31, 0x114C38u);
    ctx->pc = 0x114C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114C50u, 0x114C30u, 0x114C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114C38u;
label_114c38:
    // 0x114c38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x114c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114c3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114c40: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x114c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x114c44: 0x3e00008  jr          $ra
    ctx->pc = 0x114C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114C4Cu;
    // 0x114c4c: 0x0  nop
    ctx->pc = 0x114c4cu;
    // NOP
    ctx->pc = 0x114c50u;
}

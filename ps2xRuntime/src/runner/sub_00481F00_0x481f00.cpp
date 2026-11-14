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

// Function: sub_00481F00
// Address: 0x481f00 - 0x481f50
void sub_00481F00_0x481f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481F00_0x481f00");
#endif

    switch (ctx->pc) {
        case 0x481f38u: goto label_481f38;
        default: break;
    }

    ctx->pc = 0x481f00u;

    // 0x481f00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x481f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x481f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x481f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x481f08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x481f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x481f0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x481f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x481f10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x481f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481f14: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x481f14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x481f18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x481f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481f1c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x481f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x481f20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x481f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481f24: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x481f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x481f28: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x481f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481f2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x481f2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481f30: 0xc1207d4  jal         func_481F50
    ctx->pc = 0x481F30u;
    SET_GPR_U32(ctx, 31, 0x481F38u);
    ctx->pc = 0x481F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481F50u, 0x481F30u, 0x481F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481F38u;
label_481f38:
    // 0x481f38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x481f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481f3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x481f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x481f40: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x481f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x481f44: 0x3e00008  jr          $ra
    ctx->pc = 0x481F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x481F4Cu;
    // 0x481f4c: 0x0  nop
    ctx->pc = 0x481f4cu;
    // NOP
    ctx->pc = 0x481f50u;
}

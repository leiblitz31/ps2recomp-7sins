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

// Function: sub_00298F20
// Address: 0x298f20 - 0x298f90
void sub_00298F20_0x298f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298F20_0x298f20");
#endif

    switch (ctx->pc) {
        case 0x298f40u: goto label_298f40;
        case 0x298f60u: goto label_298f60;
        case 0x298f70u: goto label_298f70;
        default: break;
    }

    ctx->pc = 0x298f20u;

    // 0x298f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298f24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x298f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x298f28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x298f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x298f2c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x298f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x298f30: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x298f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298f34: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x298f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298f38: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x298F38u;
    SET_GPR_U32(ctx, 31, 0x298F40u);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x298F38u, 0x298F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298F40u;
label_298f40:
    // 0x298f40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x298f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f44: 0x1010000a  beq         $zero, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x298F44u;
    {
        const bool branch_taken_0x298f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x298f44) {
            ctx->pc = 0x298F70u;
            goto label_298f70;
        }
    }
    ctx->pc = 0x298F4Cu;
    // 0x298f4c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x298f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f54: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x298f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298f58: 0xc0e6ee0  jal         func_39BB80
    ctx->pc = 0x298F58u;
    SET_GPR_U32(ctx, 31, 0x298F60u);
    ctx->pc = 0x39BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB80u, 0x298F58u, 0x298F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298F60u;
label_298f60:
    // 0x298f60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x298f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298f64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x298f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298f68: 0xc11e00c  jal         func_478030
    ctx->pc = 0x298F68u;
    SET_GPR_U32(ctx, 31, 0x298F70u);
    ctx->pc = 0x478030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478030u, 0x298F68u, 0x298F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298F70u;
label_298f70:
    // 0x298f70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x298f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298f74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x298f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298f78: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x298f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x298f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x298F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298F84u;
    // 0x298f84: 0x0  nop
    ctx->pc = 0x298f84u;
    // NOP
    // 0x298f88: 0x0  nop
    ctx->pc = 0x298f88u;
    // NOP
    // 0x298f8c: 0x0  nop
    ctx->pc = 0x298f8cu;
    // NOP
    ctx->pc = 0x298f90u;
}

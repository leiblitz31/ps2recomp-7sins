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

// Function: sub_0031EC20
// Address: 0x31ec20 - 0x31ec60
void sub_0031EC20_0x31ec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EC20_0x31ec20");
#endif

    switch (ctx->pc) {
        case 0x31ec48u: goto label_31ec48;
        default: break;
    }

    ctx->pc = 0x31ec20u;

    // 0x31ec20: 0x8f82a5dc  lw          $v0, -0x5A24($gp)
    ctx->pc = 0x31ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944220)));
    // 0x31ec24: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31ec24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31ec28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31ec28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31ec2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31ec30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31ec30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31ec34: 0xaf82a5dc  sw          $v0, -0x5A24($gp)
    ctx->pc = 0x31ec34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944220), GPR_U32(ctx, 2));
    // 0x31ec38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31EC38u;
    {
        const bool branch_taken_0x31ec38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC38u;
        // 0x31ec3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ec38) {
            ctx->pc = 0x31EC48u;
            goto label_31ec48;
        }
    }
    ctx->pc = 0x31EC40u;
    // 0x31ec40: 0xc0c7b1a  jal         func_31EC68
    ctx->pc = 0x31EC40u;
    SET_GPR_U32(ctx, 31, 0x31EC48u);
    ctx->pc = 0x31EC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EC68u, 0x31EC40u, 0x31EC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EC48u;
label_31ec48:
    // 0x31ec48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31ec48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ec4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31ec4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ec50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31ec50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ec54: 0x3e00008  jr          $ra
    ctx->pc = 0x31EC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC54u;
        // 0x31ec58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EC5Cu;
    // 0x31ec5c: 0x0  nop
    ctx->pc = 0x31ec5cu;
    // NOP
    ctx->pc = 0x31ec60u;
}

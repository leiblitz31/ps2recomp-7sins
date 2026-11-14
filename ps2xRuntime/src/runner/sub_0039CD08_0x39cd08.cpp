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

// Function: sub_0039CD08
// Address: 0x39cd08 - 0x39cd50
void sub_0039CD08_0x39cd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CD08_0x39cd08");
#endif

    switch (ctx->pc) {
        case 0x39cd3cu: goto label_39cd3c;
        default: break;
    }

    ctx->pc = 0x39cd08u;

    // 0x39cd08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39cd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39cd0c: 0x8f82a9e0  lw          $v0, -0x5620($gp)
    ctx->pc = 0x39cd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945248)));
    // 0x39cd10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39cd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x39cd14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39cd14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cd18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39cd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39cd1c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x39cd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x39cd20: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39CD20u;
    {
        const bool branch_taken_0x39cd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CD20u;
        // 0x39cd24: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cd20) {
            ctx->pc = 0x39CD3Cu;
            goto label_39cd3c;
        }
    }
    ctx->pc = 0x39CD28u;
    // 0x39cd28: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x39cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x39cd2c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39CD2Cu;
    {
        const bool branch_taken_0x39cd2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x39CD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CD2Cu;
        // 0x39cd30: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cd2c) {
            ctx->pc = 0x39CD40u;
            goto label_39cd40;
        }
    }
    ctx->pc = 0x39CD34u;
    // 0x39cd34: 0xc0e6e36  jal         func_39B8D8
    ctx->pc = 0x39CD34u;
    SET_GPR_U32(ctx, 31, 0x39CD3Cu);
    ctx->pc = 0x39CD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CD34u;
    // 0x39cd38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B8D8u, 0x39CD34u, 0x39CD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CD3Cu;
label_39cd3c:
    // 0x39cd3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39cd3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39cd40:
    // 0x39cd40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39cd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39cd44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39cd44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39cd48: 0x3e00008  jr          $ra
    ctx->pc = 0x39CD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CD48u;
        // 0x39cd4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CD48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CD50u;
}

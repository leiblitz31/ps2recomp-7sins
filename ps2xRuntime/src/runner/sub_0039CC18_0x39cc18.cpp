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

// Function: sub_0039CC18
// Address: 0x39cc18 - 0x39cc60
void sub_0039CC18_0x39cc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CC18_0x39cc18");
#endif

    switch (ctx->pc) {
        case 0x39cc4cu: goto label_39cc4c;
        default: break;
    }

    ctx->pc = 0x39cc18u;

    // 0x39cc18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39cc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39cc1c: 0x8f82a9e4  lw          $v0, -0x561C($gp)
    ctx->pc = 0x39cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945252)));
    // 0x39cc20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39cc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x39cc24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39cc24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cc28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39cc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39cc2c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x39cc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x39cc30: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39CC30u;
    {
        const bool branch_taken_0x39cc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CC30u;
        // 0x39cc34: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cc30) {
            ctx->pc = 0x39CC4Cu;
            goto label_39cc4c;
        }
    }
    ctx->pc = 0x39CC38u;
    // 0x39cc38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x39cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39cc3c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39CC3Cu;
    {
        const bool branch_taken_0x39cc3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x39CC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CC3Cu;
        // 0x39cc40: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cc3c) {
            ctx->pc = 0x39CC50u;
            goto label_39cc50;
        }
    }
    ctx->pc = 0x39CC44u;
    // 0x39cc44: 0xc0e6e56  jal         func_39B958
    ctx->pc = 0x39CC44u;
    SET_GPR_U32(ctx, 31, 0x39CC4Cu);
    ctx->pc = 0x39CC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CC44u;
    // 0x39cc48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B958u, 0x39CC44u, 0x39CC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CC4Cu;
label_39cc4c:
    // 0x39cc4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39cc4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39cc50:
    // 0x39cc50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39cc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39cc54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39cc54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39cc58: 0x3e00008  jr          $ra
    ctx->pc = 0x39CC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CC58u;
        // 0x39cc5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CC60u;
}

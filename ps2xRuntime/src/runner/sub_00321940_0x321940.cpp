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

// Function: sub_00321940
// Address: 0x321940 - 0x321978
void sub_00321940_0x321940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321940_0x321940");
#endif

    switch (ctx->pc) {
        case 0x321960u: goto label_321960;
        default: break;
    }

    ctx->pc = 0x321940u;

    // 0x321940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x321940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x321944: 0x8f82bce4  lw          $v0, -0x431C($gp)
    ctx->pc = 0x321944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950116)));
    // 0x321948: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x321948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32194c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32194cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x321950: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x321950u;
    {
        const bool branch_taken_0x321950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321950u;
        // 0x321954: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321950) {
            ctx->pc = 0x321964u;
            goto label_321964;
        }
    }
    ctx->pc = 0x321958u;
    // 0x321958: 0xc104284  jal         func_410A10
    ctx->pc = 0x321958u;
    SET_GPR_U32(ctx, 31, 0x321960u);
    ctx->pc = 0x32195Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321958u;
    // 0x32195c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x321958u, 0x321960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321960u;
label_321960:
    // 0x321960: 0xaf80bce4  sw          $zero, -0x431C($gp)
    ctx->pc = 0x321960u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950116), GPR_U32(ctx, 0));
label_321964:
    // 0x321964: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x321964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x321968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32196c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32196cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321970: 0x3e00008  jr          $ra
    ctx->pc = 0x321970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321970u;
        // 0x321974: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321978u;
}

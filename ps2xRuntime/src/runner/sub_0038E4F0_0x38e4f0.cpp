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

// Function: sub_0038E4F0
// Address: 0x38e4f0 - 0x38e560
void sub_0038E4F0_0x38e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E4F0_0x38e4f0");
#endif

    switch (ctx->pc) {
        case 0x38e514u: goto label_38e514;
        case 0x38e53cu: goto label_38e53c;
        default: break;
    }

    ctx->pc = 0x38e4f0u;

    // 0x38e4f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38e4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38e4f4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x38e4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38e4f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x38e4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x38e4fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38e4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38e500: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x38e500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38e504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38e508: 0x2785bd48  addiu       $a1, $gp, -0x42B8
    ctx->pc = 0x38e508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950216));
    // 0x38e50c: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x38E50Cu;
    SET_GPR_U32(ctx, 31, 0x38E514u);
    ctx->pc = 0x38E510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E50Cu;
    // 0x38e510: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x38E50Cu, 0x38E514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E514u;
label_38e514:
    // 0x38e514: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38E514u;
    {
        const bool branch_taken_0x38e514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E514u;
        // 0x38e518: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e514) {
            ctx->pc = 0x38E524u;
            goto label_38e524;
        }
    }
    ctx->pc = 0x38E51Cu;
    // 0x38e51c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x38E51Cu;
    {
        const bool branch_taken_0x38e51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E51Cu;
        // 0x38e520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e51c) {
            ctx->pc = 0x38E54Cu;
            goto label_38e54c;
        }
    }
    ctx->pc = 0x38E524u;
label_38e524:
    // 0x38e524: 0x56220009  bnel        $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x38E524u;
    {
        const bool branch_taken_0x38e524 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x38e524) {
            ctx->pc = 0x38E528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38E524u;
            // 0x38e528: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E54Cu;
            goto label_38e54c;
        }
    }
    ctx->pc = 0x38E52Cu;
    // 0x38e52c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e530: 0x2785bd4c  addiu       $a1, $gp, -0x42B4
    ctx->pc = 0x38e530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950220));
    // 0x38e534: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x38E534u;
    SET_GPR_U32(ctx, 31, 0x38E53Cu);
    ctx->pc = 0x38E538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E534u;
    // 0x38e538: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x38E534u, 0x38E53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E53Cu;
label_38e53c:
    // 0x38e53c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38e53cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e540: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x38E540u;
    {
        const bool branch_taken_0x38e540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E540u;
        // 0x38e544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e540) {
            ctx->pc = 0x38E54Cu;
            goto label_38e54c;
        }
    }
    ctx->pc = 0x38E548u;
    // 0x38e548: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38e548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38e54c:
    // 0x38e54c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x38e54cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38e550: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38e550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38e554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38e554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38e558: 0x3e00008  jr          $ra
    ctx->pc = 0x38E558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E558u;
        // 0x38e55c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E560u;
}

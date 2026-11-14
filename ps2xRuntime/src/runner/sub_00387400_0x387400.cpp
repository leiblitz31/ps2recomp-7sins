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

// Function: sub_00387400
// Address: 0x387400 - 0x387470
void sub_00387400_0x387400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387400_0x387400");
#endif

    switch (ctx->pc) {
        case 0x387424u: goto label_387424;
        case 0x38744cu: goto label_38744c;
        default: break;
    }

    ctx->pc = 0x387400u;

    // 0x387400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x387400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x387404: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x387404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x387408: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x387408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x38740c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38740cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x387410: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x387410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x387414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x387418: 0x2785bd10  addiu       $a1, $gp, -0x42F0
    ctx->pc = 0x387418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950160));
    // 0x38741c: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x38741Cu;
    SET_GPR_U32(ctx, 31, 0x387424u);
    ctx->pc = 0x387420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38741Cu;
    // 0x387420: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x38741Cu, 0x387424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387424u;
label_387424:
    // 0x387424: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x387424u;
    {
        const bool branch_taken_0x387424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387424u;
        // 0x387428: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387424) {
            ctx->pc = 0x387434u;
            goto label_387434;
        }
    }
    ctx->pc = 0x38742Cu;
    // 0x38742c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x38742Cu;
    {
        const bool branch_taken_0x38742c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38742Cu;
        // 0x387430: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38742c) {
            ctx->pc = 0x38745Cu;
            goto label_38745c;
        }
    }
    ctx->pc = 0x387434u;
label_387434:
    // 0x387434: 0x56220009  bnel        $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x387434u;
    {
        const bool branch_taken_0x387434 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x387434) {
            ctx->pc = 0x387438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387434u;
            // 0x387438: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38745Cu;
            goto label_38745c;
        }
    }
    ctx->pc = 0x38743Cu;
    // 0x38743c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38743cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387440: 0x2785bd14  addiu       $a1, $gp, -0x42EC
    ctx->pc = 0x387440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950164));
    // 0x387444: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x387444u;
    SET_GPR_U32(ctx, 31, 0x38744Cu);
    ctx->pc = 0x387448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387444u;
    // 0x387448: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x387444u, 0x38744Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38744Cu;
label_38744c:
    // 0x38744c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38744cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387450: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x387450u;
    {
        const bool branch_taken_0x387450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x387454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387450u;
        // 0x387454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387450) {
            ctx->pc = 0x38745Cu;
            goto label_38745c;
        }
    }
    ctx->pc = 0x387458u;
    // 0x387458: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x387458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38745c:
    // 0x38745c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x38745cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x387460: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x387460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x387464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x387464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387468: 0x3e00008  jr          $ra
    ctx->pc = 0x387468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387468u;
        // 0x38746c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387470u;
}

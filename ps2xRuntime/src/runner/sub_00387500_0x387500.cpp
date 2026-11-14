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

// Function: sub_00387500
// Address: 0x387500 - 0x387570
void sub_00387500_0x387500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387500_0x387500");
#endif

    switch (ctx->pc) {
        case 0x387524u: goto label_387524;
        case 0x38754cu: goto label_38754c;
        default: break;
    }

    ctx->pc = 0x387500u;

    // 0x387500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x387500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x387504: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x387504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x387508: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x387508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x38750c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38750cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x387510: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x387510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x387514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x387518: 0x2785bd18  addiu       $a1, $gp, -0x42E8
    ctx->pc = 0x387518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950168));
    // 0x38751c: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x38751Cu;
    SET_GPR_U32(ctx, 31, 0x387524u);
    ctx->pc = 0x387520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38751Cu;
    // 0x387520: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x38751Cu, 0x387524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387524u;
label_387524:
    // 0x387524: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x387524u;
    {
        const bool branch_taken_0x387524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387524u;
        // 0x387528: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387524) {
            ctx->pc = 0x387534u;
            goto label_387534;
        }
    }
    ctx->pc = 0x38752Cu;
    // 0x38752c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x38752Cu;
    {
        const bool branch_taken_0x38752c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38752Cu;
        // 0x387530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38752c) {
            ctx->pc = 0x38755Cu;
            goto label_38755c;
        }
    }
    ctx->pc = 0x387534u;
label_387534:
    // 0x387534: 0x56220009  bnel        $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x387534u;
    {
        const bool branch_taken_0x387534 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x387534) {
            ctx->pc = 0x387538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387534u;
            // 0x387538: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38755Cu;
            goto label_38755c;
        }
    }
    ctx->pc = 0x38753Cu;
    // 0x38753c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38753cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387540: 0x2785bd1c  addiu       $a1, $gp, -0x42E4
    ctx->pc = 0x387540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950172));
    // 0x387544: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x387544u;
    SET_GPR_U32(ctx, 31, 0x38754Cu);
    ctx->pc = 0x387548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387544u;
    // 0x387548: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x387544u, 0x38754Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38754Cu;
label_38754c:
    // 0x38754c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38754cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387550: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x387550u;
    {
        const bool branch_taken_0x387550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x387554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387550u;
        // 0x387554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387550) {
            ctx->pc = 0x38755Cu;
            goto label_38755c;
        }
    }
    ctx->pc = 0x387558u;
    // 0x387558: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x387558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38755c:
    // 0x38755c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x38755cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x387560: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x387560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x387564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x387564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387568: 0x3e00008  jr          $ra
    ctx->pc = 0x387568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387568u;
        // 0x38756c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387570u;
}

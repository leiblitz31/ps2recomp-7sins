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

// Function: sub_003B24E8
// Address: 0x3b24e8 - 0x3b2558
void sub_003B24E8_0x3b24e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B24E8_0x3b24e8");
#endif

    switch (ctx->pc) {
        case 0x3b2510u: goto label_3b2510;
        case 0x3b253cu: goto label_3b253c;
        default: break;
    }

    ctx->pc = 0x3b24e8u;

    // 0x3b24e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b24e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b24ec: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3b24ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b24f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3b24f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3b24f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b24f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3b24f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b24f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b24fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b24fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2500: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b2500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b2504: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b2504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2508: 0xc10480a  jal         func_412028
    ctx->pc = 0x3B2508u;
    SET_GPR_U32(ctx, 31, 0x3B2510u);
    ctx->pc = 0x3B250Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2508u;
    // 0x3b250c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3B2508u, 0x3B2510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2510u;
label_3b2510:
    // 0x3b2510: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3b2510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b2514: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3B2514u;
    {
        const bool branch_taken_0x3b2514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B2518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2514u;
        // 0x3b2518: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2514) {
            ctx->pc = 0x3B2544u;
            goto label_3b2544;
        }
    }
    ctx->pc = 0x3B251Cu;
    // 0x3b251c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3b251cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2520: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b2520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b2524: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B2524u;
    {
        const bool branch_taken_0x3b2524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B2528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2524u;
        // 0x3b2528: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2524) {
            ctx->pc = 0x3B2544u;
            goto label_3b2544;
        }
    }
    ctx->pc = 0x3B252Cu;
    // 0x3b252c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b252cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2530: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3b2530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2534: 0xc0ec3ba  jal         func_3B0EE8
    ctx->pc = 0x3B2534u;
    SET_GPR_U32(ctx, 31, 0x3B253Cu);
    ctx->pc = 0x3B2538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2534u;
    // 0x3b2538: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0EE8u, 0x3B2534u, 0x3B253Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B253Cu;
label_3b253c:
    // 0x3b253c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b253cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2540: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b2540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b2544:
    // 0x3b2544: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3b2544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b2548: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b2548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b254c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b254cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2550: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2550u;
        // 0x3b2554: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2558u;
}

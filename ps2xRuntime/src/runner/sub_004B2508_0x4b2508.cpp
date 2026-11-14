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

// Function: sub_004B2508
// Address: 0x4b2508 - 0x4b2578
void sub_004B2508_0x4b2508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B2508_0x4b2508");
#endif

    switch (ctx->pc) {
        case 0x4b2524u: goto label_4b2524;
        case 0x4b253cu: goto label_4b253c;
        case 0x4b255cu: goto label_4b255c;
        default: break;
    }

    ctx->pc = 0x4b2508u;

    // 0x4b2508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b2508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b250c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b250cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4b2510: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b2510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4b2514: 0x2450ed38  addiu       $s0, $v0, -0x12C8
    ctx->pc = 0x4b2514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962488));
    // 0x4b2518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b2518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b251c: 0xc1275de  jal         func_49D778
    ctx->pc = 0x4B251Cu;
    SET_GPR_U32(ctx, 31, 0x4B2524u);
    ctx->pc = 0x4B2520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B251Cu;
    // 0x4b2520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49D778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D778u, 0x4B251Cu, 0x4B2524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2524u;
label_4b2524:
    // 0x4b2524: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4B2524u;
    {
        const bool branch_taken_0x4b2524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2524u;
        // 0x4b2528: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2524) {
            ctx->pc = 0x4B2564u;
            goto label_4b2564;
        }
    }
    ctx->pc = 0x4B252Cu;
    // 0x4b252c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b252cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2530: 0x24a52e78  addiu       $a1, $a1, 0x2E78
    ctx->pc = 0x4b2530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11896));
    // 0x4b2534: 0xc1275ba  jal         func_49D6E8
    ctx->pc = 0x4B2534u;
    SET_GPR_U32(ctx, 31, 0x4B253Cu);
    ctx->pc = 0x4B2538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2534u;
    // 0x4b2538: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49D6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D6E8u, 0x4B2534u, 0x4B253Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B253Cu;
label_4b253c:
    // 0x4b253c: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4b253cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x4b2540: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x4b2540u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
    // 0x4b2544: 0x24a576f0  addiu       $a1, $a1, 0x76F0
    ctx->pc = 0x4b2544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30448));
    // 0x4b2548: 0x24e77780  addiu       $a3, $a3, 0x7780
    ctx->pc = 0x4b2548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30592));
    // 0x4b254c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b254cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2550: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x4b2550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4b2554: 0xc12776a  jal         func_49DDA8
    ctx->pc = 0x4B2554u;
    SET_GPR_U32(ctx, 31, 0x4B255Cu);
    ctx->pc = 0x4B2558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2554u;
    // 0x4b2558: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49DDA8u, 0x4B2554u, 0x4B255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B255Cu;
label_4b255c:
    // 0x4b255c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B255Cu;
    {
        const bool branch_taken_0x4b255c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B255Cu;
        // 0x4b2560: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b255c) {
            ctx->pc = 0x4B2568u;
            goto label_4b2568;
        }
    }
    ctx->pc = 0x4B2564u;
label_4b2564:
    // 0x4b2564: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b2564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b2568:
    // 0x4b2568: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b2568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b256c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b256cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b2570: 0x3e00008  jr          $ra
    ctx->pc = 0x4B2570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2570u;
        // 0x4b2574: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B2578u;
}

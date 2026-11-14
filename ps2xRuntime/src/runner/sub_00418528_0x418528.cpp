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

// Function: sub_00418528
// Address: 0x418528 - 0x418580
void sub_00418528_0x418528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418528_0x418528");
#endif

    switch (ctx->pc) {
        case 0x418528u: goto label_418528;
        case 0x41852cu: goto label_41852c;
        case 0x418530u: goto label_418530;
        case 0x418534u: goto label_418534;
        case 0x418538u: goto label_418538;
        case 0x41853cu: goto label_41853c;
        case 0x418540u: goto label_418540;
        case 0x418544u: goto label_418544;
        case 0x418548u: goto label_418548;
        case 0x41854cu: goto label_41854c;
        case 0x418550u: goto label_418550;
        case 0x418554u: goto label_418554;
        case 0x418558u: goto label_418558;
        case 0x41855cu: goto label_41855c;
        case 0x418560u: goto label_418560;
        case 0x418564u: goto label_418564;
        case 0x418568u: goto label_418568;
        case 0x41856cu: goto label_41856c;
        case 0x418570u: goto label_418570;
        case 0x418574u: goto label_418574;
        case 0x418578u: goto label_418578;
        case 0x41857cu: goto label_41857c;
        default: break;
    }

    ctx->pc = 0x418528u;

label_418528:
    // 0x418528: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x418528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41852c:
    // 0x41852c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41852cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418530:
    // 0x418530: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x418530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_418534:
    // 0x418534: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x418534u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
label_418538:
    // 0x418538: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x418538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_41853c:
    // 0x41853c: 0x2623e880  addiu       $v1, $s1, -0x1780
    ctx->pc = 0x41853cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_418540:
    // 0x418540: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x418540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_418544:
    // 0x418544: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x418544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_418548:
    // 0x418548: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x418548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41854c:
    // 0x41854c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41854cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_418550:
    // 0x418550: 0x40f809  jalr        $v0
label_418554:
    if (ctx->pc == 0x418554u) {
        ctx->pc = 0x418554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418550u;
        // 0x418554: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418558u;
        goto label_418558;
    }
    ctx->pc = 0x418550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x418558u);
        ctx->pc = 0x418554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418550u;
        // 0x418554: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418550u, 0x418558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x418558u;
label_418558:
    // 0x418558: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_41855c:
    if (ctx->pc == 0x41855Cu) {
        ctx->pc = 0x41855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418558u;
        // 0x41855c: 0xae20e880  sw          $zero, -0x1780($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294961280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418560u;
        goto label_418560;
    }
    ctx->pc = 0x418558u;
    {
        const bool branch_taken_0x418558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x418558) {
            ctx->pc = 0x41855Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x418558u;
            // 0x41855c: 0xae20e880  sw          $zero, -0x1780($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294961280), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x418568u;
            goto label_418568;
        }
    }
    ctx->pc = 0x418560u;
label_418560:
    // 0x418560: 0x10000002  b           . + 4 + (0x2 << 2)
label_418564:
    if (ctx->pc == 0x418564u) {
        ctx->pc = 0x418564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418560u;
        // 0x418564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418568u;
        goto label_418568;
    }
    ctx->pc = 0x418560u;
    {
        const bool branch_taken_0x418560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x418564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418560u;
        // 0x418564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418560) {
            ctx->pc = 0x41856Cu;
            goto label_41856c;
        }
    }
    ctx->pc = 0x418568u;
label_418568:
    // 0x418568: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x418568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41856c:
    // 0x41856c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41856cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_418570:
    // 0x418570: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x418570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_418574:
    // 0x418574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x418574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_418578:
    // 0x418578: 0x3e00008  jr          $ra
label_41857c:
    if (ctx->pc == 0x41857Cu) {
        ctx->pc = 0x41857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418578u;
        // 0x41857c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418580u;
        goto label_fallthrough_0x418578;
    }
    ctx->pc = 0x418578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418578u;
        // 0x41857c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x418578:
    ctx->pc = 0x418580u;
}

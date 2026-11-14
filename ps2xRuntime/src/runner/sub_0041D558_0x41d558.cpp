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

// Function: sub_0041D558
// Address: 0x41d558 - 0x41d5f0
void sub_0041D558_0x41d558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D558_0x41d558");
#endif

    switch (ctx->pc) {
        case 0x41d558u: goto label_41d558;
        case 0x41d55cu: goto label_41d55c;
        case 0x41d560u: goto label_41d560;
        case 0x41d564u: goto label_41d564;
        case 0x41d568u: goto label_41d568;
        case 0x41d56cu: goto label_41d56c;
        case 0x41d570u: goto label_41d570;
        case 0x41d574u: goto label_41d574;
        case 0x41d578u: goto label_41d578;
        case 0x41d57cu: goto label_41d57c;
        case 0x41d580u: goto label_41d580;
        case 0x41d584u: goto label_41d584;
        case 0x41d588u: goto label_41d588;
        case 0x41d58cu: goto label_41d58c;
        case 0x41d590u: goto label_41d590;
        case 0x41d594u: goto label_41d594;
        case 0x41d598u: goto label_41d598;
        case 0x41d59cu: goto label_41d59c;
        case 0x41d5a0u: goto label_41d5a0;
        case 0x41d5a4u: goto label_41d5a4;
        case 0x41d5a8u: goto label_41d5a8;
        case 0x41d5acu: goto label_41d5ac;
        case 0x41d5b0u: goto label_41d5b0;
        case 0x41d5b4u: goto label_41d5b4;
        case 0x41d5b8u: goto label_41d5b8;
        case 0x41d5bcu: goto label_41d5bc;
        case 0x41d5c0u: goto label_41d5c0;
        case 0x41d5c4u: goto label_41d5c4;
        case 0x41d5c8u: goto label_41d5c8;
        case 0x41d5ccu: goto label_41d5cc;
        case 0x41d5d0u: goto label_41d5d0;
        case 0x41d5d4u: goto label_41d5d4;
        case 0x41d5d8u: goto label_41d5d8;
        case 0x41d5dcu: goto label_41d5dc;
        case 0x41d5e0u: goto label_41d5e0;
        case 0x41d5e4u: goto label_41d5e4;
        case 0x41d5e8u: goto label_41d5e8;
        case 0x41d5ecu: goto label_41d5ec;
        default: break;
    }

    ctx->pc = 0x41d558u;

label_41d558:
    // 0x41d558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41d558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41d55c:
    // 0x41d55c: 0x8f83be10  lw          $v1, -0x41F0($gp)
    ctx->pc = 0x41d55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950416)));
label_41d560:
    // 0x41d560: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x41d560u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
label_41d564:
    // 0x41d564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41d564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41d568:
    // 0x41d568: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41d568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_41d56c:
    // 0x41d56c: 0x2508e880  addiu       $t0, $t0, -0x1780
    ctx->pc = 0x41d56cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961280));
label_41d570:
    // 0x41d570: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x41d570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_41d574:
    // 0x41d574: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x41d574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41d578:
    // 0x41d578: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x41d578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_41d57c:
    // 0x41d57c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41d57cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41d580:
    // 0x41d580: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x41d580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41d584:
    // 0x41d584: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x41d584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_41d588:
    // 0x41d588: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x41d588u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_41d58c:
    // 0x41d58c: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x41d58cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_41d590:
    // 0x41d590: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x41d590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_41d594:
    // 0x41d594: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x41d594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_41d598:
    // 0x41d598: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x41d598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_41d59c:
    // 0x41d59c: 0x8d020074  lw          $v0, 0x74($t0)
    ctx->pc = 0x41d59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 116)));
label_41d5a0:
    // 0x41d5a0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x41d5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_41d5a4:
    // 0x41d5a4: 0x40f809  jalr        $v0
label_41d5a8:
    if (ctx->pc == 0x41D5A8u) {
        ctx->pc = 0x41D5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D5A4u;
        // 0x41d5a8: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D5ACu;
        goto label_41d5ac;
    }
    ctx->pc = 0x41D5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41D5ACu);
        ctx->pc = 0x41D5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D5A4u;
        // 0x41d5a8: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D5A4u, 0x41D5ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41D5ACu;
label_41d5ac:
    // 0x41d5ac: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x41d5acu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_41d5b0:
    // 0x41d5b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41d5b4:
    // 0x41d5b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41d5b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41d5b8:
    // 0x41d5b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41d5b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41d5bc:
    // 0x41d5bc: 0x3e00008  jr          $ra
label_41d5c0:
    if (ctx->pc == 0x41D5C0u) {
        ctx->pc = 0x41D5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D5BCu;
        // 0x41d5c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D5C4u;
        goto label_41d5c4;
    }
    ctx->pc = 0x41D5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D5BCu;
        // 0x41d5c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D5C4u;
label_41d5c4:
    // 0x41d5c4: 0x0  nop
    ctx->pc = 0x41d5c4u;
    // NOP
label_41d5c8:
    // 0x41d5c8: 0x8f83be10  lw          $v1, -0x41F0($gp)
    ctx->pc = 0x41d5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950416)));
label_41d5cc:
    // 0x41d5cc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x41d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_41d5d0:
    // 0x41d5d0: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x41d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_41d5d4:
    // 0x41d5d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x41d5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_41d5d8:
    // 0x41d5d8: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x41d5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_41d5dc:
    // 0x41d5dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x41d5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_41d5e0:
    // 0x41d5e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x41d5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_41d5e4:
    // 0x41d5e4: 0x3e00008  jr          $ra
label_41d5e8:
    if (ctx->pc == 0x41D5E8u) {
        ctx->pc = 0x41D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D5E4u;
        // 0x41d5e8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D5ECu;
        goto label_41d5ec;
    }
    ctx->pc = 0x41D5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D5E4u;
        // 0x41d5e8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D5ECu;
label_41d5ec:
    // 0x41d5ec: 0x0  nop
    ctx->pc = 0x41d5ecu;
    // NOP
    ctx->pc = 0x41d5f0u;
}

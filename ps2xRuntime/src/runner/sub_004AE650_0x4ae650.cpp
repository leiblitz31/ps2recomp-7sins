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

// Function: sub_004AE650
// Address: 0x4ae650 - 0x4ae6f0
void sub_004AE650_0x4ae650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE650_0x4ae650");
#endif

    switch (ctx->pc) {
        case 0x4ae650u: goto label_4ae650;
        case 0x4ae654u: goto label_4ae654;
        case 0x4ae658u: goto label_4ae658;
        case 0x4ae65cu: goto label_4ae65c;
        case 0x4ae660u: goto label_4ae660;
        case 0x4ae664u: goto label_4ae664;
        case 0x4ae668u: goto label_4ae668;
        case 0x4ae66cu: goto label_4ae66c;
        case 0x4ae670u: goto label_4ae670;
        case 0x4ae674u: goto label_4ae674;
        case 0x4ae678u: goto label_4ae678;
        case 0x4ae67cu: goto label_4ae67c;
        case 0x4ae680u: goto label_4ae680;
        case 0x4ae684u: goto label_4ae684;
        case 0x4ae688u: goto label_4ae688;
        case 0x4ae68cu: goto label_4ae68c;
        case 0x4ae690u: goto label_4ae690;
        case 0x4ae694u: goto label_4ae694;
        case 0x4ae698u: goto label_4ae698;
        case 0x4ae69cu: goto label_4ae69c;
        case 0x4ae6a0u: goto label_4ae6a0;
        case 0x4ae6a4u: goto label_4ae6a4;
        case 0x4ae6a8u: goto label_4ae6a8;
        case 0x4ae6acu: goto label_4ae6ac;
        case 0x4ae6b0u: goto label_4ae6b0;
        case 0x4ae6b4u: goto label_4ae6b4;
        case 0x4ae6b8u: goto label_4ae6b8;
        case 0x4ae6bcu: goto label_4ae6bc;
        case 0x4ae6c0u: goto label_4ae6c0;
        case 0x4ae6c4u: goto label_4ae6c4;
        case 0x4ae6c8u: goto label_4ae6c8;
        case 0x4ae6ccu: goto label_4ae6cc;
        case 0x4ae6d0u: goto label_4ae6d0;
        case 0x4ae6d4u: goto label_4ae6d4;
        case 0x4ae6d8u: goto label_4ae6d8;
        case 0x4ae6dcu: goto label_4ae6dc;
        case 0x4ae6e0u: goto label_4ae6e0;
        case 0x4ae6e4u: goto label_4ae6e4;
        case 0x4ae6e8u: goto label_4ae6e8;
        case 0x4ae6ecu: goto label_4ae6ec;
        default: break;
    }

    ctx->pc = 0x4ae650u;

label_4ae650:
    // 0x4ae650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ae650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4ae654:
    // 0x4ae654: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4ae654u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ae658:
    // 0x4ae658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ae658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ae65c:
    // 0x4ae65c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4ae65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4ae660:
    // 0x4ae660: 0x40f809  jalr        $v0
label_4ae664:
    if (ctx->pc == 0x4AE664u) {
        ctx->pc = 0x4AE664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE660u;
        // 0x4ae664: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AE668u;
        goto label_4ae668;
    }
    ctx->pc = 0x4AE660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4AE668u);
        ctx->pc = 0x4AE664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE660u;
        // 0x4ae664: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE660u, 0x4AE668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4AE668u;
label_4ae668:
    // 0x4ae668: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ae668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ae66c:
    // 0x4ae66c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_4ae670:
    if (ctx->pc == 0x4AE670u) {
        ctx->pc = 0x4AE670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE66Cu;
        // 0x4ae670: 0x8f83b8a4  lw          $v1, -0x475C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949028)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AE674u;
        goto label_4ae674;
    }
    ctx->pc = 0x4AE66Cu;
    {
        const bool branch_taken_0x4ae66c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE66Cu;
        // 0x4ae670: 0x8f83b8a4  lw          $v1, -0x475C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae66c) {
            ctx->pc = 0x4AE698u;
            goto label_4ae698;
        }
    }
    ctx->pc = 0x4AE674u;
label_4ae674:
    // 0x4ae674: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4ae674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ae678:
    // 0x4ae678: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_4ae67c:
    if (ctx->pc == 0x4AE67Cu) {
        ctx->pc = 0x4AE680u;
        goto label_4ae680;
    }
    ctx->pc = 0x4AE678u;
    {
        const bool branch_taken_0x4ae678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ae678) {
            ctx->pc = 0x4AE688u;
            goto label_4ae688;
        }
    }
    ctx->pc = 0x4AE680u;
label_4ae680:
    // 0x4ae680: 0xc0bf6e0  jal         func_2FDB80
label_4ae684:
    if (ctx->pc == 0x4AE684u) {
        ctx->pc = 0x4AE684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE680u;
        // 0x4ae684: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AE688u;
        goto label_4ae688;
    }
    ctx->pc = 0x4AE680u;
    SET_GPR_U32(ctx, 31, 0x4AE688u);
    ctx->pc = 0x4AE684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE680u;
    // 0x4ae684: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x4AE680u, 0x4AE688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE688u;
label_4ae688:
    // 0x4ae688: 0xc0bf6a0  jal         func_2FDA80
label_4ae68c:
    if (ctx->pc == 0x4AE68Cu) {
        ctx->pc = 0x4AE690u;
        goto label_4ae690;
    }
    ctx->pc = 0x4AE688u;
    SET_GPR_U32(ctx, 31, 0x4AE690u);
    ctx->pc = 0x2FDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA80u, 0x4AE688u, 0x4AE690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE690u;
label_4ae690:
    // 0x4ae690: 0x10000004  b           . + 4 + (0x4 << 2)
label_4ae694:
    if (ctx->pc == 0x4AE694u) {
        ctx->pc = 0x4AE694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE690u;
        // 0x4ae694: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AE698u;
        goto label_4ae698;
    }
    ctx->pc = 0x4AE690u;
    {
        const bool branch_taken_0x4ae690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE690u;
        // 0x4ae694: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae690) {
            ctx->pc = 0x4AE6A4u;
            goto label_4ae6a4;
        }
    }
    ctx->pc = 0x4AE698u;
label_4ae698:
    // 0x4ae698: 0xc0bf668  jal         func_2FD9A0
label_4ae69c:
    if (ctx->pc == 0x4AE69Cu) {
        ctx->pc = 0x4AE6A0u;
        goto label_4ae6a0;
    }
    ctx->pc = 0x4AE698u;
    SET_GPR_U32(ctx, 31, 0x4AE6A0u);
    ctx->pc = 0x2FD9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD9A0u, 0x4AE698u, 0x4AE6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE6A0u;
label_4ae6a0:
    // 0x4ae6a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ae6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ae6a4:
    // 0x4ae6a4: 0x3e00008  jr          $ra
label_4ae6a8:
    if (ctx->pc == 0x4AE6A8u) {
        ctx->pc = 0x4AE6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE6A4u;
        // 0x4ae6a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AE6ACu;
        goto label_4ae6ac;
    }
    ctx->pc = 0x4AE6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE6A4u;
        // 0x4ae6a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE6ACu;
label_4ae6ac:
    // 0x4ae6ac: 0x0  nop
    ctx->pc = 0x4ae6acu;
    // NOP
label_4ae6b0:
    // 0x4ae6b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ae6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4ae6b4:
    // 0x4ae6b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ae6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ae6b8:
    // 0x4ae6b8: 0xc12b9bc  jal         func_4AE6F0
label_4ae6bc:
    if (ctx->pc == 0x4AE6BCu) {
        ctx->pc = 0x4AE6C0u;
        goto label_4ae6c0;
    }
    ctx->pc = 0x4AE6B8u;
    SET_GPR_U32(ctx, 31, 0x4AE6C0u);
    ctx->pc = 0x4AE6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE6F0u, 0x4AE6B8u, 0x4AE6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE6C0u;
label_4ae6c0:
    // 0x4ae6c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ae6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ae6c4:
    // 0x4ae6c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ae6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ae6c8:
    // 0x4ae6c8: 0x3e00008  jr          $ra
label_4ae6cc:
    if (ctx->pc == 0x4AE6CCu) {
        ctx->pc = 0x4AE6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE6C8u;
        // 0x4ae6cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AE6D0u;
        goto label_4ae6d0;
    }
    ctx->pc = 0x4AE6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE6C8u;
        // 0x4ae6cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE6D0u;
label_4ae6d0:
    // 0x4ae6d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ae6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4ae6d4:
    // 0x4ae6d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ae6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ae6d8:
    // 0x4ae6d8: 0xc12b9c6  jal         func_4AE718
label_4ae6dc:
    if (ctx->pc == 0x4AE6DCu) {
        ctx->pc = 0x4AE6E0u;
        goto label_4ae6e0;
    }
    ctx->pc = 0x4AE6D8u;
    SET_GPR_U32(ctx, 31, 0x4AE6E0u);
    ctx->pc = 0x4AE718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE718u, 0x4AE6D8u, 0x4AE6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE6E0u;
label_4ae6e0:
    // 0x4ae6e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ae6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ae6e4:
    // 0x4ae6e4: 0x3e00008  jr          $ra
label_4ae6e8:
    if (ctx->pc == 0x4AE6E8u) {
        ctx->pc = 0x4AE6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE6E4u;
        // 0x4ae6e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AE6ECu;
        goto label_4ae6ec;
    }
    ctx->pc = 0x4AE6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE6E4u;
        // 0x4ae6e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE6ECu;
label_4ae6ec:
    // 0x4ae6ec: 0x0  nop
    ctx->pc = 0x4ae6ecu;
    // NOP
    ctx->pc = 0x4ae6f0u;
}

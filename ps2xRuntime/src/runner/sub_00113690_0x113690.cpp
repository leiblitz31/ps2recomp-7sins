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

// Function: sub_00113690
// Address: 0x113690 - 0x113780
void sub_00113690_0x113690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113690_0x113690");
#endif

    switch (ctx->pc) {
        case 0x1136acu: goto label_1136ac;
        case 0x1136c4u: goto label_1136c4;
        case 0x1136d4u: goto label_1136d4;
        case 0x1136e4u: goto label_1136e4;
        case 0x1136f8u: goto label_1136f8;
        case 0x113708u: goto label_113708;
        case 0x11373cu: goto label_11373c;
        case 0x11374cu: goto label_11374c;
        case 0x11376cu: goto label_11376c;
        default: break;
    }

    ctx->pc = 0x113690u;

    // 0x113690: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x113690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x113694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113698: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x113698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x11369c: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x11369cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x1136a0: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1136a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1136a4: 0xc044ed4  jal         func_113B50
    ctx->pc = 0x1136A4u;
    SET_GPR_U32(ctx, 31, 0x1136ACu);
    ctx->pc = 0x113B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B50u, 0x1136A4u, 0x1136ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1136ACu;
label_1136ac:
    // 0x1136ac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1136acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1136b0: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1136b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1136b4: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x1136b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1136b8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1136b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1136bc: 0xc044e3c  jal         func_1138F0
    ctx->pc = 0x1136BCu;
    SET_GPR_U32(ctx, 31, 0x1136C4u);
    ctx->pc = 0x1138F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1138F0u, 0x1136BCu, 0x1136C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1136C4u;
label_1136c4:
    // 0x1136c4: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x1136c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1136c8: 0x27a50034  addiu       $a1, $sp, 0x34
    ctx->pc = 0x1136c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1136cc: 0xc044e30  jal         func_1138C0
    ctx->pc = 0x1136CCu;
    SET_GPR_U32(ctx, 31, 0x1136D4u);
    ctx->pc = 0x1138C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1138C0u, 0x1136CCu, 0x1136D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1136D4u;
label_1136d4:
    // 0x1136d4: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1136d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1136d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1136d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1136dc: 0xc044e20  jal         func_113880
    ctx->pc = 0x1136DCu;
    SET_GPR_U32(ctx, 31, 0x1136E4u);
    ctx->pc = 0x113880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113880u, 0x1136DCu, 0x1136E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1136E4u;
label_1136e4:
    // 0x1136e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1136e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1136e8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1136e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1136ec: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x1136ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1136f0: 0xc044df4  jal         func_1137D0
    ctx->pc = 0x1136F0u;
    SET_GPR_U32(ctx, 31, 0x1136F8u);
    ctx->pc = 0x1137D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1137D0u, 0x1136F0u, 0x1136F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1136F8u;
label_1136f8:
    // 0x1136f8: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1136f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1136fc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1136fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x113700: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x113700u;
    SET_GPR_U32(ctx, 31, 0x113708u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x113700u, 0x113708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113708u;
label_113708:
    // 0x113708: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x113708u;
    {
        const bool branch_taken_0x113708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113708) {
            ctx->pc = 0x113760u;
            goto label_113760;
        }
    }
    ctx->pc = 0x113710u;
    // 0x113710: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x113710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x113714: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x113714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113718: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x113718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11371c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11371cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113720: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x113720u;
    {
        const bool branch_taken_0x113720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x113720) {
            ctx->pc = 0x113754u;
            goto label_113754;
        }
    }
    ctx->pc = 0x113728u;
    // 0x113728: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x113728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11372c: 0x27858988  addiu       $a1, $gp, -0x7678
    ctx->pc = 0x11372cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936968));
    // 0x113730: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x113730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x113734: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x113734u;
    SET_GPR_U32(ctx, 31, 0x11373Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x113734u, 0x11373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11373Cu;
label_11373c:
    // 0x11373c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x11373cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113740: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x113740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x113744: 0xc045880  jal         func_116200
    ctx->pc = 0x113744u;
    SET_GPR_U32(ctx, 31, 0x11374Cu);
    ctx->pc = 0x116200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116200u, 0x113744u, 0x11374Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11374Cu;
label_11374c:
    // 0x11374c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11374Cu;
    {
        const bool branch_taken_0x11374c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11374c) {
            ctx->pc = 0x113770u;
            goto label_113770;
        }
    }
    ctx->pc = 0x113754u;
label_113754:
    // 0x113754: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x113754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113758: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x113758u;
    {
        const bool branch_taken_0x113758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x113758) {
            ctx->pc = 0x113770u;
            goto label_113770;
        }
    }
    ctx->pc = 0x113760u;
label_113760:
    // 0x113760: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x113760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x113764: 0xc044de0  jal         func_113780
    ctx->pc = 0x113764u;
    SET_GPR_U32(ctx, 31, 0x11376Cu);
    ctx->pc = 0x113780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113780u, 0x113764u, 0x11376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11376Cu;
label_11376c:
    // 0x11376c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x11376cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_113770:
    // 0x113770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113774: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x113774u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x113778: 0x3e00008  jr          $ra
    ctx->pc = 0x113778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113780u;
}

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

// Function: sub_00116510
// Address: 0x116510 - 0x116600
void sub_00116510_0x116510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116510_0x116510");
#endif

    switch (ctx->pc) {
        case 0x116530u: goto label_116530;
        case 0x116544u: goto label_116544;
        case 0x116554u: goto label_116554;
        case 0x116564u: goto label_116564;
        case 0x11656cu: goto label_11656c;
        case 0x116578u: goto label_116578;
        case 0x116588u: goto label_116588;
        case 0x116598u: goto label_116598;
        case 0x1165b8u: goto label_1165b8;
        case 0x1165ccu: goto label_1165cc;
        case 0x1165dcu: goto label_1165dc;
        default: break;
    }

    ctx->pc = 0x116510u;

    // 0x116510: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x116510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x116514: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x116514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x116518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x116518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11651c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x11651cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x116520: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x116520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x116524: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x116524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x116528: 0xc044ed4  jal         func_113B50
    ctx->pc = 0x116528u;
    SET_GPR_U32(ctx, 31, 0x116530u);
    ctx->pc = 0x113B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B50u, 0x116528u, 0x116530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116530u;
label_116530:
    // 0x116530: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x116530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116534: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x116534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x116538: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x116538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x11653c: 0xc044fac  jal         func_113EB0
    ctx->pc = 0x11653Cu;
    SET_GPR_U32(ctx, 31, 0x116544u);
    ctx->pc = 0x113EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EB0u, 0x11653Cu, 0x116544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116544u;
label_116544:
    // 0x116544: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x116544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x116548: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x116548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x11654c: 0xc044e30  jal         func_1138C0
    ctx->pc = 0x11654Cu;
    SET_GPR_U32(ctx, 31, 0x116554u);
    ctx->pc = 0x1138C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1138C0u, 0x11654Cu, 0x116554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116554u;
label_116554:
    // 0x116554: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x116554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x116558: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x116558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11655c: 0xc044e20  jal         func_113880
    ctx->pc = 0x11655Cu;
    SET_GPR_U32(ctx, 31, 0x116564u);
    ctx->pc = 0x113880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113880u, 0x11655Cu, 0x116564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116564u;
label_116564:
    // 0x116564: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x116564u;
    {
        const bool branch_taken_0x116564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116564) {
            ctx->pc = 0x1165B8u;
            goto label_1165b8;
        }
    }
    ctx->pc = 0x11656Cu;
label_11656c:
    // 0x11656c: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x11656cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x116570: 0xc044de0  jal         func_113780
    ctx->pc = 0x116570u;
    SET_GPR_U32(ctx, 31, 0x116578u);
    ctx->pc = 0x113780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113780u, 0x116570u, 0x116578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116578u;
label_116578:
    // 0x116578: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x116578u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11657c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11657cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116580: 0xc0457e0  jal         func_115F80
    ctx->pc = 0x116580u;
    SET_GPR_U32(ctx, 31, 0x116588u);
    ctx->pc = 0x115F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F80u, 0x116580u, 0x116588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116588u;
label_116588:
    // 0x116588: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x116588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11658c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x11658cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x116590: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x116590u;
    SET_GPR_U32(ctx, 31, 0x116598u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x116590u, 0x116598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116598u;
label_116598:
    // 0x116598: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x116598u;
    {
        const bool branch_taken_0x116598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116598) {
            ctx->pc = 0x1165ACu;
            goto label_1165ac;
        }
    }
    ctx->pc = 0x1165A0u;
    // 0x1165a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1165a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1165a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1165A4u;
    {
        const bool branch_taken_0x1165a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1165a4) {
            ctx->pc = 0x1165E8u;
            goto label_1165e8;
        }
    }
    ctx->pc = 0x1165ACu;
label_1165ac:
    // 0x1165ac: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1165acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1165b0: 0xc045980  jal         func_116600
    ctx->pc = 0x1165B0u;
    SET_GPR_U32(ctx, 31, 0x1165B8u);
    ctx->pc = 0x116600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116600u, 0x1165B0u, 0x1165B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1165B8u;
label_1165b8:
    // 0x1165b8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1165b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1165bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1165bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1165c0: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x1165c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1165c4: 0xc044df4  jal         func_1137D0
    ctx->pc = 0x1165C4u;
    SET_GPR_U32(ctx, 31, 0x1165CCu);
    ctx->pc = 0x1137D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1137D0u, 0x1165C4u, 0x1165CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1165CCu;
label_1165cc:
    // 0x1165cc: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1165ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1165d0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1165d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1165d4: 0xc041998  jal         func_106660
    ctx->pc = 0x1165D4u;
    SET_GPR_U32(ctx, 31, 0x1165DCu);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x1165D4u, 0x1165DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1165DCu;
label_1165dc:
    // 0x1165dc: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1165DCu;
    {
        const bool branch_taken_0x1165dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1165dc) {
            ctx->pc = 0x11656Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11656c;
        }
    }
    ctx->pc = 0x1165E4u;
    // 0x1165e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1165e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1165e8:
    // 0x1165e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1165e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1165ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1165ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1165f0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1165f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1165f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1165F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1165F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1165FCu;
    // 0x1165fc: 0x0  nop
    ctx->pc = 0x1165fcu;
    // NOP
    ctx->pc = 0x116600u;
}

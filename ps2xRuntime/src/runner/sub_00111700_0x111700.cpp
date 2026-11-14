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

// Function: sub_00111700
// Address: 0x111700 - 0x1117b0
void sub_00111700_0x111700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111700_0x111700");
#endif

    switch (ctx->pc) {
        case 0x11171cu: goto label_11171c;
        case 0x111734u: goto label_111734;
        case 0x111744u: goto label_111744;
        case 0x111754u: goto label_111754;
        case 0x111768u: goto label_111768;
        case 0x111778u: goto label_111778;
        case 0x111798u: goto label_111798;
        default: break;
    }

    ctx->pc = 0x111700u;

    // 0x111700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x111700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x111704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111708: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x111708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x11170c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x11170cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x111710: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x111710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x111714: 0xc0446b4  jal         func_111AD0
    ctx->pc = 0x111714u;
    SET_GPR_U32(ctx, 31, 0x11171Cu);
    ctx->pc = 0x111AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AD0u, 0x111714u, 0x11171Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11171Cu;
label_11171c:
    // 0x11171c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x11171cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111720: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x111720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x111724: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x111724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x111728: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x111728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11172c: 0xc04461c  jal         func_111870
    ctx->pc = 0x11172Cu;
    SET_GPR_U32(ctx, 31, 0x111734u);
    ctx->pc = 0x111870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111870u, 0x11172Cu, 0x111734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111734u;
label_111734:
    // 0x111734: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x111734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x111738: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x111738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x11173c: 0xc044610  jal         func_111840
    ctx->pc = 0x11173Cu;
    SET_GPR_U32(ctx, 31, 0x111744u);
    ctx->pc = 0x111840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111840u, 0x11173Cu, 0x111744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111744u;
label_111744:
    // 0x111744: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x111744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x111748: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11174c: 0xc044600  jal         func_111800
    ctx->pc = 0x11174Cu;
    SET_GPR_U32(ctx, 31, 0x111754u);
    ctx->pc = 0x111800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111800u, 0x11174Cu, 0x111754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111754u;
label_111754:
    // 0x111754: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x111754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111758: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x111758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11175c: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x11175cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x111760: 0xc043960  jal         func_10E580
    ctx->pc = 0x111760u;
    SET_GPR_U32(ctx, 31, 0x111768u);
    ctx->pc = 0x10E580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E580u, 0x111760u, 0x111768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111768u;
label_111768:
    // 0x111768: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x111768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x11176c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x11176cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x111770: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x111770u;
    SET_GPR_U32(ctx, 31, 0x111778u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x111770u, 0x111778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111778u;
label_111778:
    // 0x111778: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x111778u;
    {
        const bool branch_taken_0x111778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111778) {
            ctx->pc = 0x11178Cu;
            goto label_11178c;
        }
    }
    ctx->pc = 0x111780u;
    // 0x111780: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x111780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111784: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x111784u;
    {
        const bool branch_taken_0x111784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x111784) {
            ctx->pc = 0x11179Cu;
            goto label_11179c;
        }
    }
    ctx->pc = 0x11178Cu;
label_11178c:
    // 0x11178c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x11178cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x111790: 0xc0445ec  jal         func_1117B0
    ctx->pc = 0x111790u;
    SET_GPR_U32(ctx, 31, 0x111798u);
    ctx->pc = 0x1117B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1117B0u, 0x111790u, 0x111798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111798u;
label_111798:
    // 0x111798: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x111798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11179c:
    // 0x11179c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11179cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1117a0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1117a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1117a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1117A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1117A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1117ACu;
    // 0x1117ac: 0x0  nop
    ctx->pc = 0x1117acu;
    // NOP
    ctx->pc = 0x1117b0u;
}

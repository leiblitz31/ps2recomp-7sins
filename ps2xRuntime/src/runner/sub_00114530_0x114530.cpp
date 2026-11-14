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

// Function: sub_00114530
// Address: 0x114530 - 0x1145c0
void sub_00114530_0x114530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114530_0x114530");
#endif

    switch (ctx->pc) {
        case 0x114578u: goto label_114578;
        case 0x114588u: goto label_114588;
        case 0x11459cu: goto label_11459c;
        default: break;
    }

    ctx->pc = 0x114530u;

    // 0x114530: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x114530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x114534: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x114534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x114538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x114538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11453c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x11453cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x114540: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x114540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x114544: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x114544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x114548: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x114548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11454c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x11454cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114550: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x114550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114554: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x114554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114558: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x114558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11455c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11455cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114560: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x114560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x114564: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x114564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x114568: 0x24660008  addiu       $a2, $v1, 0x8
    ctx->pc = 0x114568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x11456c: 0x2447000c  addiu       $a3, $v0, 0xC
    ctx->pc = 0x11456cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x114570: 0xc045a70  jal         func_1169C0
    ctx->pc = 0x114570u;
    SET_GPR_U32(ctx, 31, 0x114578u);
    ctx->pc = 0x1169C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1169C0u, 0x114570u, 0x114578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114578u;
label_114578:
    // 0x114578: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x114578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11457c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x11457cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x114580: 0xc045170  jal         func_1145C0
    ctx->pc = 0x114580u;
    SET_GPR_U32(ctx, 31, 0x114588u);
    ctx->pc = 0x1145C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1145C0u, 0x114580u, 0x114588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114588u;
label_114588:
    // 0x114588: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x114588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11458c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11458cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114590: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x114590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114594: 0xc045a34  jal         func_1168D0
    ctx->pc = 0x114594u;
    SET_GPR_U32(ctx, 31, 0x11459Cu);
    ctx->pc = 0x1168D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1168D0u, 0x114594u, 0x11459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11459Cu;
label_11459c:
    // 0x11459c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x11459cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1145a0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1145a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1145a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1145a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1145a8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1145a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1145ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1145acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1145b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1145b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1145b4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1145b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1145b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1145B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1145B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1145C0u;
}

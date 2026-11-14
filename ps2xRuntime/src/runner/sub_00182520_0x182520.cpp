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

// Function: sub_00182520
// Address: 0x182520 - 0x1825b0
void sub_00182520_0x182520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182520_0x182520");
#endif

    switch (ctx->pc) {
        case 0x182540u: goto label_182540;
        case 0x182554u: goto label_182554;
        case 0x182568u: goto label_182568;
        case 0x182590u: goto label_182590;
        default: break;
    }

    ctx->pc = 0x182520u;

    // 0x182520: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x182520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x182524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18252c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x18252cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x182530: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x182530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x182534: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x182534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182538: 0xc05611c  jal         func_158470
    ctx->pc = 0x182538u;
    SET_GPR_U32(ctx, 31, 0x182540u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x182538u, 0x182540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182540u;
label_182540:
    // 0x182540: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x182540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182544: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x182544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x182548: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x182548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18254c: 0xc060994  jal         func_182650
    ctx->pc = 0x18254Cu;
    SET_GPR_U32(ctx, 31, 0x182554u);
    ctx->pc = 0x182650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182650u, 0x18254Cu, 0x182554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182554u;
label_182554:
    // 0x182554: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x182554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182558: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x182558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18255c: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x18255cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x182560: 0xc06096c  jal         func_1825B0
    ctx->pc = 0x182560u;
    SET_GPR_U32(ctx, 31, 0x182568u);
    ctx->pc = 0x1825B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1825B0u, 0x182560u, 0x182568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182568u;
label_182568:
    // 0x182568: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x182568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18256c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x18256cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182570: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x182570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182574: 0xa3a00028  sb          $zero, 0x28($sp)
    ctx->pc = 0x182574u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x182578: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x182578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18257c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x18257cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x182580: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x182580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182584: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x182584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x182588: 0xc06000c  jal         func_180030
    ctx->pc = 0x182588u;
    SET_GPR_U32(ctx, 31, 0x182590u);
    ctx->pc = 0x180030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180030u, 0x182588u, 0x182590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182590u;
label_182590:
    // 0x182590: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x182590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182594: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x182594u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x182598: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x182598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18259c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18259cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1825a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1825a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1825a4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1825a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1825a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1825A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1825A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1825B0u;
}

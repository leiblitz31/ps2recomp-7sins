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

// Function: sub_001866B0
// Address: 0x1866b0 - 0x186740
void sub_001866B0_0x1866b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001866B0_0x1866b0");
#endif

    switch (ctx->pc) {
        case 0x1866f8u: goto label_1866f8;
        case 0x186708u: goto label_186708;
        case 0x18671cu: goto label_18671c;
        default: break;
    }

    ctx->pc = 0x1866b0u;

    // 0x1866b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1866b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1866b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1866b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1866b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1866b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1866bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1866bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1866c0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1866c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1866c4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1866c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1866c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1866c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1866cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1866ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1866d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1866d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1866d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1866d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1866d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1866d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1866dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1866dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1866e0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1866e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1866e4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1866e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1866e8: 0x24660008  addiu       $a2, $v1, 0x8
    ctx->pc = 0x1866e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1866ec: 0x2447000c  addiu       $a3, $v0, 0xC
    ctx->pc = 0x1866ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1866f0: 0xc045a70  jal         func_1169C0
    ctx->pc = 0x1866F0u;
    SET_GPR_U32(ctx, 31, 0x1866F8u);
    ctx->pc = 0x1169C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1169C0u, 0x1866F0u, 0x1866F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1866F8u;
label_1866f8:
    // 0x1866f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1866f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1866fc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1866fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x186700: 0xc0619d0  jal         func_186740
    ctx->pc = 0x186700u;
    SET_GPR_U32(ctx, 31, 0x186708u);
    ctx->pc = 0x186740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186740u, 0x186700u, 0x186708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186708u;
label_186708:
    // 0x186708: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x186708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18670c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18670cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186710: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x186710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186714: 0xc061cb4  jal         func_1872D0
    ctx->pc = 0x186714u;
    SET_GPR_U32(ctx, 31, 0x18671Cu);
    ctx->pc = 0x1872D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1872D0u, 0x186714u, 0x18671Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18671Cu;
label_18671c:
    // 0x18671c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x18671cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186720: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x186720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x186724: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x186724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x186728: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x186728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x18672c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18672cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186730: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186734: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x186734u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186738: 0x3e00008  jr          $ra
    ctx->pc = 0x186738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186740u;
}

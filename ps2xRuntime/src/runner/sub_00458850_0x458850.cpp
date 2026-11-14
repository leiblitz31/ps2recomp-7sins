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

// Function: sub_00458850
// Address: 0x458850 - 0x458910
void sub_00458850_0x458850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00458850_0x458850");
#endif

    switch (ctx->pc) {
        case 0x458874u: goto label_458874;
        case 0x458888u: goto label_458888;
        case 0x458894u: goto label_458894;
        case 0x4588a8u: goto label_4588a8;
        case 0x4588c8u: goto label_4588c8;
        case 0x4588e0u: goto label_4588e0;
        default: break;
    }

    ctx->pc = 0x458850u;

    // 0x458850: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x458850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x458854: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x458854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x458858: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x458858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x45885c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45885cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x458860: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x458860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x458864: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x458864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x458868: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x458868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45886c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x45886Cu;
    {
        const bool branch_taken_0x45886c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45886c) {
            ctx->pc = 0x4588D0u;
            goto label_4588d0;
        }
    }
    ctx->pc = 0x458874u;
label_458874:
    // 0x458874: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x458874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x458878: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x458878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45887c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x45887cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458880: 0xc04e51c  jal         func_139470
    ctx->pc = 0x458880u;
    SET_GPR_U32(ctx, 31, 0x458888u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x458880u, 0x458888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458888u;
label_458888:
    // 0x458888: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x458888u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45888c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x45888Cu;
    {
        const bool branch_taken_0x45888c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45888c) {
            ctx->pc = 0x4588ACu;
            goto label_4588ac;
        }
    }
    ctx->pc = 0x458894u;
label_458894:
    // 0x458894: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x458894u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x458898: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x458898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45889c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x45889cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4588a0: 0xc116244  jal         func_458910
    ctx->pc = 0x4588A0u;
    SET_GPR_U32(ctx, 31, 0x4588A8u);
    ctx->pc = 0x458910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458910u, 0x4588A0u, 0x4588A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4588A8u;
label_4588a8:
    // 0x4588a8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x4588a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4588ac:
    // 0x4588ac: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4588ACu;
    {
        const bool branch_taken_0x4588ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4588ac) {
            ctx->pc = 0x458894u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458894;
        }
    }
    ctx->pc = 0x4588B4u;
    // 0x4588b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4588b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4588b8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x4588b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4588bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4588bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4588c0: 0xc04e51c  jal         func_139470
    ctx->pc = 0x4588C0u;
    SET_GPR_U32(ctx, 31, 0x4588C8u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x4588C0u, 0x4588C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4588C8u;
label_4588c8:
    // 0x4588c8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4588c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4588cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4588ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4588d0:
    // 0x4588d0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4588d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4588d4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x4588d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4588d8: 0xc04e50c  jal         func_139430
    ctx->pc = 0x4588D8u;
    SET_GPR_U32(ctx, 31, 0x4588E0u);
    ctx->pc = 0x139430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139430u, 0x4588D8u, 0x4588E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4588E0u;
label_4588e0:
    // 0x4588e0: 0x222182b  sltu        $v1, $s1, $v0
    ctx->pc = 0x4588e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4588e4: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x4588E4u;
    {
        const bool branch_taken_0x4588e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4588e4) {
            ctx->pc = 0x458874u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458874;
        }
    }
    ctx->pc = 0x4588ECu;
    // 0x4588ec: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x4588ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4588f0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x4588f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x4588f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4588f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4588f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4588f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4588fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4588fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x458900: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x458900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x458904: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x458904u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x458908: 0x3e00008  jr          $ra
    ctx->pc = 0x458908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x458908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x458910u;
}

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

// Function: sub_00458F80
// Address: 0x458f80 - 0x459010
void sub_00458F80_0x458f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00458F80_0x458f80");
#endif

    switch (ctx->pc) {
        case 0x458fa0u: goto label_458fa0;
        case 0x458fbcu: goto label_458fbc;
        case 0x458fccu: goto label_458fcc;
        case 0x458fdcu: goto label_458fdc;
        default: break;
    }

    ctx->pc = 0x458f80u;

    // 0x458f80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x458f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x458f84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x458f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x458f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x458f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x458f8c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x458f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x458f90: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x458f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x458f94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x458f94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458f98: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x458F98u;
    {
        const bool branch_taken_0x458f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x458f98) {
            ctx->pc = 0x458FE0u;
            goto label_458fe0;
        }
    }
    ctx->pc = 0x458FA0u;
label_458fa0:
    // 0x458fa0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x458fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x458fa4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x458fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x458fa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x458fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x458fac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x458facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x458fb0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x458fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x458fb4: 0xc040304  jal         func_100C10
    ctx->pc = 0x458FB4u;
    SET_GPR_U32(ctx, 31, 0x458FBCu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x458FB4u, 0x458FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458FBCu;
label_458fbc:
    // 0x458fbc: 0x8f84bf40  lw          $a0, -0x40C0($gp)
    ctx->pc = 0x458fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950720)));
    // 0x458fc0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x458fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x458fc4: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x458FC4u;
    SET_GPR_U32(ctx, 31, 0x458FCCu);
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x458FC4u, 0x458FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458FCCu;
label_458fcc:
    // 0x458fcc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x458fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x458fd0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x458fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x458fd4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x458FD4u;
    SET_GPR_U32(ctx, 31, 0x458FDCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x458FD4u, 0x458FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458FDCu;
label_458fdc:
    // 0x458fdc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x458fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_458fe0:
    // 0x458fe0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x458fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x458fe4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x458fe4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x458fe8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x458FE8u;
    {
        const bool branch_taken_0x458fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x458fe8) {
            ctx->pc = 0x458FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458fa0;
        }
    }
    ctx->pc = 0x458FF0u;
    // 0x458ff0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x458ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x458ff4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x458ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x458ff8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x458ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x458ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x458FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x458FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x459004u;
    // 0x459004: 0x0  nop
    ctx->pc = 0x459004u;
    // NOP
    // 0x459008: 0x0  nop
    ctx->pc = 0x459008u;
    // NOP
    // 0x45900c: 0x0  nop
    ctx->pc = 0x45900cu;
    // NOP
    ctx->pc = 0x459010u;
}

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

// Function: sub_00251F20
// Address: 0x251f20 - 0x251ff0
void sub_00251F20_0x251f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251F20_0x251f20");
#endif

    switch (ctx->pc) {
        case 0x251f60u: goto label_251f60;
        case 0x251f84u: goto label_251f84;
        case 0x251f94u: goto label_251f94;
        case 0x251fa0u: goto label_251fa0;
        case 0x251fbcu: goto label_251fbc;
        default: break;
    }

    ctx->pc = 0x251f20u;

    // 0x251f20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x251f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x251f24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x251f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x251f28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x251f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x251f2c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x251f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x251f30: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x251f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x251f34: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x251f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x251f38: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x251f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x251f3c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x251f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251f40: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x251f40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x251f44: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x251f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x251f48: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x251f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251f4c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x251f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x251f50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x251f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251f54: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x251f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x251f58: 0xc0948dc  jal         func_252370
    ctx->pc = 0x251F58u;
    SET_GPR_U32(ctx, 31, 0x251F60u);
    ctx->pc = 0x252370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252370u, 0x251F58u, 0x251F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251F60u;
label_251f60:
    // 0x251f60: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x251f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251f64: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x251f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251f68: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x251f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251f6c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x251f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x251f70: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x251f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x251f74: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x251f74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x251f78: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x251f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x251f7c: 0xc0947fc  jal         func_251FF0
    ctx->pc = 0x251F7Cu;
    SET_GPR_U32(ctx, 31, 0x251F84u);
    ctx->pc = 0x251FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251FF0u, 0x251F7Cu, 0x251F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251F84u;
label_251f84:
    // 0x251f84: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x251f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251f88: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x251f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x251f8c: 0xc04d364  jal         func_134D90
    ctx->pc = 0x251F8Cu;
    SET_GPR_U32(ctx, 31, 0x251F94u);
    ctx->pc = 0x134D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134D90u, 0x251F8Cu, 0x251F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251F94u;
label_251f94:
    // 0x251f94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x251f94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251f98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x251F98u;
    {
        const bool branch_taken_0x251f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251f98) {
            ctx->pc = 0x251FACu;
            goto label_251fac;
        }
    }
    ctx->pc = 0x251FA0u;
label_251fa0:
    // 0x251fa0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x251fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x251fa4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x251fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x251fa8: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x251fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_251fac:
    // 0x251fac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x251facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251fb0: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x251fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x251fb4: 0xc0947c0  jal         func_251F00
    ctx->pc = 0x251FB4u;
    SET_GPR_U32(ctx, 31, 0x251FBCu);
    ctx->pc = 0x251F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251F00u, 0x251FB4u, 0x251FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251FBCu;
label_251fbc:
    // 0x251fbc: 0x1602fff8  bne         $s0, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x251FBCu;
    {
        const bool branch_taken_0x251fbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x251fbc) {
            ctx->pc = 0x251FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251fa0;
        }
    }
    ctx->pc = 0x251FC4u;
    // 0x251fc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x251fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x251fc8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x251fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251fcc: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x251fccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x251fd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x251fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x251fd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x251fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251fd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x251fd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251fdc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x251fdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x251fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x251FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251FE8u;
    // 0x251fe8: 0x0  nop
    ctx->pc = 0x251fe8u;
    // NOP
    // 0x251fec: 0x0  nop
    ctx->pc = 0x251fecu;
    // NOP
    ctx->pc = 0x251ff0u;
}

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

// Function: sub_00111EC0
// Address: 0x111ec0 - 0x111f80
void sub_00111EC0_0x111ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111EC0_0x111ec0");
#endif

    switch (ctx->pc) {
        case 0x111ef0u: goto label_111ef0;
        case 0x111efcu: goto label_111efc;
        case 0x111f08u: goto label_111f08;
        case 0x111f20u: goto label_111f20;
        case 0x111f38u: goto label_111f38;
        case 0x111f54u: goto label_111f54;
        default: break;
    }

    ctx->pc = 0x111ec0u;

    // 0x111ec0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x111ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x111ec4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x111ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x111ec8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x111ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x111ecc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x111eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x111ed0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x111ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x111ed4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x111ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x111ed8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x111ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x111edc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x111edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111ee0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x111ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111ee4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x111ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111ee8: 0xc04383c  jal         func_10E0F0
    ctx->pc = 0x111EE8u;
    SET_GPR_U32(ctx, 31, 0x111EF0u);
    ctx->pc = 0x10E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E0F0u, 0x111EE8u, 0x111EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111EF0u;
label_111ef0:
    // 0x111ef0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x111ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111ef4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x111EF4u;
    {
        const bool branch_taken_0x111ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x111ef4) {
            ctx->pc = 0x111F58u;
            goto label_111f58;
        }
    }
    ctx->pc = 0x111EFCu;
label_111efc:
    // 0x111efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f00: 0xc044694  jal         func_111A50
    ctx->pc = 0x111F00u;
    SET_GPR_U32(ctx, 31, 0x111F08u);
    ctx->pc = 0x111A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A50u, 0x111F00u, 0x111F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111F08u;
label_111f08:
    // 0x111f08: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x111f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111f0c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x111f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x111f10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f14: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x111f14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x111f18: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x111F18u;
    SET_GPR_U32(ctx, 31, 0x111F20u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x111F18u, 0x111F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111F20u;
label_111f20:
    // 0x111f20: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x111F20u;
    {
        const bool branch_taken_0x111f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111f20) {
            ctx->pc = 0x111F48u;
            goto label_111f48;
        }
    }
    ctx->pc = 0x111F28u;
    // 0x111f28: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x111f28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f30: 0xc04468c  jal         func_111A30
    ctx->pc = 0x111F30u;
    SET_GPR_U32(ctx, 31, 0x111F38u);
    ctx->pc = 0x111A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A30u, 0x111F30u, 0x111F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111F38u;
label_111f38:
    // 0x111f38: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x111f38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111f3c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x111f3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x111F40u;
    {
        const bool branch_taken_0x111f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x111f40) {
            ctx->pc = 0x111F58u;
            goto label_111f58;
        }
    }
    ctx->pc = 0x111F48u;
label_111f48:
    // 0x111f48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f4c: 0xc044684  jal         func_111A10
    ctx->pc = 0x111F4Cu;
    SET_GPR_U32(ctx, 31, 0x111F54u);
    ctx->pc = 0x111A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A10u, 0x111F4Cu, 0x111F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111F54u;
label_111f54:
    // 0x111f54: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x111f54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_111f58:
    // 0x111f58: 0x1600ffe8  bnez        $s0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x111F58u;
    {
        const bool branch_taken_0x111f58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x111f58) {
            ctx->pc = 0x111EFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111efc;
        }
    }
    ctx->pc = 0x111F60u;
    // 0x111f60: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x111f60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x111f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111f68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x111f68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111f6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x111f6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111f70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x111f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111f74: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x111f74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x111f78: 0x3e00008  jr          $ra
    ctx->pc = 0x111F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111F80u;
}

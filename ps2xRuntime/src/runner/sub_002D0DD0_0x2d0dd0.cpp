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

// Function: sub_002D0DD0
// Address: 0x2d0dd0 - 0x2d0ea0
void sub_002D0DD0_0x2d0dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0DD0_0x2d0dd0");
#endif

    switch (ctx->pc) {
        case 0x2d0df0u: goto label_2d0df0;
        case 0x2d0e14u: goto label_2d0e14;
        case 0x2d0e24u: goto label_2d0e24;
        case 0x2d0e34u: goto label_2d0e34;
        case 0x2d0e44u: goto label_2d0e44;
        case 0x2d0e54u: goto label_2d0e54;
        case 0x2d0e64u: goto label_2d0e64;
        case 0x2d0e74u: goto label_2d0e74;
        case 0x2d0e80u: goto label_2d0e80;
        case 0x2d0e8cu: goto label_2d0e8c;
        default: break;
    }

    ctx->pc = 0x2d0dd0u;

    // 0x2d0dd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d0dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d0dd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d0dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d0dd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d0dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d0ddc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2d0ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2d0de0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2d0de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2d0de4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2d0de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0de8: 0xc0b1110  jal         func_2C4440
    ctx->pc = 0x2D0DE8u;
    SET_GPR_U32(ctx, 31, 0x2D0DF0u);
    ctx->pc = 0x2C4440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4440u, 0x2D0DE8u, 0x2D0DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0DF0u;
label_2d0df0:
    // 0x2d0df0: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2D0DF0u;
    {
        const bool branch_taken_0x2d0df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0df0) {
            ctx->pc = 0x2D0E8Cu;
            goto label_2d0e8c;
        }
    }
    ctx->pc = 0x2D0DF8u;
    // 0x2d0df8: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x2d0df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x2d0dfc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d0dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0e00: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0E00u;
    {
        const bool branch_taken_0x2d0e00 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d0e00) {
            ctx->pc = 0x2D0E14u;
            goto label_2d0e14;
        }
    }
    ctx->pc = 0x2D0E08u;
    // 0x2d0e08: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d0e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0e0c: 0xc0b4ad0  jal         func_2D2B40
    ctx->pc = 0x2D0E0Cu;
    SET_GPR_U32(ctx, 31, 0x2D0E14u);
    ctx->pc = 0x2D2B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2B40u, 0x2D0E0Cu, 0x2D0E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0E14u;
label_2d0e14:
    // 0x2d0e14: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2d0e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0e18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d0e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0e1c: 0xc0b43a8  jal         func_2D0EA0
    ctx->pc = 0x2D0E1Cu;
    SET_GPR_U32(ctx, 31, 0x2D0E24u);
    ctx->pc = 0x2D0EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0EA0u, 0x2D0E1Cu, 0x2D0E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0E24u;
label_2d0e24:
    // 0x2d0e24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d0e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0e28: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2d0e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2d0e2c: 0xc0913e4  jal         func_244F90
    ctx->pc = 0x2D0E2Cu;
    SET_GPR_U32(ctx, 31, 0x2D0E34u);
    ctx->pc = 0x244F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244F90u, 0x2D0E2Cu, 0x2D0E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0E34u;
label_2d0e34:
    // 0x2d0e34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d0e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0e38: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2d0e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2d0e3c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D0E3Cu;
    SET_GPR_U32(ctx, 31, 0x2D0E44u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D0E3Cu, 0x2D0E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0E44u;
label_2d0e44:
    // 0x2d0e44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d0e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0e4c: 0xc0b7940  jal         func_2DE500
    ctx->pc = 0x2D0E4Cu;
    SET_GPR_U32(ctx, 31, 0x2D0E54u);
    ctx->pc = 0x2DE500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE500u, 0x2D0E4Cu, 0x2D0E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0E54u;
label_2d0e54:
    // 0x2d0e54: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d0e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0e58: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2d0e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0e5c: 0xc0b4dd4  jal         func_2D3750
    ctx->pc = 0x2D0E5Cu;
    SET_GPR_U32(ctx, 31, 0x2D0E64u);
    ctx->pc = 0x2D3750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3750u, 0x2D0E5Cu, 0x2D0E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0E64u;
label_2d0e64:
    // 0x2d0e64: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d0e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0e68: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2d0e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0e6c: 0xc0b5388  jal         func_2D4E20
    ctx->pc = 0x2D0E6Cu;
    SET_GPR_U32(ctx, 31, 0x2D0E74u);
    ctx->pc = 0x2D4E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4E20u, 0x2D0E6Cu, 0x2D0E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0E74u;
label_2d0e74:
    // 0x2d0e74: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d0e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0e78: 0xc0b5460  jal         func_2D5180
    ctx->pc = 0x2D0E78u;
    SET_GPR_U32(ctx, 31, 0x2D0E80u);
    ctx->pc = 0x2D5180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5180u, 0x2D0E78u, 0x2D0E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0E80u;
label_2d0e80:
    // 0x2d0e80: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d0e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0e84: 0xc0b57c8  jal         func_2D5F20
    ctx->pc = 0x2D0E84u;
    SET_GPR_U32(ctx, 31, 0x2D0E8Cu);
    ctx->pc = 0x2D5F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5F20u, 0x2D0E84u, 0x2D0E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0E8Cu;
label_2d0e8c:
    // 0x2d0e8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0e90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d0e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0e94: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d0e94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d0e98: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0EA0u;
}

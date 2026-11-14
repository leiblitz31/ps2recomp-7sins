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

// Function: sub_00183EC0
// Address: 0x183ec0 - 0x183f60
void sub_00183EC0_0x183ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183EC0_0x183ec0");
#endif

    switch (ctx->pc) {
        case 0x183eecu: goto label_183eec;
        case 0x183efcu: goto label_183efc;
        case 0x183f10u: goto label_183f10;
        case 0x183f20u: goto label_183f20;
        case 0x183f38u: goto label_183f38;
        default: break;
    }

    ctx->pc = 0x183ec0u;

    // 0x183ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183ec4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x183ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x183ec8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x183ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x183ecc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x183eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x183ed0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x183ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183ed4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x183ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x183ed8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x183ED8u;
    {
        const bool branch_taken_0x183ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x183ed8) {
            ctx->pc = 0x183F44u;
            goto label_183f44;
        }
    }
    ctx->pc = 0x183EE0u;
    // 0x183ee0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x183ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183ee4: 0xc060fe8  jal         func_183FA0
    ctx->pc = 0x183EE4u;
    SET_GPR_U32(ctx, 31, 0x183EECu);
    ctx->pc = 0x183FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183FA0u, 0x183EE4u, 0x183EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183EECu;
label_183eec:
    // 0x183eec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x183eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183ef0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x183ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183ef4: 0xc061dfc  jal         func_1877F0
    ctx->pc = 0x183EF4u;
    SET_GPR_U32(ctx, 31, 0x183EFCu);
    ctx->pc = 0x1877F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1877F0u, 0x183EF4u, 0x183EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183EFCu;
label_183efc:
    // 0x183efc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x183efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183f00: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x183f00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183f04: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x183f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183f08: 0xc060fe0  jal         func_183F80
    ctx->pc = 0x183F08u;
    SET_GPR_U32(ctx, 31, 0x183F10u);
    ctx->pc = 0x183F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183F80u, 0x183F08u, 0x183F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183F10u;
label_183f10:
    // 0x183f10: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x183f10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x183f14: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x183f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183f18: 0xc060fe8  jal         func_183FA0
    ctx->pc = 0x183F18u;
    SET_GPR_U32(ctx, 31, 0x183F20u);
    ctx->pc = 0x183FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183FA0u, 0x183F18u, 0x183F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183F20u;
label_183f20:
    // 0x183f20: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x183f20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x183f24: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x183f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183f28: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x183f28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183f2c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x183f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183f30: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x183F30u;
    SET_GPR_U32(ctx, 31, 0x183F38u);
    ctx->pc = 0x183F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183F60u, 0x183F30u, 0x183F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183F38u;
label_183f38:
    // 0x183f38: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x183f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x183f3c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x183f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183f40: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x183f40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_183f44:
    // 0x183f44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x183f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183f48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183f4c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x183f4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x183f50: 0x3e00008  jr          $ra
    ctx->pc = 0x183F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183F58u;
    // 0x183f58: 0x0  nop
    ctx->pc = 0x183f58u;
    // NOP
    // 0x183f5c: 0x0  nop
    ctx->pc = 0x183f5cu;
    // NOP
    ctx->pc = 0x183f60u;
}

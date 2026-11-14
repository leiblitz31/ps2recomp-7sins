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

// Function: sub_00235BF0
// Address: 0x235bf0 - 0x235c90
void sub_00235BF0_0x235bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235BF0_0x235bf0");
#endif

    switch (ctx->pc) {
        case 0x235c08u: goto label_235c08;
        case 0x235c38u: goto label_235c38;
        case 0x235c48u: goto label_235c48;
        default: break;
    }

    ctx->pc = 0x235bf0u;

    // 0x235bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x235bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x235bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x235bf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x235bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x235bfc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x235bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235c00: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x235C00u;
    SET_GPR_U32(ctx, 31, 0x235C08u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x235C00u, 0x235C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235C08u;
label_235c08:
    // 0x235c08: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x235c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x235c0c: 0x24635520  addiu       $v1, $v1, 0x5520
    ctx->pc = 0x235c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21792));
    // 0x235c10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235c14: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x235c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x235c18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235c1c: 0xa0400028  sb          $zero, 0x28($v0)
    ctx->pc = 0x235c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x235c20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235c24: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x235c24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x235c28: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235c2c: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x235c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x235c30: 0xc041b48  jal         func_106D20
    ctx->pc = 0x235C30u;
    SET_GPR_U32(ctx, 31, 0x235C38u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x235C30u, 0x235C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235C38u;
label_235c38:
    // 0x235c38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235c3c: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x235c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x235c40: 0xc041b48  jal         func_106D20
    ctx->pc = 0x235C40u;
    SET_GPR_U32(ctx, 31, 0x235C48u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x235C40u, 0x235C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235C48u;
label_235c48:
    // 0x235c48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235c4c: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x235c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x235c50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235c54: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x235c54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x235c58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235c5c: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x235c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x235c60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235c64: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x235c64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    // 0x235c68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235c6c: 0xaf82bbb4  sw          $v0, -0x444C($gp)
    ctx->pc = 0x235c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949812), GPR_U32(ctx, 2));
    // 0x235c70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235c74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235c78: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x235c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x235c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x235C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235C84u;
    // 0x235c84: 0x0  nop
    ctx->pc = 0x235c84u;
    // NOP
    // 0x235c88: 0x0  nop
    ctx->pc = 0x235c88u;
    // NOP
    // 0x235c8c: 0x0  nop
    ctx->pc = 0x235c8cu;
    // NOP
    ctx->pc = 0x235c90u;
}

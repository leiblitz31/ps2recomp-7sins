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

// Function: sub_00101D10
// Address: 0x101d10 - 0x101d80
void sub_00101D10_0x101d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101D10_0x101d10");
#endif

    switch (ctx->pc) {
        case 0x101d28u: goto label_101d28;
        default: break;
    }

    ctx->pc = 0x101d10u;

    // 0x101d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x101d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x101d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101d18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x101d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x101d1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x101d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101d20: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x101D20u;
    SET_GPR_U32(ctx, 31, 0x101D28u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x101D20u, 0x101D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101D28u;
label_101d28:
    // 0x101d28: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x101d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x101d2c: 0x24633250  addiu       $v1, $v1, 0x3250
    ctx->pc = 0x101d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12880));
    // 0x101d30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x101d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101d34: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x101d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x101d38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x101d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101d3c: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x101d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x101d40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x101d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101d44: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x101d44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x101d48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x101d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101d4c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x101d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x101d50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x101d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101d54: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x101d54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x101d58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x101d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101d5c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x101d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x101d60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x101d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101d64: 0xaf82b998  sw          $v0, -0x4668($gp)
    ctx->pc = 0x101d64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949272), GPR_U32(ctx, 2));
    // 0x101d68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x101d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101d6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101d70: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x101d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x101d74: 0x3e00008  jr          $ra
    ctx->pc = 0x101D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101D7Cu;
    // 0x101d7c: 0x0  nop
    ctx->pc = 0x101d7cu;
    // NOP
    ctx->pc = 0x101d80u;
}

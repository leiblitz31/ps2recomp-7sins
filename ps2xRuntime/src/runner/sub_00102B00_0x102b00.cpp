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

// Function: sub_00102B00
// Address: 0x102b00 - 0x102b90
void sub_00102B00_0x102b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102B00_0x102b00");
#endif

    switch (ctx->pc) {
        case 0x102b18u: goto label_102b18;
        case 0x102b74u: goto label_102b74;
        default: break;
    }

    ctx->pc = 0x102b00u;

    // 0x102b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x102b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x102b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102b08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x102b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x102b0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x102b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102b10: 0xc084f04  jal         func_213C10
    ctx->pc = 0x102B10u;
    SET_GPR_U32(ctx, 31, 0x102B18u);
    ctx->pc = 0x213C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213C10u, 0x102B10u, 0x102B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B18u;
label_102b18:
    // 0x102b18: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x102b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x102b1c: 0x24633280  addiu       $v1, $v1, 0x3280
    ctx->pc = 0x102b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12928));
    // 0x102b20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102b24: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x102b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x102b28: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x102b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x102b2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102b30: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x102b30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x102b34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102b38: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x102b38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x102b3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102b40: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x102b40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x102b44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102b48: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x102b48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x102b4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102b50: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x102b50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x102b54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102b58: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x102b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x102b5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102b60: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x102b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x102b64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102b68: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x102b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x102b6c: 0xc040b6c  jal         func_102DB0
    ctx->pc = 0x102B6Cu;
    SET_GPR_U32(ctx, 31, 0x102B74u);
    ctx->pc = 0x102DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102DB0u, 0x102B6Cu, 0x102B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B74u;
label_102b74:
    // 0x102b74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102b78: 0xaf82b99c  sw          $v0, -0x4664($gp)
    ctx->pc = 0x102b78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949276), GPR_U32(ctx, 2));
    // 0x102b7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102b80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102b84: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x102b84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x102b88: 0x3e00008  jr          $ra
    ctx->pc = 0x102B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102B90u;
}

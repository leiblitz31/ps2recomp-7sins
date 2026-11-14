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

// Function: sub_0010CB10
// Address: 0x10cb10 - 0x10cb80
void sub_0010CB10_0x10cb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CB10_0x10cb10");
#endif

    switch (ctx->pc) {
        case 0x10cb64u: goto label_10cb64;
        default: break;
    }

    ctx->pc = 0x10cb10u;

    // 0x10cb10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10cb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10cb14: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10cb14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10cb18: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x10cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x10cb1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10cb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cb20: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cb24: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x10cb24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x10cb28: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10cb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10cb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x10CB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CB34u;
    // 0x10cb34: 0x0  nop
    ctx->pc = 0x10cb34u;
    // NOP
    // 0x10cb38: 0x0  nop
    ctx->pc = 0x10cb38u;
    // NOP
    // 0x10cb3c: 0x0  nop
    ctx->pc = 0x10cb3cu;
    // NOP
    // 0x10cb40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10cb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10cb44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10cb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10cb48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10cb48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10cb4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10cb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10cb50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cb54: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x10cb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x10cb58: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x10cb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10cb5c: 0xc041018  jal         func_104060
    ctx->pc = 0x10CB5Cu;
    SET_GPR_U32(ctx, 31, 0x10CB64u);
    ctx->pc = 0x104060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104060u, 0x10CB5Cu, 0x10CB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CB64u;
label_10cb64:
    // 0x10cb64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10cb64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cb68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10cb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10cb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x10CB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CB74u;
    // 0x10cb74: 0x0  nop
    ctx->pc = 0x10cb74u;
    // NOP
    // 0x10cb78: 0x0  nop
    ctx->pc = 0x10cb78u;
    // NOP
    // 0x10cb7c: 0x0  nop
    ctx->pc = 0x10cb7cu;
    // NOP
    ctx->pc = 0x10cb80u;
}

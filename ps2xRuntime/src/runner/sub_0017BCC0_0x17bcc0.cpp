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

// Function: sub_0017BCC0
// Address: 0x17bcc0 - 0x17bd10
void sub_0017BCC0_0x17bcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BCC0_0x17bcc0");
#endif

    switch (ctx->pc) {
        case 0x17bcf8u: goto label_17bcf8;
        default: break;
    }

    ctx->pc = 0x17bcc0u;

    // 0x17bcc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17bcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17bcc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17bcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bcc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17bcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17bccc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x17bcccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x17bcd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17bcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bcd4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17bcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17bcd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bcdc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17bcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17bce0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bce4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x17bce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x17bce8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x17bce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bcec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17bcecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bcf0: 0xc05ef44  jal         func_17BD10
    ctx->pc = 0x17BCF0u;
    SET_GPR_U32(ctx, 31, 0x17BCF8u);
    ctx->pc = 0x17BD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BD10u, 0x17BCF0u, 0x17BCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BCF8u;
label_17bcf8:
    // 0x17bcf8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bcfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bcfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bd00: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17bd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17bd04: 0x3e00008  jr          $ra
    ctx->pc = 0x17BD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BD0Cu;
    // 0x17bd0c: 0x0  nop
    ctx->pc = 0x17bd0cu;
    // NOP
    ctx->pc = 0x17bd10u;
}

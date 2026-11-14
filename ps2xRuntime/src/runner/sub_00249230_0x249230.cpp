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

// Function: sub_00249230
// Address: 0x249230 - 0x249270
void sub_00249230_0x249230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249230_0x249230");
#endif

    switch (ctx->pc) {
        case 0x249250u: goto label_249250;
        default: break;
    }

    ctx->pc = 0x249230u;

    // 0x249230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x249230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x249234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x249238: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x249238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24923c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x24923cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x249240: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x249240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249244: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x249244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x249248: 0xc09249c  jal         func_249270
    ctx->pc = 0x249248u;
    SET_GPR_U32(ctx, 31, 0x249250u);
    ctx->pc = 0x249270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249270u, 0x249248u, 0x249250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249250u;
label_249250:
    // 0x249250: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x249250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249258: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x249258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24925c: 0x3e00008  jr          $ra
    ctx->pc = 0x24925Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24925Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249264u;
    // 0x249264: 0x0  nop
    ctx->pc = 0x249264u;
    // NOP
    // 0x249268: 0x0  nop
    ctx->pc = 0x249268u;
    // NOP
    // 0x24926c: 0x0  nop
    ctx->pc = 0x24926cu;
    // NOP
    ctx->pc = 0x249270u;
}

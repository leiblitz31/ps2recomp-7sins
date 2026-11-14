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

// Function: sub_00123620
// Address: 0x123620 - 0x123670
void sub_00123620_0x123620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123620_0x123620");
#endif

    switch (ctx->pc) {
        case 0x123644u: goto label_123644;
        default: break;
    }

    ctx->pc = 0x123620u;

    // 0x123620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x123620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x123624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x123624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x123628: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x123628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12362c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x12362cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x123630: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x123630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x123634: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x123634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123638: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x123638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12363c: 0xc048d9c  jal         func_123670
    ctx->pc = 0x12363Cu;
    SET_GPR_U32(ctx, 31, 0x123644u);
    ctx->pc = 0x123670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123670u, 0x12363Cu, 0x123644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123644u;
label_123644:
    // 0x123644: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x123644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x123648: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x123648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12364c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x12364cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x123650: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x123650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x123654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123658: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x123658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12365c: 0x3e00008  jr          $ra
    ctx->pc = 0x12365Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12365Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123664u;
    // 0x123664: 0x0  nop
    ctx->pc = 0x123664u;
    // NOP
    // 0x123668: 0x0  nop
    ctx->pc = 0x123668u;
    // NOP
    // 0x12366c: 0x0  nop
    ctx->pc = 0x12366cu;
    // NOP
    ctx->pc = 0x123670u;
}

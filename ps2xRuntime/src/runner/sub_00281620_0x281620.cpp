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

// Function: sub_00281620
// Address: 0x281620 - 0x281670
void sub_00281620_0x281620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281620_0x281620");
#endif

    switch (ctx->pc) {
        case 0x281644u: goto label_281644;
        default: break;
    }

    ctx->pc = 0x281620u;

    // 0x281620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x281620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x281624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281628: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x281628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28162c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28162cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x281630: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x281630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x281634: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x281634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281638: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x281638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28163c: 0xc0a059c  jal         func_281670
    ctx->pc = 0x28163Cu;
    SET_GPR_U32(ctx, 31, 0x281644u);
    ctx->pc = 0x281670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281670u, 0x28163Cu, 0x281644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281644u;
label_281644:
    // 0x281644: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x281644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281648: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x281648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28164c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28164cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x281650: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x281650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281658: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x281658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28165c: 0x3e00008  jr          $ra
    ctx->pc = 0x28165Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28165Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281664u;
    // 0x281664: 0x0  nop
    ctx->pc = 0x281664u;
    // NOP
    // 0x281668: 0x0  nop
    ctx->pc = 0x281668u;
    // NOP
    // 0x28166c: 0x0  nop
    ctx->pc = 0x28166cu;
    // NOP
    ctx->pc = 0x281670u;
}

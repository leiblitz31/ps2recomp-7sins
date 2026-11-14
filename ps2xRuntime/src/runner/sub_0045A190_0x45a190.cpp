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

// Function: sub_0045A190
// Address: 0x45a190 - 0x45a1d0
void sub_0045A190_0x45a190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045A190_0x45a190");
#endif

    switch (ctx->pc) {
        case 0x45a1acu: goto label_45a1ac;
        default: break;
    }

    ctx->pc = 0x45a190u;

    // 0x45a190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x45a190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x45a194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x45a194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x45a198: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x45a198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45a19c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x45a19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x45a1a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x45a1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45a1a4: 0xc116874  jal         func_45A1D0
    ctx->pc = 0x45A1A4u;
    SET_GPR_U32(ctx, 31, 0x45A1ACu);
    ctx->pc = 0x45A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A1D0u, 0x45A1A4u, 0x45A1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A1ACu;
label_45a1ac:
    // 0x45a1ac: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x45a1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45a1b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x45a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x45a1b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45a1b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45a1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45a1bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x45a1bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x45a1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x45A1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45A1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45A1C8u;
    // 0x45a1c8: 0x0  nop
    ctx->pc = 0x45a1c8u;
    // NOP
    // 0x45a1cc: 0x0  nop
    ctx->pc = 0x45a1ccu;
    // NOP
    ctx->pc = 0x45a1d0u;
}

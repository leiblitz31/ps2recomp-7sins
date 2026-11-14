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

// Function: sub_00102A40
// Address: 0x102a40 - 0x102a80
void sub_00102A40_0x102a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102A40_0x102a40");
#endif

    switch (ctx->pc) {
        case 0x102a5cu: goto label_102a5c;
        default: break;
    }

    ctx->pc = 0x102a40u;

    // 0x102a40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x102a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x102a44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102a48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x102a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x102a4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x102a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x102a50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x102a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102a54: 0xc040aa0  jal         func_102A80
    ctx->pc = 0x102A54u;
    SET_GPR_U32(ctx, 31, 0x102A5Cu);
    ctx->pc = 0x102A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A80u, 0x102A54u, 0x102A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102A5Cu;
label_102a5c:
    // 0x102a5c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x102a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102a60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x102a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x102a64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102a68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102a6c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x102a6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x102a70: 0x3e00008  jr          $ra
    ctx->pc = 0x102A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102A78u;
    // 0x102a78: 0x0  nop
    ctx->pc = 0x102a78u;
    // NOP
    // 0x102a7c: 0x0  nop
    ctx->pc = 0x102a7cu;
    // NOP
    ctx->pc = 0x102a80u;
}

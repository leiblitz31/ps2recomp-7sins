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

// Function: sub_0017C6A0
// Address: 0x17c6a0 - 0x17c6e0
void sub_0017C6A0_0x17c6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C6A0_0x17c6a0");
#endif

    switch (ctx->pc) {
        case 0x17c6bcu: goto label_17c6bc;
        default: break;
    }

    ctx->pc = 0x17c6a0u;

    // 0x17c6a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17c6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17c6a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c6a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17c6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17c6ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x17c6acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x17c6b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17c6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c6b4: 0xc05f1b8  jal         func_17C6E0
    ctx->pc = 0x17C6B4u;
    SET_GPR_U32(ctx, 31, 0x17C6BCu);
    ctx->pc = 0x17C6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6E0u, 0x17C6B4u, 0x17C6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C6BCu;
label_17c6bc:
    // 0x17c6bc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17c6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c6c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17c6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17c6c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17c6c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c6cc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17c6ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x17C6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C6D8u;
    // 0x17c6d8: 0x0  nop
    ctx->pc = 0x17c6d8u;
    // NOP
    // 0x17c6dc: 0x0  nop
    ctx->pc = 0x17c6dcu;
    // NOP
    ctx->pc = 0x17c6e0u;
}

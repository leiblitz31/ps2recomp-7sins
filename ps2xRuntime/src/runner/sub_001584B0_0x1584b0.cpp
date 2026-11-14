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

// Function: sub_001584B0
// Address: 0x1584b0 - 0x1584f0
void sub_001584B0_0x1584b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001584B0_0x1584b0");
#endif

    switch (ctx->pc) {
        case 0x1584ccu: goto label_1584cc;
        default: break;
    }

    ctx->pc = 0x1584b0u;

    // 0x1584b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1584b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1584b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1584b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1584b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1584b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1584bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1584bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1584c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1584c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1584c4: 0xc056144  jal         func_158510
    ctx->pc = 0x1584C4u;
    SET_GPR_U32(ctx, 31, 0x1584CCu);
    ctx->pc = 0x158510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158510u, 0x1584C4u, 0x1584CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1584CCu;
label_1584cc:
    // 0x1584cc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1584ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1584d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1584d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1584d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1584d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1584d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1584d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1584dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1584dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1584e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1584E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1584E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1584E8u;
    // 0x1584e8: 0x0  nop
    ctx->pc = 0x1584e8u;
    // NOP
    // 0x1584ec: 0x0  nop
    ctx->pc = 0x1584ecu;
    // NOP
    ctx->pc = 0x1584f0u;
}

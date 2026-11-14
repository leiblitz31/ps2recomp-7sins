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

// Function: sub_0046C5C0
// Address: 0x46c5c0 - 0x46c600
void sub_0046C5C0_0x46c5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C5C0_0x46c5c0");
#endif

    switch (ctx->pc) {
        case 0x46c5dcu: goto label_46c5dc;
        default: break;
    }

    ctx->pc = 0x46c5c0u;

    // 0x46c5c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46c5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46c5c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46c5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46c5c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46c5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46c5cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46c5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46c5d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46c5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c5d4: 0xc11b180  jal         func_46C600
    ctx->pc = 0x46C5D4u;
    SET_GPR_U32(ctx, 31, 0x46C5DCu);
    ctx->pc = 0x46C600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C600u, 0x46C5D4u, 0x46C5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C5DCu;
label_46c5dc:
    // 0x46c5dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x46c5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c5e0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x46c5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x46c5e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x46c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x46c5e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46c5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46c5ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46c5ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46c5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x46C5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C5F8u;
    // 0x46c5f8: 0x0  nop
    ctx->pc = 0x46c5f8u;
    // NOP
    // 0x46c5fc: 0x0  nop
    ctx->pc = 0x46c5fcu;
    // NOP
    ctx->pc = 0x46c600u;
}

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

// Function: sub_0024D4B0
// Address: 0x24d4b0 - 0x24d4e0
void sub_0024D4B0_0x24d4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D4B0_0x24d4b0");
#endif

    switch (ctx->pc) {
        case 0x24d4ccu: goto label_24d4cc;
        default: break;
    }

    ctx->pc = 0x24d4b0u;

    // 0x24d4b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24d4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24d4b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24d4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24d4b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x24d4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24d4bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24d4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d4c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x24d4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24d4c4: 0xc094d94  jal         func_253650
    ctx->pc = 0x24D4C4u;
    SET_GPR_U32(ctx, 31, 0x24D4CCu);
    ctx->pc = 0x253650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253650u, 0x24D4C4u, 0x24D4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D4CCu;
label_24d4cc:
    // 0x24d4cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d4d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24d4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24d4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x24D4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D4DCu;
    // 0x24d4dc: 0x0  nop
    ctx->pc = 0x24d4dcu;
    // NOP
    ctx->pc = 0x24d4e0u;
}

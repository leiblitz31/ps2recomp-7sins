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

// Function: sub_00123550
// Address: 0x123550 - 0x123590
void sub_00123550_0x123550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123550_0x123550");
#endif

    switch (ctx->pc) {
        case 0x123568u: goto label_123568;
        case 0x123578u: goto label_123578;
        default: break;
    }

    ctx->pc = 0x123550u;

    // 0x123550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x123550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x123554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x123554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x123558: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x123558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x12355c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x12355cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x123560: 0xc048da4  jal         func_123690
    ctx->pc = 0x123560u;
    SET_GPR_U32(ctx, 31, 0x123568u);
    ctx->pc = 0x123690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123690u, 0x123560u, 0x123568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123568u;
label_123568:
    // 0x123568: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x123568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12356c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12356cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123570: 0xc048d64  jal         func_123590
    ctx->pc = 0x123570u;
    SET_GPR_U32(ctx, 31, 0x123578u);
    ctx->pc = 0x123590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123590u, 0x123570u, 0x123578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123578u;
label_123578:
    // 0x123578: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x123578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12357c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12357cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123580: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x123580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x123584: 0x3e00008  jr          $ra
    ctx->pc = 0x123584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12358Cu;
    // 0x12358c: 0x0  nop
    ctx->pc = 0x12358cu;
    // NOP
    ctx->pc = 0x123590u;
}

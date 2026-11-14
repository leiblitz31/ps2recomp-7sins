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

// Function: sub_00194EF0
// Address: 0x194ef0 - 0x194f30
void sub_00194EF0_0x194ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194EF0_0x194ef0");
#endif

    switch (ctx->pc) {
        case 0x194f14u: goto label_194f14;
        default: break;
    }

    ctx->pc = 0x194ef0u;

    // 0x194ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x194ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x194ef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194ef8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x194ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x194efc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x194efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x194f00: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x194f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194f04: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x194f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194f08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x194f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194f0c: 0xc0653cc  jal         func_194F30
    ctx->pc = 0x194F0Cu;
    SET_GPR_U32(ctx, 31, 0x194F14u);
    ctx->pc = 0x194F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194F30u, 0x194F0Cu, 0x194F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194F14u;
label_194f14:
    // 0x194f14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194f18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x194f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x194f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x194F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194F24u;
    // 0x194f24: 0x0  nop
    ctx->pc = 0x194f24u;
    // NOP
    // 0x194f28: 0x0  nop
    ctx->pc = 0x194f28u;
    // NOP
    // 0x194f2c: 0x0  nop
    ctx->pc = 0x194f2cu;
    // NOP
    ctx->pc = 0x194f30u;
}

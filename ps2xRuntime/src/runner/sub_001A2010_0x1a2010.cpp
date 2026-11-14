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

// Function: sub_001A2010
// Address: 0x1a2010 - 0x1a2050
void sub_001A2010_0x1a2010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2010_0x1a2010");
#endif

    switch (ctx->pc) {
        case 0x1a2028u: goto label_1a2028;
        case 0x1a2038u: goto label_1a2038;
        default: break;
    }

    ctx->pc = 0x1a2010u;

    // 0x1a2010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a2010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a2014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2018: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1a2018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1a201c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1a201cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1a2020: 0xc068854  jal         func_1A2150
    ctx->pc = 0x1A2020u;
    SET_GPR_U32(ctx, 31, 0x1A2028u);
    ctx->pc = 0x1A2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2150u, 0x1A2020u, 0x1A2028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2028u;
label_1a2028:
    // 0x1a2028: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a2028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a202c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a202cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2030: 0xc068814  jal         func_1A2050
    ctx->pc = 0x1A2030u;
    SET_GPR_U32(ctx, 31, 0x1A2038u);
    ctx->pc = 0x1A2050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2050u, 0x1A2030u, 0x1A2038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2038u;
label_1a2038:
    // 0x1a2038: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1a2038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a203c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a203cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2040: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a2040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a2044: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A204Cu;
    // 0x1a204c: 0x0  nop
    ctx->pc = 0x1a204cu;
    // NOP
    ctx->pc = 0x1a2050u;
}

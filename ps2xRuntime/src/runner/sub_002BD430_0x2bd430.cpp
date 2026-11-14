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

// Function: sub_002BD430
// Address: 0x2bd430 - 0x2bd480
void sub_002BD430_0x2bd430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD430_0x2bd430");
#endif

    switch (ctx->pc) {
        case 0x2bd450u: goto label_2bd450;
        case 0x2bd45cu: goto label_2bd45c;
        case 0x2bd46cu: goto label_2bd46c;
        default: break;
    }

    ctx->pc = 0x2bd430u;

    // 0x2bd430: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bd430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bd434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bd434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bd438: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2bd438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2bd43c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2bd43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2bd440: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x2bd440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2bd444: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2bd444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bd448: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x2BD448u;
    SET_GPR_U32(ctx, 31, 0x2BD450u);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x2BD448u, 0x2BD450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD450u;
label_2bd450:
    // 0x2bd450: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2bd450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bd454: 0xc078a3c  jal         func_1E28F0
    ctx->pc = 0x2BD454u;
    SET_GPR_U32(ctx, 31, 0x2BD45Cu);
    ctx->pc = 0x1E28F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E28F0u, 0x2BD454u, 0x2BD45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD45Cu;
label_2bd45c:
    // 0x2bd45c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2bd45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd460: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x2bd460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2bd464: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x2BD464u;
    SET_GPR_U32(ctx, 31, 0x2BD46Cu);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x2BD464u, 0x2BD46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD46Cu;
label_2bd46c:
    // 0x2bd46c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bd46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd470: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2bd470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bd474: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD47Cu;
    // 0x2bd47c: 0x0  nop
    ctx->pc = 0x2bd47cu;
    // NOP
    ctx->pc = 0x2bd480u;
}

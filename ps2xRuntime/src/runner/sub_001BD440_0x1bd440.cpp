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

// Function: sub_001BD440
// Address: 0x1bd440 - 0x1bd480
void sub_001BD440_0x1bd440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD440_0x1bd440");
#endif

    switch (ctx->pc) {
        case 0x1bd458u: goto label_1bd458;
        case 0x1bd468u: goto label_1bd468;
        default: break;
    }

    ctx->pc = 0x1bd440u;

    // 0x1bd440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bd440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bd444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bd444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bd448: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1bd448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1bd44c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1bd44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1bd450: 0xc06f560  jal         func_1BD580
    ctx->pc = 0x1BD450u;
    SET_GPR_U32(ctx, 31, 0x1BD458u);
    ctx->pc = 0x1BD580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD580u, 0x1BD450u, 0x1BD458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD458u;
label_1bd458:
    // 0x1bd458: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1bd458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd45c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bd45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd460: 0xc06f520  jal         func_1BD480
    ctx->pc = 0x1BD460u;
    SET_GPR_U32(ctx, 31, 0x1BD468u);
    ctx->pc = 0x1BD480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD480u, 0x1BD460u, 0x1BD468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD468u;
label_1bd468:
    // 0x1bd468: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1bd468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd46c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bd46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd470: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1bd470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bd474: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD47Cu;
    // 0x1bd47c: 0x0  nop
    ctx->pc = 0x1bd47cu;
    // NOP
    ctx->pc = 0x1bd480u;
}

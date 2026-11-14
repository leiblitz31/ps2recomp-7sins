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

// Function: sub_0018C510
// Address: 0x18c510 - 0x18c550
void sub_0018C510_0x18c510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C510_0x18c510");
#endif

    switch (ctx->pc) {
        case 0x18c534u: goto label_18c534;
        default: break;
    }

    ctx->pc = 0x18c510u;

    // 0x18c510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18c510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18c514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c518: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18c518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18c51c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18c51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x18c520: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18c520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c524: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x18c524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c528: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18c528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c52c: 0xc063154  jal         func_18C550
    ctx->pc = 0x18C52Cu;
    SET_GPR_U32(ctx, 31, 0x18C534u);
    ctx->pc = 0x18C550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C550u, 0x18C52Cu, 0x18C534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C534u;
label_18c534:
    // 0x18c534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c538: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18c538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18c53c: 0x3e00008  jr          $ra
    ctx->pc = 0x18C53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C544u;
    // 0x18c544: 0x0  nop
    ctx->pc = 0x18c544u;
    // NOP
    // 0x18c548: 0x0  nop
    ctx->pc = 0x18c548u;
    // NOP
    // 0x18c54c: 0x0  nop
    ctx->pc = 0x18c54cu;
    // NOP
    ctx->pc = 0x18c550u;
}

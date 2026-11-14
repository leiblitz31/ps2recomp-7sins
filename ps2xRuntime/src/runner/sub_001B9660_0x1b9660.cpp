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

// Function: sub_001B9660
// Address: 0x1b9660 - 0x1b9690
void sub_001B9660_0x1b9660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9660_0x1b9660");
#endif

    switch (ctx->pc) {
        case 0x1b967cu: goto label_1b967c;
        default: break;
    }

    ctx->pc = 0x1b9660u;

    // 0x1b9660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b9660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b9664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9668: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b9668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b966c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b966cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9670: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b9670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b9674: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x1B9674u;
    SET_GPR_U32(ctx, 31, 0x1B967Cu);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x1B9674u, 0x1B967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B967Cu;
label_1b967c:
    // 0x1b967c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b967cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9680: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1b9680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b9684: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B968Cu;
    // 0x1b968c: 0x0  nop
    ctx->pc = 0x1b968cu;
    // NOP
    ctx->pc = 0x1b9690u;
}

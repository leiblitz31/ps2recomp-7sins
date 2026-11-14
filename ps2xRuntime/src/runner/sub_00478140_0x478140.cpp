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

// Function: sub_00478140
// Address: 0x478140 - 0x478180
void sub_00478140_0x478140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00478140_0x478140");
#endif

    switch (ctx->pc) {
        case 0x478164u: goto label_478164;
        default: break;
    }

    ctx->pc = 0x478140u;

    // 0x478140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x478140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x478144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x478144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x478148: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x478148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x47814c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x47814cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478150: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x478150u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x478154: 0x24a58180  addiu       $a1, $a1, -0x7E80
    ctx->pc = 0x478154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934912));
    // 0x478158: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x478158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47815c: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x47815Cu;
    SET_GPR_U32(ctx, 31, 0x478164u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x47815Cu, 0x478164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478164u;
label_478164:
    // 0x478164: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x478164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x478168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47816c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x47816cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x478170: 0x3e00008  jr          $ra
    ctx->pc = 0x478170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x478170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x478178u;
    // 0x478178: 0x0  nop
    ctx->pc = 0x478178u;
    // NOP
    // 0x47817c: 0x0  nop
    ctx->pc = 0x47817cu;
    // NOP
    ctx->pc = 0x478180u;
}

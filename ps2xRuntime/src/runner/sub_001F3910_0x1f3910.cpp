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

// Function: sub_001F3910
// Address: 0x1f3910 - 0x1f3960
void sub_001F3910_0x1f3910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3910_0x1f3910");
#endif

    switch (ctx->pc) {
        case 0x1f392cu: goto label_1f392c;
        case 0x1f3940u: goto label_1f3940;
        case 0x1f3950u: goto label_1f3950;
        default: break;
    }

    ctx->pc = 0x1f3910u;

    // 0x1f3910: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f3910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f3914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f3914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f3918: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1f3918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1f391c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1f391cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1f3920: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f3920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f3924: 0xc041b48  jal         func_106D20
    ctx->pc = 0x1F3924u;
    SET_GPR_U32(ctx, 31, 0x1F392Cu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x1F3924u, 0x1F392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F392Cu;
label_1f392c:
    // 0x1f392c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f392cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3930: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1f3930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3934: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1f3934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f3938: 0xc07ce58  jal         func_1F3960
    ctx->pc = 0x1F3938u;
    SET_GPR_U32(ctx, 31, 0x1F3940u);
    ctx->pc = 0x1F3960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3960u, 0x1F3938u, 0x1F3940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3940u;
label_1f3940:
    // 0x1f3940: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f3940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f3944: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f3944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f3948: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1F3948u;
    SET_GPR_U32(ctx, 31, 0x1F3950u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1F3948u, 0x1F3950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3950u;
label_1f3950:
    // 0x1f3950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f3950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3954: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1f3954u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f3958: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3960u;
}

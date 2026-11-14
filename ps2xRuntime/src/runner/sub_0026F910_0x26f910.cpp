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

// Function: sub_0026F910
// Address: 0x26f910 - 0x26f960
void sub_0026F910_0x26f910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F910_0x26f910");
#endif

    switch (ctx->pc) {
        case 0x26f930u: goto label_26f930;
        case 0x26f948u: goto label_26f948;
        default: break;
    }

    ctx->pc = 0x26f910u;

    // 0x26f910: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26f910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x26f914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26f914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26f918: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x26f918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x26f91c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x26f91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x26f920: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x26f920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x26f924: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x26f924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x26f928: 0xc09be74  jal         func_26F9D0
    ctx->pc = 0x26F928u;
    SET_GPR_U32(ctx, 31, 0x26F930u);
    ctx->pc = 0x26F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F9D0u, 0x26F928u, 0x26F930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F930u;
label_26f930:
    // 0x26f930: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x26f930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26f934: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x26f934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26f938: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x26f938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26f93c: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x26f93cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x26f940: 0xc09be58  jal         func_26F960
    ctx->pc = 0x26F940u;
    SET_GPR_U32(ctx, 31, 0x26F948u);
    ctx->pc = 0x26F960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F960u, 0x26F940u, 0x26F948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F948u;
label_26f948:
    // 0x26f948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26f948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f94c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x26f94cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26f950: 0x3e00008  jr          $ra
    ctx->pc = 0x26F950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F958u;
    // 0x26f958: 0x0  nop
    ctx->pc = 0x26f958u;
    // NOP
    // 0x26f95c: 0x0  nop
    ctx->pc = 0x26f95cu;
    // NOP
    ctx->pc = 0x26f960u;
}

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

// Function: sub_00184390
// Address: 0x184390 - 0x1843d0
void sub_00184390_0x184390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184390_0x184390");
#endif

    switch (ctx->pc) {
        case 0x1843a8u: goto label_1843a8;
        case 0x1843b8u: goto label_1843b8;
        default: break;
    }

    ctx->pc = 0x184390u;

    // 0x184390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x184390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x184394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184398: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x184398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x18439c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x18439cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1843a0: 0xc061134  jal         func_1844D0
    ctx->pc = 0x1843A0u;
    SET_GPR_U32(ctx, 31, 0x1843A8u);
    ctx->pc = 0x1844D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1844D0u, 0x1843A0u, 0x1843A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1843A8u;
label_1843a8:
    // 0x1843a8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1843a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1843ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1843acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1843b0: 0xc0610f4  jal         func_1843D0
    ctx->pc = 0x1843B0u;
    SET_GPR_U32(ctx, 31, 0x1843B8u);
    ctx->pc = 0x1843D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1843D0u, 0x1843B0u, 0x1843B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1843B8u;
label_1843b8:
    // 0x1843b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1843b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1843bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1843bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1843c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1843c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1843c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1843C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1843C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1843CCu;
    // 0x1843cc: 0x0  nop
    ctx->pc = 0x1843ccu;
    // NOP
    ctx->pc = 0x1843d0u;
}

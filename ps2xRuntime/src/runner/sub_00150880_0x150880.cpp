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

// Function: sub_00150880
// Address: 0x150880 - 0x1508d0
void sub_00150880_0x150880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150880_0x150880");
#endif

    switch (ctx->pc) {
        case 0x1508a4u: goto label_1508a4;
        case 0x1508b4u: goto label_1508b4;
        default: break;
    }

    ctx->pc = 0x150880u;

    // 0x150880: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x150880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x150884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150888: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x150888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15088c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x15088cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x150890: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x150890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x150894: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x150894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150898: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x150898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15089c: 0xc054234  jal         func_1508D0
    ctx->pc = 0x15089Cu;
    SET_GPR_U32(ctx, 31, 0x1508A4u);
    ctx->pc = 0x1508D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1508D0u, 0x15089Cu, 0x1508A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1508A4u;
label_1508a4:
    // 0x1508a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1508a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1508a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1508a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1508ac: 0xc052a3c  jal         func_14A8F0
    ctx->pc = 0x1508ACu;
    SET_GPR_U32(ctx, 31, 0x1508B4u);
    ctx->pc = 0x14A8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A8F0u, 0x1508ACu, 0x1508B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1508B4u;
label_1508b4:
    // 0x1508b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1508b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1508b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1508b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1508bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1508BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1508BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1508C4u;
    // 0x1508c4: 0x0  nop
    ctx->pc = 0x1508c4u;
    // NOP
    // 0x1508c8: 0x0  nop
    ctx->pc = 0x1508c8u;
    // NOP
    // 0x1508cc: 0x0  nop
    ctx->pc = 0x1508ccu;
    // NOP
    ctx->pc = 0x1508d0u;
}

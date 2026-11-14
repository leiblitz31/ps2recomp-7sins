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

// Function: sub_002626F0
// Address: 0x2626f0 - 0x262720
void sub_002626F0_0x2626f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002626F0_0x2626f0");
#endif

    switch (ctx->pc) {
        case 0x26270cu: goto label_26270c;
        default: break;
    }

    ctx->pc = 0x2626f0u;

    // 0x2626f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2626f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2626f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2626f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2626f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2626f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2626fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2626fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262700: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x262700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x262704: 0xc0989c8  jal         func_262720
    ctx->pc = 0x262704u;
    SET_GPR_U32(ctx, 31, 0x26270Cu);
    ctx->pc = 0x262720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262720u, 0x262704u, 0x26270Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26270Cu;
label_26270c:
    // 0x26270c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26270cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262710: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x262710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x262714: 0x3e00008  jr          $ra
    ctx->pc = 0x262714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26271Cu;
    // 0x26271c: 0x0  nop
    ctx->pc = 0x26271cu;
    // NOP
    ctx->pc = 0x262720u;
}

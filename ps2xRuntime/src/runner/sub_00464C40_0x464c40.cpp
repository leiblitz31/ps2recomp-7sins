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

// Function: sub_00464C40
// Address: 0x464c40 - 0x464c70
void sub_00464C40_0x464c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464C40_0x464c40");
#endif

    switch (ctx->pc) {
        case 0x464c5cu: goto label_464c5c;
        default: break;
    }

    ctx->pc = 0x464c40u;

    // 0x464c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x464c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x464c44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x464c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x464c48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x464c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x464c4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x464c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x464c50: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x464c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x464c54: 0xc0bcd8c  jal         func_2F3630
    ctx->pc = 0x464C54u;
    SET_GPR_U32(ctx, 31, 0x464C5Cu);
    ctx->pc = 0x2F3630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3630u, 0x464C54u, 0x464C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464C5Cu;
label_464c5c:
    // 0x464c5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x464c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x464c60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x464c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x464c64: 0x3e00008  jr          $ra
    ctx->pc = 0x464C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x464C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x464C6Cu;
    // 0x464c6c: 0x0  nop
    ctx->pc = 0x464c6cu;
    // NOP
    ctx->pc = 0x464c70u;
}

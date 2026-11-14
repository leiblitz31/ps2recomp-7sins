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

// Function: sub_0010BA30
// Address: 0x10ba30 - 0x10ba60
void sub_0010BA30_0x10ba30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BA30_0x10ba30");
#endif

    switch (ctx->pc) {
        case 0x10ba4cu: goto label_10ba4c;
        default: break;
    }

    ctx->pc = 0x10ba30u;

    // 0x10ba30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ba30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ba34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ba34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ba38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10ba38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10ba3c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10ba3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ba40: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x10ba40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10ba44: 0xc0438e8  jal         func_10E3A0
    ctx->pc = 0x10BA44u;
    SET_GPR_U32(ctx, 31, 0x10BA4Cu);
    ctx->pc = 0x10E3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E3A0u, 0x10BA44u, 0x10BA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BA4Cu;
label_10ba4c:
    // 0x10ba4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ba4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ba50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10ba50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10ba54: 0x3e00008  jr          $ra
    ctx->pc = 0x10BA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BA5Cu;
    // 0x10ba5c: 0x0  nop
    ctx->pc = 0x10ba5cu;
    // NOP
    ctx->pc = 0x10ba60u;
}

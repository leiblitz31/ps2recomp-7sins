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

// Function: sub_0022D0B0
// Address: 0x22d0b0 - 0x22d0f0
void sub_0022D0B0_0x22d0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D0B0_0x22d0b0");
#endif

    switch (ctx->pc) {
        case 0x22d0b0u: goto label_22d0b0;
        case 0x22d0b4u: goto label_22d0b4;
        case 0x22d0b8u: goto label_22d0b8;
        case 0x22d0bcu: goto label_22d0bc;
        case 0x22d0c0u: goto label_22d0c0;
        case 0x22d0c4u: goto label_22d0c4;
        case 0x22d0c8u: goto label_22d0c8;
        case 0x22d0ccu: goto label_22d0cc;
        case 0x22d0d0u: goto label_22d0d0;
        case 0x22d0d4u: goto label_22d0d4;
        case 0x22d0d8u: goto label_22d0d8;
        case 0x22d0dcu: goto label_22d0dc;
        case 0x22d0e0u: goto label_22d0e0;
        case 0x22d0e4u: goto label_22d0e4;
        case 0x22d0e8u: goto label_22d0e8;
        case 0x22d0ecu: goto label_22d0ec;
        default: break;
    }

    ctx->pc = 0x22d0b0u;

label_22d0b0:
    // 0x22d0b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22d0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22d0b4:
    // 0x22d0b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22d0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22d0b8:
    // 0x22d0b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22d0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_22d0bc:
    // 0x22d0bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22d0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_22d0c0:
    // 0x22d0c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x22d0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_22d0c4:
    // 0x22d0c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22d0c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22d0c8:
    // 0x22d0c8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x22d0c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_22d0cc:
    // 0x22d0cc: 0x320f809  jalr        $t9
label_22d0d0:
    if (ctx->pc == 0x22D0D0u) {
        ctx->pc = 0x22D0D4u;
        goto label_22d0d4;
    }
    ctx->pc = 0x22D0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22D0D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D0CCu, 0x22D0D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D0D4u;
label_22d0d4:
    // 0x22d0d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22d0d8:
    // 0x22d0d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x22d0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_22d0dc:
    // 0x22d0dc: 0x3e00008  jr          $ra
label_22d0e0:
    if (ctx->pc == 0x22D0E0u) {
        ctx->pc = 0x22D0E4u;
        goto label_22d0e4;
    }
    ctx->pc = 0x22D0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D0E4u;
label_22d0e4:
    // 0x22d0e4: 0x0  nop
    ctx->pc = 0x22d0e4u;
    // NOP
label_22d0e8:
    // 0x22d0e8: 0x0  nop
    ctx->pc = 0x22d0e8u;
    // NOP
label_22d0ec:
    // 0x22d0ec: 0x0  nop
    ctx->pc = 0x22d0ecu;
    // NOP
    ctx->pc = 0x22d0f0u;
}

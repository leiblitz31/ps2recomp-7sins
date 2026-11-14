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

// Function: sub_0013E190
// Address: 0x13e190 - 0x13e1d0
void sub_0013E190_0x13e190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E190_0x13e190");
#endif

    switch (ctx->pc) {
        case 0x13e190u: goto label_13e190;
        case 0x13e194u: goto label_13e194;
        case 0x13e198u: goto label_13e198;
        case 0x13e19cu: goto label_13e19c;
        case 0x13e1a0u: goto label_13e1a0;
        case 0x13e1a4u: goto label_13e1a4;
        case 0x13e1a8u: goto label_13e1a8;
        case 0x13e1acu: goto label_13e1ac;
        case 0x13e1b0u: goto label_13e1b0;
        case 0x13e1b4u: goto label_13e1b4;
        case 0x13e1b8u: goto label_13e1b8;
        case 0x13e1bcu: goto label_13e1bc;
        case 0x13e1c0u: goto label_13e1c0;
        case 0x13e1c4u: goto label_13e1c4;
        case 0x13e1c8u: goto label_13e1c8;
        case 0x13e1ccu: goto label_13e1cc;
        default: break;
    }

    ctx->pc = 0x13e190u;

label_13e190:
    // 0x13e190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13e194:
    // 0x13e194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13e198:
    // 0x13e198: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13e198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_13e19c:
    // 0x13e19c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13e19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13e1a0:
    // 0x13e1a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13e1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13e1a4:
    // 0x13e1a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13e1a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13e1a8:
    // 0x13e1a8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x13e1a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_13e1ac:
    // 0x13e1ac: 0x320f809  jalr        $t9
label_13e1b0:
    if (ctx->pc == 0x13E1B0u) {
        ctx->pc = 0x13E1B4u;
        goto label_13e1b4;
    }
    ctx->pc = 0x13E1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E1B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E1ACu, 0x13E1B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E1B4u;
label_13e1b4:
    // 0x13e1b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13e1b8:
    // 0x13e1b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13e1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13e1bc:
    // 0x13e1bc: 0x3e00008  jr          $ra
label_13e1c0:
    if (ctx->pc == 0x13E1C0u) {
        ctx->pc = 0x13E1C4u;
        goto label_13e1c4;
    }
    ctx->pc = 0x13E1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E1C4u;
label_13e1c4:
    // 0x13e1c4: 0x0  nop
    ctx->pc = 0x13e1c4u;
    // NOP
label_13e1c8:
    // 0x13e1c8: 0x0  nop
    ctx->pc = 0x13e1c8u;
    // NOP
label_13e1cc:
    // 0x13e1cc: 0x0  nop
    ctx->pc = 0x13e1ccu;
    // NOP
    ctx->pc = 0x13e1d0u;
}

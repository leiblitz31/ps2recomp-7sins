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

// Function: sub_001038C0
// Address: 0x1038c0 - 0x103900
void sub_001038C0_0x1038c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001038C0_0x1038c0");
#endif

    switch (ctx->pc) {
        case 0x1038c0u: goto label_1038c0;
        case 0x1038c4u: goto label_1038c4;
        case 0x1038c8u: goto label_1038c8;
        case 0x1038ccu: goto label_1038cc;
        case 0x1038d0u: goto label_1038d0;
        case 0x1038d4u: goto label_1038d4;
        case 0x1038d8u: goto label_1038d8;
        case 0x1038dcu: goto label_1038dc;
        case 0x1038e0u: goto label_1038e0;
        case 0x1038e4u: goto label_1038e4;
        case 0x1038e8u: goto label_1038e8;
        case 0x1038ecu: goto label_1038ec;
        case 0x1038f0u: goto label_1038f0;
        case 0x1038f4u: goto label_1038f4;
        case 0x1038f8u: goto label_1038f8;
        case 0x1038fcu: goto label_1038fc;
        default: break;
    }

    ctx->pc = 0x1038c0u;

label_1038c0:
    // 0x1038c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1038c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1038c4:
    // 0x1038c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1038c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1038c8:
    // 0x1038c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1038c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1038cc:
    // 0x1038cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1038ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1038d0:
    // 0x1038d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1038d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1038d4:
    // 0x1038d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1038d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1038d8:
    // 0x1038d8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1038d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1038dc:
    // 0x1038dc: 0x320f809  jalr        $t9
label_1038e0:
    if (ctx->pc == 0x1038E0u) {
        ctx->pc = 0x1038E4u;
        goto label_1038e4;
    }
    ctx->pc = 0x1038DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1038E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1038DCu, 0x1038E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1038E4u;
label_1038e4:
    // 0x1038e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1038e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1038e8:
    // 0x1038e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1038e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1038ec:
    // 0x1038ec: 0x3e00008  jr          $ra
label_1038f0:
    if (ctx->pc == 0x1038F0u) {
        ctx->pc = 0x1038F4u;
        goto label_1038f4;
    }
    ctx->pc = 0x1038ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1038ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1038F4u;
label_1038f4:
    // 0x1038f4: 0x0  nop
    ctx->pc = 0x1038f4u;
    // NOP
label_1038f8:
    // 0x1038f8: 0x0  nop
    ctx->pc = 0x1038f8u;
    // NOP
label_1038fc:
    // 0x1038fc: 0x0  nop
    ctx->pc = 0x1038fcu;
    // NOP
    ctx->pc = 0x103900u;
}

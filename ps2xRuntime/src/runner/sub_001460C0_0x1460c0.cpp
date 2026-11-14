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

// Function: sub_001460C0
// Address: 0x1460c0 - 0x146100
void sub_001460C0_0x1460c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001460C0_0x1460c0");
#endif

    switch (ctx->pc) {
        case 0x1460c0u: goto label_1460c0;
        case 0x1460c4u: goto label_1460c4;
        case 0x1460c8u: goto label_1460c8;
        case 0x1460ccu: goto label_1460cc;
        case 0x1460d0u: goto label_1460d0;
        case 0x1460d4u: goto label_1460d4;
        case 0x1460d8u: goto label_1460d8;
        case 0x1460dcu: goto label_1460dc;
        case 0x1460e0u: goto label_1460e0;
        case 0x1460e4u: goto label_1460e4;
        case 0x1460e8u: goto label_1460e8;
        case 0x1460ecu: goto label_1460ec;
        case 0x1460f0u: goto label_1460f0;
        case 0x1460f4u: goto label_1460f4;
        case 0x1460f8u: goto label_1460f8;
        case 0x1460fcu: goto label_1460fc;
        default: break;
    }

    ctx->pc = 0x1460c0u;

label_1460c0:
    // 0x1460c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1460c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1460c4:
    // 0x1460c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1460c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1460c8:
    // 0x1460c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1460c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1460cc:
    // 0x1460cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1460ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1460d0:
    // 0x1460d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1460d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1460d4:
    // 0x1460d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1460d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1460d8:
    // 0x1460d8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1460d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1460dc:
    // 0x1460dc: 0x320f809  jalr        $t9
label_1460e0:
    if (ctx->pc == 0x1460E0u) {
        ctx->pc = 0x1460E4u;
        goto label_1460e4;
    }
    ctx->pc = 0x1460DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1460E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1460DCu, 0x1460E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1460E4u;
label_1460e4:
    // 0x1460e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1460e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1460e8:
    // 0x1460e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1460e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1460ec:
    // 0x1460ec: 0x3e00008  jr          $ra
label_1460f0:
    if (ctx->pc == 0x1460F0u) {
        ctx->pc = 0x1460F4u;
        goto label_1460f4;
    }
    ctx->pc = 0x1460ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1460ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1460F4u;
label_1460f4:
    // 0x1460f4: 0x0  nop
    ctx->pc = 0x1460f4u;
    // NOP
label_1460f8:
    // 0x1460f8: 0x0  nop
    ctx->pc = 0x1460f8u;
    // NOP
label_1460fc:
    // 0x1460fc: 0x0  nop
    ctx->pc = 0x1460fcu;
    // NOP
    ctx->pc = 0x146100u;
}

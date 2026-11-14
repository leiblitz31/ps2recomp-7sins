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

// Function: sub_001006E0
// Address: 0x1006e0 - 0x100720
void sub_001006E0_0x1006e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001006E0_0x1006e0");
#endif

    switch (ctx->pc) {
        case 0x1006e0u: goto label_1006e0;
        case 0x1006e4u: goto label_1006e4;
        case 0x1006e8u: goto label_1006e8;
        case 0x1006ecu: goto label_1006ec;
        case 0x1006f0u: goto label_1006f0;
        case 0x1006f4u: goto label_1006f4;
        case 0x1006f8u: goto label_1006f8;
        case 0x1006fcu: goto label_1006fc;
        case 0x100700u: goto label_100700;
        case 0x100704u: goto label_100704;
        case 0x100708u: goto label_100708;
        case 0x10070cu: goto label_10070c;
        case 0x100710u: goto label_100710;
        case 0x100714u: goto label_100714;
        case 0x100718u: goto label_100718;
        case 0x10071cu: goto label_10071c;
        default: break;
    }

    ctx->pc = 0x1006e0u;

label_1006e0:
    // 0x1006e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1006e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1006e4:
    // 0x1006e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1006e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1006e8:
    // 0x1006e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1006e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1006ec:
    // 0x1006ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1006ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1006f0:
    // 0x1006f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1006f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1006f4:
    // 0x1006f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1006f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1006f8:
    // 0x1006f8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1006f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1006fc:
    // 0x1006fc: 0x320f809  jalr        $t9
label_100700:
    if (ctx->pc == 0x100700u) {
        ctx->pc = 0x100704u;
        goto label_100704;
    }
    ctx->pc = 0x1006FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100704u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1006FCu, 0x100704u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100704u;
label_100704:
    // 0x100704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_100708:
    // 0x100708: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x100708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_10070c:
    // 0x10070c: 0x3e00008  jr          $ra
label_100710:
    if (ctx->pc == 0x100710u) {
        ctx->pc = 0x100714u;
        goto label_100714;
    }
    ctx->pc = 0x10070Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10070Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100714u;
label_100714:
    // 0x100714: 0x0  nop
    ctx->pc = 0x100714u;
    // NOP
label_100718:
    // 0x100718: 0x0  nop
    ctx->pc = 0x100718u;
    // NOP
label_10071c:
    // 0x10071c: 0x0  nop
    ctx->pc = 0x10071cu;
    // NOP
    ctx->pc = 0x100720u;
}

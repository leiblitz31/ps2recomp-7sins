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

// Function: sub_002B75E0
// Address: 0x2b75e0 - 0x2b7620
void sub_002B75E0_0x2b75e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B75E0_0x2b75e0");
#endif

    switch (ctx->pc) {
        case 0x2b75e0u: goto label_2b75e0;
        case 0x2b75e4u: goto label_2b75e4;
        case 0x2b75e8u: goto label_2b75e8;
        case 0x2b75ecu: goto label_2b75ec;
        case 0x2b75f0u: goto label_2b75f0;
        case 0x2b75f4u: goto label_2b75f4;
        case 0x2b75f8u: goto label_2b75f8;
        case 0x2b75fcu: goto label_2b75fc;
        case 0x2b7600u: goto label_2b7600;
        case 0x2b7604u: goto label_2b7604;
        case 0x2b7608u: goto label_2b7608;
        case 0x2b760cu: goto label_2b760c;
        case 0x2b7610u: goto label_2b7610;
        case 0x2b7614u: goto label_2b7614;
        case 0x2b7618u: goto label_2b7618;
        case 0x2b761cu: goto label_2b761c;
        default: break;
    }

    ctx->pc = 0x2b75e0u;

label_2b75e0:
    // 0x2b75e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b75e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2b75e4:
    // 0x2b75e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b75e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b75e8:
    // 0x2b75e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b75e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2b75ec:
    // 0x2b75ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b75ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2b75f0:
    // 0x2b75f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2b75f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b75f4:
    // 0x2b75f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b75f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b75f8:
    // 0x2b75f8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2b75f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2b75fc:
    // 0x2b75fc: 0x320f809  jalr        $t9
label_2b7600:
    if (ctx->pc == 0x2B7600u) {
        ctx->pc = 0x2B7604u;
        goto label_2b7604;
    }
    ctx->pc = 0x2B75FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B7604u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B75FCu, 0x2B7604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B7604u;
label_2b7604:
    // 0x2b7604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b7604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b7608:
    // 0x2b7608: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b7608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2b760c:
    // 0x2b760c: 0x3e00008  jr          $ra
label_2b7610:
    if (ctx->pc == 0x2B7610u) {
        ctx->pc = 0x2B7614u;
        goto label_2b7614;
    }
    ctx->pc = 0x2B760Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B760Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7614u;
label_2b7614:
    // 0x2b7614: 0x0  nop
    ctx->pc = 0x2b7614u;
    // NOP
label_2b7618:
    // 0x2b7618: 0x0  nop
    ctx->pc = 0x2b7618u;
    // NOP
label_2b761c:
    // 0x2b761c: 0x0  nop
    ctx->pc = 0x2b761cu;
    // NOP
    ctx->pc = 0x2b7620u;
}

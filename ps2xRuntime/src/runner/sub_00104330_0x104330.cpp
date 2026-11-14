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

// Function: sub_00104330
// Address: 0x104330 - 0x104370
void sub_00104330_0x104330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104330_0x104330");
#endif

    switch (ctx->pc) {
        case 0x104330u: goto label_104330;
        case 0x104334u: goto label_104334;
        case 0x104338u: goto label_104338;
        case 0x10433cu: goto label_10433c;
        case 0x104340u: goto label_104340;
        case 0x104344u: goto label_104344;
        case 0x104348u: goto label_104348;
        case 0x10434cu: goto label_10434c;
        case 0x104350u: goto label_104350;
        case 0x104354u: goto label_104354;
        case 0x104358u: goto label_104358;
        case 0x10435cu: goto label_10435c;
        case 0x104360u: goto label_104360;
        case 0x104364u: goto label_104364;
        case 0x104368u: goto label_104368;
        case 0x10436cu: goto label_10436c;
        default: break;
    }

    ctx->pc = 0x104330u;

label_104330:
    // 0x104330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x104330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_104334:
    // 0x104334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x104334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_104338:
    // 0x104338: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x104338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_10433c:
    // 0x10433c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10433cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_104340:
    // 0x104340: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x104340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_104344:
    // 0x104344: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x104344u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_104348:
    // 0x104348: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x104348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_10434c:
    // 0x10434c: 0x320f809  jalr        $t9
label_104350:
    if (ctx->pc == 0x104350u) {
        ctx->pc = 0x104354u;
        goto label_104354;
    }
    ctx->pc = 0x10434Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x104354u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10434Cu, 0x104354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104354u;
label_104354:
    // 0x104354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x104354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_104358:
    // 0x104358: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x104358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_10435c:
    // 0x10435c: 0x3e00008  jr          $ra
label_104360:
    if (ctx->pc == 0x104360u) {
        ctx->pc = 0x104364u;
        goto label_104364;
    }
    ctx->pc = 0x10435Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10435Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104364u;
label_104364:
    // 0x104364: 0x0  nop
    ctx->pc = 0x104364u;
    // NOP
label_104368:
    // 0x104368: 0x0  nop
    ctx->pc = 0x104368u;
    // NOP
label_10436c:
    // 0x10436c: 0x0  nop
    ctx->pc = 0x10436cu;
    // NOP
    ctx->pc = 0x104370u;
}

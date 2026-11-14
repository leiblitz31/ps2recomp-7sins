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

// Function: sub_002BF430
// Address: 0x2bf430 - 0x2bf470
void sub_002BF430_0x2bf430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF430_0x2bf430");
#endif

    switch (ctx->pc) {
        case 0x2bf430u: goto label_2bf430;
        case 0x2bf434u: goto label_2bf434;
        case 0x2bf438u: goto label_2bf438;
        case 0x2bf43cu: goto label_2bf43c;
        case 0x2bf440u: goto label_2bf440;
        case 0x2bf444u: goto label_2bf444;
        case 0x2bf448u: goto label_2bf448;
        case 0x2bf44cu: goto label_2bf44c;
        case 0x2bf450u: goto label_2bf450;
        case 0x2bf454u: goto label_2bf454;
        case 0x2bf458u: goto label_2bf458;
        case 0x2bf45cu: goto label_2bf45c;
        case 0x2bf460u: goto label_2bf460;
        case 0x2bf464u: goto label_2bf464;
        case 0x2bf468u: goto label_2bf468;
        case 0x2bf46cu: goto label_2bf46c;
        default: break;
    }

    ctx->pc = 0x2bf430u;

label_2bf430:
    // 0x2bf430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bf430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2bf434:
    // 0x2bf434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2bf438:
    // 0x2bf438: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bf438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2bf43c:
    // 0x2bf43c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bf43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2bf440:
    // 0x2bf440: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2bf440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bf444:
    // 0x2bf444: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bf444u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bf448:
    // 0x2bf448: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2bf448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2bf44c:
    // 0x2bf44c: 0x320f809  jalr        $t9
label_2bf450:
    if (ctx->pc == 0x2BF450u) {
        ctx->pc = 0x2BF454u;
        goto label_2bf454;
    }
    ctx->pc = 0x2BF44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BF454u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF44Cu, 0x2BF454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BF454u;
label_2bf454:
    // 0x2bf454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bf458:
    // 0x2bf458: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bf458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2bf45c:
    // 0x2bf45c: 0x3e00008  jr          $ra
label_2bf460:
    if (ctx->pc == 0x2BF460u) {
        ctx->pc = 0x2BF464u;
        goto label_2bf464;
    }
    ctx->pc = 0x2BF45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF464u;
label_2bf464:
    // 0x2bf464: 0x0  nop
    ctx->pc = 0x2bf464u;
    // NOP
label_2bf468:
    // 0x2bf468: 0x0  nop
    ctx->pc = 0x2bf468u;
    // NOP
label_2bf46c:
    // 0x2bf46c: 0x0  nop
    ctx->pc = 0x2bf46cu;
    // NOP
    ctx->pc = 0x2bf470u;
}

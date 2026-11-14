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

// Function: sub_0046F350
// Address: 0x46f350 - 0x46f390
void sub_0046F350_0x46f350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046F350_0x46f350");
#endif

    switch (ctx->pc) {
        case 0x46f350u: goto label_46f350;
        case 0x46f354u: goto label_46f354;
        case 0x46f358u: goto label_46f358;
        case 0x46f35cu: goto label_46f35c;
        case 0x46f360u: goto label_46f360;
        case 0x46f364u: goto label_46f364;
        case 0x46f368u: goto label_46f368;
        case 0x46f36cu: goto label_46f36c;
        case 0x46f370u: goto label_46f370;
        case 0x46f374u: goto label_46f374;
        case 0x46f378u: goto label_46f378;
        case 0x46f37cu: goto label_46f37c;
        case 0x46f380u: goto label_46f380;
        case 0x46f384u: goto label_46f384;
        case 0x46f388u: goto label_46f388;
        case 0x46f38cu: goto label_46f38c;
        default: break;
    }

    ctx->pc = 0x46f350u;

label_46f350:
    // 0x46f350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46f350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_46f354:
    // 0x46f354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46f354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_46f358:
    // 0x46f358: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46f358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_46f35c:
    // 0x46f35c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46f35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_46f360:
    // 0x46f360: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46f360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46f364:
    // 0x46f364: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46f364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46f368:
    // 0x46f368: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x46f368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_46f36c:
    // 0x46f36c: 0x320f809  jalr        $t9
label_46f370:
    if (ctx->pc == 0x46F370u) {
        ctx->pc = 0x46F374u;
        goto label_46f374;
    }
    ctx->pc = 0x46F36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46F374u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F36Cu, 0x46F374u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46F374u;
label_46f374:
    // 0x46f374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46f374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_46f378:
    // 0x46f378: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x46f378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_46f37c:
    // 0x46f37c: 0x3e00008  jr          $ra
label_46f380:
    if (ctx->pc == 0x46F380u) {
        ctx->pc = 0x46F384u;
        goto label_46f384;
    }
    ctx->pc = 0x46F37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46F384u;
label_46f384:
    // 0x46f384: 0x0  nop
    ctx->pc = 0x46f384u;
    // NOP
label_46f388:
    // 0x46f388: 0x0  nop
    ctx->pc = 0x46f388u;
    // NOP
label_46f38c:
    // 0x46f38c: 0x0  nop
    ctx->pc = 0x46f38cu;
    // NOP
    ctx->pc = 0x46f390u;
}

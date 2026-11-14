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

// Function: sub_00240790
// Address: 0x240790 - 0x2407d0
void sub_00240790_0x240790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240790_0x240790");
#endif

    switch (ctx->pc) {
        case 0x240790u: goto label_240790;
        case 0x240794u: goto label_240794;
        case 0x240798u: goto label_240798;
        case 0x24079cu: goto label_24079c;
        case 0x2407a0u: goto label_2407a0;
        case 0x2407a4u: goto label_2407a4;
        case 0x2407a8u: goto label_2407a8;
        case 0x2407acu: goto label_2407ac;
        case 0x2407b0u: goto label_2407b0;
        case 0x2407b4u: goto label_2407b4;
        case 0x2407b8u: goto label_2407b8;
        case 0x2407bcu: goto label_2407bc;
        case 0x2407c0u: goto label_2407c0;
        case 0x2407c4u: goto label_2407c4;
        case 0x2407c8u: goto label_2407c8;
        case 0x2407ccu: goto label_2407cc;
        default: break;
    }

    ctx->pc = 0x240790u;

label_240790:
    // 0x240790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_240794:
    // 0x240794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_240798:
    // 0x240798: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x240798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_24079c:
    // 0x24079c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24079cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2407a0:
    // 0x2407a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2407a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2407a4:
    // 0x2407a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2407a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2407a8:
    // 0x2407a8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2407a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2407ac:
    // 0x2407ac: 0x320f809  jalr        $t9
label_2407b0:
    if (ctx->pc == 0x2407B0u) {
        ctx->pc = 0x2407B4u;
        goto label_2407b4;
    }
    ctx->pc = 0x2407ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2407B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2407ACu, 0x2407B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2407B4u;
label_2407b4:
    // 0x2407b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2407b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2407b8:
    // 0x2407b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2407b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2407bc:
    // 0x2407bc: 0x3e00008  jr          $ra
label_2407c0:
    if (ctx->pc == 0x2407C0u) {
        ctx->pc = 0x2407C4u;
        goto label_2407c4;
    }
    ctx->pc = 0x2407BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2407BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2407C4u;
label_2407c4:
    // 0x2407c4: 0x0  nop
    ctx->pc = 0x2407c4u;
    // NOP
label_2407c8:
    // 0x2407c8: 0x0  nop
    ctx->pc = 0x2407c8u;
    // NOP
label_2407cc:
    // 0x2407cc: 0x0  nop
    ctx->pc = 0x2407ccu;
    // NOP
    ctx->pc = 0x2407d0u;
}

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

// Function: sub_0029A660
// Address: 0x29a660 - 0x29a6a0
void sub_0029A660_0x29a660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A660_0x29a660");
#endif

    switch (ctx->pc) {
        case 0x29a660u: goto label_29a660;
        case 0x29a664u: goto label_29a664;
        case 0x29a668u: goto label_29a668;
        case 0x29a66cu: goto label_29a66c;
        case 0x29a670u: goto label_29a670;
        case 0x29a674u: goto label_29a674;
        case 0x29a678u: goto label_29a678;
        case 0x29a67cu: goto label_29a67c;
        case 0x29a680u: goto label_29a680;
        case 0x29a684u: goto label_29a684;
        case 0x29a688u: goto label_29a688;
        case 0x29a68cu: goto label_29a68c;
        case 0x29a690u: goto label_29a690;
        case 0x29a694u: goto label_29a694;
        case 0x29a698u: goto label_29a698;
        case 0x29a69cu: goto label_29a69c;
        default: break;
    }

    ctx->pc = 0x29a660u;

label_29a660:
    // 0x29a660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29a664:
    // 0x29a664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29a668:
    // 0x29a668: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x29a668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_29a66c:
    // 0x29a66c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29a66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29a670:
    // 0x29a670: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x29a670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29a674:
    // 0x29a674: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29a674u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29a678:
    // 0x29a678: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x29a678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_29a67c:
    // 0x29a67c: 0x320f809  jalr        $t9
label_29a680:
    if (ctx->pc == 0x29A680u) {
        ctx->pc = 0x29A684u;
        goto label_29a684;
    }
    ctx->pc = 0x29A67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29A684u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A67Cu, 0x29A684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29A684u;
label_29a684:
    // 0x29a684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29a688:
    // 0x29a688: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29a688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_29a68c:
    // 0x29a68c: 0x3e00008  jr          $ra
label_29a690:
    if (ctx->pc == 0x29A690u) {
        ctx->pc = 0x29A694u;
        goto label_29a694;
    }
    ctx->pc = 0x29A68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A694u;
label_29a694:
    // 0x29a694: 0x0  nop
    ctx->pc = 0x29a694u;
    // NOP
label_29a698:
    // 0x29a698: 0x0  nop
    ctx->pc = 0x29a698u;
    // NOP
label_29a69c:
    // 0x29a69c: 0x0  nop
    ctx->pc = 0x29a69cu;
    // NOP
    ctx->pc = 0x29a6a0u;
}

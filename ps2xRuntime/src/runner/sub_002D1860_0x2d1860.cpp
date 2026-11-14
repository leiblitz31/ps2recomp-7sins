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

// Function: sub_002D1860
// Address: 0x2d1860 - 0x2d18a0
void sub_002D1860_0x2d1860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1860_0x2d1860");
#endif

    switch (ctx->pc) {
        case 0x2d1860u: goto label_2d1860;
        case 0x2d1864u: goto label_2d1864;
        case 0x2d1868u: goto label_2d1868;
        case 0x2d186cu: goto label_2d186c;
        case 0x2d1870u: goto label_2d1870;
        case 0x2d1874u: goto label_2d1874;
        case 0x2d1878u: goto label_2d1878;
        case 0x2d187cu: goto label_2d187c;
        case 0x2d1880u: goto label_2d1880;
        case 0x2d1884u: goto label_2d1884;
        case 0x2d1888u: goto label_2d1888;
        case 0x2d188cu: goto label_2d188c;
        case 0x2d1890u: goto label_2d1890;
        case 0x2d1894u: goto label_2d1894;
        case 0x2d1898u: goto label_2d1898;
        case 0x2d189cu: goto label_2d189c;
        default: break;
    }

    ctx->pc = 0x2d1860u;

label_2d1860:
    // 0x2d1860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d1860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d1864:
    // 0x2d1864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d1868:
    // 0x2d1868: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d1868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2d186c:
    // 0x2d186c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d186cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d1870:
    // 0x2d1870: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d1870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d1874:
    // 0x2d1874: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d1874u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d1878:
    // 0x2d1878: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2d1878u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2d187c:
    // 0x2d187c: 0x320f809  jalr        $t9
label_2d1880:
    if (ctx->pc == 0x2D1880u) {
        ctx->pc = 0x2D1884u;
        goto label_2d1884;
    }
    ctx->pc = 0x2D187Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D1884u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D187Cu, 0x2D1884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D1884u;
label_2d1884:
    // 0x2d1884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d1888:
    // 0x2d1888: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d1888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2d188c:
    // 0x2d188c: 0x3e00008  jr          $ra
label_2d1890:
    if (ctx->pc == 0x2D1890u) {
        ctx->pc = 0x2D1894u;
        goto label_2d1894;
    }
    ctx->pc = 0x2D188Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D188Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1894u;
label_2d1894:
    // 0x2d1894: 0x0  nop
    ctx->pc = 0x2d1894u;
    // NOP
label_2d1898:
    // 0x2d1898: 0x0  nop
    ctx->pc = 0x2d1898u;
    // NOP
label_2d189c:
    // 0x2d189c: 0x0  nop
    ctx->pc = 0x2d189cu;
    // NOP
    ctx->pc = 0x2d18a0u;
}

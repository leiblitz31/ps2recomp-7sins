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

// Function: sub_0013E110
// Address: 0x13e110 - 0x13e150
void sub_0013E110_0x13e110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E110_0x13e110");
#endif

    switch (ctx->pc) {
        case 0x13e110u: goto label_13e110;
        case 0x13e114u: goto label_13e114;
        case 0x13e118u: goto label_13e118;
        case 0x13e11cu: goto label_13e11c;
        case 0x13e120u: goto label_13e120;
        case 0x13e124u: goto label_13e124;
        case 0x13e128u: goto label_13e128;
        case 0x13e12cu: goto label_13e12c;
        case 0x13e130u: goto label_13e130;
        case 0x13e134u: goto label_13e134;
        case 0x13e138u: goto label_13e138;
        case 0x13e13cu: goto label_13e13c;
        case 0x13e140u: goto label_13e140;
        case 0x13e144u: goto label_13e144;
        case 0x13e148u: goto label_13e148;
        case 0x13e14cu: goto label_13e14c;
        default: break;
    }

    ctx->pc = 0x13e110u;

label_13e110:
    // 0x13e110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13e114:
    // 0x13e114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13e118:
    // 0x13e118: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13e118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_13e11c:
    // 0x13e11c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13e11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13e120:
    // 0x13e120: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13e120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13e124:
    // 0x13e124: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13e124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13e128:
    // 0x13e128: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x13e128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_13e12c:
    // 0x13e12c: 0x320f809  jalr        $t9
label_13e130:
    if (ctx->pc == 0x13E130u) {
        ctx->pc = 0x13E134u;
        goto label_13e134;
    }
    ctx->pc = 0x13E12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E134u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E12Cu, 0x13E134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E134u;
label_13e134:
    // 0x13e134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13e138:
    // 0x13e138: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13e138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13e13c:
    // 0x13e13c: 0x3e00008  jr          $ra
label_13e140:
    if (ctx->pc == 0x13E140u) {
        ctx->pc = 0x13E144u;
        goto label_13e144;
    }
    ctx->pc = 0x13E13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E144u;
label_13e144:
    // 0x13e144: 0x0  nop
    ctx->pc = 0x13e144u;
    // NOP
label_13e148:
    // 0x13e148: 0x0  nop
    ctx->pc = 0x13e148u;
    // NOP
label_13e14c:
    // 0x13e14c: 0x0  nop
    ctx->pc = 0x13e14cu;
    // NOP
    ctx->pc = 0x13e150u;
}

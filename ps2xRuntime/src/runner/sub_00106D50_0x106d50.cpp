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

// Function: sub_00106D50
// Address: 0x106d50 - 0x106d90
void sub_00106D50_0x106d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106D50_0x106d50");
#endif

    switch (ctx->pc) {
        case 0x106d50u: goto label_106d50;
        case 0x106d54u: goto label_106d54;
        case 0x106d58u: goto label_106d58;
        case 0x106d5cu: goto label_106d5c;
        case 0x106d60u: goto label_106d60;
        case 0x106d64u: goto label_106d64;
        case 0x106d68u: goto label_106d68;
        case 0x106d6cu: goto label_106d6c;
        case 0x106d70u: goto label_106d70;
        case 0x106d74u: goto label_106d74;
        case 0x106d78u: goto label_106d78;
        case 0x106d7cu: goto label_106d7c;
        case 0x106d80u: goto label_106d80;
        case 0x106d84u: goto label_106d84;
        case 0x106d88u: goto label_106d88;
        case 0x106d8cu: goto label_106d8c;
        default: break;
    }

    ctx->pc = 0x106d50u;

label_106d50:
    // 0x106d50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x106d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_106d54:
    // 0x106d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_106d58:
    // 0x106d58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x106d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_106d5c:
    // 0x106d5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x106d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_106d60:
    // 0x106d60: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x106d60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
label_106d64:
    // 0x106d64: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x106d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_106d68:
    // 0x106d68: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x106d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_106d6c:
    // 0x106d6c: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x106d6cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_106d70:
    // 0x106d70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x106d70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_106d74:
    // 0x106d74: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x106d74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_106d78:
    // 0x106d78: 0x320f809  jalr        $t9
label_106d7c:
    if (ctx->pc == 0x106D7Cu) {
        ctx->pc = 0x106D80u;
        goto label_106d80;
    }
    ctx->pc = 0x106D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x106D80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106D78u, 0x106D80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106D80u;
label_106d80:
    // 0x106d80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_106d84:
    // 0x106d84: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x106d84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_106d88:
    // 0x106d88: 0x3e00008  jr          $ra
label_106d8c:
    if (ctx->pc == 0x106D8Cu) {
        ctx->pc = 0x106D90u;
        goto label_fallthrough_0x106d88;
    }
    ctx->pc = 0x106D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x106d88:
    ctx->pc = 0x106D90u;
}

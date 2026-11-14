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

// Function: sub_00106D90
// Address: 0x106d90 - 0x106dd0
void sub_00106D90_0x106d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106D90_0x106d90");
#endif

    switch (ctx->pc) {
        case 0x106d90u: goto label_106d90;
        case 0x106d94u: goto label_106d94;
        case 0x106d98u: goto label_106d98;
        case 0x106d9cu: goto label_106d9c;
        case 0x106da0u: goto label_106da0;
        case 0x106da4u: goto label_106da4;
        case 0x106da8u: goto label_106da8;
        case 0x106dacu: goto label_106dac;
        case 0x106db0u: goto label_106db0;
        case 0x106db4u: goto label_106db4;
        case 0x106db8u: goto label_106db8;
        case 0x106dbcu: goto label_106dbc;
        case 0x106dc0u: goto label_106dc0;
        case 0x106dc4u: goto label_106dc4;
        case 0x106dc8u: goto label_106dc8;
        case 0x106dccu: goto label_106dcc;
        default: break;
    }

    ctx->pc = 0x106d90u;

label_106d90:
    // 0x106d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_106d94:
    // 0x106d94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_106d98:
    // 0x106d98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x106d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_106d9c:
    // 0x106d9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x106d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_106da0:
    // 0x106da0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x106da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_106da4:
    // 0x106da4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x106da4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_106da8:
    // 0x106da8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x106da8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_106dac:
    // 0x106dac: 0x320f809  jalr        $t9
label_106db0:
    if (ctx->pc == 0x106DB0u) {
        ctx->pc = 0x106DB4u;
        goto label_106db4;
    }
    ctx->pc = 0x106DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x106DB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106DACu, 0x106DB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106DB4u;
label_106db4:
    // 0x106db4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_106db8:
    // 0x106db8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x106db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_106dbc:
    // 0x106dbc: 0x3e00008  jr          $ra
label_106dc0:
    if (ctx->pc == 0x106DC0u) {
        ctx->pc = 0x106DC4u;
        goto label_106dc4;
    }
    ctx->pc = 0x106DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106DC4u;
label_106dc4:
    // 0x106dc4: 0x0  nop
    ctx->pc = 0x106dc4u;
    // NOP
label_106dc8:
    // 0x106dc8: 0x0  nop
    ctx->pc = 0x106dc8u;
    // NOP
label_106dcc:
    // 0x106dcc: 0x0  nop
    ctx->pc = 0x106dccu;
    // NOP
    ctx->pc = 0x106dd0u;
}

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

// Function: sub_0010BB90
// Address: 0x10bb90 - 0x10bbd0
void sub_0010BB90_0x10bb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BB90_0x10bb90");
#endif

    switch (ctx->pc) {
        case 0x10bb90u: goto label_10bb90;
        case 0x10bb94u: goto label_10bb94;
        case 0x10bb98u: goto label_10bb98;
        case 0x10bb9cu: goto label_10bb9c;
        case 0x10bba0u: goto label_10bba0;
        case 0x10bba4u: goto label_10bba4;
        case 0x10bba8u: goto label_10bba8;
        case 0x10bbacu: goto label_10bbac;
        case 0x10bbb0u: goto label_10bbb0;
        case 0x10bbb4u: goto label_10bbb4;
        case 0x10bbb8u: goto label_10bbb8;
        case 0x10bbbcu: goto label_10bbbc;
        case 0x10bbc0u: goto label_10bbc0;
        case 0x10bbc4u: goto label_10bbc4;
        case 0x10bbc8u: goto label_10bbc8;
        case 0x10bbccu: goto label_10bbcc;
        default: break;
    }

    ctx->pc = 0x10bb90u;

label_10bb90:
    // 0x10bb90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10bb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_10bb94:
    // 0x10bb94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10bb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10bb98:
    // 0x10bb98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10bb98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_10bb9c:
    // 0x10bb9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_10bba0:
    // 0x10bba0: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x10bba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_10bba4:
    // 0x10bba4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10bba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10bba8:
    // 0x10bba8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x10bba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_10bbac:
    // 0x10bbac: 0x320f809  jalr        $t9
label_10bbb0:
    if (ctx->pc == 0x10BBB0u) {
        ctx->pc = 0x10BBB4u;
        goto label_10bbb4;
    }
    ctx->pc = 0x10BBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10BBB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BBACu, 0x10BBB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10BBB4u;
label_10bbb4:
    // 0x10bbb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10bbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10bbb8:
    // 0x10bbb8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10bbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_10bbbc:
    // 0x10bbbc: 0x3e00008  jr          $ra
label_10bbc0:
    if (ctx->pc == 0x10BBC0u) {
        ctx->pc = 0x10BBC4u;
        goto label_10bbc4;
    }
    ctx->pc = 0x10BBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BBC4u;
label_10bbc4:
    // 0x10bbc4: 0x0  nop
    ctx->pc = 0x10bbc4u;
    // NOP
label_10bbc8:
    // 0x10bbc8: 0x0  nop
    ctx->pc = 0x10bbc8u;
    // NOP
label_10bbcc:
    // 0x10bbcc: 0x0  nop
    ctx->pc = 0x10bbccu;
    // NOP
    ctx->pc = 0x10bbd0u;
}

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

// Function: sub_0010BBD0
// Address: 0x10bbd0 - 0x10bc10
void sub_0010BBD0_0x10bbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BBD0_0x10bbd0");
#endif

    switch (ctx->pc) {
        case 0x10bbd0u: goto label_10bbd0;
        case 0x10bbd4u: goto label_10bbd4;
        case 0x10bbd8u: goto label_10bbd8;
        case 0x10bbdcu: goto label_10bbdc;
        case 0x10bbe0u: goto label_10bbe0;
        case 0x10bbe4u: goto label_10bbe4;
        case 0x10bbe8u: goto label_10bbe8;
        case 0x10bbecu: goto label_10bbec;
        case 0x10bbf0u: goto label_10bbf0;
        case 0x10bbf4u: goto label_10bbf4;
        case 0x10bbf8u: goto label_10bbf8;
        case 0x10bbfcu: goto label_10bbfc;
        case 0x10bc00u: goto label_10bc00;
        case 0x10bc04u: goto label_10bc04;
        case 0x10bc08u: goto label_10bc08;
        case 0x10bc0cu: goto label_10bc0c;
        default: break;
    }

    ctx->pc = 0x10bbd0u;

label_10bbd0:
    // 0x10bbd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10bbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_10bbd4:
    // 0x10bbd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10bbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10bbd8:
    // 0x10bbd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10bbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_10bbdc:
    // 0x10bbdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_10bbe0:
    // 0x10bbe0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x10bbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_10bbe4:
    // 0x10bbe4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10bbe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10bbe8:
    // 0x10bbe8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x10bbe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_10bbec:
    // 0x10bbec: 0x320f809  jalr        $t9
label_10bbf0:
    if (ctx->pc == 0x10BBF0u) {
        ctx->pc = 0x10BBF4u;
        goto label_10bbf4;
    }
    ctx->pc = 0x10BBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10BBF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BBECu, 0x10BBF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10BBF4u;
label_10bbf4:
    // 0x10bbf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10bbf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10bbf8:
    // 0x10bbf8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10bbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_10bbfc:
    // 0x10bbfc: 0x3e00008  jr          $ra
label_10bc00:
    if (ctx->pc == 0x10BC00u) {
        ctx->pc = 0x10BC04u;
        goto label_10bc04;
    }
    ctx->pc = 0x10BBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BBFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BC04u;
label_10bc04:
    // 0x10bc04: 0x0  nop
    ctx->pc = 0x10bc04u;
    // NOP
label_10bc08:
    // 0x10bc08: 0x0  nop
    ctx->pc = 0x10bc08u;
    // NOP
label_10bc0c:
    // 0x10bc0c: 0x0  nop
    ctx->pc = 0x10bc0cu;
    // NOP
    ctx->pc = 0x10bc10u;
}

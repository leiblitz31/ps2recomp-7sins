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

// Function: sub_00106940
// Address: 0x106940 - 0x106980
void sub_00106940_0x106940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106940_0x106940");
#endif

    switch (ctx->pc) {
        case 0x106940u: goto label_106940;
        case 0x106944u: goto label_106944;
        case 0x106948u: goto label_106948;
        case 0x10694cu: goto label_10694c;
        case 0x106950u: goto label_106950;
        case 0x106954u: goto label_106954;
        case 0x106958u: goto label_106958;
        case 0x10695cu: goto label_10695c;
        case 0x106960u: goto label_106960;
        case 0x106964u: goto label_106964;
        case 0x106968u: goto label_106968;
        case 0x10696cu: goto label_10696c;
        case 0x106970u: goto label_106970;
        case 0x106974u: goto label_106974;
        case 0x106978u: goto label_106978;
        case 0x10697cu: goto label_10697c;
        default: break;
    }

    ctx->pc = 0x106940u;

label_106940:
    // 0x106940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x106940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_106944:
    // 0x106944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_106948:
    // 0x106948: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x106948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_10694c:
    // 0x10694c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10694cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_106950:
    // 0x106950: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x106950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_106954:
    // 0x106954: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x106954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_106958:
    // 0x106958: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x106958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10695c:
    // 0x10695c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x10695cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_106960:
    // 0x106960: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x106960u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_106964:
    // 0x106964: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x106964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_106968:
    // 0x106968: 0x320f809  jalr        $t9
label_10696c:
    if (ctx->pc == 0x10696Cu) {
        ctx->pc = 0x106970u;
        goto label_106970;
    }
    ctx->pc = 0x106968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x106970u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106968u, 0x106970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106970u;
label_106970:
    // 0x106970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_106974:
    // 0x106974: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x106974u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_106978:
    // 0x106978: 0x3e00008  jr          $ra
label_10697c:
    if (ctx->pc == 0x10697Cu) {
        ctx->pc = 0x106980u;
        goto label_fallthrough_0x106978;
    }
    ctx->pc = 0x106978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x106978:
    ctx->pc = 0x106980u;
}

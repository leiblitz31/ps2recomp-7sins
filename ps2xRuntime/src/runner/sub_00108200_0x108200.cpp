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

// Function: sub_00108200
// Address: 0x108200 - 0x108240
void sub_00108200_0x108200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108200_0x108200");
#endif

    switch (ctx->pc) {
        case 0x108200u: goto label_108200;
        case 0x108204u: goto label_108204;
        case 0x108208u: goto label_108208;
        case 0x10820cu: goto label_10820c;
        case 0x108210u: goto label_108210;
        case 0x108214u: goto label_108214;
        case 0x108218u: goto label_108218;
        case 0x10821cu: goto label_10821c;
        case 0x108220u: goto label_108220;
        case 0x108224u: goto label_108224;
        case 0x108228u: goto label_108228;
        case 0x10822cu: goto label_10822c;
        case 0x108230u: goto label_108230;
        case 0x108234u: goto label_108234;
        case 0x108238u: goto label_108238;
        case 0x10823cu: goto label_10823c;
        default: break;
    }

    ctx->pc = 0x108200u;

label_108200:
    // 0x108200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x108200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_108204:
    // 0x108204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_108208:
    // 0x108208: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x108208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_10820c:
    // 0x10820c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10820cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_108210:
    // 0x108210: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x108210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_108214:
    // 0x108214: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x108214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_108218:
    // 0x108218: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x108218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10821c:
    // 0x10821c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x10821cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_108220:
    // 0x108220: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x108220u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_108224:
    // 0x108224: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x108224u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_108228:
    // 0x108228: 0x320f809  jalr        $t9
label_10822c:
    if (ctx->pc == 0x10822Cu) {
        ctx->pc = 0x108230u;
        goto label_108230;
    }
    ctx->pc = 0x108228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x108230u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108228u, 0x108230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108230u;
label_108230:
    // 0x108230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_108234:
    // 0x108234: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x108234u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_108238:
    // 0x108238: 0x3e00008  jr          $ra
label_10823c:
    if (ctx->pc == 0x10823Cu) {
        ctx->pc = 0x108240u;
        goto label_fallthrough_0x108238;
    }
    ctx->pc = 0x108238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x108238:
    ctx->pc = 0x108240u;
}

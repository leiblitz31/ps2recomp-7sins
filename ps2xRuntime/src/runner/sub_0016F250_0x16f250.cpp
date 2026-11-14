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

// Function: sub_0016F250
// Address: 0x16f250 - 0x16f290
void sub_0016F250_0x16f250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F250_0x16f250");
#endif

    switch (ctx->pc) {
        case 0x16f250u: goto label_16f250;
        case 0x16f254u: goto label_16f254;
        case 0x16f258u: goto label_16f258;
        case 0x16f25cu: goto label_16f25c;
        case 0x16f260u: goto label_16f260;
        case 0x16f264u: goto label_16f264;
        case 0x16f268u: goto label_16f268;
        case 0x16f26cu: goto label_16f26c;
        case 0x16f270u: goto label_16f270;
        case 0x16f274u: goto label_16f274;
        case 0x16f278u: goto label_16f278;
        case 0x16f27cu: goto label_16f27c;
        case 0x16f280u: goto label_16f280;
        case 0x16f284u: goto label_16f284;
        case 0x16f288u: goto label_16f288;
        case 0x16f28cu: goto label_16f28c;
        default: break;
    }

    ctx->pc = 0x16f250u;

label_16f250:
    // 0x16f250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16f250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16f254:
    // 0x16f254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16f258:
    // 0x16f258: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16f258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_16f25c:
    // 0x16f25c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16f25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16f260:
    // 0x16f260: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16f260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16f264:
    // 0x16f264: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16f264u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f268:
    // 0x16f268: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x16f268u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_16f26c:
    // 0x16f26c: 0x320f809  jalr        $t9
label_16f270:
    if (ctx->pc == 0x16F270u) {
        ctx->pc = 0x16F274u;
        goto label_16f274;
    }
    ctx->pc = 0x16F26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F274u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F26Cu, 0x16F274u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F274u;
label_16f274:
    // 0x16f274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16f278:
    // 0x16f278: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x16f278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_16f27c:
    // 0x16f27c: 0x3e00008  jr          $ra
label_16f280:
    if (ctx->pc == 0x16F280u) {
        ctx->pc = 0x16F284u;
        goto label_16f284;
    }
    ctx->pc = 0x16F27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F284u;
label_16f284:
    // 0x16f284: 0x0  nop
    ctx->pc = 0x16f284u;
    // NOP
label_16f288:
    // 0x16f288: 0x0  nop
    ctx->pc = 0x16f288u;
    // NOP
label_16f28c:
    // 0x16f28c: 0x0  nop
    ctx->pc = 0x16f28cu;
    // NOP
    ctx->pc = 0x16f290u;
}

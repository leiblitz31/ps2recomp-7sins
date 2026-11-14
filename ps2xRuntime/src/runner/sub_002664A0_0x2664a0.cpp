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

// Function: sub_002664A0
// Address: 0x2664a0 - 0x2664e0
void sub_002664A0_0x2664a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002664A0_0x2664a0");
#endif

    switch (ctx->pc) {
        case 0x2664a0u: goto label_2664a0;
        case 0x2664a4u: goto label_2664a4;
        case 0x2664a8u: goto label_2664a8;
        case 0x2664acu: goto label_2664ac;
        case 0x2664b0u: goto label_2664b0;
        case 0x2664b4u: goto label_2664b4;
        case 0x2664b8u: goto label_2664b8;
        case 0x2664bcu: goto label_2664bc;
        case 0x2664c0u: goto label_2664c0;
        case 0x2664c4u: goto label_2664c4;
        case 0x2664c8u: goto label_2664c8;
        case 0x2664ccu: goto label_2664cc;
        case 0x2664d0u: goto label_2664d0;
        case 0x2664d4u: goto label_2664d4;
        case 0x2664d8u: goto label_2664d8;
        case 0x2664dcu: goto label_2664dc;
        default: break;
    }

    ctx->pc = 0x2664a0u;

label_2664a0:
    // 0x2664a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2664a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2664a4:
    // 0x2664a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2664a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2664a8:
    // 0x2664a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2664a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2664ac:
    // 0x2664ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2664acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2664b0:
    // 0x2664b0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2664b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2664b4:
    // 0x2664b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2664b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2664b8:
    // 0x2664b8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2664b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2664bc:
    // 0x2664bc: 0x320f809  jalr        $t9
label_2664c0:
    if (ctx->pc == 0x2664C0u) {
        ctx->pc = 0x2664C4u;
        goto label_2664c4;
    }
    ctx->pc = 0x2664BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2664C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2664BCu, 0x2664C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2664C4u;
label_2664c4:
    // 0x2664c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2664c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2664c8:
    // 0x2664c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2664c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2664cc:
    // 0x2664cc: 0x3e00008  jr          $ra
label_2664d0:
    if (ctx->pc == 0x2664D0u) {
        ctx->pc = 0x2664D4u;
        goto label_2664d4;
    }
    ctx->pc = 0x2664CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2664CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2664D4u;
label_2664d4:
    // 0x2664d4: 0x0  nop
    ctx->pc = 0x2664d4u;
    // NOP
label_2664d8:
    // 0x2664d8: 0x0  nop
    ctx->pc = 0x2664d8u;
    // NOP
label_2664dc:
    // 0x2664dc: 0x0  nop
    ctx->pc = 0x2664dcu;
    // NOP
    ctx->pc = 0x2664e0u;
}

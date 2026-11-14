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

// Function: sub_00240750
// Address: 0x240750 - 0x240790
void sub_00240750_0x240750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240750_0x240750");
#endif

    switch (ctx->pc) {
        case 0x240750u: goto label_240750;
        case 0x240754u: goto label_240754;
        case 0x240758u: goto label_240758;
        case 0x24075cu: goto label_24075c;
        case 0x240760u: goto label_240760;
        case 0x240764u: goto label_240764;
        case 0x240768u: goto label_240768;
        case 0x24076cu: goto label_24076c;
        case 0x240770u: goto label_240770;
        case 0x240774u: goto label_240774;
        case 0x240778u: goto label_240778;
        case 0x24077cu: goto label_24077c;
        case 0x240780u: goto label_240780;
        case 0x240784u: goto label_240784;
        case 0x240788u: goto label_240788;
        case 0x24078cu: goto label_24078c;
        default: break;
    }

    ctx->pc = 0x240750u;

label_240750:
    // 0x240750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_240754:
    // 0x240754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_240758:
    // 0x240758: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x240758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_24075c:
    // 0x24075c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24075cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_240760:
    // 0x240760: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x240760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_240764:
    // 0x240764: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x240764u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_240768:
    // 0x240768: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x240768u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_24076c:
    // 0x24076c: 0x320f809  jalr        $t9
label_240770:
    if (ctx->pc == 0x240770u) {
        ctx->pc = 0x240774u;
        goto label_240774;
    }
    ctx->pc = 0x24076Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x240774u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24076Cu, 0x240774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240774u;
label_240774:
    // 0x240774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_240778:
    // 0x240778: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x240778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_24077c:
    // 0x24077c: 0x3e00008  jr          $ra
label_240780:
    if (ctx->pc == 0x240780u) {
        ctx->pc = 0x240784u;
        goto label_240784;
    }
    ctx->pc = 0x24077Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24077Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240784u;
label_240784:
    // 0x240784: 0x0  nop
    ctx->pc = 0x240784u;
    // NOP
label_240788:
    // 0x240788: 0x0  nop
    ctx->pc = 0x240788u;
    // NOP
label_24078c:
    // 0x24078c: 0x0  nop
    ctx->pc = 0x24078cu;
    // NOP
    ctx->pc = 0x240790u;
}

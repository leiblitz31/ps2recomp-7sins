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

// Function: sub_00106C90
// Address: 0x106c90 - 0x106ce0
void sub_00106C90_0x106c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106C90_0x106c90");
#endif

    switch (ctx->pc) {
        case 0x106c90u: goto label_106c90;
        case 0x106c94u: goto label_106c94;
        case 0x106c98u: goto label_106c98;
        case 0x106c9cu: goto label_106c9c;
        case 0x106ca0u: goto label_106ca0;
        case 0x106ca4u: goto label_106ca4;
        case 0x106ca8u: goto label_106ca8;
        case 0x106cacu: goto label_106cac;
        case 0x106cb0u: goto label_106cb0;
        case 0x106cb4u: goto label_106cb4;
        case 0x106cb8u: goto label_106cb8;
        case 0x106cbcu: goto label_106cbc;
        case 0x106cc0u: goto label_106cc0;
        case 0x106cc4u: goto label_106cc4;
        case 0x106cc8u: goto label_106cc8;
        case 0x106cccu: goto label_106ccc;
        case 0x106cd0u: goto label_106cd0;
        case 0x106cd4u: goto label_106cd4;
        case 0x106cd8u: goto label_106cd8;
        case 0x106cdcu: goto label_106cdc;
        default: break;
    }

    ctx->pc = 0x106c90u;

label_106c90:
    // 0x106c90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x106c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_106c94:
    // 0x106c94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_106c98:
    // 0x106c98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x106c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_106c9c:
    // 0x106c9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x106c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_106ca0:
    // 0x106ca0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x106ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_106ca4:
    // 0x106ca4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x106ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_106ca8:
    // 0x106ca8: 0xc086230  jal         func_2188C0
label_106cac:
    if (ctx->pc == 0x106CACu) {
        ctx->pc = 0x106CB0u;
        goto label_106cb0;
    }
    ctx->pc = 0x106CA8u;
    SET_GPR_U32(ctx, 31, 0x106CB0u);
    ctx->pc = 0x2188C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2188C0u, 0x106CA8u, 0x106CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106CB0u;
label_106cb0:
    // 0x106cb0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x106cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_106cb4:
    // 0x106cb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x106cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_106cb8:
    // 0x106cb8: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x106cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_106cbc:
    // 0x106cbc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x106cbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_106cc0:
    // 0x106cc0: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x106cc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_106cc4:
    // 0x106cc4: 0x320f809  jalr        $t9
label_106cc8:
    if (ctx->pc == 0x106CC8u) {
        ctx->pc = 0x106CCCu;
        goto label_106ccc;
    }
    ctx->pc = 0x106CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x106CCCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106CC4u, 0x106CCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106CCCu;
label_106ccc:
    // 0x106ccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_106cd0:
    // 0x106cd0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x106cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_106cd4:
    // 0x106cd4: 0x3e00008  jr          $ra
label_106cd8:
    if (ctx->pc == 0x106CD8u) {
        ctx->pc = 0x106CDCu;
        goto label_106cdc;
    }
    ctx->pc = 0x106CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106CDCu;
label_106cdc:
    // 0x106cdc: 0x0  nop
    ctx->pc = 0x106cdcu;
    // NOP
    ctx->pc = 0x106ce0u;
}

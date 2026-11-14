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

// Function: sub_00483AA0
// Address: 0x483aa0 - 0x483ae0
void sub_00483AA0_0x483aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483AA0_0x483aa0");
#endif

    switch (ctx->pc) {
        case 0x483aa0u: goto label_483aa0;
        case 0x483aa4u: goto label_483aa4;
        case 0x483aa8u: goto label_483aa8;
        case 0x483aacu: goto label_483aac;
        case 0x483ab0u: goto label_483ab0;
        case 0x483ab4u: goto label_483ab4;
        case 0x483ab8u: goto label_483ab8;
        case 0x483abcu: goto label_483abc;
        case 0x483ac0u: goto label_483ac0;
        case 0x483ac4u: goto label_483ac4;
        case 0x483ac8u: goto label_483ac8;
        case 0x483accu: goto label_483acc;
        case 0x483ad0u: goto label_483ad0;
        case 0x483ad4u: goto label_483ad4;
        case 0x483ad8u: goto label_483ad8;
        case 0x483adcu: goto label_483adc;
        default: break;
    }

    ctx->pc = 0x483aa0u;

label_483aa0:
    // 0x483aa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x483aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_483aa4:
    // 0x483aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x483aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_483aa8:
    // 0x483aa8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x483aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_483aac:
    // 0x483aac: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x483aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_483ab0:
    // 0x483ab0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x483ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_483ab4:
    // 0x483ab4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x483ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_483ab8:
    // 0x483ab8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x483ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_483abc:
    // 0x483abc: 0x8c42e968  lw          $v0, -0x1698($v0)
    ctx->pc = 0x483abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961512)));
label_483ac0:
    // 0x483ac0: 0x40f809  jalr        $v0
label_483ac4:
    if (ctx->pc == 0x483AC4u) {
        ctx->pc = 0x483AC8u;
        goto label_483ac8;
    }
    ctx->pc = 0x483AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x483AC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483AC0u, 0x483AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x483AC8u;
label_483ac8:
    // 0x483ac8: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x483ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_483acc:
    // 0x483acc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x483accu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_483ad0:
    // 0x483ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x483ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_483ad4:
    // 0x483ad4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x483ad4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_483ad8:
    // 0x483ad8: 0x3e00008  jr          $ra
label_483adc:
    if (ctx->pc == 0x483ADCu) {
        ctx->pc = 0x483AE0u;
        goto label_fallthrough_0x483ad8;
    }
    ctx->pc = 0x483AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x483ad8:
    ctx->pc = 0x483AE0u;
}

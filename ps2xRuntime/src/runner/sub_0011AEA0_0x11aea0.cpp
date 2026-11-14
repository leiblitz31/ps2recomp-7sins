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

// Function: sub_0011AEA0
// Address: 0x11aea0 - 0x11af10
void sub_0011AEA0_0x11aea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AEA0_0x11aea0");
#endif

    switch (ctx->pc) {
        case 0x11aec0u: goto label_11aec0;
        case 0x11aed8u: goto label_11aed8;
        case 0x11aeecu: goto label_11aeec;
        default: break;
    }

    ctx->pc = 0x11aea0u;

    // 0x11aea0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11aea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11aea4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11aea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11aea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11aea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11aeac: 0x8f82b9d0  lw          $v0, -0x4630($gp)
    ctx->pc = 0x11aeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949328)));
    // 0x11aeb0: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x11aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x11aeb4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x11aeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11aeb8: 0xc0553d4  jal         func_154F50
    ctx->pc = 0x11AEB8u;
    SET_GPR_U32(ctx, 31, 0x11AEC0u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x11AEB8u, 0x11AEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AEC0u;
label_11aec0:
    // 0x11aec0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11aec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aec4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11AEC4u;
    {
        const bool branch_taken_0x11aec4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11aec4) {
            ctx->pc = 0x11AEECu;
            goto label_11aeec;
        }
    }
    ctx->pc = 0x11AECCu;
    // 0x11aecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11aeccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aed0: 0xc0413bc  jal         func_104EF0
    ctx->pc = 0x11AED0u;
    SET_GPR_U32(ctx, 31, 0x11AED8u);
    ctx->pc = 0x104EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EF0u, 0x11AED0u, 0x11AED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AED8u;
label_11aed8:
    // 0x11aed8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11AED8u;
    {
        const bool branch_taken_0x11aed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11aed8) {
            ctx->pc = 0x11AEECu;
            goto label_11aeec;
        }
    }
    ctx->pc = 0x11AEE0u;
    // 0x11aee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11aee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aee4: 0xc057ce0  jal         func_15F380
    ctx->pc = 0x11AEE4u;
    SET_GPR_U32(ctx, 31, 0x11AEECu);
    ctx->pc = 0x15F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F380u, 0x11AEE4u, 0x11AEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AEECu;
label_11aeec:
    // 0x11aeec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11aef0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11aef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11aef4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11aef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11aef8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x11aef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11aefc: 0x3e00008  jr          $ra
    ctx->pc = 0x11AEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AF04u;
    // 0x11af04: 0x0  nop
    ctx->pc = 0x11af04u;
    // NOP
    // 0x11af08: 0x0  nop
    ctx->pc = 0x11af08u;
    // NOP
    // 0x11af0c: 0x0  nop
    ctx->pc = 0x11af0cu;
    // NOP
    ctx->pc = 0x11af10u;
}

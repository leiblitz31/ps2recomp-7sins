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

// Function: sub_0028FE40
// Address: 0x28fe40 - 0x28fea0
void sub_0028FE40_0x28fe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FE40_0x28fe40");
#endif

    switch (ctx->pc) {
        case 0x28fe68u: goto label_28fe68;
        case 0x28fe7cu: goto label_28fe7c;
        default: break;
    }

    ctx->pc = 0x28fe40u;

    // 0x28fe40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28fe40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28fe44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28fe44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28fe48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28fe48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28fe4c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28fe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28fe50: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x28fe50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x28fe54: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28fe54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28fe58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28fe58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fe5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28fe5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe60: 0xc0a37c8  jal         func_28DF20
    ctx->pc = 0x28FE60u;
    SET_GPR_U32(ctx, 31, 0x28FE68u);
    ctx->pc = 0x28DF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DF20u, 0x28FE60u, 0x28FE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE68u;
label_28fe68:
    // 0x28fe68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28fe68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe6c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x28fe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x28fe70: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x28fe70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28fe74: 0xc0a3fa8  jal         func_28FEA0
    ctx->pc = 0x28FE74u;
    SET_GPR_U32(ctx, 31, 0x28FE7Cu);
    ctx->pc = 0x28FEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FEA0u, 0x28FE74u, 0x28FE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE7Cu;
label_28fe7c:
    // 0x28fe7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28fe7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28fe80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28fe84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28fe84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fe88: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28fe88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28fe8c: 0x3e00008  jr          $ra
    ctx->pc = 0x28FE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FE94u;
    // 0x28fe94: 0x0  nop
    ctx->pc = 0x28fe94u;
    // NOP
    // 0x28fe98: 0x0  nop
    ctx->pc = 0x28fe98u;
    // NOP
    // 0x28fe9c: 0x0  nop
    ctx->pc = 0x28fe9cu;
    // NOP
    ctx->pc = 0x28fea0u;
}

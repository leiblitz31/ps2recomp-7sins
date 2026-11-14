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

// Function: sub_0024FE50
// Address: 0x24fe50 - 0x24feb0
void sub_0024FE50_0x24fe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FE50_0x24fe50");
#endif

    switch (ctx->pc) {
        case 0x24fe78u: goto label_24fe78;
        case 0x24fe8cu: goto label_24fe8c;
        default: break;
    }

    ctx->pc = 0x24fe50u;

    // 0x24fe50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24fe50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24fe54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24fe54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24fe58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24fe58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24fe5c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24fe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x24fe60: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x24fe60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x24fe64: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24fe64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24fe68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24fe68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24fe6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24fe6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fe70: 0xc093b30  jal         func_24ECC0
    ctx->pc = 0x24FE70u;
    SET_GPR_U32(ctx, 31, 0x24FE78u);
    ctx->pc = 0x24ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24ECC0u, 0x24FE70u, 0x24FE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FE78u;
label_24fe78:
    // 0x24fe78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24fe78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fe7c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x24fe7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x24fe80: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x24fe80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24fe84: 0xc093fac  jal         func_24FEB0
    ctx->pc = 0x24FE84u;
    SET_GPR_U32(ctx, 31, 0x24FE8Cu);
    ctx->pc = 0x24FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FEB0u, 0x24FE84u, 0x24FE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FE8Cu;
label_24fe8c:
    // 0x24fe8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24fe8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fe90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24fe90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24fe94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24fe94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fe98: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x24fe98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24fe9c: 0x3e00008  jr          $ra
    ctx->pc = 0x24FE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FEA4u;
    // 0x24fea4: 0x0  nop
    ctx->pc = 0x24fea4u;
    // NOP
    // 0x24fea8: 0x0  nop
    ctx->pc = 0x24fea8u;
    // NOP
    // 0x24feac: 0x0  nop
    ctx->pc = 0x24feacu;
    // NOP
    ctx->pc = 0x24feb0u;
}

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

// Function: sub_00118BE0
// Address: 0x118be0 - 0x118c30
void sub_00118BE0_0x118be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118BE0_0x118be0");
#endif

    switch (ctx->pc) {
        case 0x118c14u: goto label_118c14;
        default: break;
    }

    ctx->pc = 0x118be0u;

    // 0x118be0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x118be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x118be4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118be8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x118be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x118bec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x118becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x118bf0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x118bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x118bf4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x118bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118bf8: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x118bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x118bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118c00: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x118c00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x118c04: 0x24a58a10  addiu       $a1, $a1, -0x75F0
    ctx->pc = 0x118c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937104));
    // 0x118c08: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x118c08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118c0c: 0xc0e3396  jal         func_38CE58
    ctx->pc = 0x118C0Cu;
    SET_GPR_U32(ctx, 31, 0x118C14u);
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x118C0Cu, 0x118C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C14u;
label_118c14:
    // 0x118c14: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x118c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118c18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118c1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x118c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118c20: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x118c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x118c24: 0x3e00008  jr          $ra
    ctx->pc = 0x118C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118C2Cu;
    // 0x118c2c: 0x0  nop
    ctx->pc = 0x118c2cu;
    // NOP
    ctx->pc = 0x118c30u;
}

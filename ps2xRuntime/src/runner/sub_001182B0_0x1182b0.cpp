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

// Function: sub_001182B0
// Address: 0x1182b0 - 0x118310
void sub_001182B0_0x1182b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001182B0_0x1182b0");
#endif

    switch (ctx->pc) {
        case 0x1182d8u: goto label_1182d8;
        case 0x1182ecu: goto label_1182ec;
        default: break;
    }

    ctx->pc = 0x1182b0u;

    // 0x1182b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1182b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1182b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1182b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1182b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1182b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1182bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1182bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1182c0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1182c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1182c4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1182c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1182c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1182c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1182cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1182ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182d0: 0xc045a08  jal         func_116820
    ctx->pc = 0x1182D0u;
    SET_GPR_U32(ctx, 31, 0x1182D8u);
    ctx->pc = 0x116820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116820u, 0x1182D0u, 0x1182D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1182D8u;
label_1182d8:
    // 0x1182d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1182d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182dc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1182dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1182e0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1182e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1182e4: 0xc0460c4  jal         func_118310
    ctx->pc = 0x1182E4u;
    SET_GPR_U32(ctx, 31, 0x1182ECu);
    ctx->pc = 0x118310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118310u, 0x1182E4u, 0x1182ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1182ECu;
label_1182ec:
    // 0x1182ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1182ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1182f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1182f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1182f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1182f8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1182f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1182fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1182FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1182FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118304u;
    // 0x118304: 0x0  nop
    ctx->pc = 0x118304u;
    // NOP
    // 0x118308: 0x0  nop
    ctx->pc = 0x118308u;
    // NOP
    // 0x11830c: 0x0  nop
    ctx->pc = 0x11830cu;
    // NOP
    ctx->pc = 0x118310u;
}

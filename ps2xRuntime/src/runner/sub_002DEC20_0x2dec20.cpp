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

// Function: sub_002DEC20
// Address: 0x2dec20 - 0x2dec80
void sub_002DEC20_0x2dec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DEC20_0x2dec20");
#endif

    switch (ctx->pc) {
        case 0x2dec50u: goto label_2dec50;
        case 0x2dec68u: goto label_2dec68;
        default: break;
    }

    ctx->pc = 0x2dec20u;

    // 0x2dec20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2dec20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2dec24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dec24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dec28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dec28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dec2c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2dec2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2dec30: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2dec30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2dec34: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x2dec34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x2dec38: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x2dec38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
    // 0x2dec3c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2dec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dec40: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2dec40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dec44: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x2dec44u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dec48: 0xc0ba892  jal         func_2EA248
    ctx->pc = 0x2DEC48u;
    SET_GPR_U32(ctx, 31, 0x2DEC50u);
    ctx->pc = 0x2EA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA248u, 0x2DEC48u, 0x2DEC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEC50u;
label_2dec50:
    // 0x2dec50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dec50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dec54: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2dec54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dec58: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2dec58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dec5c: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x2dec5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dec60: 0xc0ba892  jal         func_2EA248
    ctx->pc = 0x2DEC60u;
    SET_GPR_U32(ctx, 31, 0x2DEC68u);
    ctx->pc = 0x2EA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA248u, 0x2DEC60u, 0x2DEC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEC68u;
label_2dec68:
    // 0x2dec68: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2dec68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2dec6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dec6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dec70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dec70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dec74: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2dec74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2dec78: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DEC80u;
}

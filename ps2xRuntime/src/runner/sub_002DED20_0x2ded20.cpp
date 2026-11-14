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

// Function: sub_002DED20
// Address: 0x2ded20 - 0x2ded90
void sub_002DED20_0x2ded20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DED20_0x2ded20");
#endif

    switch (ctx->pc) {
        case 0x2ded3cu: goto label_2ded3c;
        default: break;
    }

    ctx->pc = 0x2ded20u;

    // 0x2ded20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ded20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ded24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ded24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ded28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ded28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ded2c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2ded2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2ded30: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2ded30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ded34: 0xc0b7b80  jal         func_2DEE00
    ctx->pc = 0x2DED34u;
    SET_GPR_U32(ctx, 31, 0x2DED3Cu);
    ctx->pc = 0x2DEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEE00u, 0x2DED34u, 0x2DED3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DED3Cu;
label_2ded3c:
    // 0x2ded3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ded3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ded40: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ded40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ded44: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2ded44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ded48: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2ded48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ded4c: 0x3223c  dsll32      $a0, $v1, 8
    ctx->pc = 0x2ded4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 8));
    // 0x2ded50: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x2ded50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x2ded54: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2ded54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ded58: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2ded58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2ded5c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2ded5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ded60: 0x102600  sll         $a0, $s0, 24
    ctx->pc = 0x2ded60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x2ded64: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2ded64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ded68: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2ded68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2ded6c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2ded6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ded70: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2ded70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2ded74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ded74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ded78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ded78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ded7c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ded7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ded80: 0x3e00008  jr          $ra
    ctx->pc = 0x2DED80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DED80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DED88u;
    // 0x2ded88: 0x0  nop
    ctx->pc = 0x2ded88u;
    // NOP
    // 0x2ded8c: 0x0  nop
    ctx->pc = 0x2ded8cu;
    // NOP
    ctx->pc = 0x2ded90u;
}

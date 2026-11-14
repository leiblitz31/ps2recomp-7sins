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

// Function: sub_002DED90
// Address: 0x2ded90 - 0x2dee00
void sub_002DED90_0x2ded90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DED90_0x2ded90");
#endif

    switch (ctx->pc) {
        case 0x2dedacu: goto label_2dedac;
        default: break;
    }

    ctx->pc = 0x2ded90u;

    // 0x2ded90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ded90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ded94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ded94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ded98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ded98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ded9c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2ded9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2deda0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2deda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2deda4: 0xc0b7b80  jal         func_2DEE00
    ctx->pc = 0x2DEDA4u;
    SET_GPR_U32(ctx, 31, 0x2DEDACu);
    ctx->pc = 0x2DEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEE00u, 0x2DEDA4u, 0x2DEDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEDACu;
label_2dedac:
    // 0x2dedac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dedacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dedb0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2dedb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2dedb4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2dedb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dedb8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2dedb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dedbc: 0x3223c  dsll32      $a0, $v1, 8
    ctx->pc = 0x2dedbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 8));
    // 0x2dedc0: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x2dedc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x2dedc4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2dedc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dedc8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2dedc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2dedcc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2dedccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dedd0: 0x102600  sll         $a0, $s0, 24
    ctx->pc = 0x2dedd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x2dedd4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2dedd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dedd8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2dedd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2deddc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2deddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dede0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2dede0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2dede4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dede4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dede8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dede8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dedec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2dedecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dedf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEDF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DEDF8u;
    // 0x2dedf8: 0x0  nop
    ctx->pc = 0x2dedf8u;
    // NOP
    // 0x2dedfc: 0x0  nop
    ctx->pc = 0x2dedfcu;
    // NOP
    ctx->pc = 0x2dee00u;
}

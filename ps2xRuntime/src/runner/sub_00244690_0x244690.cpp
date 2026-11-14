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

// Function: sub_00244690
// Address: 0x244690 - 0x2446f0
void sub_00244690_0x244690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244690_0x244690");
#endif

    switch (ctx->pc) {
        case 0x2446b4u: goto label_2446b4;
        default: break;
    }

    ctx->pc = 0x244690u;

    // 0x244690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x244690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x244694: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x244694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x244698: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x244698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24469c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24469cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2446a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2446a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2446a4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2446a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2446a8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2446a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2446ac: 0xc084ec0  jal         func_213B00
    ctx->pc = 0x2446ACu;
    SET_GPR_U32(ctx, 31, 0x2446B4u);
    ctx->pc = 0x213B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213B00u, 0x2446ACu, 0x2446B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2446B4u;
label_2446b4:
    // 0x2446b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2446b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2446b8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2446b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2446bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2446bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2446c0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2446c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2446c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2446c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2446c8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2446c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2446cc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2446ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2446d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2446d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2446d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2446d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2446d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2446d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2446dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2446dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2446e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2446E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2446E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2446E8u;
    // 0x2446e8: 0x0  nop
    ctx->pc = 0x2446e8u;
    // NOP
    // 0x2446ec: 0x0  nop
    ctx->pc = 0x2446ecu;
    // NOP
    ctx->pc = 0x2446f0u;
}

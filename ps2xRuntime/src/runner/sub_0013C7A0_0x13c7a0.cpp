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

// Function: sub_0013C7A0
// Address: 0x13c7a0 - 0x13c820
void sub_0013C7A0_0x13c7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C7A0_0x13c7a0");
#endif

    switch (ctx->pc) {
        case 0x13c7e8u: goto label_13c7e8;
        default: break;
    }

    ctx->pc = 0x13c7a0u;

    // 0x13c7a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13c7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13c7a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13c7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13c7a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13c7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13c7ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c7b0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x13c7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x13c7b4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x13c7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x13c7b8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x13c7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x13c7bc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x13c7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c7c0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c7c4: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x13c7c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c7c8: 0x1a00000a  blez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x13C7C8u;
    {
        const bool branch_taken_0x13c7c8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x13c7c8) {
            ctx->pc = 0x13C7F4u;
            goto label_13c7f4;
        }
    }
    ctx->pc = 0x13C7D0u;
    // 0x13c7d0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c7d4: 0x502023  subu        $a0, $v0, $s0
    ctx->pc = 0x13c7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x13c7d8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x13c7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c7dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13c7dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c7e0: 0xc0bb7a4  jal         func_2EDE90
    ctx->pc = 0x13C7E0u;
    SET_GPR_U32(ctx, 31, 0x13C7E8u);
    ctx->pc = 0x2EDE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDE90u, 0x13C7E0u, 0x13C7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C7E8u;
label_13c7e8:
    // 0x13c7e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13c7e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c7ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13C7ECu;
    {
        const bool branch_taken_0x13c7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c7ec) {
            ctx->pc = 0x13C7F8u;
            goto label_13c7f8;
        }
    }
    ctx->pc = 0x13C7F4u;
label_13c7f4:
    // 0x13c7f4: 0x8fb10050  lw          $s1, 0x50($sp)
    ctx->pc = 0x13c7f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_13c7f8:
    // 0x13c7f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13c7f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c7fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13c7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c800: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13c800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c804: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c808: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x13c808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13c80c: 0x3e00008  jr          $ra
    ctx->pc = 0x13C80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C814u;
    // 0x13c814: 0x0  nop
    ctx->pc = 0x13c814u;
    // NOP
    // 0x13c818: 0x0  nop
    ctx->pc = 0x13c818u;
    // NOP
    // 0x13c81c: 0x0  nop
    ctx->pc = 0x13c81cu;
    // NOP
    ctx->pc = 0x13c820u;
}

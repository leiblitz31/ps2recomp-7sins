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

// Function: sub_002E17A0
// Address: 0x2e17a0 - 0x2e1830
void sub_002E17A0_0x2e17a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E17A0_0x2e17a0");
#endif

    switch (ctx->pc) {
        case 0x2e17c8u: goto label_2e17c8;
        case 0x2e17dcu: goto label_2e17dc;
        case 0x2e1810u: goto label_2e1810;
        default: break;
    }

    ctx->pc = 0x2e17a0u;

    // 0x2e17a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e17a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e17a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e17a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e17a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e17a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e17ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e17acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e17b0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2e17b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2e17b4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2e17b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2e17b8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2e17b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e17bc: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2e17bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e17c0: 0xc0b828c  jal         func_2E0A30
    ctx->pc = 0x2E17C0u;
    SET_GPR_U32(ctx, 31, 0x2E17C8u);
    ctx->pc = 0x2E0A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0A30u, 0x2E17C0u, 0x2E17C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E17C8u;
label_2e17c8:
    // 0x2e17c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e17c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e17cc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2e17ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e17d0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2e17d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e17d4: 0xc0b826c  jal         func_2E09B0
    ctx->pc = 0x2E17D4u;
    SET_GPR_U32(ctx, 31, 0x2E17DCu);
    ctx->pc = 0x2E09B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E09B0u, 0x2E17D4u, 0x2E17DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E17DCu;
label_2e17dc:
    // 0x2e17dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e17dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e17e0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e17e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e17e4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2e17e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2e17e8: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x2e17e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e17ec: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x2e17ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e17f0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e17f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e17f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e17f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e17f8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2e17f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2e17fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e17fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1800: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x2e1800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x2e1804: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2e1804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e1808: 0xc0b7b64  jal         func_2DED90
    ctx->pc = 0x2E1808u;
    SET_GPR_U32(ctx, 31, 0x2E1810u);
    ctx->pc = 0x2DED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DED90u, 0x2E1808u, 0x2E1810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1810u;
label_2e1810:
    // 0x2e1810: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e1810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1814: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e1814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e1818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e181c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2e181cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e1820: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1828u;
    // 0x2e1828: 0x0  nop
    ctx->pc = 0x2e1828u;
    // NOP
    // 0x2e182c: 0x0  nop
    ctx->pc = 0x2e182cu;
    // NOP
    ctx->pc = 0x2e1830u;
}

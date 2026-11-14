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

// Function: sub_004579A0
// Address: 0x4579a0 - 0x457a70
void sub_004579A0_0x4579a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004579A0_0x4579a0");
#endif

    switch (ctx->pc) {
        case 0x4579d0u: goto label_4579d0;
        case 0x4579e4u: goto label_4579e4;
        case 0x457a00u: goto label_457a00;
        case 0x457a0cu: goto label_457a0c;
        case 0x457a2cu: goto label_457a2c;
        case 0x457a48u: goto label_457a48;
        default: break;
    }

    ctx->pc = 0x4579a0u;

    // 0x4579a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4579a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4579a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4579a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4579a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4579a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4579ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4579acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4579b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4579b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4579b4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x4579b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x4579b8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x4579b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x4579bc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x4579bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4579c0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x4579c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4579c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4579c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4579c8: 0xc115eb0  jal         func_457AC0
    ctx->pc = 0x4579C8u;
    SET_GPR_U32(ctx, 31, 0x4579D0u);
    ctx->pc = 0x457AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457AC0u, 0x4579C8u, 0x4579D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4579D0u;
label_4579d0:
    // 0x4579d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4579d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4579d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4579d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4579d8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x4579d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4579dc: 0xc04e50c  jal         func_139430
    ctx->pc = 0x4579DCu;
    SET_GPR_U32(ctx, 31, 0x4579E4u);
    ctx->pc = 0x139430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139430u, 0x4579DCu, 0x4579E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4579E4u;
label_4579e4:
    // 0x4579e4: 0x242001b  divu        $zero, $s2, $v0
    ctx->pc = 0x4579e4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
    // 0x4579e8: 0x8810  mfhi        $s1
    ctx->pc = 0x4579e8u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x4579ec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4579ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4579f0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x4579f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4579f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4579f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4579f8: 0xc04ed90  jal         func_13B640
    ctx->pc = 0x4579F8u;
    SET_GPR_U32(ctx, 31, 0x457A00u);
    ctx->pc = 0x13B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B640u, 0x4579F8u, 0x457A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457A00u;
label_457a00:
    // 0x457a00: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x457a00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x457a04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x457A04u;
    {
        const bool branch_taken_0x457a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x457a04) {
            ctx->pc = 0x457A10u;
            goto label_457a10;
        }
    }
    ctx->pc = 0x457A0Cu;
label_457a0c:
    // 0x457a0c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x457a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_457a10:
    // 0x457a10: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x457A10u;
    {
        const bool branch_taken_0x457a10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x457a10) {
            ctx->pc = 0x457A50u;
            goto label_457a50;
        }
    }
    ctx->pc = 0x457A18u;
    // 0x457a18: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x457a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x457a1c: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x457a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x457a20: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x457a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x457a24: 0xc115ea8  jal         func_457AA0
    ctx->pc = 0x457A24u;
    SET_GPR_U32(ctx, 31, 0x457A2Cu);
    ctx->pc = 0x457AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457AA0u, 0x457A24u, 0x457A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457A2Cu;
label_457a2c:
    // 0x457a2c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x457a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x457a30: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x457a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x457a34: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x457a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x457a38: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x457a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x457a3c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x457a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x457a40: 0xc115e9c  jal         func_457A70
    ctx->pc = 0x457A40u;
    SET_GPR_U32(ctx, 31, 0x457A48u);
    ctx->pc = 0x457A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457A70u, 0x457A40u, 0x457A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457A48u;
label_457a48:
    // 0x457a48: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x457A48u;
    {
        const bool branch_taken_0x457a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x457a48) {
            ctx->pc = 0x457A0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_457a0c;
        }
    }
    ctx->pc = 0x457A50u;
label_457a50:
    // 0x457a50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x457a50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457a54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x457a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x457a58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x457a58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x457a5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x457a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457a60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x457a60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x457a64: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x457a64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x457a68: 0x3e00008  jr          $ra
    ctx->pc = 0x457A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x457A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x457A70u;
}

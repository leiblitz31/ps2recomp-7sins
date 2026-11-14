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

// Function: sub_0026B6B0
// Address: 0x26b6b0 - 0x26b810
void sub_0026B6B0_0x26b6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B6B0_0x26b6b0");
#endif

    switch (ctx->pc) {
        case 0x26b6e0u: goto label_26b6e0;
        case 0x26b6ecu: goto label_26b6ec;
        case 0x26b6fcu: goto label_26b6fc;
        case 0x26b710u: goto label_26b710;
        case 0x26b728u: goto label_26b728;
        case 0x26b734u: goto label_26b734;
        case 0x26b744u: goto label_26b744;
        case 0x26b758u: goto label_26b758;
        case 0x26b770u: goto label_26b770;
        case 0x26b77cu: goto label_26b77c;
        case 0x26b78cu: goto label_26b78c;
        case 0x26b7a0u: goto label_26b7a0;
        case 0x26b7b8u: goto label_26b7b8;
        case 0x26b7c4u: goto label_26b7c4;
        case 0x26b7d4u: goto label_26b7d4;
        case 0x26b7e8u: goto label_26b7e8;
        default: break;
    }

    ctx->pc = 0x26b6b0u;

    // 0x26b6b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26b6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x26b6b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26b6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26b6b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26b6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26b6bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26b6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26b6c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26b6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26b6c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26b6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26b6c8: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x26b6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x26b6cc: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x26b6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x26b6d0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26b6d4: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x26b6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x26b6d8: 0xc04809c  jal         func_120270
    ctx->pc = 0x26B6D8u;
    SET_GPR_U32(ctx, 31, 0x26B6E0u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26B6D8u, 0x26B6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B6E0u;
label_26b6e0:
    // 0x26b6e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26b6e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b6e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26B6E4u;
    {
        const bool branch_taken_0x26b6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b6e4) {
            ctx->pc = 0x26B700u;
            goto label_26b700;
        }
    }
    ctx->pc = 0x26B6ECu;
label_26b6ec:
    // 0x26b6ec: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x26b6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26b6f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26b6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b6f4: 0xc09a42c  jal         func_2690B0
    ctx->pc = 0x26B6F4u;
    SET_GPR_U32(ctx, 31, 0x26B6FCu);
    ctx->pc = 0x2690B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2690B0u, 0x26B6F4u, 0x26B6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B6FCu;
label_26b6fc:
    // 0x26b6fc: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x26b6fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_26b700:
    // 0x26b700: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26b700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26b704: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x26b704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x26b708: 0xc04808c  jal         func_120230
    ctx->pc = 0x26B708u;
    SET_GPR_U32(ctx, 31, 0x26B710u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26B708u, 0x26B710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B710u;
label_26b710:
    // 0x26b710: 0x1662fff6  bne         $s3, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x26B710u;
    {
        const bool branch_taken_0x26b710 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x26b710) {
            ctx->pc = 0x26B6ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26b6ec;
        }
    }
    ctx->pc = 0x26B718u;
    // 0x26b718: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26b718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26b71c: 0x24440088  addiu       $a0, $v0, 0x88
    ctx->pc = 0x26b71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x26b720: 0xc04809c  jal         func_120270
    ctx->pc = 0x26B720u;
    SET_GPR_U32(ctx, 31, 0x26B728u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26B720u, 0x26B728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B728u;
label_26b728:
    // 0x26b728: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26b728u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b72c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26B72Cu;
    {
        const bool branch_taken_0x26b72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b72c) {
            ctx->pc = 0x26B748u;
            goto label_26b748;
        }
    }
    ctx->pc = 0x26B734u;
label_26b734:
    // 0x26b734: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x26b734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26b738: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26b738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b73c: 0xc09a42c  jal         func_2690B0
    ctx->pc = 0x26B73Cu;
    SET_GPR_U32(ctx, 31, 0x26B744u);
    ctx->pc = 0x2690B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2690B0u, 0x26B73Cu, 0x26B744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B744u;
label_26b744:
    // 0x26b744: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x26b744u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_26b748:
    // 0x26b748: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26b748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26b74c: 0x24440088  addiu       $a0, $v0, 0x88
    ctx->pc = 0x26b74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x26b750: 0xc04808c  jal         func_120230
    ctx->pc = 0x26B750u;
    SET_GPR_U32(ctx, 31, 0x26B758u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26B750u, 0x26B758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B758u;
label_26b758:
    // 0x26b758: 0x1642fff6  bne         $s2, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x26B758u;
    {
        const bool branch_taken_0x26b758 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x26b758) {
            ctx->pc = 0x26B734u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26b734;
        }
    }
    ctx->pc = 0x26B760u;
    // 0x26b760: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26b760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26b764: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x26b764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x26b768: 0xc04809c  jal         func_120270
    ctx->pc = 0x26B768u;
    SET_GPR_U32(ctx, 31, 0x26B770u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26B768u, 0x26B770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B770u;
label_26b770:
    // 0x26b770: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26b770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b774: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26B774u;
    {
        const bool branch_taken_0x26b774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b774) {
            ctx->pc = 0x26B790u;
            goto label_26b790;
        }
    }
    ctx->pc = 0x26B77Cu;
label_26b77c:
    // 0x26b77c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x26b77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26b780: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26b780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b784: 0xc09a42c  jal         func_2690B0
    ctx->pc = 0x26B784u;
    SET_GPR_U32(ctx, 31, 0x26B78Cu);
    ctx->pc = 0x2690B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2690B0u, 0x26B784u, 0x26B78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B78Cu;
label_26b78c:
    // 0x26b78c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x26b78cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_26b790:
    // 0x26b790: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26b790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26b794: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x26b794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x26b798: 0xc04808c  jal         func_120230
    ctx->pc = 0x26B798u;
    SET_GPR_U32(ctx, 31, 0x26B7A0u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26B798u, 0x26B7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B7A0u;
label_26b7a0:
    // 0x26b7a0: 0x1622fff6  bne         $s1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x26B7A0u;
    {
        const bool branch_taken_0x26b7a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x26b7a0) {
            ctx->pc = 0x26B77Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26b77c;
        }
    }
    ctx->pc = 0x26B7A8u;
    // 0x26b7a8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26b7ac: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x26b7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x26b7b0: 0xc04809c  jal         func_120270
    ctx->pc = 0x26B7B0u;
    SET_GPR_U32(ctx, 31, 0x26B7B8u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26B7B0u, 0x26B7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B7B8u;
label_26b7b8:
    // 0x26b7b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26b7b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b7bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26B7BCu;
    {
        const bool branch_taken_0x26b7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b7bc) {
            ctx->pc = 0x26B7D8u;
            goto label_26b7d8;
        }
    }
    ctx->pc = 0x26B7C4u;
label_26b7c4:
    // 0x26b7c4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x26b7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26b7c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26b7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b7cc: 0xc09a42c  jal         func_2690B0
    ctx->pc = 0x26B7CCu;
    SET_GPR_U32(ctx, 31, 0x26B7D4u);
    ctx->pc = 0x2690B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2690B0u, 0x26B7CCu, 0x26B7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B7D4u;
label_26b7d4:
    // 0x26b7d4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x26b7d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_26b7d8:
    // 0x26b7d8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26b7dc: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x26b7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x26b7e0: 0xc04808c  jal         func_120230
    ctx->pc = 0x26B7E0u;
    SET_GPR_U32(ctx, 31, 0x26B7E8u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26B7E0u, 0x26B7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B7E8u;
label_26b7e8:
    // 0x26b7e8: 0x1602fff6  bne         $s0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x26B7E8u;
    {
        const bool branch_taken_0x26b7e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x26b7e8) {
            ctx->pc = 0x26B7C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26b7c4;
        }
    }
    ctx->pc = 0x26B7F0u;
    // 0x26b7f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26b7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26b7f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26b7f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26b7f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26b7f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b7fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26b7fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b800: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26b800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b804: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x26b804u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x26b808: 0x3e00008  jr          $ra
    ctx->pc = 0x26B808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B810u;
}

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

// Function: sub_0029B390
// Address: 0x29b390 - 0x29b450
void sub_0029B390_0x29b390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B390_0x29b390");
#endif

    switch (ctx->pc) {
        case 0x29b3b4u: goto label_29b3b4;
        case 0x29b3d4u: goto label_29b3d4;
        case 0x29b3e0u: goto label_29b3e0;
        case 0x29b3f0u: goto label_29b3f0;
        case 0x29b414u: goto label_29b414;
        default: break;
    }

    ctx->pc = 0x29b390u;

    // 0x29b390: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29b390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29b394: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29b394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29b398: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29b398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29b39c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29b39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29b3a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29b3a4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x29b3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x29b3a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29b3a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b3ac: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x29B3ACu;
    {
        const bool branch_taken_0x29b3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b3ac) {
            ctx->pc = 0x29B420u;
            goto label_29b420;
        }
    }
    ctx->pc = 0x29B3B4u;
label_29b3b4:
    // 0x29b3b4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x29b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x29b3b8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x29b3bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29b3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29b3c0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29b3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29b3c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29b3c8: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x29b3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x29b3cc: 0xc0a69a8  jal         func_29A6A0
    ctx->pc = 0x29B3CCu;
    SET_GPR_U32(ctx, 31, 0x29B3D4u);
    ctx->pc = 0x29A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6A0u, 0x29B3CCu, 0x29B3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B3D4u;
label_29b3d4:
    // 0x29b3d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29b3d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b3d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29B3D8u;
    {
        const bool branch_taken_0x29b3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b3d8) {
            ctx->pc = 0x29B3F4u;
            goto label_29b3f4;
        }
    }
    ctx->pc = 0x29B3E0u;
label_29b3e0:
    // 0x29b3e0: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x29b3e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29b3e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29b3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b3e8: 0xc0a66d4  jal         func_299B50
    ctx->pc = 0x29B3E8u;
    SET_GPR_U32(ctx, 31, 0x29B3F0u);
    ctx->pc = 0x299B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299B50u, 0x29B3E8u, 0x29B3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B3F0u;
label_29b3f0:
    // 0x29b3f0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x29b3f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_29b3f4:
    // 0x29b3f4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x29b3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x29b3f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x29b3fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29b400: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29b400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29b404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29b404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29b408: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x29b408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x29b40c: 0xc0a6990  jal         func_29A640
    ctx->pc = 0x29B40Cu;
    SET_GPR_U32(ctx, 31, 0x29B414u);
    ctx->pc = 0x29A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A640u, 0x29B40Cu, 0x29B414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B414u;
label_29b414:
    // 0x29b414: 0x1622fff2  bne         $s1, $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x29B414u;
    {
        const bool branch_taken_0x29b414 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x29b414) {
            ctx->pc = 0x29B3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b3e0;
        }
    }
    ctx->pc = 0x29B41Cu;
    // 0x29b41c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29b41cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29b420:
    // 0x29b420: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x29b420u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x29b424: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x29B424u;
    {
        const bool branch_taken_0x29b424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b424) {
            ctx->pc = 0x29B3B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b3b4;
        }
    }
    ctx->pc = 0x29B42Cu;
    // 0x29b42c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29b42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b430: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29b430u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b434: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29b434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b43c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x29b43cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29b440: 0x3e00008  jr          $ra
    ctx->pc = 0x29B440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B448u;
    // 0x29b448: 0x0  nop
    ctx->pc = 0x29b448u;
    // NOP
    // 0x29b44c: 0x0  nop
    ctx->pc = 0x29b44cu;
    // NOP
    ctx->pc = 0x29b450u;
}

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

// Function: sub_002C4350
// Address: 0x2c4350 - 0x2c4410
void sub_002C4350_0x2c4350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4350_0x2c4350");
#endif

    switch (ctx->pc) {
        case 0x2c4378u: goto label_2c4378;
        case 0x2c4390u: goto label_2c4390;
        case 0x2c43a0u: goto label_2c43a0;
        case 0x2c43b4u: goto label_2c43b4;
        case 0x2c43ccu: goto label_2c43cc;
        case 0x2c43d8u: goto label_2c43d8;
        case 0x2c43e8u: goto label_2c43e8;
        case 0x2c43f8u: goto label_2c43f8;
        default: break;
    }

    ctx->pc = 0x2c4350u;

    // 0x2c4350: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c4350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c4354: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c4354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c4358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c4358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c435c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c435cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c4360: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2c4360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2c4364: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2c4364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x2c4368: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2c4368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c436c: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x2c436cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x2c4370: 0xc0b1110  jal         func_2C4440
    ctx->pc = 0x2C4370u;
    SET_GPR_U32(ctx, 31, 0x2C4378u);
    ctx->pc = 0x2C4440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4440u, 0x2C4370u, 0x2C4378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4378u;
label_2c4378:
    // 0x2c4378: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C4378u;
    {
        const bool branch_taken_0x2c4378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4378) {
            ctx->pc = 0x2C43F8u;
            goto label_2c43f8;
        }
    }
    ctx->pc = 0x2C4380u;
    // 0x2c4380: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2c4380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c4384: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x2c4384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x2c4388: 0xc0b1104  jal         func_2C4410
    ctx->pc = 0x2C4388u;
    SET_GPR_U32(ctx, 31, 0x2C4390u);
    ctx->pc = 0x2C4410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4410u, 0x2C4388u, 0x2C4390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4390u;
label_2c4390:
    // 0x2c4390: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c4390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c4394: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2c4394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2c4398: 0xc0913e4  jal         func_244F90
    ctx->pc = 0x2C4398u;
    SET_GPR_U32(ctx, 31, 0x2C43A0u);
    ctx->pc = 0x244F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244F90u, 0x2C4398u, 0x2C43A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C43A0u;
label_2c43a0:
    // 0x2c43a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c43a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c43a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c43a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c43a8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2c43a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2c43ac: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C43ACu;
    SET_GPR_U32(ctx, 31, 0x2C43B4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C43ACu, 0x2C43B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C43B4u;
label_2c43b4:
    // 0x2c43b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c43b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c43b8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2c43b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c43bc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2c43bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c43c0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2c43c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c43c4: 0xc040304  jal         func_100C10
    ctx->pc = 0x2C43C4u;
    SET_GPR_U32(ctx, 31, 0x2C43CCu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2C43C4u, 0x2C43CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C43CCu;
label_2c43cc:
    // 0x2c43cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c43ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c43d0: 0xc0b767c  jal         func_2DD9F0
    ctx->pc = 0x2C43D0u;
    SET_GPR_U32(ctx, 31, 0x2C43D8u);
    ctx->pc = 0x2DD9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD9F0u, 0x2C43D0u, 0x2C43D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C43D8u;
label_2c43d8:
    // 0x2c43d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c43d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c43dc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2c43dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c43e0: 0xc0b9894  jal         func_2E6250
    ctx->pc = 0x2C43E0u;
    SET_GPR_U32(ctx, 31, 0x2C43E8u);
    ctx->pc = 0x2E6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6250u, 0x2C43E0u, 0x2C43E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C43E8u;
label_2c43e8:
    // 0x2c43e8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2c43e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c43ec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c43ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c43f0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2C43F0u;
    SET_GPR_U32(ctx, 31, 0x2C43F8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2C43F0u, 0x2C43F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C43F8u;
label_2c43f8:
    // 0x2c43f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c43f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c43fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c43fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4400: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c4400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4404: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2c4404u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c4408: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4410u;
}

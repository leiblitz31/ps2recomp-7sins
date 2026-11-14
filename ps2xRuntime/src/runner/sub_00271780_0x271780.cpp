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

// Function: sub_00271780
// Address: 0x271780 - 0x271860
void sub_00271780_0x271780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271780_0x271780");
#endif

    switch (ctx->pc) {
        case 0x2717acu: goto label_2717ac;
        case 0x2717b8u: goto label_2717b8;
        case 0x2717d0u: goto label_2717d0;
        case 0x2717e4u: goto label_2717e4;
        case 0x2717f0u: goto label_2717f0;
        case 0x27180cu: goto label_27180c;
        case 0x271834u: goto label_271834;
        default: break;
    }

    ctx->pc = 0x271780u;

    // 0x271780: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x271780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x271784: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x271784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x271788: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x271788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27178c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27178cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x271790: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x271790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x271794: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x271794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x271798: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x271798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x27179c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x27179cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2717a0: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x2717a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x2717a4: 0xc0513f8  jal         func_144FE0
    ctx->pc = 0x2717A4u;
    SET_GPR_U32(ctx, 31, 0x2717ACu);
    ctx->pc = 0x144FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FE0u, 0x2717A4u, 0x2717ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2717ACu;
label_2717ac:
    // 0x2717ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2717acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2717b0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2717B0u;
    {
        const bool branch_taken_0x2717b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2717b0) {
            ctx->pc = 0x271824u;
            goto label_271824;
        }
    }
    ctx->pc = 0x2717B8u;
label_2717b8:
    // 0x2717b8: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2717b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2717bc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2717bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2717c0: 0x8c53003c  lw          $s3, 0x3C($v0)
    ctx->pc = 0x2717c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2717c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2717c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2717c8: 0xc09d22c  jal         func_2748B0
    ctx->pc = 0x2717C8u;
    SET_GPR_U32(ctx, 31, 0x2717D0u);
    ctx->pc = 0x2748B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748B0u, 0x2717C8u, 0x2717D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2717D0u;
label_2717d0:
    // 0x2717d0: 0x16620013  bne         $s3, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2717D0u;
    {
        const bool branch_taken_0x2717d0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2717d0) {
            ctx->pc = 0x271820u;
            goto label_271820;
        }
    }
    ctx->pc = 0x2717D8u;
    // 0x2717d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2717d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2717dc: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x2717DCu;
    SET_GPR_U32(ctx, 31, 0x2717E4u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x2717DCu, 0x2717E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2717E4u;
label_2717e4:
    // 0x2717e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2717e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2717e8: 0xc09d0b8  jal         func_2742E0
    ctx->pc = 0x2717E8u;
    SET_GPR_U32(ctx, 31, 0x2717F0u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2717E8u, 0x2717F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2717F0u;
label_2717f0:
    // 0x2717f0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2717f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2717f4: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2717F4u;
    {
        const bool branch_taken_0x2717f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2717f4) {
            ctx->pc = 0x271820u;
            goto label_271820;
        }
    }
    ctx->pc = 0x2717FCu;
    // 0x2717fc: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2717fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271800: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x271800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271804: 0xc09c618  jal         func_271860
    ctx->pc = 0x271804u;
    SET_GPR_U32(ctx, 31, 0x27180Cu);
    ctx->pc = 0x271860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271860u, 0x271804u, 0x27180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27180Cu;
label_27180c:
    // 0x27180c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27180cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271810: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x271810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x271814: 0xa0640058  sb          $a0, 0x58($v1)
    ctx->pc = 0x271814u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 88), (uint8_t)GPR_U32(ctx, 4));
    // 0x271818: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x271818u;
    {
        const bool branch_taken_0x271818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271818) {
            ctx->pc = 0x27183Cu;
            goto label_27183c;
        }
    }
    ctx->pc = 0x271820u;
label_271820:
    // 0x271820: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x271820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_271824:
    // 0x271824: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x271824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x271828: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x271828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x27182c: 0xc09c064  jal         func_270190
    ctx->pc = 0x27182Cu;
    SET_GPR_U32(ctx, 31, 0x271834u);
    ctx->pc = 0x270190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270190u, 0x27182Cu, 0x271834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271834u;
label_271834:
    // 0x271834: 0x1602ffe0  bne         $s0, $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x271834u;
    {
        const bool branch_taken_0x271834 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x271834) {
            ctx->pc = 0x2717B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2717b8;
        }
    }
    ctx->pc = 0x27183Cu;
label_27183c:
    // 0x27183c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27183cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x271840: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x271840u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x271844: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x271844u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x271848: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x271848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27184c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27184cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271850: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x271850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x271854: 0x3e00008  jr          $ra
    ctx->pc = 0x271854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27185Cu;
    // 0x27185c: 0x0  nop
    ctx->pc = 0x27185cu;
    // NOP
    ctx->pc = 0x271860u;
}

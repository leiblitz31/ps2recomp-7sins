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

// Function: sub_0041C340
// Address: 0x41c340 - 0x41c460
void sub_0041C340_0x41c340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041C340_0x41c340");
#endif

    switch (ctx->pc) {
        case 0x41c3a4u: goto label_41c3a4;
        case 0x41c3d0u: goto label_41c3d0;
        case 0x41c3e4u: goto label_41c3e4;
        case 0x41c410u: goto label_41c410;
        default: break;
    }

    ctx->pc = 0x41c340u;

    // 0x41c340: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x41c340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x41c344: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x41c344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x41c348: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x41c348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x41c34c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41c34cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c350: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x41c350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x41c354: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x41c354u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c358: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x41c358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x41c35c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41c35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x41c360: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x41c360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x41c364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41c364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41c368: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x41c368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x41c36c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x41c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x41c370: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x41C370u;
    {
        const bool branch_taken_0x41c370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x41C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C370u;
        // 0x41c374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c370) {
            ctx->pc = 0x41C408u;
            goto label_41c408;
        }
    }
    ctx->pc = 0x41C378u;
    // 0x41c378: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x41c378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x41c37c: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x41C37Cu;
    {
        const bool branch_taken_0x41c37c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c37c) {
            ctx->pc = 0x41C380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41C37Cu;
            // 0x41c380: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41C3A8u;
            goto label_41c3a8;
        }
    }
    ctx->pc = 0x41C384u;
    // 0x41c384: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x41c384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x41c388: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x41C388u;
    {
        const bool branch_taken_0x41c388 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C388u;
        // 0x41c38c: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c388) {
            ctx->pc = 0x41C3A4u;
            goto label_41c3a4;
        }
    }
    ctx->pc = 0x41C390u;
    // 0x41c390: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x41C390u;
    {
        const bool branch_taken_0x41c390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c390) {
            ctx->pc = 0x41C394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41C390u;
            // 0x41c394: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41C3A8u;
            goto label_41c3a8;
        }
    }
    ctx->pc = 0x41C398u;
    // 0x41c398: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x41c398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x41c39c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x41C39Cu;
    SET_GPR_U32(ctx, 31, 0x41C3A4u);
    ctx->pc = 0x41C3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C39Cu;
    // 0x41c3a0: 0x663004  sllv        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x41C39Cu, 0x41C3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C3A4u;
label_41c3a4:
    // 0x41c3a4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x41c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_41c3a8:
    // 0x41c3a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x41c3a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c3ac: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x41c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x41c3b0: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x41c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x41c3b4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x41c3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x41c3b8: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x41c3b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x41c3bc: 0x8e920014  lw          $s2, 0x14($s4)
    ctx->pc = 0x41c3bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x41c3c0: 0x43a818  mult        $s5, $v0, $v1
    ctx->pc = 0x41c3c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x41c3c4: 0x18800013  blez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x41C3C4u;
    {
        const bool branch_taken_0x41c3c4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x41C3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C3C4u;
        // 0x41c3c8: 0x8e110014  lw          $s1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c3c4) {
            ctx->pc = 0x41C414u;
            goto label_41c414;
        }
    }
    ctx->pc = 0x41C3CCu;
    // 0x41c3cc: 0x0  nop
    ctx->pc = 0x41c3ccu;
    // NOP
label_41c3d0:
    // 0x41c3d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41c3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c3d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41c3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c3d8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x41c3d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c3dc: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x41C3DCu;
    SET_GPR_U32(ctx, 31, 0x41C3E4u);
    ctx->pc = 0x41C3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C3DCu;
    // 0x41c3e0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x41C3DCu, 0x41C3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C3E4u;
label_41c3e4:
    // 0x41c3e4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x41c3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x41c3e8: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x41c3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x41c3ec: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x41c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x41c3f0: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x41c3f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x41c3f4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x41c3f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x41c3f8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x41C3F8u;
    {
        const bool branch_taken_0x41c3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C3F8u;
        // 0x41c3fc: 0x2449021  addu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c3f8) {
            ctx->pc = 0x41C3D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41c3d0;
        }
    }
    ctx->pc = 0x41C400u;
    // 0x41c400: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x41C400u;
    {
        const bool branch_taken_0x41c400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C400u;
        // 0x41c404: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c400) {
            ctx->pc = 0x41C418u;
            goto label_41c418;
        }
    }
    ctx->pc = 0x41C408u;
label_41c408:
    // 0x41c408: 0xc106e20  jal         func_41B880
    ctx->pc = 0x41C408u;
    SET_GPR_U32(ctx, 31, 0x41C410u);
    ctx->pc = 0x41C40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C408u;
    // 0x41c40c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B880u, 0x41C408u, 0x41C410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C410u;
label_41c410:
    // 0x41c410: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x41c410u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_41c414:
    // 0x41c414: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x41c414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41c418:
    // 0x41c418: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x41c418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x41c41c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41c41cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c420: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x41c420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x41c424: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x41c424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x41c428: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x41c428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x41c42c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41c42cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x41c430: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x41c430u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41c434: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x41c434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x41c438: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x41c438u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41c43c: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x41c43cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x41c440: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x41c440u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41c444: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x41c444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x41c448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41c448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41c44c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41c44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x41c450: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x41c450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x41c454: 0x3e00008  jr          $ra
    ctx->pc = 0x41C454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C454u;
        // 0x41c458: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41C45Cu;
    // 0x41c45c: 0x0  nop
    ctx->pc = 0x41c45cu;
    // NOP
    ctx->pc = 0x41c460u;
}

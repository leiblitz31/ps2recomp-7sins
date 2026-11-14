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

// Function: sub_0049C3B8
// Address: 0x49c3b8 - 0x49c450
void sub_0049C3B8_0x49c3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049C3B8_0x49c3b8");
#endif

    switch (ctx->pc) {
        case 0x49c3b8u: goto label_49c3b8;
        case 0x49c3bcu: goto label_49c3bc;
        case 0x49c3c0u: goto label_49c3c0;
        case 0x49c3c4u: goto label_49c3c4;
        case 0x49c3c8u: goto label_49c3c8;
        case 0x49c3ccu: goto label_49c3cc;
        case 0x49c3d0u: goto label_49c3d0;
        case 0x49c3d4u: goto label_49c3d4;
        case 0x49c3d8u: goto label_49c3d8;
        case 0x49c3dcu: goto label_49c3dc;
        case 0x49c3e0u: goto label_49c3e0;
        case 0x49c3e4u: goto label_49c3e4;
        case 0x49c3e8u: goto label_49c3e8;
        case 0x49c3ecu: goto label_49c3ec;
        case 0x49c3f0u: goto label_49c3f0;
        case 0x49c3f4u: goto label_49c3f4;
        case 0x49c3f8u: goto label_49c3f8;
        case 0x49c3fcu: goto label_49c3fc;
        case 0x49c400u: goto label_49c400;
        case 0x49c404u: goto label_49c404;
        case 0x49c408u: goto label_49c408;
        case 0x49c40cu: goto label_49c40c;
        case 0x49c410u: goto label_49c410;
        case 0x49c414u: goto label_49c414;
        case 0x49c418u: goto label_49c418;
        case 0x49c41cu: goto label_49c41c;
        case 0x49c420u: goto label_49c420;
        case 0x49c424u: goto label_49c424;
        case 0x49c428u: goto label_49c428;
        case 0x49c42cu: goto label_49c42c;
        case 0x49c430u: goto label_49c430;
        case 0x49c434u: goto label_49c434;
        case 0x49c438u: goto label_49c438;
        case 0x49c43cu: goto label_49c43c;
        case 0x49c440u: goto label_49c440;
        case 0x49c444u: goto label_49c444;
        case 0x49c448u: goto label_49c448;
        case 0x49c44cu: goto label_49c44c;
        default: break;
    }

    ctx->pc = 0x49c3b8u;

label_49c3b8:
    // 0x49c3b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x49c3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_49c3bc:
    // 0x49c3bc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x49c3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_49c3c0:
    // 0x49c3c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x49c3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_49c3c4:
    // 0x49c3c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x49c3c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49c3c8:
    // 0x49c3c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x49c3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_49c3cc:
    // 0x49c3cc: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x49c3ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49c3d0:
    // 0x49c3d0: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
label_49c3d4:
    if (ctx->pc == 0x49C3D4u) {
        ctx->pc = 0x49C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C3D0u;
        // 0x49c3d4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C3D8u;
        goto label_49c3d8;
    }
    ctx->pc = 0x49C3D0u;
    {
        const bool branch_taken_0x49c3d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C3D0u;
        // 0x49c3d4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c3d0) {
            ctx->pc = 0x49C3F8u;
            goto label_49c3f8;
        }
    }
    ctx->pc = 0x49C3D8u;
label_49c3d8:
    // 0x49c3d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x49c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_49c3dc:
    // 0x49c3dc: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x49c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_49c3e0:
    // 0x49c3e0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_49c3e4:
    if (ctx->pc == 0x49C3E4u) {
        ctx->pc = 0x49C3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C3E0u;
        // 0x49c3e4: 0x3880a  movz        $s1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C3E8u;
        goto label_49c3e8;
    }
    ctx->pc = 0x49C3E0u;
    {
        const bool branch_taken_0x49c3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c3e0) {
            ctx->pc = 0x49C3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49C3E0u;
            // 0x49c3e4: 0x3880a  movz        $s1, $zero, $v1 (Delay Slot)
            if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49C3F8u;
            goto label_49c3f8;
        }
    }
    ctx->pc = 0x49C3E8u;
label_49c3e8:
    // 0x49c3e8: 0x40f809  jalr        $v0
label_49c3ec:
    if (ctx->pc == 0x49C3ECu) {
        ctx->pc = 0x49C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C3E8u;
        // 0x49c3ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C3F0u;
        goto label_49c3f0;
    }
    ctx->pc = 0x49C3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49C3F0u);
        ctx->pc = 0x49C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C3E8u;
        // 0x49c3ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C3E8u, 0x49C3F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49C3F0u;
label_49c3f0:
    // 0x49c3f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49c3f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49c3f4:
    // 0x49c3f4: 0x3880a  movz        $s1, $zero, $v1
    ctx->pc = 0x49c3f4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_49c3f8:
    // 0x49c3f8: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x49c3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_49c3fc:
    // 0x49c3fc: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x49c3fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_49c400:
    // 0x49c400: 0x1212000c  beq         $s0, $s2, . + 4 + (0xC << 2)
label_49c404:
    if (ctx->pc == 0x49C404u) {
        ctx->pc = 0x49C404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C400u;
        // 0x49c404: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C408u;
        goto label_49c408;
    }
    ctx->pc = 0x49C400u;
    {
        const bool branch_taken_0x49c400 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x49C404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C400u;
        // 0x49c404: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c400) {
            ctx->pc = 0x49C434u;
            goto label_49c434;
        }
    }
    ctx->pc = 0x49C408u;
label_49c408:
    // 0x49c408: 0x2604ffec  addiu       $a0, $s0, -0x14
    ctx->pc = 0x49c408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_49c40c:
    // 0x49c40c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49c40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49c410:
    // 0x49c410: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x49c410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_49c414:
    // 0x49c414: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_49c418:
    if (ctx->pc == 0x49C418u) {
        ctx->pc = 0x49C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C414u;
        // 0x49c418: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C41Cu;
        goto label_49c41c;
    }
    ctx->pc = 0x49C414u;
    {
        const bool branch_taken_0x49c414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C414u;
        // 0x49c418: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c414) {
            ctx->pc = 0x49C428u;
            goto label_49c428;
        }
    }
    ctx->pc = 0x49C41Cu;
label_49c41c:
    // 0x49c41c: 0x40f809  jalr        $v0
label_49c420:
    if (ctx->pc == 0x49C420u) {
        ctx->pc = 0x49C424u;
        goto label_49c424;
    }
    ctx->pc = 0x49C41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49C424u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C41Cu, 0x49C424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49C424u;
label_49c424:
    // 0x49c424: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49c424u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49c428:
    // 0x49c428: 0x1612fff7  bne         $s0, $s2, . + 4 + (-0x9 << 2)
label_49c42c:
    if (ctx->pc == 0x49C42Cu) {
        ctx->pc = 0x49C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C428u;
        // 0x49c42c: 0x3880a  movz        $s1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C430u;
        goto label_49c430;
    }
    ctx->pc = 0x49C428u;
    {
        const bool branch_taken_0x49c428 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x49C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C428u;
        // 0x49c42c: 0x3880a  movz        $s1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c428) {
            ctx->pc = 0x49C408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c408;
        }
    }
    ctx->pc = 0x49C430u;
label_49c430:
    // 0x49c430: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x49c430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49c434:
    // 0x49c434: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x49c434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49c438:
    // 0x49c438: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x49c438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49c43c:
    // 0x49c43c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x49c43cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49c440:
    // 0x49c440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49c440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49c444:
    // 0x49c444: 0x3e00008  jr          $ra
label_49c448:
    if (ctx->pc == 0x49C448u) {
        ctx->pc = 0x49C448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C444u;
        // 0x49c448: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C44Cu;
        goto label_49c44c;
    }
    ctx->pc = 0x49C444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C444u;
        // 0x49c448: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C44Cu;
label_49c44c:
    // 0x49c44c: 0x0  nop
    ctx->pc = 0x49c44cu;
    // NOP
    ctx->pc = 0x49c450u;
}

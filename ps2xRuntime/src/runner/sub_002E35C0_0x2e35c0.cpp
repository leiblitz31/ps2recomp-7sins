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

// Function: sub_002E35C0
// Address: 0x2e35c0 - 0x2e3710
void sub_002E35C0_0x2e35c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E35C0_0x2e35c0");
#endif

    switch (ctx->pc) {
        case 0x2e35e4u: goto label_2e35e4;
        case 0x2e3660u: goto label_2e3660;
        case 0x2e366cu: goto label_2e366c;
        case 0x2e3684u: goto label_2e3684;
        case 0x2e3690u: goto label_2e3690;
        case 0x2e36a8u: goto label_2e36a8;
        case 0x2e36c0u: goto label_2e36c0;
        case 0x2e36d4u: goto label_2e36d4;
        case 0x2e36f4u: goto label_2e36f4;
        default: break;
    }

    ctx->pc = 0x2e35c0u;

    // 0x2e35c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e35c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e35c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e35c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e35c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e35c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e35cc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2e35ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2e35d0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2e35d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2e35d4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2e35d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e35d8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2e35d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e35dc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2E35DCu;
    SET_GPR_U32(ctx, 31, 0x2E35E4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2E35DCu, 0x2E35E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E35E4u;
label_2e35e4:
    // 0x2e35e4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2e35e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2e35e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E35E8u;
    {
        const bool branch_taken_0x2e35e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e35e8) {
            ctx->pc = 0x2E3600u;
            goto label_2e3600;
        }
    }
    ctx->pc = 0x2E35F0u;
    // 0x2e35f0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2e35f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e35f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e35f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e35f8: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x2e35f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2e35fc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2e35fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2e3600:
    // 0x2e3600: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x2e3600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2e3604: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e3604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3608: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e3608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e360c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2e360cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e3610: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3618u;
    // 0x2e3618: 0x0  nop
    ctx->pc = 0x2e3618u;
    // NOP
    // 0x2e361c: 0x0  nop
    ctx->pc = 0x2e361cu;
    // NOP
    // 0x2e3620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e3620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e3624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e3624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e3628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e3628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e362c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e362cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2e3630: 0xa7a50030  sh          $a1, 0x30($sp)
    ctx->pc = 0x2e3630u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 5));
    // 0x2e3634: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e3634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3638: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2E3638u;
    {
        const bool branch_taken_0x2e3638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3638) {
            ctx->pc = 0x2E36F4u;
            goto label_2e36f4;
        }
    }
    ctx->pc = 0x2E3640u;
    // 0x2e3640: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e3640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e3644: 0x24636a28  addiu       $v1, $v1, 0x6A28
    ctx->pc = 0x2e3644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27176));
    // 0x2e3648: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e3648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e364c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2e364cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2e3650: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e3650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3654: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2e3654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e3658: 0xc0b4c3c  jal         func_2D30F0
    ctx->pc = 0x2E3658u;
    SET_GPR_U32(ctx, 31, 0x2E3660u);
    ctx->pc = 0x2D30F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30F0u, 0x2E3658u, 0x2E3660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3660u;
label_2e3660:
    // 0x2e3660: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e3660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3664: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E3664u;
    {
        const bool branch_taken_0x2e3664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3664) {
            ctx->pc = 0x2E3698u;
            goto label_2e3698;
        }
    }
    ctx->pc = 0x2E366Cu;
label_2e366c:
    // 0x2e366c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e366cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e3670: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E3670u;
    {
        const bool branch_taken_0x2e3670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3670) {
            ctx->pc = 0x2E3694u;
            goto label_2e3694;
        }
    }
    ctx->pc = 0x2E3678u;
    // 0x2e3678: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e3678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e367c: 0xc0b7490  jal         func_2DD240
    ctx->pc = 0x2E367Cu;
    SET_GPR_U32(ctx, 31, 0x2E3684u);
    ctx->pc = 0x2DD240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD240u, 0x2E367Cu, 0x2E3684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3684u;
label_2e3684:
    // 0x2e3684: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e3684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e3688: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2E3688u;
    SET_GPR_U32(ctx, 31, 0x2E3690u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2E3688u, 0x2E3690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3690u;
label_2e3690:
    // 0x2e3690: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e3690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e3694:
    // 0x2e3694: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2e3694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2e3698:
    // 0x2e3698: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e3698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e369c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2e369cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e36a0: 0xc0b8e08  jal         func_2E3820
    ctx->pc = 0x2E36A0u;
    SET_GPR_U32(ctx, 31, 0x2E36A8u);
    ctx->pc = 0x2E3820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3820u, 0x2E36A0u, 0x2E36A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E36A8u;
label_2e36a8:
    // 0x2e36a8: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2E36A8u;
    {
        const bool branch_taken_0x2e36a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e36a8) {
            ctx->pc = 0x2E366Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e366c;
        }
    }
    ctx->pc = 0x2E36B0u;
    // 0x2e36b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e36b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e36b4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2e36b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e36b8: 0xc0b8dc4  jal         func_2E3710
    ctx->pc = 0x2E36B8u;
    SET_GPR_U32(ctx, 31, 0x2E36C0u);
    ctx->pc = 0x2E3710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3710u, 0x2E36B8u, 0x2E36C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E36C0u;
label_2e36c0:
    // 0x2e36c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e36c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e36c4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2e36c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e36c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e36c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e36cc: 0xc0b46a4  jal         func_2D1A90
    ctx->pc = 0x2E36CCu;
    SET_GPR_U32(ctx, 31, 0x2E36D4u);
    ctx->pc = 0x2D1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1A90u, 0x2E36CCu, 0x2E36D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E36D4u;
label_2e36d4:
    // 0x2e36d4: 0x87a20030  lh          $v0, 0x30($sp)
    ctx->pc = 0x2e36d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e36d8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2e36d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e36dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e36dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e36e0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E36E0u;
    {
        const bool branch_taken_0x2e36e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2e36e0) {
            ctx->pc = 0x2E36F4u;
            goto label_2e36f4;
        }
    }
    ctx->pc = 0x2E36E8u;
    // 0x2e36e8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e36e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e36ec: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2E36ECu;
    SET_GPR_U32(ctx, 31, 0x2E36F4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2E36ECu, 0x2E36F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E36F4u;
label_2e36f4:
    // 0x2e36f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e36f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e36f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e36f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e36fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e36fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3700: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e3700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e3704: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E370Cu;
    // 0x2e370c: 0x0  nop
    ctx->pc = 0x2e370cu;
    // NOP
    ctx->pc = 0x2e3710u;
}

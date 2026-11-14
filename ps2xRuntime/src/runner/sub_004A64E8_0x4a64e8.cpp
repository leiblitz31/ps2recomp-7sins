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

// Function: sub_004A64E8
// Address: 0x4a64e8 - 0x4a6610
void sub_004A64E8_0x4a64e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A64E8_0x4a64e8");
#endif

    switch (ctx->pc) {
        case 0x4a6528u: goto label_4a6528;
        case 0x4a6594u: goto label_4a6594;
        case 0x4a65c4u: goto label_4a65c4;
        case 0x4a65e0u: goto label_4a65e0;
        default: break;
    }

    ctx->pc = 0x4a64e8u;

    // 0x4a64e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a64e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4a64ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4a64ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4a64f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a64f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4a64f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a64f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a64f8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4a64f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4a64fc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4a64fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6500: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a6500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a6504: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x4a6504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x4a6508: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a6508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a650c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4A650Cu;
    {
        const bool branch_taken_0x4a650c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A650Cu;
        // 0x4a6510: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a650c) {
            ctx->pc = 0x4A653Cu;
            goto label_4a653c;
        }
    }
    ctx->pc = 0x4A6514u;
    // 0x4a6514: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x4a6514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x4a6518: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A6518u;
    {
        const bool branch_taken_0x4a6518 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a6518) {
            ctx->pc = 0x4A651Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6518u;
            // 0x4a651c: 0x8e030048  lw          $v1, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A652Cu;
            goto label_4a652c;
        }
    }
    ctx->pc = 0x4A6520u;
    // 0x4a6520: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4A6520u;
    SET_GPR_U32(ctx, 31, 0x4A6528u);
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A6520u, 0x4A6528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6528u;
label_4a6528:
    // 0x4a6528: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x4a6528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_4a652c:
    // 0x4a652c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a652cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a6530: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x4a6530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x4a6534: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a6534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a6538: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x4a6538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_4a653c:
    // 0x4a653c: 0xae120028  sw          $s2, 0x28($s0)
    ctx->pc = 0x4a653cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
    // 0x4a6540: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x4a6540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
    // 0x4a6544: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x4a6544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x4a6548: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4a6548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a654c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a654cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a6550: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4a6550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a6554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a6554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6558: 0x3e00008  jr          $ra
    ctx->pc = 0x4A6558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6558u;
        // 0x4a655c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A6560u;
    // 0x4a6560: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a6560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4a6564: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4a6564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4a6568: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4a6568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4a656c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4a656cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6570: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a6570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4a6574: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a6574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6578: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4a6578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a657c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4a657cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x4a6580: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4a6580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4a6584: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x4a6584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x4a6588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a6588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a658c: 0xc127ca4  jal         func_49F290
    ctx->pc = 0x4A658Cu;
    SET_GPR_U32(ctx, 31, 0x4A6594u);
    ctx->pc = 0x4A6590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A658Cu;
    // 0x4a6590: 0x34a50805  ori         $a1, $a1, 0x805 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2053);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x4A658Cu, 0x4A6594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6594u;
label_4a6594:
    // 0x4a6594: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4a6594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6598: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x4A6598u;
    {
        const bool branch_taken_0x4a6598 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6598u;
        // 0x4a659c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6598) {
            ctx->pc = 0x4A65F0u;
            goto label_4a65f0;
        }
    }
    ctx->pc = 0x4A65A0u;
    // 0x4a65a0: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x4a65a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x4a65a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a65a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a65a8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A65A8u;
    {
        const bool branch_taken_0x4a65a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a65a8) {
            ctx->pc = 0x4A65ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A65A8u;
            // 0x4a65ac: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A65C8u;
            goto label_4a65c8;
        }
    }
    ctx->pc = 0x4A65B0u;
    // 0x4a65b0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x4a65b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x4a65b4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A65B4u;
    {
        const bool branch_taken_0x4a65b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a65b4) {
            ctx->pc = 0x4A65B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A65B4u;
            // 0x4a65b8: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A65C8u;
            goto label_4a65c8;
        }
    }
    ctx->pc = 0x4A65BCu;
    // 0x4a65bc: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4A65BCu;
    SET_GPR_U32(ctx, 31, 0x4A65C4u);
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A65BCu, 0x4A65C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A65C4u;
label_4a65c4:
    // 0x4a65c4: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x4a65c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_4a65c8:
    // 0x4a65c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4a65c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a65cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a65ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a65d0: 0x123080  sll         $a2, $s2, 2
    ctx->pc = 0x4a65d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x4a65d4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4a65d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4a65d8: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x4A65D8u;
    SET_GPR_U32(ctx, 31, 0x4A65E0u);
    ctx->pc = 0x4A65DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A65D8u;
    // 0x4a65dc: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x4A65D8u, 0x4A65E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A65E0u;
label_4a65e0:
    // 0x4a65e0: 0xae110028  sw          $s1, 0x28($s0)
    ctx->pc = 0x4a65e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
    // 0x4a65e4: 0xae120024  sw          $s2, 0x24($s0)
    ctx->pc = 0x4a65e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
    // 0x4a65e8: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x4a65e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x4a65ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a65ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a65f0:
    // 0x4a65f0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4a65f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a65f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4a65f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a65f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a65f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a65fc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4a65fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a6600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a6600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6604: 0x3e00008  jr          $ra
    ctx->pc = 0x4A6604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6604u;
        // 0x4a6608: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A660Cu;
    // 0x4a660c: 0x0  nop
    ctx->pc = 0x4a660cu;
    // NOP
    ctx->pc = 0x4a6610u;
}

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

// Function: sub_003E14C8
// Address: 0x3e14c8 - 0x3e1640
void sub_003E14C8_0x3e14c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E14C8_0x3e14c8");
#endif

    switch (ctx->pc) {
        case 0x3e14ecu: goto label_3e14ec;
        case 0x3e14f4u: goto label_3e14f4;
        case 0x3e1508u: goto label_3e1508;
        case 0x3e1550u: goto label_3e1550;
        case 0x3e1560u: goto label_3e1560;
        case 0x3e15d8u: goto label_3e15d8;
        default: break;
    }

    ctx->pc = 0x3e14c8u;

    // 0x3e14c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e14c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e14cc: 0x2ca50190  sltiu       $a1, $a1, 0x190
    ctx->pc = 0x3e14ccu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)400) ? 1 : 0);
    // 0x3e14d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e14d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3e14d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e14d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e14d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e14d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e14dc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E14DCu;
    {
        const bool branch_taken_0x3e14dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E14E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E14DCu;
        // 0x3e14e0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e14dc) {
            ctx->pc = 0x3E14F8u;
            goto label_3e14f8;
        }
    }
    ctx->pc = 0x3E14E4u;
    // 0x3e14e4: 0xc0f8b70  jal         func_3E2DC0
    ctx->pc = 0x3E14E4u;
    SET_GPR_U32(ctx, 31, 0x3E14ECu);
    ctx->pc = 0x3E14E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E14E4u;
    // 0x3e14e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2DC0u, 0x3E14E4u, 0x3E14ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E14ECu;
label_3e14ec:
    // 0x3e14ec: 0xc0f8b68  jal         func_3E2DA0
    ctx->pc = 0x3E14ECu;
    SET_GPR_U32(ctx, 31, 0x3E14F4u);
    ctx->pc = 0x3E14F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E14ECu;
    // 0x3e14f0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2DA0u, 0x3E14ECu, 0x3E14F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E14F4u;
label_3e14f4:
    // 0x3e14f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3e14f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3e14f8:
    // 0x3e14f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e14f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e14fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e14fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1500: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x3E1500u;
    SET_GPR_U32(ctx, 31, 0x3E1508u);
    ctx->pc = 0x3E1504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1500u;
    // 0x3e1504: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3E1500u, 0x3E1508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1508u;
label_3e1508:
    // 0x3e1508: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e1508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e150c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e150cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e1510: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1510u;
        // 0x3e1514: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1518u;
    // 0x3e1518: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e1518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e151c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3e151cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3e1520: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e1520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3e1524: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e1524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1528: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3e1528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3e152c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e152cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1530: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e1530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e1534: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E1534u;
    {
        const bool branch_taken_0x3e1534 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1534u;
        // 0x3e1538: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1534) {
            ctx->pc = 0x3E1540u;
            goto label_3e1540;
        }
    }
    ctx->pc = 0x3E153Cu;
    // 0x3e153c: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x3e153cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e1540:
    // 0x3e1540: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E1540u;
    {
        const bool branch_taken_0x3e1540 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1540u;
        // 0x3e1544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1540) {
            ctx->pc = 0x3E1564u;
            goto label_3e1564;
        }
    }
    ctx->pc = 0x3E1548u;
    // 0x3e1548: 0xc0f8590  jal         func_3E1640
    ctx->pc = 0x3E1548u;
    SET_GPR_U32(ctx, 31, 0x3E1550u);
    ctx->pc = 0x3E154Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1548u;
    // 0x3e154c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1640u, 0x3E1548u, 0x3E1550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1550u;
label_3e1550:
    // 0x3e1550: 0x8e0602e8  lw          $a2, 0x2E8($s0)
    ctx->pc = 0x3e1550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
    // 0x3e1554: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e1554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1558: 0xc0f8b9e  jal         func_3E2E78
    ctx->pc = 0x3E1558u;
    SET_GPR_U32(ctx, 31, 0x3E1560u);
    ctx->pc = 0x3E155Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1558u;
    // 0x3e155c: 0x8e0502f0  lw          $a1, 0x2F0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2E78u, 0x3E1558u, 0x3E1560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1560u;
label_3e1560:
    // 0x3e1560: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3e1560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3e1564:
    // 0x3e1564: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3e1564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e1568: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e1568u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e156c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3e156cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e1570: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e1570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e1574: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1574u;
        // 0x3e1578: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E157Cu;
    // 0x3e157c: 0x0  nop
    ctx->pc = 0x3e157cu;
    // NOP
    // 0x3e1580: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1580u;
        // 0x3e1584: 0x8c8200e4  lw          $v0, 0xE4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1588u;
    // 0x3e1588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e1588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e158c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3E158Cu;
    {
        const bool branch_taken_0x3e158c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E158Cu;
        // 0x3e1590: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e158c) {
            ctx->pc = 0x3E15D8u;
            goto label_3e15d8;
        }
    }
    ctx->pc = 0x3E1594u;
    // 0x3e1594: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E1594u;
    {
        const bool branch_taken_0x3e1594 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1594u;
        // 0x3e1598: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1594) {
            ctx->pc = 0x3E15D8u;
            goto label_3e15d8;
        }
    }
    ctx->pc = 0x3E159Cu;
    // 0x3e159c: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E159Cu;
    {
        const bool branch_taken_0x3e159c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E15A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E159Cu;
        // 0x3e15a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e159c) {
            ctx->pc = 0x3E15B4u;
            goto label_3e15b4;
        }
    }
    ctx->pc = 0x3E15A4u;
    // 0x3e15a4: 0xdca200f0  ld          $v0, 0xF0($a1)
    ctx->pc = 0x3e15a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x3e15a8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x3e15a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x3e15ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3E15ACu;
    {
        const bool branch_taken_0x3e15ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E15ACu;
        // 0x3e15b0: 0xfca200f0  sd          $v0, 0xF0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 240), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e15ac) {
            ctx->pc = 0x3E15D8u;
            goto label_3e15d8;
        }
    }
    ctx->pc = 0x3E15B4u;
label_3e15b4:
    // 0x3e15b4: 0x54c20006  bnel        $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E15B4u;
    {
        const bool branch_taken_0x3e15b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e15b4) {
            ctx->pc = 0x3E15B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E15B4u;
            // 0x3e15b8: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E15D0u;
            goto label_3e15d0;
        }
    }
    ctx->pc = 0x3E15BCu;
    // 0x3e15bc: 0xdca200f0  ld          $v0, 0xF0($a1)
    ctx->pc = 0x3e15bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x3e15c0: 0x71827  nor         $v1, $zero, $a3
    ctx->pc = 0x3e15c0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
    // 0x3e15c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e15c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3e15c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3E15C8u;
    {
        const bool branch_taken_0x3e15c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E15CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E15C8u;
        // 0x3e15cc: 0xfca200f0  sd          $v0, 0xF0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 240), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e15c8) {
            ctx->pc = 0x3E15D8u;
            goto label_3e15d8;
        }
    }
    ctx->pc = 0x3E15D0u;
label_3e15d0:
    // 0x3e15d0: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3E15D0u;
    SET_GPR_U32(ctx, 31, 0x3E15D8u);
    ctx->pc = 0x3E15D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E15D0u;
    // 0x3e15d4: 0x24a5e1a0  addiu       $a1, $a1, -0x1E60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3E15D0u, 0x3E15D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E15D8u;
label_3e15d8:
    // 0x3e15d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e15d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e15dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E15DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E15E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E15DCu;
        // 0x3e15e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E15DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E15E4u;
    // 0x3e15e4: 0x0  nop
    ctx->pc = 0x3e15e4u;
    // NOP
    // 0x3e15e8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3e15e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3e15ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3E15ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E15F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E15ECu;
        // 0x3e15f0: 0x2442e1d0  addiu       $v0, $v0, -0x1E30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959568));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E15ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E15F4u;
    // 0x3e15f4: 0x0  nop
    ctx->pc = 0x3e15f4u;
    // NOP
    // 0x3e15f8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E15F8u;
    {
        const bool branch_taken_0x3e15f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E15FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E15F8u;
        // 0x3e15fc: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e15f8) {
            ctx->pc = 0x3E1608u;
            goto label_3e1608;
        }
    }
    ctx->pc = 0x3E1600u;
    // 0x3e1600: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1600u;
        // 0x3e1604: 0x24429c60  addiu       $v0, $v0, -0x63A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941792));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1608u;
label_3e1608:
    // 0x3e1608: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1608u;
        // 0x3e160c: 0x24429c60  addiu       $v0, $v0, -0x63A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941792));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1610u;
    // 0x3e1610: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E1610u;
    {
        const bool branch_taken_0x3e1610 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E1614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1610u;
        // 0x3e1614: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1610) {
            ctx->pc = 0x3E1620u;
            goto label_3e1620;
        }
    }
    ctx->pc = 0x3E1618u;
    // 0x3e1618: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1618u;
        // 0x3e161c: 0x2442e298  addiu       $v0, $v0, -0x1D68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1620u;
label_3e1620:
    // 0x3e1620: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1620u;
        // 0x3e1624: 0x2442e298  addiu       $v0, $v0, -0x1D68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1628u;
    // 0x3e1628: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E1628u;
    {
        const bool branch_taken_0x3e1628 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1628u;
        // 0x3e162c: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1628) {
            ctx->pc = 0x3E1638u;
            goto label_3e1638;
        }
    }
    ctx->pc = 0x3E1630u;
    // 0x3e1630: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1630u;
        // 0x3e1634: 0x24429c60  addiu       $v0, $v0, -0x63A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941792));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1638u;
label_3e1638:
    // 0x3e1638: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1638u;
        // 0x3e163c: 0x24429c60  addiu       $v0, $v0, -0x63A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941792));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1640u;
}

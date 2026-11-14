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

// Function: sub_003E1818
// Address: 0x3e1818 - 0x3e1970
void sub_003E1818_0x3e1818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1818_0x3e1818");
#endif

    switch (ctx->pc) {
        case 0x3e1858u: goto label_3e1858;
        case 0x3e18a0u: goto label_3e18a0;
        case 0x3e18bcu: goto label_3e18bc;
        case 0x3e18d8u: goto label_3e18d8;
        case 0x3e18e8u: goto label_3e18e8;
        case 0x3e18f8u: goto label_3e18f8;
        case 0x3e1910u: goto label_3e1910;
        case 0x3e1928u: goto label_3e1928;
        case 0x3e1940u: goto label_3e1940;
        default: break;
    }

    ctx->pc = 0x3e1818u;

    // 0x3e1818: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3e1818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3e181c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3e181cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1820: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e1820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3e1824: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3e1824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3e1828: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e1828u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e182c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3e182cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3e1830: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3e1830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3e1834: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E1834u;
    {
        const bool branch_taken_0x3e1834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E1838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1834u;
        // 0x3e1838: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1834) {
            ctx->pc = 0x3E1844u;
            goto label_3e1844;
        }
    }
    ctx->pc = 0x3E183Cu;
    // 0x3e183c: 0x52400045  beql        $s2, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x3E183Cu;
    {
        const bool branch_taken_0x3e183c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e183c) {
            ctx->pc = 0x3E1840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E183Cu;
            // 0x3e1840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1954u;
            goto label_3e1954;
        }
    }
    ctx->pc = 0x3E1844u;
label_3e1844:
    // 0x3e1844: 0x8c4402c8  lw          $a0, 0x2C8($v0)
    ctx->pc = 0x3e1844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 712)));
    // 0x3e1848: 0x1c800005  bgtz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E1848u;
    {
        const bool branch_taken_0x3e1848 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x3E184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1848u;
        // 0x3e184c: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1848) {
            ctx->pc = 0x3E1860u;
            goto label_3e1860;
        }
    }
    ctx->pc = 0x3E1850u;
    // 0x3e1850: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x3E1850u;
    {
        const bool branch_taken_0x3e1850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1850u;
        // 0x3e1854: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1850) {
            ctx->pc = 0x3E1954u;
            goto label_3e1954;
        }
    }
    ctx->pc = 0x3E1858u;
label_3e1858:
    // 0x3e1858: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x3E1858u;
    {
        const bool branch_taken_0x3e1858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1858u;
        // 0x3e185c: 0x92020004  lbu         $v0, 0x4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1858) {
            ctx->pc = 0x3E1954u;
            goto label_3e1954;
        }
    }
    ctx->pc = 0x3E1860u;
label_3e1860:
    // 0x3e1860: 0x8c4202cc  lw          $v0, 0x2CC($v0)
    ctx->pc = 0x3e1860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 716)));
    // 0x3e1864: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e1864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e1868: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e1868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e186c: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x3e186cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e1870: 0x112023  negu        $a0, $s1
    ctx->pc = 0x3e1870u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x3e1874: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x3e1874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3e1878: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3E1878u;
    {
        const bool branch_taken_0x3e1878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1878u;
        // 0x3e187c: 0x2670fffb  addiu       $s0, $s3, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1878) {
            ctx->pc = 0x3E18E8u;
            goto label_3e18e8;
        }
    }
    ctx->pc = 0x3E1880u;
    // 0x3e1880: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3e1880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e1884: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E1884u;
    {
        const bool branch_taken_0x3e1884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1884u;
        // 0x3e1888: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1884) {
            ctx->pc = 0x3E18C8u;
            goto label_3e18c8;
        }
    }
    ctx->pc = 0x3E188Cu;
    // 0x3e188c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E188Cu;
    {
        const bool branch_taken_0x3e188c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E188Cu;
        // 0x3e1890: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e188c) {
            ctx->pc = 0x3E18ACu;
            goto label_3e18ac;
        }
    }
    ctx->pc = 0x3E1894u;
    // 0x3e1894: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e1894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1898: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E1898u;
    SET_GPR_U32(ctx, 31, 0x3E18A0u);
    ctx->pc = 0x3E189Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1898u;
    // 0x3e189c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E1898u, 0x3E18A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E18A0u;
label_3e18a0:
    // 0x3e18a0: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3E18A0u;
    {
        const bool branch_taken_0x3e18a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E18A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E18A0u;
        // 0x3e18a4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e18a0) {
            ctx->pc = 0x3E1858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1858;
        }
    }
    ctx->pc = 0x3E18A8u;
    // 0x3e18a8: 0x2670fff6  addiu       $s0, $s3, -0xA
    ctx->pc = 0x3e18a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967286));
label_3e18ac:
    // 0x3e18ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e18acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e18b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e18b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e18b4: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E18B4u;
    SET_GPR_U32(ctx, 31, 0x3E18BCu);
    ctx->pc = 0x3E18B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E18B4u;
    // 0x3e18b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E18B4u, 0x3E18BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E18BCu;
label_3e18bc:
    // 0x3e18bc: 0x1040ffe6  beqz        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E18BCu;
    {
        const bool branch_taken_0x3e18bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E18C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E18BCu;
        // 0x3e18c0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e18bc) {
            ctx->pc = 0x3E1858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1858;
        }
    }
    ctx->pc = 0x3E18C4u;
    // 0x3e18c4: 0x2610fffb  addiu       $s0, $s0, -0x5
    ctx->pc = 0x3e18c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967291));
label_3e18c8:
    // 0x3e18c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e18c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e18cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e18ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e18d0: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E18D0u;
    SET_GPR_U32(ctx, 31, 0x3E18D8u);
    ctx->pc = 0x3E18D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E18D0u;
    // 0x3e18d4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E18D0u, 0x3E18D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E18D8u;
label_3e18d8:
    // 0x3e18d8: 0x1040ffdf  beqz        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x3E18D8u;
    {
        const bool branch_taken_0x3e18d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E18DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E18D8u;
        // 0x3e18dc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e18d8) {
            ctx->pc = 0x3E1858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1858;
        }
    }
    ctx->pc = 0x3E18E0u;
    // 0x3e18e0: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3E18E0u;
    {
        const bool branch_taken_0x3e18e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E18E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E18E0u;
        // 0x3e18e4: 0x2610fffb  addiu       $s0, $s0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e18e0) {
            ctx->pc = 0x3E1950u;
            goto label_3e1950;
        }
    }
    ctx->pc = 0x3E18E8u;
label_3e18e8:
    // 0x3e18e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e18e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e18ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e18ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e18f0: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E18F0u;
    SET_GPR_U32(ctx, 31, 0x3E18F8u);
    ctx->pc = 0x3E18F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E18F0u;
    // 0x3e18f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E18F0u, 0x3E18F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E18F8u;
label_3e18f8:
    // 0x3e18f8: 0x1040ffd7  beqz        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x3E18F8u;
    {
        const bool branch_taken_0x3e18f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E18FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E18F8u;
        // 0x3e18fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e18f8) {
            ctx->pc = 0x3E1858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1858;
        }
    }
    ctx->pc = 0x3E1900u;
    // 0x3e1900: 0x2610fffb  addiu       $s0, $s0, -0x5
    ctx->pc = 0x3e1900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967291));
    // 0x3e1904: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e1904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1908: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E1908u;
    SET_GPR_U32(ctx, 31, 0x3E1910u);
    ctx->pc = 0x3E190Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1908u;
    // 0x3e190c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E1908u, 0x3E1910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1910u;
label_3e1910:
    // 0x3e1910: 0x1040ffd1  beqz        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x3E1910u;
    {
        const bool branch_taken_0x3e1910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1910u;
        // 0x3e1914: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1910) {
            ctx->pc = 0x3E1858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1858;
        }
    }
    ctx->pc = 0x3E1918u;
    // 0x3e1918: 0x2610fffb  addiu       $s0, $s0, -0x5
    ctx->pc = 0x3e1918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967291));
    // 0x3e191c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e191cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1920: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E1920u;
    SET_GPR_U32(ctx, 31, 0x3E1928u);
    ctx->pc = 0x3E1924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1920u;
    // 0x3e1924: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E1920u, 0x3E1928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1928u;
label_3e1928:
    // 0x3e1928: 0x1040ffcb  beqz        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x3E1928u;
    {
        const bool branch_taken_0x3e1928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1928u;
        // 0x3e192c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1928) {
            ctx->pc = 0x3E1858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1858;
        }
    }
    ctx->pc = 0x3E1930u;
    // 0x3e1930: 0x2610fffb  addiu       $s0, $s0, -0x5
    ctx->pc = 0x3e1930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967291));
    // 0x3e1934: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e1934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1938: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E1938u;
    SET_GPR_U32(ctx, 31, 0x3E1940u);
    ctx->pc = 0x3E193Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1938u;
    // 0x3e193c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E1938u, 0x3E1940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1940u;
label_3e1940:
    // 0x3e1940: 0x1040ffc5  beqz        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x3E1940u;
    {
        const bool branch_taken_0x3e1940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1940u;
        // 0x3e1944: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1940) {
            ctx->pc = 0x3E1858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1858;
        }
    }
    ctx->pc = 0x3E1948u;
    // 0x3e1948: 0x1620ffe7  bnez        $s1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x3E1948u;
    {
        const bool branch_taken_0x3e1948 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1948u;
        // 0x3e194c: 0x2610fffb  addiu       $s0, $s0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1948) {
            ctx->pc = 0x3E18E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e18e8;
        }
    }
    ctx->pc = 0x3E1950u;
label_3e1950:
    // 0x3e1950: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e1950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e1954:
    // 0x3e1954: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3e1954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e1958: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3e1958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e195c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e195cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e1960: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3e1960u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e1964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e1964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e1968: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1968u;
        // 0x3e196c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1970u;
}

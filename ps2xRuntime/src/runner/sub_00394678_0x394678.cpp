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

// Function: sub_00394678
// Address: 0x394678 - 0x394b08
void sub_00394678_0x394678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394678_0x394678");
#endif

    switch (ctx->pc) {
        case 0x3946ccu: goto label_3946cc;
        case 0x394704u: goto label_394704;
        case 0x394738u: goto label_394738;
        case 0x3947b0u: goto label_3947b0;
        case 0x394838u: goto label_394838;
        case 0x394858u: goto label_394858;
        case 0x3948e0u: goto label_3948e0;
        case 0x394980u: goto label_394980;
        case 0x394a08u: goto label_394a08;
        case 0x394a9cu: goto label_394a9c;
        default: break;
    }

    ctx->pc = 0x394678u;

    // 0x394678: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x394678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x39467c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x39467cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394680: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x394680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x394684: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x394684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x394688: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x394688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39468c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x39468cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x394690: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x394690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394694: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x394694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x394698: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x394698u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39469c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x39469cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x3946a0: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x3946a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3946a4: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3946a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x3946a8: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x3946a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3946ac: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3946acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3946b0: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x3946b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3946b4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3946b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3946b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3946b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3946bc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3946bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3946c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3946c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3946c4: 0xc0e61f4  jal         func_3987D0
    ctx->pc = 0x3946C4u;
    SET_GPR_U32(ctx, 31, 0x3946CCu);
    ctx->pc = 0x3946C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3946C4u;
    // 0x3946c8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3987D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3987D0u, 0x3946C4u, 0x3946CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3946CCu;
label_3946cc:
    // 0x3946cc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3946CCu;
    {
        const bool branch_taken_0x3946cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3946D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3946CCu;
        // 0x3946d0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3946cc) {
            ctx->pc = 0x3946F8u;
            goto label_3946f8;
        }
    }
    ctx->pc = 0x3946D4u;
    // 0x3946d4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3946d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3946d8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3946d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x3946dc: 0x94820028  lhu         $v0, 0x28($a0)
    ctx->pc = 0x3946dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3946e0: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x3946e0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3946e4: 0x9483002a  lhu         $v1, 0x2A($a0)
    ctx->pc = 0x3946e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x3946e8: 0xa6e30000  sh          $v1, 0x0($s7)
    ctx->pc = 0x3946e8u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3946ec: 0x9482002c  lhu         $v0, 0x2C($a0)
    ctx->pc = 0x3946ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x3946f0: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x3946F0u;
    {
        const bool branch_taken_0x3946f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3946F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3946F0u;
        // 0x3946f4: 0xa6820000  sh          $v0, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3946f0) {
            ctx->pc = 0x394AD4u;
            goto label_394ad4;
        }
    }
    ctx->pc = 0x3946F8u;
label_3946f8:
    // 0x3946f8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3946f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3946fc: 0xc0e61f4  jal         func_3987D0
    ctx->pc = 0x3946FCu;
    SET_GPR_U32(ctx, 31, 0x394704u);
    ctx->pc = 0x394700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3946FCu;
    // 0x394700: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3987D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3987D0u, 0x3946FCu, 0x394704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394704u;
label_394704:
    // 0x394704: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x394704u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394708: 0x15000040  bnez        $t0, . + 4 + (0x40 << 2)
    ctx->pc = 0x394708u;
    {
        const bool branch_taken_0x394708 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x39470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394708u;
        // 0x39470c: 0xae080000  sw          $t0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394708) {
            ctx->pc = 0x39480Cu;
            goto label_39480c;
        }
    }
    ctx->pc = 0x394710u;
    // 0x394710: 0x8e4b0000  lw          $t3, 0x0($s2)
    ctx->pc = 0x394710u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x394714: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x394714u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394718: 0x8d630018  lw          $v1, 0x18($t3)
    ctx->pc = 0x394718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x39471c: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x39471cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x394720: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x394720u;
    {
        const bool branch_taken_0x394720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394720u;
        // 0x394724: 0x8e690000  lw          $t1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394720) {
            ctx->pc = 0x394800u;
            goto label_394800;
        }
    }
    ctx->pc = 0x394728u;
    // 0x394728: 0x8d270018  lw          $a3, 0x18($t1)
    ctx->pc = 0x394728u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x39472c: 0x60682d  daddu       $t5, $v1, $zero
    ctx->pc = 0x39472cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394730: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x394730u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394734: 0x256c0028  addiu       $t4, $t3, 0x28
    ctx->pc = 0x394734u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 40));
label_394738:
    // 0x394738: 0x10e0002d  beqz        $a3, . + 4 + (0x2D << 2)
    ctx->pc = 0x394738u;
    {
        const bool branch_taken_0x394738 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x39473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394738u;
        // 0x39473c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394738) {
            ctx->pc = 0x3947F0u;
            goto label_3947f0;
        }
    }
    ctx->pc = 0x394740u;
    // 0x394740: 0x1881021  addu        $v0, $t4, $t0
    ctx->pc = 0x394740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x394744: 0x25240028  addiu       $a0, $t1, 0x28
    ctx->pc = 0x394744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 40));
    // 0x394748: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x394748u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39474c: 0x18e00010  blez        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x39474Cu;
    {
        const bool branch_taken_0x39474c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x394750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39474Cu;
        // 0x394750: 0x30e30003  andi        $v1, $a3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39474c) {
            ctx->pc = 0x394790u;
            goto label_394790;
        }
    }
    ctx->pc = 0x394754u;
    // 0x394754: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x394754u;
    {
        const bool branch_taken_0x394754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x394758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394754u;
        // 0x394758: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x394754) {
            ctx->pc = 0x3947ACu;
            goto label_3947ac;
        }
    }
    ctx->pc = 0x39475Cu;
    // 0x39475c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x39475Cu;
    {
        const bool branch_taken_0x39475c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39475c) {
            ctx->pc = 0x394760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39475Cu;
            // 0x394760: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394794u;
            goto label_394794;
        }
    }
    ctx->pc = 0x394764u;
    // 0x394764: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x394764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x394768: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x394768u;
    {
        const bool branch_taken_0x394768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x394768) {
            ctx->pc = 0x39476Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394768u;
            // 0x39476c: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394784u;
            goto label_394784;
        }
    }
    ctx->pc = 0x394770u;
    // 0x394770: 0x95220028  lhu         $v0, 0x28($t1)
    ctx->pc = 0x394770u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x394774: 0x10c20022  beq         $a2, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x394774u;
    {
        const bool branch_taken_0x394774 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x394778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394774u;
        // 0x394778: 0x2524002a  addiu       $a0, $t1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394774) {
            ctx->pc = 0x394800u;
            goto label_394800;
        }
    }
    ctx->pc = 0x39477Cu;
    // 0x39477c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39477cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x394780: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x394780u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_394784:
    // 0x394784: 0x10c2001e  beq         $a2, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x394784u;
    {
        const bool branch_taken_0x394784 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x394788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394784u;
        // 0x394788: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394784) {
            ctx->pc = 0x394800u;
            goto label_394800;
        }
    }
    ctx->pc = 0x39478Cu;
    // 0x39478c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x39478cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_394790:
    // 0x394790: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x394790u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_394794:
    // 0x394794: 0x10c2001b  beq         $a2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x394794u;
    {
        const bool branch_taken_0x394794 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x394798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394794u;
        // 0x394798: 0xa1040  sll         $v0, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394794) {
            ctx->pc = 0x394804u;
            goto label_394804;
        }
    }
    ctx->pc = 0x39479Cu;
    // 0x39479c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x39479cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3947a0: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x3947a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3947a4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3947A4u;
    {
        const bool branch_taken_0x3947a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3947A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3947A4u;
        // 0x3947a8: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3947a4) {
            ctx->pc = 0x3947F0u;
            goto label_3947f0;
        }
    }
    ctx->pc = 0x3947ACu;
label_3947ac:
    // 0x3947ac: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3947acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3947b0:
    // 0x3947b0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3947b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3947b4: 0x10c20013  beq         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3947B4u;
    {
        const bool branch_taken_0x3947b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3947B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3947B4u;
        // 0x3947b8: 0xa1040  sll         $v0, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3947b4) {
            ctx->pc = 0x394804u;
            goto label_394804;
        }
    }
    ctx->pc = 0x3947BCu;
    // 0x3947bc: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x3947bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3947c0: 0x10c20010  beq         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3947C0u;
    {
        const bool branch_taken_0x3947c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3947C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3947C0u;
        // 0x3947c4: 0xa1040  sll         $v0, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3947c0) {
            ctx->pc = 0x394804u;
            goto label_394804;
        }
    }
    ctx->pc = 0x3947C8u;
    // 0x3947c8: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x3947c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3947cc: 0x10c2000d  beq         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3947CCu;
    {
        const bool branch_taken_0x3947cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3947D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3947CCu;
        // 0x3947d0: 0xa1040  sll         $v0, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3947cc) {
            ctx->pc = 0x394804u;
            goto label_394804;
        }
    }
    ctx->pc = 0x3947D4u;
    // 0x3947d4: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x3947d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x3947d8: 0x10c2000a  beq         $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3947D8u;
    {
        const bool branch_taken_0x3947d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3947DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3947D8u;
        // 0x3947dc: 0xa1040  sll         $v0, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3947d8) {
            ctx->pc = 0x394804u;
            goto label_394804;
        }
    }
    ctx->pc = 0x3947E0u;
    // 0x3947e0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3947e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3947e4: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x3947e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3947e8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x3947E8u;
    {
        const bool branch_taken_0x3947e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3947ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3947E8u;
        // 0x3947ec: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3947e8) {
            ctx->pc = 0x3947B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3947b0;
        }
    }
    ctx->pc = 0x3947F0u;
label_3947f0:
    // 0x3947f0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3947f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3947f4: 0x14d102b  sltu        $v0, $t2, $t5
    ctx->pc = 0x3947f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3947f8: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x3947F8u;
    {
        const bool branch_taken_0x3947f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3947FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3947F8u;
        // 0x3947fc: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3947f8) {
            ctx->pc = 0x394738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394738;
        }
    }
    ctx->pc = 0x394800u;
label_394800:
    // 0x394800: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x394800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_394804:
    // 0x394804: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x394804u;
    {
        const bool branch_taken_0x394804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394804u;
        // 0x394808: 0x1621021  addu        $v0, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394804) {
            ctx->pc = 0x394948u;
            goto label_394948;
        }
    }
    ctx->pc = 0x39480Cu;
label_39480c:
    // 0x39480c: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x39480cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x394810: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x394810u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394814: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x394814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x394818: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x394818u;
    {
        const bool branch_taken_0x394818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394818u;
        // 0x39481c: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394818) {
            ctx->pc = 0x394940u;
            goto label_394940;
        }
    }
    ctx->pc = 0x394820u;
    // 0x394820: 0x26380028  addiu       $t8, $s1, 0x28
    ctx->pc = 0x394820u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x394824: 0x8f300018  lw          $s0, 0x18($t9)
    ctx->pc = 0x394824u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x394828: 0x300b02d  daddu       $s6, $t8, $zero
    ctx->pc = 0x394828u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39482c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x39482cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394830: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x394830u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394834: 0x0  nop
    ctx->pc = 0x394834u;
    // NOP
label_394838:
    // 0x394838: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x394838u;
    {
        const bool branch_taken_0x394838 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394838u;
        // 0x39483c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394838) {
            ctx->pc = 0x394930u;
            goto label_394930;
        }
    }
    ctx->pc = 0x394840u;
    // 0x394840: 0x2cc1021  addu        $v0, $s6, $t4
    ctx->pc = 0x394840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 12)));
    // 0x394844: 0x200782d  daddu       $t7, $s0, $zero
    ctx->pc = 0x394844u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394848: 0x944e0000  lhu         $t6, 0x0($v0)
    ctx->pc = 0x394848u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39484c: 0x30c6821  addu        $t5, $t8, $t4
    ctx->pc = 0x39484cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 12)));
    // 0x394850: 0x27290028  addiu       $t1, $t9, 0x28
    ctx->pc = 0x394850u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 25), 40));
    // 0x394854: 0x0  nop
    ctx->pc = 0x394854u;
    // NOP
label_394858:
    // 0x394858: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x394858u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x39485c: 0x55c20031  bnel        $t6, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x39485Cu;
    {
        const bool branch_taken_0x39485c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 2));
        if (branch_taken_0x39485c) {
            ctx->pc = 0x394860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39485Cu;
            // 0x394860: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394924u;
            goto label_394924;
        }
    }
    ctx->pc = 0x394864u;
    // 0x394864: 0x8d070018  lw          $a3, 0x18($t0)
    ctx->pc = 0x394864u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x394868: 0x10e0002d  beqz        $a3, . + 4 + (0x2D << 2)
    ctx->pc = 0x394868u;
    {
        const bool branch_taken_0x394868 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x39486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394868u;
        // 0x39486c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394868) {
            ctx->pc = 0x394920u;
            goto label_394920;
        }
    }
    ctx->pc = 0x394870u;
    // 0x394870: 0x95a60000  lhu         $a2, 0x0($t5)
    ctx->pc = 0x394870u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x394874: 0x25040028  addiu       $a0, $t0, 0x28
    ctx->pc = 0x394874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 40));
    // 0x394878: 0x18e00010  blez        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x394878u;
    {
        const bool branch_taken_0x394878 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x39487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394878u;
        // 0x39487c: 0x30e30003  andi        $v1, $a3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x394878) {
            ctx->pc = 0x3948BCu;
            goto label_3948bc;
        }
    }
    ctx->pc = 0x394880u;
    // 0x394880: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x394880u;
    {
        const bool branch_taken_0x394880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x394884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394880u;
        // 0x394884: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x394880) {
            ctx->pc = 0x3948D8u;
            goto label_3948d8;
        }
    }
    ctx->pc = 0x394888u;
    // 0x394888: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x394888u;
    {
        const bool branch_taken_0x394888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x394888) {
            ctx->pc = 0x39488Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394888u;
            // 0x39488c: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3948C0u;
            goto label_3948c0;
        }
    }
    ctx->pc = 0x394890u;
    // 0x394890: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x394890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x394894: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x394894u;
    {
        const bool branch_taken_0x394894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x394894) {
            ctx->pc = 0x394898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394894u;
            // 0x394898: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3948B0u;
            goto label_3948b0;
        }
    }
    ctx->pc = 0x39489Cu;
    // 0x39489c: 0x95020028  lhu         $v0, 0x28($t0)
    ctx->pc = 0x39489cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x3948a0: 0x10c20027  beq         $a2, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3948A0u;
    {
        const bool branch_taken_0x3948a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3948A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3948A0u;
        // 0x3948a4: 0x2504002a  addiu       $a0, $t0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3948a0) {
            ctx->pc = 0x394940u;
            goto label_394940;
        }
    }
    ctx->pc = 0x3948A8u;
    // 0x3948a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3948a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3948ac: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3948acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_3948b0:
    // 0x3948b0: 0x10c20023  beq         $a2, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3948B0u;
    {
        const bool branch_taken_0x3948b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3948B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3948B0u;
        // 0x3948b4: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3948b0) {
            ctx->pc = 0x394940u;
            goto label_394940;
        }
    }
    ctx->pc = 0x3948B8u;
    // 0x3948b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3948b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3948bc:
    // 0x3948bc: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3948bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_3948c0:
    // 0x3948c0: 0x10c20020  beq         $a2, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3948C0u;
    {
        const bool branch_taken_0x3948c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3948C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3948C0u;
        // 0x3948c4: 0xb1040  sll         $v0, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3948c0) {
            ctx->pc = 0x394944u;
            goto label_394944;
        }
    }
    ctx->pc = 0x3948C8u;
    // 0x3948c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3948c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3948cc: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x3948ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3948d0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3948D0u;
    {
        const bool branch_taken_0x3948d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3948D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3948D0u;
        // 0x3948d4: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3948d0) {
            ctx->pc = 0x394920u;
            goto label_394920;
        }
    }
    ctx->pc = 0x3948D8u;
label_3948d8:
    // 0x3948d8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3948d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3948dc: 0x0  nop
    ctx->pc = 0x3948dcu;
    // NOP
label_3948e0:
    // 0x3948e0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3948e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3948e4: 0x10c20017  beq         $a2, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3948E4u;
    {
        const bool branch_taken_0x3948e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3948E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3948E4u;
        // 0x3948e8: 0xb1040  sll         $v0, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3948e4) {
            ctx->pc = 0x394944u;
            goto label_394944;
        }
    }
    ctx->pc = 0x3948ECu;
    // 0x3948ec: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x3948ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3948f0: 0x10c20014  beq         $a2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3948F0u;
    {
        const bool branch_taken_0x3948f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3948F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3948F0u;
        // 0x3948f4: 0xb1040  sll         $v0, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3948f0) {
            ctx->pc = 0x394944u;
            goto label_394944;
        }
    }
    ctx->pc = 0x3948F8u;
    // 0x3948f8: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x3948f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3948fc: 0x10c20011  beq         $a2, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3948FCu;
    {
        const bool branch_taken_0x3948fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x394900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3948FCu;
        // 0x394900: 0xb1040  sll         $v0, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3948fc) {
            ctx->pc = 0x394944u;
            goto label_394944;
        }
    }
    ctx->pc = 0x394904u;
    // 0x394904: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x394904u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x394908: 0x10c2000e  beq         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x394908u;
    {
        const bool branch_taken_0x394908 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x39490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394908u;
        // 0x39490c: 0xb1040  sll         $v0, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394908) {
            ctx->pc = 0x394944u;
            goto label_394944;
        }
    }
    ctx->pc = 0x394910u;
    // 0x394910: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x394910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x394914: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x394914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x394918: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x394918u;
    {
        const bool branch_taken_0x394918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394918u;
        // 0x39491c: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394918) {
            ctx->pc = 0x3948E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3948e0;
        }
    }
    ctx->pc = 0x394920u;
label_394920:
    // 0x394920: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x394920u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_394924:
    // 0x394924: 0x14f102b  sltu        $v0, $t2, $t7
    ctx->pc = 0x394924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x394928: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x394928u;
    {
        const bool branch_taken_0x394928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394928u;
        // 0x39492c: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394928) {
            ctx->pc = 0x394858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394858;
        }
    }
    ctx->pc = 0x394930u;
label_394930:
    // 0x394930: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x394930u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x394934: 0x175102b  sltu        $v0, $t3, $s5
    ctx->pc = 0x394934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x394938: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x394938u;
    {
        const bool branch_taken_0x394938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394938u;
        // 0x39493c: 0x258c0002  addiu       $t4, $t4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394938) {
            ctx->pc = 0x394838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394838;
        }
    }
    ctx->pc = 0x394940u;
label_394940:
    // 0x394940: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x394940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
label_394944:
    // 0x394944: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x394944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_394948:
    // 0x394948: 0x94430028  lhu         $v1, 0x28($v0)
    ctx->pc = 0x394948u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x39494c: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x39494cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x394950: 0x8e4d0000  lw          $t5, 0x0($s2)
    ctx->pc = 0x394950u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x394954: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x394954u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394958: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x394958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x39495c: 0x8da30018  lw          $v1, 0x18($t5)
    ctx->pc = 0x39495cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 24)));
    // 0x394960: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x394960u;
    {
        const bool branch_taken_0x394960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x394964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394960u;
        // 0x394964: 0x968f0000  lhu         $t7, 0x0($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394960) {
            ctx->pc = 0x394A58u;
            goto label_394a58;
        }
    }
    ctx->pc = 0x394968u;
    // 0x394968: 0x25a20028  addiu       $v0, $t5, 0x28
    ctx->pc = 0x394968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 40));
    // 0x39496c: 0x60702d  daddu       $t6, $v1, $zero
    ctx->pc = 0x39496cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394970: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x394970u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394974: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x394974u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394978: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x394978u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39497c: 0x0  nop
    ctx->pc = 0x39497cu;
    // NOP
label_394980:
    // 0x394980: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x394980u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x394984: 0x51e20030  beql        $t7, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x394984u;
    {
        const bool branch_taken_0x394984 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 2));
        if (branch_taken_0x394984) {
            ctx->pc = 0x394988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394984u;
            // 0x394988: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394A48u;
            goto label_394a48;
        }
    }
    ctx->pc = 0x39498Cu;
    // 0x39498c: 0x8cc80018  lw          $t0, 0x18($a2)
    ctx->pc = 0x39498cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x394990: 0x1100002c  beqz        $t0, . + 4 + (0x2C << 2)
    ctx->pc = 0x394990u;
    {
        const bool branch_taken_0x394990 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x394994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394990u;
        // 0x394994: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394990) {
            ctx->pc = 0x394A44u;
            goto label_394a44;
        }
    }
    ctx->pc = 0x394998u;
    // 0x394998: 0x16c1021  addu        $v0, $t3, $t4
    ctx->pc = 0x394998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x39499c: 0x24c40028  addiu       $a0, $a2, 0x28
    ctx->pc = 0x39499cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
    // 0x3949a0: 0x94470000  lhu         $a3, 0x0($v0)
    ctx->pc = 0x3949a0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3949a4: 0x19000010  blez        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3949A4u;
    {
        const bool branch_taken_0x3949a4 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x3949A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3949A4u;
        // 0x3949a8: 0x31030003  andi        $v1, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3949a4) {
            ctx->pc = 0x3949E8u;
            goto label_3949e8;
        }
    }
    ctx->pc = 0x3949ACu;
    // 0x3949ac: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3949ACu;
    {
        const bool branch_taken_0x3949ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3949B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3949ACu;
        // 0x3949b0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3949ac) {
            ctx->pc = 0x394A00u;
            goto label_394a00;
        }
    }
    ctx->pc = 0x3949B4u;
    // 0x3949b4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3949B4u;
    {
        const bool branch_taken_0x3949b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3949b4) {
            ctx->pc = 0x3949B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3949B4u;
            // 0x3949b8: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3949ECu;
            goto label_3949ec;
        }
    }
    ctx->pc = 0x3949BCu;
    // 0x3949bc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3949bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3949c0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3949C0u;
    {
        const bool branch_taken_0x3949c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3949c0) {
            ctx->pc = 0x3949C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3949C0u;
            // 0x3949c4: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3949DCu;
            goto label_3949dc;
        }
    }
    ctx->pc = 0x3949C8u;
    // 0x3949c8: 0x94c20028  lhu         $v0, 0x28($a2)
    ctx->pc = 0x3949c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x3949cc: 0x10e20022  beq         $a3, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3949CCu;
    {
        const bool branch_taken_0x3949cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3949D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3949CCu;
        // 0x3949d0: 0x24c4002a  addiu       $a0, $a2, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3949cc) {
            ctx->pc = 0x394A58u;
            goto label_394a58;
        }
    }
    ctx->pc = 0x3949D4u;
    // 0x3949d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3949d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3949d8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3949d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_3949dc:
    // 0x3949dc: 0x10e2001e  beq         $a3, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3949DCu;
    {
        const bool branch_taken_0x3949dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3949E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3949DCu;
        // 0x3949e0: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3949dc) {
            ctx->pc = 0x394A58u;
            goto label_394a58;
        }
    }
    ctx->pc = 0x3949E4u;
    // 0x3949e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3949e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3949e8:
    // 0x3949e8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3949e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_3949ec:
    // 0x3949ec: 0x10e2001a  beq         $a3, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3949ECu;
    {
        const bool branch_taken_0x3949ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3949F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3949ECu;
        // 0x3949f0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3949ec) {
            ctx->pc = 0x394A58u;
            goto label_394a58;
        }
    }
    ctx->pc = 0x3949F4u;
    // 0x3949f4: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x3949f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3949f8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3949F8u;
    {
        const bool branch_taken_0x3949f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3949FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3949F8u;
        // 0x3949fc: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3949f8) {
            ctx->pc = 0x394A44u;
            goto label_394a44;
        }
    }
    ctx->pc = 0x394A00u;
label_394a00:
    // 0x394a00: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x394a00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394a04: 0x0  nop
    ctx->pc = 0x394a04u;
    // NOP
label_394a08:
    // 0x394a08: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x394a08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x394a0c: 0x10e20013  beq         $a3, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x394A0Cu;
    {
        const bool branch_taken_0x394a0c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x394A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394A0Cu;
        // 0x394a10: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394a0c) {
            ctx->pc = 0x394A5Cu;
            goto label_394a5c;
        }
    }
    ctx->pc = 0x394A14u;
    // 0x394a14: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x394a14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x394a18: 0x10e20010  beq         $a3, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x394A18u;
    {
        const bool branch_taken_0x394a18 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x394A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394A18u;
        // 0x394a1c: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394a18) {
            ctx->pc = 0x394A5Cu;
            goto label_394a5c;
        }
    }
    ctx->pc = 0x394A20u;
    // 0x394a20: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x394a20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x394a24: 0x10e2000d  beq         $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x394A24u;
    {
        const bool branch_taken_0x394a24 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x394A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394A24u;
        // 0x394a28: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394a24) {
            ctx->pc = 0x394A5Cu;
            goto label_394a5c;
        }
    }
    ctx->pc = 0x394A2Cu;
    // 0x394a2c: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x394a2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x394a30: 0x10e20009  beq         $a3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x394A30u;
    {
        const bool branch_taken_0x394a30 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x394A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394A30u;
        // 0x394a34: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394a30) {
            ctx->pc = 0x394A58u;
            goto label_394a58;
        }
    }
    ctx->pc = 0x394A38u;
    // 0x394a38: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x394a38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x394a3c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x394A3Cu;
    {
        const bool branch_taken_0x394a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x394A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394A3Cu;
        // 0x394a40: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394a3c) {
            ctx->pc = 0x394A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394a08;
        }
    }
    ctx->pc = 0x394A44u;
label_394a44:
    // 0x394a44: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x394a44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_394a48:
    // 0x394a48: 0x258c0002  addiu       $t4, $t4, 0x2
    ctx->pc = 0x394a48u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
    // 0x394a4c: 0x12e102b  sltu        $v0, $t1, $t6
    ctx->pc = 0x394a4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x394a50: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x394A50u;
    {
        const bool branch_taken_0x394a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x394A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394A50u;
        // 0x394a54: 0x254a0002  addiu       $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394a50) {
            ctx->pc = 0x394980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394980;
        }
    }
    ctx->pc = 0x394A58u;
label_394a58:
    // 0x394a58: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x394a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_394a5c:
    // 0x394a5c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x394a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x394a60: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x394a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x394a64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x394a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394a68: 0x94430028  lhu         $v1, 0x28($v0)
    ctx->pc = 0x394a68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x394a6c: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x394a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x394a70: 0xa6e30000  sh          $v1, 0x0($s7)
    ctx->pc = 0x394a70u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x394a74: 0x3069ffff  andi        $t1, $v1, 0xFFFF
    ctx->pc = 0x394a74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x394a78: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x394A78u;
    {
        const bool branch_taken_0x394a78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x394A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394A78u;
        // 0x394a7c: 0x968a0000  lhu         $t2, 0x0($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394a78) {
            ctx->pc = 0x394AC4u;
            goto label_394ac4;
        }
    }
    ctx->pc = 0x394A80u;
    // 0x394a80: 0x94a20028  lhu         $v0, 0x28($a1)
    ctx->pc = 0x394a80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x394a84: 0x11220004  beq         $t1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x394A84u;
    {
        const bool branch_taken_0x394a84 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x394A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394A84u;
        // 0x394a88: 0x24a30028  addiu       $v1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394a84) {
            ctx->pc = 0x394A98u;
            goto label_394a98;
        }
    }
    ctx->pc = 0x394A8Cu;
    // 0x394a8c: 0x1542000e  bne         $t2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x394A8Cu;
    {
        const bool branch_taken_0x394a8c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x394A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394A8Cu;
        // 0x394a90: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394a8c) {
            ctx->pc = 0x394AC8u;
            goto label_394ac8;
        }
    }
    ctx->pc = 0x394A94u;
    // 0x394a94: 0x0  nop
    ctx->pc = 0x394a94u;
    // NOP
label_394a98:
    // 0x394a98: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x394a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_394a9c:
    // 0x394a9c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x394a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x394aa0: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x394aa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x394aa4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x394AA4u;
    {
        const bool branch_taken_0x394aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394AA4u;
        // 0x394aa8: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394aa4) {
            ctx->pc = 0x394AC4u;
            goto label_394ac4;
        }
    }
    ctx->pc = 0x394AACu;
    // 0x394aac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x394aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x394ab0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x394ab0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x394ab4: 0x5122fff9  beql        $t1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x394AB4u;
    {
        const bool branch_taken_0x394ab4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x394ab4) {
            ctx->pc = 0x394AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394AB4u;
            // 0x394ab8: 0x8ca20018  lw          $v0, 0x18($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394A9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394a9c;
        }
    }
    ctx->pc = 0x394ABCu;
    // 0x394abc: 0x5142fff7  beql        $t2, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x394ABCu;
    {
        const bool branch_taken_0x394abc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        if (branch_taken_0x394abc) {
            ctx->pc = 0x394AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394ABCu;
            // 0x394ac0: 0x8ca20018  lw          $v0, 0x18($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394A9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394a9c;
        }
    }
    ctx->pc = 0x394AC4u;
label_394ac4:
    // 0x394ac4: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x394ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_394ac8:
    // 0x394ac8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x394ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x394acc: 0x94430028  lhu         $v1, 0x28($v0)
    ctx->pc = 0x394accu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x394ad0: 0xa7c30000  sh          $v1, 0x0($fp)
    ctx->pc = 0x394ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 3));
label_394ad4:
    // 0x394ad4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x394ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x394ad8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x394ad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x394adc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x394adcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x394ae0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x394ae0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x394ae4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x394ae4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x394ae8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x394ae8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x394aec: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x394aecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x394af0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x394af0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x394af4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x394af4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x394af8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x394af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394afc: 0x3e00008  jr          $ra
    ctx->pc = 0x394AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394AFCu;
        // 0x394b00: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394B04u;
    // 0x394b04: 0x0  nop
    ctx->pc = 0x394b04u;
    // NOP
    ctx->pc = 0x394b08u;
}

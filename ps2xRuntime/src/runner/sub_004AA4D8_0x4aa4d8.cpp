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

// Function: sub_004AA4D8
// Address: 0x4aa4d8 - 0x4aa680
void sub_004AA4D8_0x4aa4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AA4D8_0x4aa4d8");
#endif

    switch (ctx->pc) {
        case 0x4aa510u: goto label_4aa510;
        case 0x4aa528u: goto label_4aa528;
        case 0x4aa548u: goto label_4aa548;
        case 0x4aa600u: goto label_4aa600;
        case 0x4aa620u: goto label_4aa620;
        default: break;
    }

    ctx->pc = 0x4aa4d8u;

    // 0x4aa4d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4aa4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4aa4dc: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x4aa4dcu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa4e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4aa4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4aa4e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4aa4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4aa4e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4aa4e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa4ec: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4aa4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4aa4f0: 0x262f0010  addiu       $t7, $s1, 0x10
    ctx->pc = 0x4aa4f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4aa4f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aa4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aa4f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4aa4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa4fc: 0x8e2d0010  lw          $t5, 0x10($s1)
    ctx->pc = 0x4aa4fcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4aa500: 0x11af0034  beq         $t5, $t7, . + 4 + (0x34 << 2)
    ctx->pc = 0x4AA500u;
    {
        const bool branch_taken_0x4aa500 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        ctx->pc = 0x4AA504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA500u;
        // 0x4aa504: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa500) {
            ctx->pc = 0x4AA5D4u;
            goto label_4aa5d4;
        }
    }
    ctx->pc = 0x4AA508u;
    // 0x4aa508: 0x26580008  addiu       $t8, $s2, 0x8
    ctx->pc = 0x4aa508u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x4aa50c: 0x25a20008  addiu       $v0, $t5, 0x8
    ctx->pc = 0x4aa50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_4aa510:
    // 0x4aa510: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x4aa510u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4aa514: 0x1240002a  beqz        $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x4AA514u;
    {
        const bool branch_taken_0x4aa514 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA514u;
        // 0x4aa518: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa514) {
            ctx->pc = 0x4AA5C0u;
            goto label_4aa5c0;
        }
    }
    ctx->pc = 0x4AA51Cu;
    // 0x4aa51c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x4aa51cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa520: 0x241000ff  addiu       $s0, $zero, 0xFF
    ctx->pc = 0x4aa520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4aa524: 0x1b83021  addu        $a2, $t5, $t8
    ctx->pc = 0x4aa524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 24)));
label_4aa528:
    // 0x4aa528: 0x916a0000  lbu         $t2, 0x0($t3)
    ctx->pc = 0x4aa528u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4aa52c: 0x5150001e  beql        $t2, $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4AA52Cu;
    {
        const bool branch_taken_0x4aa52c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 16));
        if (branch_taken_0x4aa52c) {
            ctx->pc = 0x4AA530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AA52Cu;
            // 0x4aa530: 0x2529fff8  addiu       $t1, $t1, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AA5A8u;
            goto label_4aa5a8;
        }
    }
    ctx->pc = 0x4AA534u;
    // 0x4aa534: 0x1120001c  beqz        $t1, . + 4 + (0x1C << 2)
    ctx->pc = 0x4AA534u;
    {
        const bool branch_taken_0x4aa534 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA534u;
        // 0x4aa538: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa534) {
            ctx->pc = 0x4AA5A8u;
            goto label_4aa5a8;
        }
    }
    ctx->pc = 0x4AA53Cu;
    // 0x4aa53c: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x4aa53cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4aa540: 0x10e1007  srav        $v0, $t6, $t0
    ctx->pc = 0x4aa540u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 14), GPR_U32(ctx, 8) & 0x1F));
    // 0x4aa544: 0x0  nop
    ctx->pc = 0x4aa544u;
    // NOP
label_4aa548:
    // 0x4aa548: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x4aa548u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4aa54c: 0x1471824  and         $v1, $t2, $a3
    ctx->pc = 0x4aa54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x4aa550: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AA550u;
    {
        const bool branch_taken_0x4aa550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa550) {
            ctx->pc = 0x4AA554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AA550u;
            // 0x4aa554: 0x91620000  lbu         $v0, 0x0($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AA578u;
            goto label_4aa578;
        }
    }
    ctx->pc = 0x4AA558u;
    // 0x4aa558: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4aa558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4aa55c: 0x2d020008  sltiu       $v0, $t0, 0x8
    ctx->pc = 0x4aa55cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x4aa560: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4AA560u;
    {
        const bool branch_taken_0x4aa560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA560u;
        // 0x4aa564: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa560) {
            ctx->pc = 0x4AA5A8u;
            goto label_4aa5a8;
        }
    }
    ctx->pc = 0x4AA568u;
    // 0x4aa568: 0x1520fff7  bnez        $t1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4AA568u;
    {
        const bool branch_taken_0x4aa568 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AA56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA568u;
        // 0x4aa56c: 0x10e1007  srav        $v0, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 14), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa568) {
            ctx->pc = 0x4AA548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aa548;
        }
    }
    ctx->pc = 0x4AA570u;
    // 0x4aa570: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4AA570u;
    {
        const bool branch_taken_0x4aa570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa570) {
            ctx->pc = 0x4AA5A8u;
            goto label_4aa5a8;
        }
    }
    ctx->pc = 0x4AA578u;
label_4aa578:
    // 0x4aa578: 0xc20c0  sll         $a0, $t4, 3
    ctx->pc = 0x4aa578u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x4aa57c: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x4aa57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x4aa580: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x4aa580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x4aa584: 0xa1620000  sb          $v0, 0x0($t3)
    ctx->pc = 0x4aa584u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4aa588: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4aa588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4aa58c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x4aa58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4aa590: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x4aa590u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4aa594: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x4aa594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4aa598: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4aa598u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4aa59c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4aa59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4aa5a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4aa5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4aa5a4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x4aa5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4aa5a8:
    // 0x4aa5a8: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AA5A8u;
    {
        const bool branch_taken_0x4aa5a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aa5a8) {
            ctx->pc = 0x4AA5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AA5A8u;
            // 0x4aa5ac: 0x8dad0000  lw          $t5, 0x0($t5) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AA5C4u;
            goto label_4aa5c4;
        }
    }
    ctx->pc = 0x4AA5B0u;
    // 0x4aa5b0: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x4aa5b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x4aa5b4: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x4aa5b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x4aa5b8: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x4AA5B8u;
    {
        const bool branch_taken_0x4aa5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AA5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA5B8u;
        // 0x4aa5bc: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa5b8) {
            ctx->pc = 0x4AA528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aa528;
        }
    }
    ctx->pc = 0x4AA5C0u;
label_4aa5c0:
    // 0x4aa5c0: 0x8dad0000  lw          $t5, 0x0($t5)
    ctx->pc = 0x4aa5c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_4aa5c4:
    // 0x4aa5c4: 0x11af0003  beq         $t5, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA5C4u;
    {
        const bool branch_taken_0x4aa5c4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        if (branch_taken_0x4aa5c4) {
            ctx->pc = 0x4AA5D4u;
            goto label_4aa5d4;
        }
    }
    ctx->pc = 0x4AA5CCu;
    // 0x4aa5cc: 0x1080ffd0  beqz        $a0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x4AA5CCu;
    {
        const bool branch_taken_0x4aa5cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA5CCu;
        // 0x4aa5d0: 0x25a20008  addiu       $v0, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa5cc) {
            ctx->pc = 0x4AA510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aa510;
        }
    }
    ctx->pc = 0x4AA5D4u;
label_4aa5d4:
    // 0x4aa5d4: 0x14800023  bnez        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x4AA5D4u;
    {
        const bool branch_taken_0x4aa5d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AA5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA5D4u;
        // 0x4aa5d8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa5d4) {
            ctx->pc = 0x4AA664u;
            goto label_4aa664;
        }
    }
    ctx->pc = 0x4AA5DCu;
    // 0x4aa5dc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x4aa5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4aa5e0: 0x320282d  daddu       $a1, $t9, $zero
    ctx->pc = 0x4aa5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa5e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4aa5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4aa5e8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x4aa5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4aa5ec: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x4aa5ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4aa5f0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x4aa5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x4aa5f4: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x4aa5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x4aa5f8: 0xc127ca4  jal         func_49F290
    ctx->pc = 0x4AA5F8u;
    SET_GPR_U32(ctx, 31, 0x4AA600u);
    ctx->pc = 0x4AA5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA5F8u;
    // 0x4aa5fc: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x4AA5F8u, 0x4AA600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA600u;
label_4aa600:
    // 0x4aa600: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4aa600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa604: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA604u;
    {
        const bool branch_taken_0x4aa604 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AA608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA604u;
        // 0x4aa608: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa604) {
            ctx->pc = 0x4AA614u;
            goto label_4aa614;
        }
    }
    ctx->pc = 0x4AA60Cu;
    // 0x4aa60c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4AA60Cu;
    {
        const bool branch_taken_0x4aa60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA60Cu;
        // 0x4aa610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa60c) {
            ctx->pc = 0x4AA664u;
            goto label_4aa664;
        }
    }
    ctx->pc = 0x4AA614u;
label_4aa614:
    // 0x4aa614: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4aa614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa618: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x4AA618u;
    SET_GPR_U32(ctx, 31, 0x4AA620u);
    ctx->pc = 0x4AA61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA618u;
    // 0x4aa61c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4AA618u, 0x4AA620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA620u;
label_4aa620:
    // 0x4aa620: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x4aa620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4aa624: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x4aa624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4aa628: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4aa628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4aa62c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x4aa62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4aa630: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4aa630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4aa634: 0x26430008  addiu       $v1, $s2, 0x8
    ctx->pc = 0x4aa634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x4aa638: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x4aa638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x4aa63c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4aa63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4aa640: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x4aa640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x4aa644: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x4aa644u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x4aa648: 0xa2050008  sb          $a1, 0x8($s0)
    ctx->pc = 0x4aa648u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x4aa64c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4aa64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4aa650: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4aa650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4aa654: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4aa654u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4aa658: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4aa658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4aa65c: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4aa65cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4aa660: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4aa660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4aa664:
    // 0x4aa664: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4aa664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4aa668: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4aa668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aa66c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4aa66cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aa670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa674: 0x3e00008  jr          $ra
    ctx->pc = 0x4AA674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AA678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA674u;
        // 0x4aa678: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AA674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AA67Cu;
    // 0x4aa67c: 0x0  nop
    ctx->pc = 0x4aa67cu;
    // NOP
    ctx->pc = 0x4aa680u;
}

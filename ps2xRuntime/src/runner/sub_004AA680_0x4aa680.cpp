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

// Function: sub_004AA680
// Address: 0x4aa680 - 0x4aa898
void sub_004AA680_0x4aa680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AA680_0x4aa680");
#endif

    switch (ctx->pc) {
        case 0x4aa6a8u: goto label_4aa6a8;
        case 0x4aa768u: goto label_4aa768;
        case 0x4aa794u: goto label_4aa794;
        case 0x4aa808u: goto label_4aa808;
        case 0x4aa860u: goto label_4aa860;
        case 0x4aa868u: goto label_4aa868;
        case 0x4aa87cu: goto label_4aa87c;
        default: break;
    }

    ctx->pc = 0x4aa680u;

    // 0x4aa680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4aa680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4aa684: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4aa684u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa688: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aa688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aa68c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4aa68cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa690: 0x25090010  addiu       $t1, $t0, 0x10
    ctx->pc = 0x4aa690u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x4aa694: 0x8d070010  lw          $a3, 0x10($t0)
    ctx->pc = 0x4aa694u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x4aa698: 0x10e90048  beq         $a3, $t1, . + 4 + (0x48 << 2)
    ctx->pc = 0x4AA698u;
    {
        const bool branch_taken_0x4aa698 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        ctx->pc = 0x4AA69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA698u;
        // 0x4aa69c: 0x8d0a0008  lw          $t2, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa698) {
            ctx->pc = 0x4AA7BCu;
            goto label_4aa7bc;
        }
    }
    ctx->pc = 0x4AA6A0u;
    // 0x4aa6a0: 0x25420008  addiu       $v0, $t2, 0x8
    ctx->pc = 0x4aa6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x4aa6a4: 0x0  nop
    ctx->pc = 0x4aa6a4u;
    // NOP
label_4aa6a8:
    // 0x4aa6a8: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x4aa6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4aa6ac: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x4aa6acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4aa6b0: 0x54600040  bnel        $v1, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x4AA6B0u;
    {
        const bool branch_taken_0x4aa6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aa6b0) {
            ctx->pc = 0x4AA6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AA6B0u;
            // 0x4aa6b4: 0x8ce70000  lw          $a3, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AA7B4u;
            goto label_4aa7b4;
        }
    }
    ctx->pc = 0x4AA6B8u;
    // 0x4aa6b8: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4aa6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x4aa6bc: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4aa6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4aa6c0: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x4aa6c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4aa6c4: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x4aa6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4aa6c8: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x4aa6c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4aa6cc: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x4AA6CCu;
    {
        const bool branch_taken_0x4aa6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aa6cc) {
            ctx->pc = 0x4AA6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AA6CCu;
            // 0x4aa6d0: 0x8ce70000  lw          $a3, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AA7B4u;
            goto label_4aa7b4;
        }
    }
    ctx->pc = 0x4AA6D4u;
    // 0x4aa6d4: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x4aa6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x4aa6d8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x4aa6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4aa6dc: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x4aa6dcu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4aa6e0: 0x24eb0008  addiu       $t3, $a3, 0x8
    ctx->pc = 0x4aa6e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x4aa6e4: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4AA6E4u;
    {
        const bool branch_taken_0x4aa6e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa6e4) {
            ctx->pc = 0x4AA6E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AA6E4u;
            // 0x4aa6e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AA6ECu;
            goto label_4aa6ec;
        }
    }
    ctx->pc = 0x4AA6ECu;
label_4aa6ec:
    // 0x4aa6ec: 0x25090010  addiu       $t1, $t0, 0x10
    ctx->pc = 0x4aa6ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x4aa6f0: 0x1012  mflo        $v0
    ctx->pc = 0x4aa6f0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4aa6f4: 0x228c2  srl         $a1, $v0, 3
    ctx->pc = 0x4aa6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x4aa6f8: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x4aa6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x4aa6fc: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4aa6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4aa700: 0x1652821  addu        $a1, $t3, $a1
    ctx->pc = 0x4aa700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x4aa704: 0x431807  srav        $v1, $v1, $v0
    ctx->pc = 0x4aa704u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x4aa708: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x4aa708u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4aa70c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4aa70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4aa710: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x4aa710u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x4aa714: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4aa714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4aa718: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x4aa718u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x4aa71c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4aa71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4aa720: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4aa720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4aa724: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4aa724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4aa728: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4aa728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4aa72c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4aa72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4aa730: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4aa730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x4aa734: 0x8d030010  lw          $v1, 0x10($t0)
    ctx->pc = 0x4aa734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x4aa738: 0x50690006  beql        $v1, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AA738u;
    {
        const bool branch_taken_0x4aa738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        if (branch_taken_0x4aa738) {
            ctx->pc = 0x4AA73Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AA738u;
            // 0x4aa73c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AA754u;
            goto label_4aa754;
        }
    }
    ctx->pc = 0x4AA740u;
    // 0x4aa740: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x4aa740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x4aa744: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4aa744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4aa748: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AA748u;
    {
        const bool branch_taken_0x4aa748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AA74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA748u;
        // 0x4aa74c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa748) {
            ctx->pc = 0x4AA75Cu;
            goto label_4aa75c;
        }
    }
    ctx->pc = 0x4AA750u;
    // 0x4aa750: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4aa750u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4aa754:
    // 0x4aa754: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4AA754u;
    {
        const bool branch_taken_0x4aa754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA754u;
        // 0x4aa758: 0xace90004  sw          $t1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa754) {
            ctx->pc = 0x4AA7A4u;
            goto label_4aa7a4;
        }
    }
    ctx->pc = 0x4AA75Cu;
label_4aa75c:
    // 0x4aa75c: 0x11400009  beqz        $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AA75Cu;
    {
        const bool branch_taken_0x4aa75c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA75Cu;
        // 0x4aa760: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa75c) {
            ctx->pc = 0x4AA784u;
            goto label_4aa784;
        }
    }
    ctx->pc = 0x4AA764u;
    // 0x4aa764: 0x0  nop
    ctx->pc = 0x4aa764u;
    // NOP
label_4aa768:
    // 0x4aa768: 0x1651021  addu        $v0, $t3, $a1
    ctx->pc = 0x4aa768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x4aa76c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4aa76cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4aa770: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4aa770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4aa774: 0xaa102b  sltu        $v0, $a1, $t2
    ctx->pc = 0x4aa774u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x4aa778: 0x0  nop
    ctx->pc = 0x4aa778u;
    // NOP
    // 0x4aa77c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4AA77Cu;
    {
        const bool branch_taken_0x4aa77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AA780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA77Cu;
        // 0x4aa780: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa77c) {
            ctx->pc = 0x4AA768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aa768;
        }
    }
    ctx->pc = 0x4AA784u;
label_4aa784:
    // 0x4aa784: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AA784u;
    {
        const bool branch_taken_0x4aa784 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aa784) {
            ctx->pc = 0x4AA788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AA784u;
            // 0x4aa788: 0x8d030010  lw          $v1, 0x10($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AA79Cu;
            goto label_4aa79c;
        }
    }
    ctx->pc = 0x4AA78Cu;
    // 0x4aa78c: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4AA78Cu;
    SET_GPR_U32(ctx, 31, 0x4AA794u);
    ctx->pc = 0x4AA790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA78Cu;
    // 0x4aa790: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4AA78Cu, 0x4AA794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA794u;
label_4aa794:
    // 0x4aa794: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4AA794u;
    {
        const bool branch_taken_0x4aa794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA794u;
        // 0x4aa798: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa794) {
            ctx->pc = 0x4AA7C0u;
            goto label_4aa7c0;
        }
    }
    ctx->pc = 0x4AA79Cu;
label_4aa79c:
    // 0x4aa79c: 0xace90004  sw          $t1, 0x4($a3)
    ctx->pc = 0x4aa79cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 9));
    // 0x4aa7a0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4aa7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4aa7a4:
    // 0x4aa7a4: 0x8d020010  lw          $v0, 0x10($t0)
    ctx->pc = 0x4aa7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x4aa7a8: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x4aa7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x4aa7ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA7ACu;
    {
        const bool branch_taken_0x4aa7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA7ACu;
        // 0x4aa7b0: 0xad070010  sw          $a3, 0x10($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa7ac) {
            ctx->pc = 0x4AA7BCu;
            goto label_4aa7bc;
        }
    }
    ctx->pc = 0x4AA7B4u;
label_4aa7b4:
    // 0x4aa7b4: 0x14e9ffbc  bne         $a3, $t1, . + 4 + (-0x44 << 2)
    ctx->pc = 0x4AA7B4u;
    {
        const bool branch_taken_0x4aa7b4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        ctx->pc = 0x4AA7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA7B4u;
        // 0x4aa7b8: 0x25420008  addiu       $v0, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa7b4) {
            ctx->pc = 0x4AA6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aa6a8;
        }
    }
    ctx->pc = 0x4AA7BCu;
label_4aa7bc:
    // 0x4aa7bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aa7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4aa7c0:
    // 0x4aa7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AA7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AA7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA7C0u;
        // 0x4aa7c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AA7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AA7C8u;
    // 0x4aa7c8: 0x2783c210  addiu       $v1, $gp, -0x3DF0
    ctx->pc = 0x4aa7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951440));
    // 0x4aa7cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4aa7ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4aa7d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4aa7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4aa7d4: 0x3c080066  lui         $t0, 0x66
    ctx->pc = 0x4aa7d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)102 << 16));
    // 0x4aa7d8: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x4aa7d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x4aa7dc: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x4aa7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4aa7e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aa7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aa7e4: 0x250888d0  addiu       $t0, $t0, -0x7730
    ctx->pc = 0x4aa7e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294936784));
    // 0x4aa7e8: 0xaf83c214  sw          $v1, -0x3DEC($gp)
    ctx->pc = 0x4aa7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951444), GPR_U32(ctx, 3));
    // 0x4aa7ec: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x4aa7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x4aa7f0: 0xaf82b894  sw          $v0, -0x476C($gp)
    ctx->pc = 0x4aa7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949012), GPR_U32(ctx, 2));
    // 0x4aa7f4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x4aa7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4aa7f8: 0xaf83c210  sw          $v1, -0x3DF0($gp)
    ctx->pc = 0x4aa7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951440), GPR_U32(ctx, 3));
    // 0x4aa7fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4aa7fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa800: 0xc12aa26  jal         func_4AA898
    ctx->pc = 0x4AA800u;
    SET_GPR_U32(ctx, 31, 0x4AA808u);
    ctx->pc = 0x4AA804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA800u;
    // 0x4aa804: 0x35290800  ori         $t1, $t1, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA898u, 0x4AA800u, 0x4AA808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA808u;
label_4aa808:
    // 0x4aa808: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4aa808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa80c: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AA80Cu;
    {
        const bool branch_taken_0x4aa80c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA80Cu;
        // 0x4aa810: 0xaf86b898  sw          $a2, -0x4768($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949016), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa80c) {
            ctx->pc = 0x4AA834u;
            goto label_4aa834;
        }
    }
    ctx->pc = 0x4AA814u;
    // 0x4aa814: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x4aa814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x4aa818: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4aa818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4aa81c: 0x8cc50020  lw          $a1, 0x20($a2)
    ctx->pc = 0x4aa81cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x4aa820: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4aa820u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4aa824: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x4aa824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x4aa828: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x4aa828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x4aa82c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA82Cu;
    {
        const bool branch_taken_0x4aa82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA82Cu;
        // 0x4aa830: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa82c) {
            ctx->pc = 0x4AA83Cu;
            goto label_4aa83c;
        }
    }
    ctx->pc = 0x4AA834u;
label_4aa834:
    // 0x4aa834: 0xaf80b894  sw          $zero, -0x476C($gp)
    ctx->pc = 0x4aa834u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949012), GPR_U32(ctx, 0));
    // 0x4aa838: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4aa838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4aa83c:
    // 0x4aa83c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aa83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa840: 0x3e00008  jr          $ra
    ctx->pc = 0x4AA840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AA844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA840u;
        // 0x4aa844: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AA840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AA848u;
    // 0x4aa848: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4aa848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4aa84c: 0x8f84c210  lw          $a0, -0x3DF0($gp)
    ctx->pc = 0x4aa84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951440)));
    // 0x4aa850: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4aa850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4aa854: 0x2790c210  addiu       $s0, $gp, -0x3DF0
    ctx->pc = 0x4aa854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951440));
    // 0x4aa858: 0x10900006  beq         $a0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AA858u;
    {
        const bool branch_taken_0x4aa858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x4AA85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA858u;
        // 0x4aa85c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa858) {
            ctx->pc = 0x4AA874u;
            goto label_4aa874;
        }
    }
    ctx->pc = 0x4AA860u;
label_4aa860:
    // 0x4aa860: 0xc12aa86  jal         func_4AAA18
    ctx->pc = 0x4AA860u;
    SET_GPR_U32(ctx, 31, 0x4AA868u);
    ctx->pc = 0x4AA864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA860u;
    // 0x4aa864: 0x2484ffe4  addiu       $a0, $a0, -0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x4AA860u, 0x4AA868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA868u;
label_4aa868:
    // 0x4aa868: 0x8f84c210  lw          $a0, -0x3DF0($gp)
    ctx->pc = 0x4aa868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951440)));
    // 0x4aa86c: 0x1490fffc  bne         $a0, $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x4AA86Cu;
    {
        const bool branch_taken_0x4aa86c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x4aa86c) {
            ctx->pc = 0x4AA860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aa860;
        }
    }
    ctx->pc = 0x4AA874u;
label_4aa874:
    // 0x4aa874: 0xc12aa86  jal         func_4AAA18
    ctx->pc = 0x4AA874u;
    SET_GPR_U32(ctx, 31, 0x4AA87Cu);
    ctx->pc = 0x4AA878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA874u;
    // 0x4aa878: 0x8f84b898  lw          $a0, -0x4768($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949016)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x4AA874u, 0x4AA87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA87Cu;
label_4aa87c:
    // 0x4aa87c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4aa87cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aa880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa884: 0xaf80b898  sw          $zero, -0x4768($gp)
    ctx->pc = 0x4aa884u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949016), GPR_U32(ctx, 0));
    // 0x4aa888: 0xaf80b894  sw          $zero, -0x476C($gp)
    ctx->pc = 0x4aa888u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949012), GPR_U32(ctx, 0));
    // 0x4aa88c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AA88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AA890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA88Cu;
        // 0x4aa890: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AA88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AA894u;
    // 0x4aa894: 0x0  nop
    ctx->pc = 0x4aa894u;
    // NOP
    ctx->pc = 0x4aa898u;
}

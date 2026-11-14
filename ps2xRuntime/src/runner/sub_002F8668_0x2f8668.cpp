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

// Function: sub_002F8668
// Address: 0x2f8668 - 0x2f8980
void sub_002F8668_0x2f8668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8668_0x2f8668");
#endif

    switch (ctx->pc) {
        case 0x2f86b8u: goto label_2f86b8;
        case 0x2f86d0u: goto label_2f86d0;
        case 0x2f8730u: goto label_2f8730;
        case 0x2f8774u: goto label_2f8774;
        case 0x2f87c0u: goto label_2f87c0;
        case 0x2f87d4u: goto label_2f87d4;
        case 0x2f87dcu: goto label_2f87dc;
        case 0x2f87ecu: goto label_2f87ec;
        case 0x2f8818u: goto label_2f8818;
        case 0x2f886cu: goto label_2f886c;
        case 0x2f8884u: goto label_2f8884;
        case 0x2f88b0u: goto label_2f88b0;
        case 0x2f88e8u: goto label_2f88e8;
        case 0x2f8900u: goto label_2f8900;
        case 0x2f8930u: goto label_2f8930;
        case 0x2f8940u: goto label_2f8940;
        case 0x2f8950u: goto label_2f8950;
        default: break;
    }

    ctx->pc = 0x2f8668u;

    // 0x2f8668: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2f8668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2f866c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2f866cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2f8670: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f8670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f8674: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f8674u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8678: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f8678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f867c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2f867cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8680: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f8680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f8684: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2f8684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2f8688: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2f8688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f868c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2f868cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2f8690: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2f8690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2f8694: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f8694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f8698: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2f8698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f869c: 0x28620081  slti        $v0, $v1, 0x81
    ctx->pc = 0x2f869cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x2f86a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F86A0u;
    {
        const bool branch_taken_0x2f86a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F86A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F86A0u;
        // 0x2f86a4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f86a0) {
            ctx->pc = 0x2F86C0u;
            goto label_2f86c0;
        }
    }
    ctx->pc = 0x2F86A8u;
    // 0x2f86a8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f86a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f86ac: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2f86acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f86b0: 0xc0be29c  jal         func_2F8A70
    ctx->pc = 0x2F86B0u;
    SET_GPR_U32(ctx, 31, 0x2F86B8u);
    ctx->pc = 0x2F86B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F86B0u;
    // 0x2f86b4: 0x24849e10  addiu       $a0, $a0, -0x61F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8A70u, 0x2F86B0u, 0x2F86B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F86B8u;
label_2f86b8:
    // 0x2f86b8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2F86B8u;
    {
        const bool branch_taken_0x2f86b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F86BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F86B8u;
        // 0x2f86bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f86b8) {
            ctx->pc = 0x2F87F0u;
            goto label_2f87f0;
        }
    }
    ctx->pc = 0x2F86C0u;
label_2f86c0:
    // 0x2f86c0: 0x3c150061  lui         $s5, 0x61
    ctx->pc = 0x2f86c0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
    // 0x2f86c4: 0x3c11004f  lui         $s1, 0x4F
    ctx->pc = 0x2f86c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)79 << 16));
    // 0x2f86c8: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x2F86C8u;
    SET_GPR_U32(ctx, 31, 0x2F86D0u);
    ctx->pc = 0x2F86CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F86C8u;
    // 0x2f86cc: 0x8ea4eb00  lw          $a0, -0x1500($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294961920)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x2F86C8u, 0x2F86D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F86D0u;
label_2f86d0:
    // 0x2f86d0: 0x8e220acc  lw          $v0, 0xACC($s1)
    ctx->pc = 0x2f86d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2764)));
    // 0x2f86d4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2f86d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f86d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f86d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f86dc: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x2f86dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f86e0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F86E0u;
    {
        const bool branch_taken_0x2f86e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F86E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F86E0u;
        // 0x2f86e4: 0xae220acc  sw          $v0, 0xACC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2764), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f86e0) {
            ctx->pc = 0x2F86ECu;
            goto label_2f86ec;
        }
    }
    ctx->pc = 0x2F86E8u;
    // 0x2f86e8: 0xae200acc  sw          $zero, 0xACC($s1)
    ctx->pc = 0x2f86e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2764), GPR_U32(ctx, 0));
label_2f86ec:
    // 0x2f86ec: 0x8e230acc  lw          $v1, 0xACC($s1)
    ctx->pc = 0x2f86ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2764)));
    // 0x2f86f0: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x2f86f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2f86f4: 0x3c160061  lui         $s6, 0x61
    ctx->pc = 0x2f86f4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)97 << 16));
    // 0x2f86f8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2f86f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f86fc: 0x26c2e8c0  addiu       $v0, $s6, -0x1740
    ctx->pc = 0x2f86fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961344));
    // 0x2f8700: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2f8700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f8704: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x2f8704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 20));
    // 0x2f8708: 0xac920004  sw          $s2, 0x4($a0)
    ctx->pc = 0x2f8708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 18));
    // 0x2f870c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f870cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f8710: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2f8710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2f8714: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2f8714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f8718: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2F8718u;
    {
        const bool branch_taken_0x2f8718 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2F871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8718u;
        // 0x2f871c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8718) {
            ctx->pc = 0x2F8758u;
            goto label_2f8758;
        }
    }
    ctx->pc = 0x2F8720u;
    // 0x2f8720: 0x2486000c  addiu       $a2, $a0, 0xC
    ctx->pc = 0x2f8720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2f8724: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x2f8724u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
    // 0x2f8728: 0x2651021  addu        $v0, $s3, $a1
    ctx->pc = 0x2f8728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2f872c: 0x0  nop
    ctx->pc = 0x2f872cu;
    // NOP
label_2f8730:
    // 0x2f8730: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x2f8730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2f8734: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2f8734u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f8738: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f8738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f873c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2f873cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f8740: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f8740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f8744: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2f8744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f8748: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F8748u;
    {
        const bool branch_taken_0x2f8748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8748u;
        // 0x2f874c: 0x2651021  addu        $v0, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8748) {
            ctx->pc = 0x2F8730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f8730;
        }
    }
    ctx->pc = 0x2F8750u;
    // 0x2f8750: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8750u;
    {
        const bool branch_taken_0x2f8750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8750u;
        // 0x2f8754: 0x8d040acc  lw          $a0, 0xACC($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2764)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8750) {
            ctx->pc = 0x2F8760u;
            goto label_2f8760;
        }
    }
    ctx->pc = 0x2F8758u;
label_2f8758:
    // 0x2f8758: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x2f8758u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
    // 0x2f875c: 0x8d040acc  lw          $a0, 0xACC($t0)
    ctx->pc = 0x2f875cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2764)));
label_2f8760:
    // 0x2f8760: 0x24120028  addiu       $s2, $zero, 0x28
    ctx->pc = 0x2f8760u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2f8764: 0x24f0c6c0  addiu       $s0, $a3, -0x3940
    ctx->pc = 0x2f8764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952640));
    // 0x2f8768: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x2f8768u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2f876c: 0xc0c072a  jal         func_301CA8
    ctx->pc = 0x2F876Cu;
    SET_GPR_U32(ctx, 31, 0x2F8774u);
    ctx->pc = 0x2F8770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F876Cu;
    // 0x2f8770: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301CA8u, 0x2F876Cu, 0x2F8774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8774u;
label_2f8774:
    // 0x2f8774: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f8774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8778: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8778u;
    {
        const bool branch_taken_0x2f8778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8778u;
        // 0x2f877c: 0x8e250acc  lw          $a1, 0xACC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2764)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8778) {
            ctx->pc = 0x2F878Cu;
            goto label_2f878c;
        }
    }
    ctx->pc = 0x2F8780u;
    // 0x2f8780: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f8780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f8784: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2F8784u;
    {
        const bool branch_taken_0x2f8784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8784u;
        // 0x2f8788: 0x24849e40  addiu       $a0, $a0, -0x61C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8784) {
            ctx->pc = 0x2F87CCu;
            goto label_2f87cc;
        }
    }
    ctx->pc = 0x2F878Cu;
label_2f878c:
    // 0x2f878c: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x2f878cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2f8790: 0x26c2e8c0  addiu       $v0, $s6, -0x1740
    ctx->pc = 0x2f8790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961344));
    // 0x2f8794: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f8794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f8798: 0xa73818  mult        $a3, $a1, $a3
    ctx->pc = 0x2f8798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2f879c: 0xb21818  mult        $v1, $a1, $s2
    ctx->pc = 0x2f879cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f87a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f87a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f87a4: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x2f87a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f87a8: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x2f87a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f87ac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2f87acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f87b0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2f87b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2f87b4: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x2f87b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2f87b8: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x2F87B8u;
    SET_GPR_U32(ctx, 31, 0x2F87C0u);
    ctx->pc = 0x2F87BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F87B8u;
    // 0x2f87bc: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x2F87B8u, 0x2F87C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F87C0u;
label_2f87c0:
    // 0x2f87c0: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F87C0u;
    {
        const bool branch_taken_0x2f87c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F87C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F87C0u;
        // 0x2f87c4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f87c0) {
            ctx->pc = 0x2F87E4u;
            goto label_2f87e4;
        }
    }
    ctx->pc = 0x2F87C8u;
    // 0x2f87c8: 0x24849e60  addiu       $a0, $a0, -0x61A0
    ctx->pc = 0x2f87c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942304));
label_2f87cc:
    // 0x2f87cc: 0xc0be29c  jal         func_2F8A70
    ctx->pc = 0x2F87CCu;
    SET_GPR_U32(ctx, 31, 0x2F87D4u);
    ctx->pc = 0x2F8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8A70u, 0x2F87CCu, 0x2F87D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F87D4u;
label_2f87d4:
    // 0x2f87d4: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x2F87D4u;
    SET_GPR_U32(ctx, 31, 0x2F87DCu);
    ctx->pc = 0x2F87D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F87D4u;
    // 0x2f87d8: 0x8ea4eb00  lw          $a0, -0x1500($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294961920)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x2F87D4u, 0x2F87DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F87DCu;
label_2f87dc:
    // 0x2f87dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F87DCu;
    {
        const bool branch_taken_0x2f87dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F87E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F87DCu;
        // 0x2f87e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f87dc) {
            ctx->pc = 0x2F87F0u;
            goto label_2f87f0;
        }
    }
    ctx->pc = 0x2F87E4u;
label_2f87e4:
    // 0x2f87e4: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x2F87E4u;
    SET_GPR_U32(ctx, 31, 0x2F87ECu);
    ctx->pc = 0x2F87E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F87E4u;
    // 0x2f87e8: 0x8ea4eb00  lw          $a0, -0x1500($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294961920)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x2F87E4u, 0x2F87ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F87ECu;
label_2f87ec:
    // 0x2f87ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f87ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f87f0:
    // 0x2f87f0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2f87f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f87f4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2f87f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f87f8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2f87f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f87fc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2f87fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f8800: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f8800u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f8804: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f8804u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f8808: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f8808u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f880c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f880cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8810: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8810u;
        // 0x2f8814: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8818u;
label_2f8818:
    // 0x2f8818: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2f8818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2f881c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2f881cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2f8820: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2f8820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2f8824: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2f8824u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8828: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f8828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f882c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2f882cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8830: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f8830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f8834: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f8834u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8838: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f8838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f883c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2f883cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2f8840: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2f8840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8844: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2f8844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2f8848: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f8848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f884c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2f884cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f8850: 0x28622081  slti        $v0, $v1, 0x2081
    ctx->pc = 0x2f8850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8321) ? 1 : 0);
    // 0x2f8854: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F8854u;
    {
        const bool branch_taken_0x2f8854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8854u;
        // 0x2f8858: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8854) {
            ctx->pc = 0x2F8874u;
            goto label_2f8874;
        }
    }
    ctx->pc = 0x2F885Cu;
    // 0x2f885c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f885cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f8860: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2f8860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8864: 0xc0be29c  jal         func_2F8A70
    ctx->pc = 0x2F8864u;
    SET_GPR_U32(ctx, 31, 0x2F886Cu);
    ctx->pc = 0x2F8868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8864u;
    // 0x2f8868: 0x24849e80  addiu       $a0, $a0, -0x6180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8A70u, 0x2F8864u, 0x2F886Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F886Cu;
label_2f886c:
    // 0x2f886c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2F886Cu;
    {
        const bool branch_taken_0x2f886c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F886Cu;
        // 0x2f8870: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f886c) {
            ctx->pc = 0x2F8954u;
            goto label_2f8954;
        }
    }
    ctx->pc = 0x2F8874u;
label_2f8874:
    // 0x2f8874: 0x3c150061  lui         $s5, 0x61
    ctx->pc = 0x2f8874u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
    // 0x2f8878: 0x3c130061  lui         $s3, 0x61
    ctx->pc = 0x2f8878u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)97 << 16));
    // 0x2f887c: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x2F887Cu;
    SET_GPR_U32(ctx, 31, 0x2F8884u);
    ctx->pc = 0x2F8880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F887Cu;
    // 0x2f8880: 0x8ea4eb00  lw          $a0, -0x1500($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294961920)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x2F887Cu, 0x2F8884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8884u;
label_2f8884:
    // 0x2f8884: 0xae72c800  sw          $s2, -0x3800($s3)
    ctx->pc = 0x2f8884u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294952960), GPR_U32(ctx, 18));
    // 0x2f8888: 0x2664c800  addiu       $a0, $s3, -0x3800
    ctx->pc = 0x2f8888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952960));
    // 0x2f888c: 0xac910004  sw          $s1, 0x4($a0)
    ctx->pc = 0x2f888cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    // 0x2f8890: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f8890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f8894: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2f8894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2f8898: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2f8898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f889c: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2F889Cu;
    {
        const bool branch_taken_0x2f889c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2F88A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F889Cu;
        // 0x2f88a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f889c) {
            ctx->pc = 0x2F88D8u;
            goto label_2f88d8;
        }
    }
    ctx->pc = 0x2F88A4u;
    // 0x2f88a4: 0x2486000c  addiu       $a2, $a0, 0xC
    ctx->pc = 0x2f88a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2f88a8: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x2f88a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
    // 0x2f88ac: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x2f88acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_2f88b0:
    // 0x2f88b0: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x2f88b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2f88b4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2f88b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f88b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f88b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f88bc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2f88bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f88c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f88c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f88c4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2f88c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f88c8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F88C8u;
    {
        const bool branch_taken_0x2f88c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F88CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F88C8u;
        // 0x2f88cc: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f88c8) {
            ctx->pc = 0x2F88B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f88b0;
        }
    }
    ctx->pc = 0x2F88D0u;
    // 0x2f88d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F88D0u;
    {
        const bool branch_taken_0x2f88d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F88D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F88D0u;
        // 0x2f88d4: 0x24f0c698  addiu       $s0, $a3, -0x3968 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f88d0) {
            ctx->pc = 0x2F88E0u;
            goto label_2f88e0;
        }
    }
    ctx->pc = 0x2F88D8u;
label_2f88d8:
    // 0x2f88d8: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x2f88d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
    // 0x2f88dc: 0x24f0c698  addiu       $s0, $a3, -0x3968
    ctx->pc = 0x2f88dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952600));
label_2f88e0:
    // 0x2f88e0: 0xc0c072a  jal         func_301CA8
    ctx->pc = 0x2F88E0u;
    SET_GPR_U32(ctx, 31, 0x2F88E8u);
    ctx->pc = 0x2F88E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F88E0u;
    // 0x2f88e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301CA8u, 0x2F88E0u, 0x2F88E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F88E8u;
label_2f88e8:
    // 0x2f88e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f88e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f88ec: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F88ECu;
    {
        const bool branch_taken_0x2f88ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F88F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F88ECu;
        // 0x2f88f0: 0x2667c800  addiu       $a3, $s3, -0x3800 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f88ec) {
            ctx->pc = 0x2F8908u;
            goto label_2f8908;
        }
    }
    ctx->pc = 0x2F88F4u;
    // 0x2f88f4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f88f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f88f8: 0xc0be29c  jal         func_2F8A70
    ctx->pc = 0x2F88F8u;
    SET_GPR_U32(ctx, 31, 0x2F8900u);
    ctx->pc = 0x2F88FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F88F8u;
    // 0x2f88fc: 0x24849eb0  addiu       $a0, $a0, -0x6150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8A70u, 0x2F88F8u, 0x2F8900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8900u;
label_2f8900:
    // 0x2f8900: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2F8900u;
    {
        const bool branch_taken_0x2f8900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8900) {
            ctx->pc = 0x2F8938u;
            goto label_2f8938;
        }
    }
    ctx->pc = 0x2F8908u;
label_2f8908:
    // 0x2f8908: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f8908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f890c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f890cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8910: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x2f8910u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8914: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f8914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f8918: 0x34a5131c  ori         $a1, $a1, 0x131C
    ctx->pc = 0x2f8918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4892);
    // 0x2f891c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f891cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8920: 0x24082090  addiu       $t0, $zero, 0x2090
    ctx->pc = 0x2f8920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8336));
    // 0x2f8924: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2f8924u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8928: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x2F8928u;
    SET_GPR_U32(ctx, 31, 0x2F8930u);
    ctx->pc = 0x2F892Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8928u;
    // 0x2f892c: 0x240a2090  addiu       $t2, $zero, 0x2090 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x2F8928u, 0x2F8930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8930u;
label_2f8930:
    // 0x2f8930: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8930u;
    {
        const bool branch_taken_0x2f8930 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f8930) {
            ctx->pc = 0x2F8948u;
            goto label_2f8948;
        }
    }
    ctx->pc = 0x2F8938u;
label_2f8938:
    // 0x2f8938: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x2F8938u;
    SET_GPR_U32(ctx, 31, 0x2F8940u);
    ctx->pc = 0x2F893Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8938u;
    // 0x2f893c: 0x8ea4eb00  lw          $a0, -0x1500($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294961920)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x2F8938u, 0x2F8940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8940u;
label_2f8940:
    // 0x2f8940: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8940u;
    {
        const bool branch_taken_0x2f8940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8940u;
        // 0x2f8944: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8940) {
            ctx->pc = 0x2F8954u;
            goto label_2f8954;
        }
    }
    ctx->pc = 0x2F8948u;
label_2f8948:
    // 0x2f8948: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x2F8948u;
    SET_GPR_U32(ctx, 31, 0x2F8950u);
    ctx->pc = 0x2F894Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8948u;
    // 0x2f894c: 0x8ea4eb00  lw          $a0, -0x1500($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294961920)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x2F8948u, 0x2F8950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8950u;
label_2f8950:
    // 0x2f8950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f8950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f8954:
    // 0x2f8954: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2f8954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f8958: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2f8958u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f895c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2f895cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f8960: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2f8960u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f8964: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f8964u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f8968: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f8968u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f896c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f896cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8970: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f8970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8974: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8974u;
        // 0x2f8978: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F897Cu;
    // 0x2f897c: 0x0  nop
    ctx->pc = 0x2f897cu;
    // NOP
    ctx->pc = 0x2f8980u;
}

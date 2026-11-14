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

// Function: sub_002EE8C0
// Address: 0x2ee8c0 - 0x2eea18
void sub_002EE8C0_0x2ee8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE8C0_0x2ee8c0");
#endif

    switch (ctx->pc) {
        case 0x2ee910u: goto label_2ee910;
        case 0x2ee934u: goto label_2ee934;
        case 0x2ee948u: goto label_2ee948;
        case 0x2ee988u: goto label_2ee988;
        case 0x2ee9c0u: goto label_2ee9c0;
        case 0x2ee9f0u: goto label_2ee9f0;
        default: break;
    }

    ctx->pc = 0x2ee8c0u;

    // 0x2ee8c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ee8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ee8c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ee8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ee8c8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2ee8c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee8cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ee8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ee8d0: 0x108943  sra         $s1, $s0, 5
    ctx->pc = 0x2ee8d0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 16), 5));
    // 0x2ee8d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ee8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ee8d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ee8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ee8dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ee8dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee8e0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2ee8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2ee8e4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2ee8e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee8e8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2ee8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2ee8ec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ee8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ee8f0: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x2ee8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2ee8f4: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x2ee8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2ee8f8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2ee8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2ee8fc: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x2ee8fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ee900: 0xd2102a  slt         $v0, $a2, $s2
    ctx->pc = 0x2ee900u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2ee904: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EE904u;
    {
        const bool branch_taken_0x2ee904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE904u;
        // 0x2ee908: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee904) {
            ctx->pc = 0x2EE92Cu;
            goto label_2ee92c;
        }
    }
    ctx->pc = 0x2EE90Cu;
    // 0x2ee90c: 0x0  nop
    ctx->pc = 0x2ee90cu;
    // NOP
label_2ee910:
    // 0x2ee910: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x2ee910u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2ee914: 0xd2102a  slt         $v0, $a2, $s2
    ctx->pc = 0x2ee914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2ee918: 0x0  nop
    ctx->pc = 0x2ee918u;
    // NOP
    // 0x2ee91c: 0x0  nop
    ctx->pc = 0x2ee91cu;
    // NOP
    // 0x2ee920: 0x0  nop
    ctx->pc = 0x2ee920u;
    // NOP
    // 0x2ee924: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EE924u;
    {
        const bool branch_taken_0x2ee924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE924u;
        // 0x2ee928: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee924) {
            ctx->pc = 0x2EE910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee910;
        }
    }
    ctx->pc = 0x2EE92Cu;
label_2ee92c:
    // 0x2ee92c: 0xc0bb84a  jal         func_2EE128
    ctx->pc = 0x2EE92Cu;
    SET_GPR_U32(ctx, 31, 0x2EE934u);
    ctx->pc = 0x2EE930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE92Cu;
    // 0x2ee930: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE128u, 0x2EE92Cu, 0x2EE934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE934u;
label_2ee934:
    // 0x2ee934: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2ee934u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee938: 0x1a20000a  blez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2EE938u;
    {
        const bool branch_taken_0x2ee938 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2EE93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE938u;
        // 0x2ee93c: 0x26870014  addiu       $a3, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee938) {
            ctx->pc = 0x2EE964u;
            goto label_2ee964;
        }
    }
    ctx->pc = 0x2EE940u;
    // 0x2ee940: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ee940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee944: 0x0  nop
    ctx->pc = 0x2ee944u;
    // NOP
label_2ee948:
    // 0x2ee948: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2ee948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2ee94c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2ee94cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2ee950: 0x0  nop
    ctx->pc = 0x2ee950u;
    // NOP
    // 0x2ee954: 0x0  nop
    ctx->pc = 0x2ee954u;
    // NOP
    // 0x2ee958: 0x0  nop
    ctx->pc = 0x2ee958u;
    // NOP
    // 0x2ee95c: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EE95Cu;
    {
        const bool branch_taken_0x2ee95c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE95Cu;
        // 0x2ee960: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee95c) {
            ctx->pc = 0x2EE948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee948;
        }
    }
    ctx->pc = 0x2EE964u;
label_2ee964:
    // 0x2ee964: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2ee964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2ee968: 0x26640014  addiu       $a0, $s3, 0x14
    ctx->pc = 0x2ee968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x2ee96c: 0x3210001f  andi        $s0, $s0, 0x1F
    ctx->pc = 0x2ee96cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x2ee970: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ee970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ee974: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EE974u;
    {
        const bool branch_taken_0x2ee974 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE974u;
        // 0x2ee978: 0x823021  addu        $a2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee974) {
            ctx->pc = 0x2EE9C0u;
            goto label_2ee9c0;
        }
    }
    ctx->pc = 0x2EE97Cu;
    // 0x2ee97c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2ee97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ee980: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ee980u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee984: 0x502823  subu        $a1, $v0, $s0
    ctx->pc = 0x2ee984u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2ee988:
    // 0x2ee988: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ee988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ee98c: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x2ee98cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x2ee990: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ee990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ee994: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2ee994u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2ee998: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2ee998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2ee99c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ee99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ee9a0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2ee9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2ee9a4: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x2ee9a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2ee9a8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2EE9A8u;
    {
        const bool branch_taken_0x2ee9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9A8u;
        // 0x2ee9ac: 0xa31806  srlv        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee9a8) {
            ctx->pc = 0x2EE988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee988;
        }
    }
    ctx->pc = 0x2EE9B0u;
    // 0x2ee9b0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2EE9B0u;
    {
        const bool branch_taken_0x2ee9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9B0u;
        // 0x2ee9b4: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee9b0) {
            ctx->pc = 0x2EE9DCu;
            goto label_2ee9dc;
        }
    }
    ctx->pc = 0x2EE9B8u;
    // 0x2ee9b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE9B8u;
    {
        const bool branch_taken_0x2ee9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9B8u;
        // 0x2ee9bc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee9b8) {
            ctx->pc = 0x2EE9DCu;
            goto label_2ee9dc;
        }
    }
    ctx->pc = 0x2EE9C0u;
label_2ee9c0:
    // 0x2ee9c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ee9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ee9c4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2ee9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2ee9c8: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x2ee9c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2ee9cc: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2ee9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2ee9d0: 0x0  nop
    ctx->pc = 0x2ee9d0u;
    // NOP
    // 0x2ee9d4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EE9D4u;
    {
        const bool branch_taken_0x2ee9d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9D4u;
        // 0x2ee9d8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee9d4) {
            ctx->pc = 0x2EE9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee9c0;
        }
    }
    ctx->pc = 0x2EE9DCu;
label_2ee9dc:
    // 0x2ee9dc: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x2ee9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2ee9e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ee9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee9e4: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x2ee9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x2ee9e8: 0xc0bb874  jal         func_2EE1D0
    ctx->pc = 0x2EE9E8u;
    SET_GPR_U32(ctx, 31, 0x2EE9F0u);
    ctx->pc = 0x2EE9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE9E8u;
    // 0x2ee9ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE1D0u, 0x2EE9E8u, 0x2EE9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE9F0u;
label_2ee9f0:
    // 0x2ee9f0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2ee9f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee9f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ee9f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee9f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ee9f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ee9fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ee9fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eea00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2eea00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2eea04: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2eea04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eea08: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2eea08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2eea0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2eea0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eea10: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA10u;
        // 0x2eea14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEA18u;
}

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

// Function: sub_0032B020
// Address: 0x32b020 - 0x32b250
void sub_0032B020_0x32b020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032B020_0x32b020");
#endif

    switch (ctx->pc) {
        case 0x32b054u: goto label_32b054;
        case 0x32b070u: goto label_32b070;
        case 0x32b078u: goto label_32b078;
        case 0x32b090u: goto label_32b090;
        case 0x32b0a8u: goto label_32b0a8;
        case 0x32b0c8u: goto label_32b0c8;
        case 0x32b0e0u: goto label_32b0e0;
        case 0x32b134u: goto label_32b134;
        case 0x32b150u: goto label_32b150;
        case 0x32b168u: goto label_32b168;
        case 0x32b180u: goto label_32b180;
        case 0x32b18cu: goto label_32b18c;
        case 0x32b198u: goto label_32b198;
        case 0x32b1acu: goto label_32b1ac;
        case 0x32b1b8u: goto label_32b1b8;
        case 0x32b1d0u: goto label_32b1d0;
        case 0x32b1e0u: goto label_32b1e0;
        case 0x32b1f0u: goto label_32b1f0;
        case 0x32b200u: goto label_32b200;
        case 0x32b210u: goto label_32b210;
        case 0x32b220u: goto label_32b220;
        default: break;
    }

    ctx->pc = 0x32b020u;

    // 0x32b020: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x32b020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x32b024: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x32b024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x32b028: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x32b028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x32b02c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32b02cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b030: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x32b030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x32b034: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x32b034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x32b038: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x32b038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x32b03c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x32b03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x32b040: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x32b040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x32b044: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x32b044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x32b048: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32b048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32b04c: 0xc1116a2  jal         func_445A88
    ctx->pc = 0x32B04Cu;
    SET_GPR_U32(ctx, 31, 0x32B054u);
    ctx->pc = 0x32B050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B04Cu;
    // 0x32b050: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445A88u, 0x32B04Cu, 0x32B054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B054u;
label_32b054:
    // 0x32b054: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x32b054u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b058: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x32b058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x32b05c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x32b05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b060: 0xaee2002c  sw          $v0, 0x2C($s7)
    ctx->pc = 0x32b060u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 44), GPR_U32(ctx, 2));
    // 0x32b064: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x32b064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x32b068: 0xc112074  jal         func_4481D0
    ctx->pc = 0x32B068u;
    SET_GPR_U32(ctx, 31, 0x32B070u);
    ctx->pc = 0x32B06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B068u;
    // 0x32b06c: 0xaee30030  sw          $v1, 0x30($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 48), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4481D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4481D0u, 0x32B068u, 0x32B070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B070u;
label_32b070:
    // 0x32b070: 0xc0e94f0  jal         func_3A53C0
    ctx->pc = 0x32B070u;
    SET_GPR_U32(ctx, 31, 0x32B078u);
    ctx->pc = 0x32B074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B070u;
    // 0x32b074: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53C0u, 0x32B070u, 0x32B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B078u;
label_32b078:
    // 0x32b078: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x32b078u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b07c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x32b07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b080: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32b080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b084: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x32b084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b088: 0xc1120d8  jal         func_448360
    ctx->pc = 0x32B088u;
    SET_GPR_U32(ctx, 31, 0x32B090u);
    ctx->pc = 0x32B08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B088u;
    // 0x32b08c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x448360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x448360u, 0x32B088u, 0x32B090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B090u;
label_32b090:
    // 0x32b090: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x32b090u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b094: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x32b094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x32b098: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x32b098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b09c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32b09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b0a0: 0xc1125d8  jal         func_449760
    ctx->pc = 0x32B0A0u;
    SET_GPR_U32(ctx, 31, 0x32B0A8u);
    ctx->pc = 0x32B0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B0A0u;
    // 0x32b0a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449760u, 0x32B0A0u, 0x32B0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B0A8u;
label_32b0a8:
    // 0x32b0a8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x32b0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x32b0ac: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x32b0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x32b0b0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x32B0B0u;
    {
        const bool branch_taken_0x32b0b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B0B0u;
        // 0x32b0b4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b0b0) {
            ctx->pc = 0x32B0F8u;
            goto label_32b0f8;
        }
    }
    ctx->pc = 0x32B0B8u;
    // 0x32b0b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32b0b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b0bc: 0x2651000c  addiu       $s1, $s2, 0xC
    ctx->pc = 0x32b0bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x32b0c0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x32b0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32b0c4: 0x0  nop
    ctx->pc = 0x32b0c4u;
    // NOP
label_32b0c8:
    // 0x32b0c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32b0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b0cc: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x32b0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32b0d0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x32b0d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x32b0d4: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x32b0d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x32b0d8: 0xc0e9450  jal         func_3A5140
    ctx->pc = 0x32B0D8u;
    SET_GPR_U32(ctx, 31, 0x32B0E0u);
    ctx->pc = 0x32B0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B0D8u;
    // 0x32b0dc: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5140u, 0x32B0D8u, 0x32B0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B0E0u;
label_32b0e0:
    // 0x32b0e0: 0x2e83000a  sltiu       $v1, $s4, 0xA
    ctx->pc = 0x32b0e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x32b0e4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32B0E4u;
    {
        const bool branch_taken_0x32b0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b0e4) {
            ctx->pc = 0x32B0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B0E4u;
            // 0x32b0e8: 0x8e430058  lw          $v1, 0x58($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B0FCu;
            goto label_32b0fc;
        }
    }
    ctx->pc = 0x32B0ECu;
    // 0x32b0ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32b0f0: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x32B0F0u;
    {
        const bool branch_taken_0x32b0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32b0f0) {
            ctx->pc = 0x32B0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B0F0u;
            // 0x32b0f4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B0C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32b0c8;
        }
    }
    ctx->pc = 0x32B0F8u;
label_32b0f8:
    // 0x32b0f8: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x32b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_32b0fc:
    // 0x32b0fc: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x32b0fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x32b100: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x32B100u;
    {
        const bool branch_taken_0x32b100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B100u;
        // 0x32b104: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b100) {
            ctx->pc = 0x32B170u;
            goto label_32b170;
        }
    }
    ctx->pc = 0x32B108u;
    // 0x32b108: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b10c: 0x2442b810  addiu       $v0, $v0, -0x47F0
    ctx->pc = 0x32b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948880));
    // 0x32b110: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32b110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32b114: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x32b114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32b118: 0x800008  jr          $a0
    ctx->pc = 0x32B118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x32B120u: goto label_32b120;
            case 0x32B13Cu: goto label_32b13c;
            case 0x32B158u: goto label_32b158;
            case 0x32B170u: goto label_32b170;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B118u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x32B120u;
label_32b120:
    // 0x32b120: 0x8e45005c  lw          $a1, 0x5C($s2)
    ctx->pc = 0x32b120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x32b124: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32b124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b128: 0x8e460060  lw          $a2, 0x60($s2)
    ctx->pc = 0x32b128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x32b12c: 0xc0e9540  jal         func_3A5500
    ctx->pc = 0x32B12Cu;
    SET_GPR_U32(ctx, 31, 0x32B134u);
    ctx->pc = 0x32B130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B12Cu;
    // 0x32b130: 0x8e470064  lw          $a3, 0x64($s2) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5500u, 0x32B12Cu, 0x32B134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B134u;
label_32b134:
    // 0x32b134: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x32B134u;
    {
        const bool branch_taken_0x32b134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b134) {
            ctx->pc = 0x32B190u;
            goto label_32b190;
        }
    }
    ctx->pc = 0x32B13Cu;
label_32b13c:
    // 0x32b13c: 0x8e45005c  lw          $a1, 0x5C($s2)
    ctx->pc = 0x32b13cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x32b140: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32b140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b144: 0x8e460060  lw          $a2, 0x60($s2)
    ctx->pc = 0x32b144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x32b148: 0xc0e94f4  jal         func_3A53D0
    ctx->pc = 0x32B148u;
    SET_GPR_U32(ctx, 31, 0x32B150u);
    ctx->pc = 0x32B14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B148u;
    // 0x32b14c: 0x8e470064  lw          $a3, 0x64($s2) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53D0u, 0x32B148u, 0x32B150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B150u;
label_32b150:
    // 0x32b150: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x32B150u;
    {
        const bool branch_taken_0x32b150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b150) {
            ctx->pc = 0x32B190u;
            goto label_32b190;
        }
    }
    ctx->pc = 0x32B158u;
label_32b158:
    // 0x32b158: 0x8e45005c  lw          $a1, 0x5C($s2)
    ctx->pc = 0x32b158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x32b15c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32b15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b160: 0xc0e958a  jal         func_3A5628
    ctx->pc = 0x32B160u;
    SET_GPR_U32(ctx, 31, 0x32B168u);
    ctx->pc = 0x32B164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B160u;
    // 0x32b164: 0x8e460060  lw          $a2, 0x60($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5628u, 0x32B160u, 0x32B168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B168u;
label_32b168:
    // 0x32b168: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32B168u;
    {
        const bool branch_taken_0x32b168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b168) {
            ctx->pc = 0x32B190u;
            goto label_32b190;
        }
    }
    ctx->pc = 0x32B170u;
label_32b170:
    // 0x32b170: 0x24020131  addiu       $v0, $zero, 0x131
    ctx->pc = 0x32b170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    // 0x32b174: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32b174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b178: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x32B178u;
    SET_GPR_U32(ctx, 31, 0x32B180u);
    ctx->pc = 0x32B17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B178u;
    // 0x32b17c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x32B178u, 0x32B180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B180u;
label_32b180:
    // 0x32b180: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32b180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b184: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x32B184u;
    SET_GPR_U32(ctx, 31, 0x32B18Cu);
    ctx->pc = 0x32B188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B184u;
    // 0x32b188: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x32B184u, 0x32B18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B18Cu;
label_32b18c:
    // 0x32b18c: 0x0  nop
    ctx->pc = 0x32b18cu;
    // NOP
label_32b190:
    // 0x32b190: 0xc111dea  jal         func_4477A8
    ctx->pc = 0x32B190u;
    SET_GPR_U32(ctx, 31, 0x32B198u);
    ctx->pc = 0x32B194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B190u;
    // 0x32b194: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4477A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4477A8u, 0x32B190u, 0x32B198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B198u;
label_32b198:
    // 0x32b198: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x32b198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x32b19c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32b19cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b1a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32b1a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b1a4: 0xc1125d8  jal         func_449760
    ctx->pc = 0x32B1A4u;
    SET_GPR_U32(ctx, 31, 0x32B1ACu);
    ctx->pc = 0x32B1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B1A4u;
    // 0x32b1a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449760u, 0x32B1A4u, 0x32B1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B1ACu;
label_32b1ac:
    // 0x32b1ac: 0x8e450068  lw          $a1, 0x68($s2)
    ctx->pc = 0x32b1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x32b1b0: 0xc0e95d2  jal         func_3A5748
    ctx->pc = 0x32B1B0u;
    SET_GPR_U32(ctx, 31, 0x32B1B8u);
    ctx->pc = 0x32B1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B1B0u;
    // 0x32b1b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5748u, 0x32B1B0u, 0x32B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B1B8u;
label_32b1b8:
    // 0x32b1b8: 0x8e43006c  lw          $v1, 0x6C($s2)
    ctx->pc = 0x32b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x32b1bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x32b1bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b1c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32b1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b1c4: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x32b1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x32b1c8: 0xc0e95de  jal         func_3A5778
    ctx->pc = 0x32B1C8u;
    SET_GPR_U32(ctx, 31, 0x32B1D0u);
    ctx->pc = 0x32B1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B1C8u;
    // 0x32b1cc: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5778u, 0x32B1C8u, 0x32B1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B1D0u;
label_32b1d0:
    // 0x32b1d0: 0x8e460070  lw          $a2, 0x70($s2)
    ctx->pc = 0x32b1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x32b1d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32b1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b1d8: 0xc0e95fe  jal         func_3A57F8
    ctx->pc = 0x32B1D8u;
    SET_GPR_U32(ctx, 31, 0x32B1E0u);
    ctx->pc = 0x32B1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B1D8u;
    // 0x32b1dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57F8u, 0x32B1D8u, 0x32B1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B1E0u;
label_32b1e0:
    // 0x32b1e0: 0x8e460074  lw          $a2, 0x74($s2)
    ctx->pc = 0x32b1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x32b1e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b1e8: 0xc0e95fe  jal         func_3A57F8
    ctx->pc = 0x32B1E8u;
    SET_GPR_U32(ctx, 31, 0x32B1F0u);
    ctx->pc = 0x32B1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B1E8u;
    // 0x32b1ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57F8u, 0x32B1E8u, 0x32B1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B1F0u;
label_32b1f0:
    // 0x32b1f0: 0x8e460078  lw          $a2, 0x78($s2)
    ctx->pc = 0x32b1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x32b1f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b1f8: 0xc0e95fe  jal         func_3A57F8
    ctx->pc = 0x32B1F8u;
    SET_GPR_U32(ctx, 31, 0x32B200u);
    ctx->pc = 0x32B1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B1F8u;
    // 0x32b1fc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57F8u, 0x32B1F8u, 0x32B200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B200u;
label_32b200:
    // 0x32b200: 0x8e46007c  lw          $a2, 0x7C($s2)
    ctx->pc = 0x32b200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x32b204: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b208: 0xc0e95fe  jal         func_3A57F8
    ctx->pc = 0x32B208u;
    SET_GPR_U32(ctx, 31, 0x32B210u);
    ctx->pc = 0x32B20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B208u;
    // 0x32b20c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57F8u, 0x32B208u, 0x32B210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B210u;
label_32b210:
    // 0x32b210: 0x8e460080  lw          $a2, 0x80($s2)
    ctx->pc = 0x32b210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x32b214: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b218: 0xc0e95fe  jal         func_3A57F8
    ctx->pc = 0x32B218u;
    SET_GPR_U32(ctx, 31, 0x32B220u);
    ctx->pc = 0x32B21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B218u;
    // 0x32b21c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57F8u, 0x32B218u, 0x32B220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B220u;
label_32b220:
    // 0x32b220: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x32b220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b224: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x32b224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x32b228: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x32b228u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32b22c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x32b22cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32b230: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x32b230u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32b234: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x32b234u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32b238: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x32b238u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32b23c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x32b23cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32b240: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x32b240u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32b244: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32b244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32b248: 0x3e00008  jr          $ra
    ctx->pc = 0x32B248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B248u;
        // 0x32b24c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B250u;
}

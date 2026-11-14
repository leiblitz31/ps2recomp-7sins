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

// Function: sub_002E88A0
// Address: 0x2e88a0 - 0x2e8a40
void sub_002E88A0_0x2e88a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E88A0_0x2e88a0");
#endif

    switch (ctx->pc) {
        case 0x2e88c8u: goto label_2e88c8;
        case 0x2e88dcu: goto label_2e88dc;
        case 0x2e88e8u: goto label_2e88e8;
        case 0x2e88f8u: goto label_2e88f8;
        case 0x2e8908u: goto label_2e8908;
        case 0x2e895cu: goto label_2e895c;
        case 0x2e896cu: goto label_2e896c;
        case 0x2e897cu: goto label_2e897c;
        case 0x2e8a04u: goto label_2e8a04;
        case 0x2e8a14u: goto label_2e8a14;
        default: break;
    }

    ctx->pc = 0x2e88a0u;

    // 0x2e88a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e88a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e88a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e88a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e88a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e88a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e88ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e88acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e88b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e88b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e88b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e88b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e88b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e88b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e88bc: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x2e88bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2e88c0: 0xc0ba72c  jal         func_2E9CB0
    ctx->pc = 0x2E88C0u;
    SET_GPR_U32(ctx, 31, 0x2E88C8u);
    ctx->pc = 0x2E88C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E88C0u;
    // 0x2e88c4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9CB0u, 0x2E88C0u, 0x2E88C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E88C8u;
label_2e88c8:
    // 0x2e88c8: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x2e88c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2e88cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E88CCu;
    {
        const bool branch_taken_0x2e88cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E88D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88CCu;
        // 0x2e88d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e88cc) {
            ctx->pc = 0x2E88E0u;
            goto label_2e88e0;
        }
    }
    ctx->pc = 0x2E88D4u;
    // 0x2e88d4: 0xc0ba1a0  jal         func_2E8680
    ctx->pc = 0x2E88D4u;
    SET_GPR_U32(ctx, 31, 0x2E88DCu);
    ctx->pc = 0x2E8680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8680u, 0x2E88D4u, 0x2E88DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E88DCu;
label_2e88dc:
    // 0x2e88dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e88dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e88e0:
    // 0x2e88e0: 0xc0ba7fc  jal         func_2E9FF0
    ctx->pc = 0x2E88E0u;
    SET_GPR_U32(ctx, 31, 0x2E88E8u);
    ctx->pc = 0x2E88E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E88E0u;
    // 0x2e88e4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9FF0u, 0x2E88E0u, 0x2E88E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E88E8u;
label_2e88e8:
    // 0x2e88e8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e88e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e88ec: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2E88ECu;
    {
        const bool branch_taken_0x2e88ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E88F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88ECu;
        // 0x2e88f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e88ec) {
            ctx->pc = 0x2E8A0Cu;
            goto label_2e8a0c;
        }
    }
    ctx->pc = 0x2E88F4u;
    // 0x2e88f4: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x2e88f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_2e88f8:
    // 0x2e88f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e88f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e88fc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2e88fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e8900: 0xc0ba290  jal         func_2E8A40
    ctx->pc = 0x2E8900u;
    SET_GPR_U32(ctx, 31, 0x2E8908u);
    ctx->pc = 0x2E8904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8900u;
    // 0x2e8904: 0x27a60068  addiu       $a2, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8A40u, 0x2E8900u, 0x2E8908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8908u;
label_2e8908:
    // 0x2e8908: 0x90460002  lbu         $a2, 0x2($v0)
    ctx->pc = 0x2e8908u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2e890c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e890cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8910: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x2e8910u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2e8914: 0x26240005  addiu       $a0, $s1, 0x5
    ctx->pc = 0x2e8914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x2e8918: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x2e8918u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2e891c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x2e891cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x2e8920: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2e8920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2e8924: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x2e8924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e8928: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2e8928u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2e892c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2e892cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2e8930: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2e8930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2e8934: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e8934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e8938: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8938u;
    {
        const bool branch_taken_0x2e8938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8938u;
        // 0x2e893c: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8938) {
            ctx->pc = 0x2E8948u;
            goto label_2e8948;
        }
    }
    ctx->pc = 0x2E8940u;
    // 0x2e8940: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8940u;
    {
        const bool branch_taken_0x2e8940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8940u;
        // 0x2e8944: 0x27b00074  addiu       $s0, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8940) {
            ctx->pc = 0x2E8950u;
            goto label_2e8950;
        }
    }
    ctx->pc = 0x2E8948u;
label_2e8948:
    // 0x2e8948: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e8948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e894c: 0x27b00074  addiu       $s0, $sp, 0x74
    ctx->pc = 0x2e894cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_2e8950:
    // 0x2e8950: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x2e8950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x2e8954: 0xc0ba1c8  jal         func_2E8720
    ctx->pc = 0x2E8954u;
    SET_GPR_U32(ctx, 31, 0x2E895Cu);
    ctx->pc = 0x2E8958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8954u;
    // 0x2e8958: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2E8954u, 0x2E895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E895Cu;
label_2e895c:
    // 0x2e895c: 0x27b30078  addiu       $s3, $sp, 0x78
    ctx->pc = 0x2e895cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2e8960: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e8960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8964: 0xc0ba1f0  jal         func_2E87C0
    ctx->pc = 0x2E8964u;
    SET_GPR_U32(ctx, 31, 0x2E896Cu);
    ctx->pc = 0x2E8968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8964u;
    // 0x2e8968: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E8964u, 0x2E896Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E896Cu;
label_2e896c:
    // 0x2e896c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e896cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8970: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e8970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8974: 0xc0ba448  jal         func_2E9120
    ctx->pc = 0x2E8974u;
    SET_GPR_U32(ctx, 31, 0x2E897Cu);
    ctx->pc = 0x2E8978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8974u;
    // 0x2e8978: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9120u, 0x2E8974u, 0x2E897Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E897Cu;
label_2e897c:
    // 0x2e897c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2e897cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e8980: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x2e8980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2e8984: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x2e8984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2e8988: 0xdfa60068  ld          $a2, 0x68($sp)
    ctx->pc = 0x2e8988u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2e898c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2e898cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2e8990: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e8990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e8994: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2e8994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2e8998: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2e8998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e899c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2e899cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2e89a0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2e89a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2e89a4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2e89a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2e89a8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2e89a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e89ac: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x2e89acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e89b0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E89B0u;
    {
        const bool branch_taken_0x2e89b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E89B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E89B0u;
        // 0x2e89b4: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e89b0) {
            ctx->pc = 0x2E89D8u;
            goto label_2e89d8;
        }
    }
    ctx->pc = 0x2E89B8u;
    // 0x2e89b8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2e89b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2e89bc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e89bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2e89c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e89c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e89c4: 0x46102d  daddu       $v0, $v0, $a2
    ctx->pc = 0x2e89c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 6));
    // 0x2e89c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e89c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e89cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e89ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e89d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E89D0u;
    {
        const bool branch_taken_0x2e89d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E89D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E89D0u;
        // 0x2e89d4: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e89d0) {
            ctx->pc = 0x2E89ECu;
            goto label_2e89ec;
        }
    }
    ctx->pc = 0x2E89D8u;
label_2e89d8:
    // 0x2e89d8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e89d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2e89dc: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x2e89dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2e89e0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e89e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e89e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e89e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e89e8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2e89e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_2e89ec:
    // 0x2e89ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e89ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e89f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e89f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e89f4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2e89f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e89f8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2e89f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e89fc: 0xc0ba7a0  jal         func_2E9E80
    ctx->pc = 0x2E89FCu;
    SET_GPR_U32(ctx, 31, 0x2E8A04u);
    ctx->pc = 0x2E8A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E89FCu;
    // 0x2e8a00: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9E80u, 0x2E89FCu, 0x2E8A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8A04u;
label_2e8a04:
    // 0x2e8a04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8A04u;
    {
        const bool branch_taken_0x2e8a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A04u;
        // 0x2e8a08: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a04) {
            ctx->pc = 0x2E8A1Cu;
            goto label_2e8a1c;
        }
    }
    ctx->pc = 0x2E8A0Cu;
label_2e8a0c:
    // 0x2e8a0c: 0xc0ba3ec  jal         func_2E8FB0
    ctx->pc = 0x2E8A0Cu;
    SET_GPR_U32(ctx, 31, 0x2E8A14u);
    ctx->pc = 0x2E8A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8A0Cu;
    // 0x2e8a10: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8FB0u, 0x2E8A0Cu, 0x2E8A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8A14u;
label_2e8a14:
    // 0x2e8a14: 0x1000ffb8  b           . + 4 + (-0x48 << 2)
    ctx->pc = 0x2E8A14u;
    {
        const bool branch_taken_0x2e8a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A14u;
        // 0x2e8a18: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a14) {
            ctx->pc = 0x2E88F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e88f8;
        }
    }
    ctx->pc = 0x2E8A1Cu;
label_2e8a1c:
    // 0x2e8a1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e8a1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e8a20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e8a20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8a24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e8a24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8a28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e8a28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A2Cu;
        // 0x2e8a30: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8A34u;
    // 0x2e8a34: 0x0  nop
    ctx->pc = 0x2e8a34u;
    // NOP
    // 0x2e8a38: 0x0  nop
    ctx->pc = 0x2e8a38u;
    // NOP
    // 0x2e8a3c: 0x0  nop
    ctx->pc = 0x2e8a3cu;
    // NOP
    ctx->pc = 0x2e8a40u;
}

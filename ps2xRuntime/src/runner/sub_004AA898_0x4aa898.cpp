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

// Function: sub_004AA898
// Address: 0x4aa898 - 0x4aaa18
void sub_004AA898_0x4aa898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AA898_0x4aa898");
#endif

    switch (ctx->pc) {
        case 0x4aa8f0u: goto label_4aa8f0;
        case 0x4aa904u: goto label_4aa904;
        case 0x4aa918u: goto label_4aa918;
        case 0x4aa920u: goto label_4aa920;
        case 0x4aa980u: goto label_4aa980;
        case 0x4aa988u: goto label_4aa988;
        case 0x4aa9c4u: goto label_4aa9c4;
        default: break;
    }

    ctx->pc = 0x4aa898u;

    // 0x4aa898: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4aa898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4aa89c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x4aa89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x4aa8a0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4aa8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x4aa8a4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x4aa8a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4aa8a8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4aa8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x4aa8ac: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x4aa8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa8b0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4aa8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x4aa8b4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4aa8b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa8b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4aa8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x4aa8bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4aa8bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa8c0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x4aa8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x4aa8c4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4aa8c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa8c8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x4aa8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x4aa8cc: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x4aa8ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa8d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aa8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aa8d4: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4AA8D4u;
    {
        const bool branch_taken_0x4aa8d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AA8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA8D4u;
        // 0x4aa8d8: 0xc6a00b  movn        $s4, $a2, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa8d4) {
            ctx->pc = 0x4AA928u;
            goto label_4aa928;
        }
    }
    ctx->pc = 0x4AA8DCu;
    // 0x4aa8dc: 0x8f84b898  lw          $a0, -0x4768($gp)
    ctx->pc = 0x4aa8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949016)));
    // 0x4aa8e0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AA8E0u;
    {
        const bool branch_taken_0x4aa8e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA8E0u;
        // 0x4aa8e4: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa8e0) {
            ctx->pc = 0x4AA8F8u;
            goto label_4aa8f8;
        }
    }
    ctx->pc = 0x4AA8E8u;
    // 0x4aa8e8: 0xc12a936  jal         func_4AA4D8
    ctx->pc = 0x4AA8E8u;
    SET_GPR_U32(ctx, 31, 0x4AA8F0u);
    ctx->pc = 0x4AA8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA8E8u;
    // 0x4aa8ec: 0x34a50800  ori         $a1, $a1, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA4D8u, 0x4AA8E8u, 0x4AA8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA8F0u;
label_4aa8f0:
    // 0x4aa8f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4AA8F0u;
    {
        const bool branch_taken_0x4aa8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA8F0u;
        // 0x4aa8f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa8f0) {
            ctx->pc = 0x4AA908u;
            goto label_4aa908;
        }
    }
    ctx->pc = 0x4AA8F8u;
label_4aa8f8:
    // 0x4aa8f8: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x4aa8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x4aa8fc: 0xc127ca4  jal         func_49F290
    ctx->pc = 0x4AA8FCu;
    SET_GPR_U32(ctx, 31, 0x4AA904u);
    ctx->pc = 0x4AA900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA8FCu;
    // 0x4aa900: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x4AA8FCu, 0x4AA904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA904u;
label_4aa904:
    // 0x4aa904: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4aa904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4aa908:
    // 0x4aa908: 0x12000039  beqz        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x4AA908u;
    {
        const bool branch_taken_0x4aa908 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA908u;
        // 0x4aa90c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa908) {
            ctx->pc = 0x4AA9F0u;
            goto label_4aa9f0;
        }
    }
    ctx->pc = 0x4AA910u;
    // 0x4aa910: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4AA910u;
    {
        const bool branch_taken_0x4aa910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA910u;
        // 0x4aa914: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa910) {
            ctx->pc = 0x4AA92Cu;
            goto label_4aa92c;
        }
    }
    ctx->pc = 0x4AA918u;
label_4aa918:
    // 0x4aa918: 0xc12ab04  jal         func_4AAC10
    ctx->pc = 0x4AA918u;
    SET_GPR_U32(ctx, 31, 0x4AA920u);
    ctx->pc = 0x4AA91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA918u;
    // 0x4aa91c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAC10u, 0x4AA918u, 0x4AA920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA920u;
label_4aa920:
    // 0x4aa920: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x4AA920u;
    {
        const bool branch_taken_0x4aa920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA920u;
        // 0x4aa924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa920) {
            ctx->pc = 0x4AA9F0u;
            goto label_4aa9f0;
        }
    }
    ctx->pc = 0x4AA928u;
label_4aa928:
    // 0x4aa928: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4aa928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4aa92c:
    // 0x4aa92c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x4aa92cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x4aa930: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x4aa930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x4aa934: 0x142023  negu        $a0, $s4
    ctx->pc = 0x4aa934u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x4aa938: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x4aa938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x4aa93c: 0x26630007  addiu       $v1, $s3, 0x7
    ctx->pc = 0x4aa93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
    // 0x4aa940: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x4aa940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4aa944: 0x390c2  srl         $s2, $v1, 3
    ctx->pc = 0x4aa944u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x4aa948: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x4aa948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4aa94c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4aa94cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4aa950: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4aa950u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa954: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x4aa954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x4aa958: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x4aa958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x4aa95c: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x4aa95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x4aa960: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x4aa960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x4aa964: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x4AA964u;
    {
        const bool branch_taken_0x4aa964 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA964u;
        // 0x4aa968: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa964) {
            ctx->pc = 0x4AA9CCu;
            goto label_4aa9cc;
        }
    }
    ctx->pc = 0x4AA96Cu;
    // 0x4aa96c: 0x2641018  mult        $v0, $s3, $a0
    ctx->pc = 0x4aa96cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4aa970: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x4aa970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x4aa974: 0x2429821  addu        $s3, $s2, $v0
    ctx->pc = 0x4aa974u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4aa978: 0x2742021  addu        $a0, $s3, $s4
    ctx->pc = 0x4aa978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x4aa97c: 0x0  nop
    ctx->pc = 0x4aa97cu;
    // NOP
label_4aa980:
    // 0x4aa980: 0xc127ca4  jal         func_49F290
    ctx->pc = 0x4AA980u;
    SET_GPR_U32(ctx, 31, 0x4AA988u);
    ctx->pc = 0x4AA984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA980u;
    // 0x4aa984: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x4AA980u, 0x4AA988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA988u;
label_4aa988:
    // 0x4aa988: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4aa988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa98c: 0x10e0ffe2  beqz        $a3, . + 4 + (-0x1E << 2)
    ctx->pc = 0x4AA98Cu;
    {
        const bool branch_taken_0x4aa98c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA98Cu;
        // 0x4aa990: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa98c) {
            ctx->pc = 0x4AA918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aa918;
        }
    }
    ctx->pc = 0x4AA994u;
    // 0x4aa994: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x4aa994u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x4aa998: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x4aa998u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x4aa99c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4aa99cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa9a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa9a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa9a4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4aa9a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x4aa9a8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4aa9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4aa9ac: 0xacf60004  sw          $s6, 0x4($a3)
    ctx->pc = 0x4aa9acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 22));
    // 0x4aa9b0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4aa9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4aa9b4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4aa9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4aa9b8: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x4aa9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x4aa9bc: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x4AA9BCu;
    SET_GPR_U32(ctx, 31, 0x4AA9C4u);
    ctx->pc = 0x4AA9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA9BCu;
    // 0x4aa9c0: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4AA9BCu, 0x4AA9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA9C4u;
label_4aa9c4:
    // 0x4aa9c4: 0x1620ffee  bnez        $s1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x4AA9C4u;
    {
        const bool branch_taken_0x4aa9c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AA9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA9C4u;
        // 0x4aa9c8: 0x2742021  addu        $a0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa9c4) {
            ctx->pc = 0x4AA980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aa980;
        }
    }
    ctx->pc = 0x4AA9CCu;
label_4aa9cc:
    // 0x4aa9cc: 0x8f83c210  lw          $v1, -0x3DF0($gp)
    ctx->pc = 0x4aa9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951440)));
    // 0x4aa9d0: 0x2782c210  addiu       $v0, $gp, -0x3DF0
    ctx->pc = 0x4aa9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951440));
    // 0x4aa9d4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x4aa9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x4aa9d8: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x4aa9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x4aa9dc: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x4aa9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x4aa9e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4aa9e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa9e4: 0x8f83c210  lw          $v1, -0x3DF0($gp)
    ctx->pc = 0x4aa9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951440)));
    // 0x4aa9e8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x4aa9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x4aa9ec: 0xaf84c210  sw          $a0, -0x3DF0($gp)
    ctx->pc = 0x4aa9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951440), GPR_U32(ctx, 4));
label_4aa9f0:
    // 0x4aa9f0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4aa9f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4aa9f4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4aa9f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4aa9f8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4aa9f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4aa9fc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4aa9fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4aaa00: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4aaa00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4aaa04: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x4aaa04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aaa08: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x4aaa08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aaa0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aaa0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aaa10: 0x3e00008  jr          $ra
    ctx->pc = 0x4AAA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AAA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAA10u;
        // 0x4aaa14: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AAA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AAA18u;
}

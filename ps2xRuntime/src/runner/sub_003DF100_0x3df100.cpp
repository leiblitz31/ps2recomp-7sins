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

// Function: sub_003DF100
// Address: 0x3df100 - 0x3df200
void sub_003DF100_0x3df100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF100_0x3df100");
#endif

    switch (ctx->pc) {
        case 0x3df100u: goto label_3df100;
        case 0x3df104u: goto label_3df104;
        case 0x3df108u: goto label_3df108;
        case 0x3df10cu: goto label_3df10c;
        case 0x3df110u: goto label_3df110;
        case 0x3df114u: goto label_3df114;
        case 0x3df118u: goto label_3df118;
        case 0x3df11cu: goto label_3df11c;
        case 0x3df120u: goto label_3df120;
        case 0x3df124u: goto label_3df124;
        case 0x3df128u: goto label_3df128;
        case 0x3df12cu: goto label_3df12c;
        case 0x3df130u: goto label_3df130;
        case 0x3df134u: goto label_3df134;
        case 0x3df138u: goto label_3df138;
        case 0x3df13cu: goto label_3df13c;
        case 0x3df140u: goto label_3df140;
        case 0x3df144u: goto label_3df144;
        case 0x3df148u: goto label_3df148;
        case 0x3df14cu: goto label_3df14c;
        case 0x3df150u: goto label_3df150;
        case 0x3df154u: goto label_3df154;
        case 0x3df158u: goto label_3df158;
        case 0x3df15cu: goto label_3df15c;
        case 0x3df160u: goto label_3df160;
        case 0x3df164u: goto label_3df164;
        case 0x3df168u: goto label_3df168;
        case 0x3df16cu: goto label_3df16c;
        case 0x3df170u: goto label_3df170;
        case 0x3df174u: goto label_3df174;
        case 0x3df178u: goto label_3df178;
        case 0x3df17cu: goto label_3df17c;
        case 0x3df180u: goto label_3df180;
        case 0x3df184u: goto label_3df184;
        case 0x3df188u: goto label_3df188;
        case 0x3df18cu: goto label_3df18c;
        case 0x3df190u: goto label_3df190;
        case 0x3df194u: goto label_3df194;
        case 0x3df198u: goto label_3df198;
        case 0x3df19cu: goto label_3df19c;
        case 0x3df1a0u: goto label_3df1a0;
        case 0x3df1a4u: goto label_3df1a4;
        case 0x3df1a8u: goto label_3df1a8;
        case 0x3df1acu: goto label_3df1ac;
        case 0x3df1b0u: goto label_3df1b0;
        case 0x3df1b4u: goto label_3df1b4;
        case 0x3df1b8u: goto label_3df1b8;
        case 0x3df1bcu: goto label_3df1bc;
        case 0x3df1c0u: goto label_3df1c0;
        case 0x3df1c4u: goto label_3df1c4;
        case 0x3df1c8u: goto label_3df1c8;
        case 0x3df1ccu: goto label_3df1cc;
        case 0x3df1d0u: goto label_3df1d0;
        case 0x3df1d4u: goto label_3df1d4;
        case 0x3df1d8u: goto label_3df1d8;
        case 0x3df1dcu: goto label_3df1dc;
        case 0x3df1e0u: goto label_3df1e0;
        case 0x3df1e4u: goto label_3df1e4;
        case 0x3df1e8u: goto label_3df1e8;
        case 0x3df1ecu: goto label_3df1ec;
        case 0x3df1f0u: goto label_3df1f0;
        case 0x3df1f4u: goto label_3df1f4;
        case 0x3df1f8u: goto label_3df1f8;
        case 0x3df1fcu: goto label_3df1fc;
        default: break;
    }

    ctx->pc = 0x3df100u;

label_3df100:
    // 0x3df100: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3df100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3df104:
    // 0x3df104: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3df104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3df108:
    // 0x3df108: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3df108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3df10c:
    // 0x3df10c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3df10cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3df110:
    // 0x3df110: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3df110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3df114:
    // 0x3df114: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3df114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3df118:
    // 0x3df118: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3df118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3df11c:
    // 0x3df11c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3df11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3df120:
    // 0x3df120: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3df120u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3df124:
    // 0x3df124: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3df124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_3df128:
    // 0x3df128: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3df128u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3df12c:
    // 0x3df12c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3df12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3df130:
    // 0x3df130: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3df130u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3df134:
    // 0x3df134: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x3df134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3df138:
    // 0x3df138: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3df138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3df13c:
    // 0x3df13c: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3df13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3df140:
    // 0x3df140: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x3df140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3df144:
    // 0x3df144: 0x40f809  jalr        $v0
label_3df148:
    if (ctx->pc == 0x3DF148u) {
        ctx->pc = 0x3DF148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF144u;
        // 0x3df148: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF14Cu;
        goto label_3df14c;
    }
    ctx->pc = 0x3DF144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DF14Cu);
        ctx->pc = 0x3DF148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF144u;
        // 0x3df148: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF144u, 0x3DF14Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DF14Cu;
label_3df14c:
    // 0x3df14c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3df14cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3df150:
    // 0x3df150: 0x12400022  beqz        $s2, . + 4 + (0x22 << 2)
label_3df154:
    if (ctx->pc == 0x3DF154u) {
        ctx->pc = 0x3DF154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF150u;
        // 0x3df154: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF158u;
        goto label_3df158;
    }
    ctx->pc = 0x3DF150u;
    {
        const bool branch_taken_0x3df150 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF150u;
        // 0x3df154: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df150) {
            ctx->pc = 0x3DF1DCu;
            goto label_3df1dc;
        }
    }
    ctx->pc = 0x3DF158u;
label_3df158:
    // 0x3df158: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x3df158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3df15c:
    // 0x3df15c: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x3df15cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3df160:
    // 0x3df160: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3df160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3df164:
    // 0x3df164: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3df164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3df168:
    // 0x3df168: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3df168u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3df16c:
    // 0x3df16c: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x3df16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
label_3df170:
    // 0x3df170: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x3df170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3df174:
    // 0x3df174: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x3df174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3df178:
    // 0x3df178: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3df178u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3df17c:
    // 0x3df17c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3df17cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3df180:
    // 0x3df180: 0xc0f7992  jal         func_3DE648
label_3df184:
    if (ctx->pc == 0x3DF184u) {
        ctx->pc = 0x3DF184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF180u;
        // 0x3df184: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF188u;
        goto label_3df188;
    }
    ctx->pc = 0x3DF180u;
    SET_GPR_U32(ctx, 31, 0x3DF188u);
    ctx->pc = 0x3DF184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF180u;
    // 0x3df184: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE648u, 0x3DF180u, 0x3DF188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF188u;
label_3df188:
    // 0x3df188: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3df188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3df18c:
    // 0x3df18c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3df18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3df190:
    // 0x3df190: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
label_3df194:
    if (ctx->pc == 0x3DF194u) {
        ctx->pc = 0x3DF194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF190u;
        // 0x3df194: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF198u;
        goto label_3df198;
    }
    ctx->pc = 0x3DF190u;
    {
        const bool branch_taken_0x3df190 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3df190) {
            ctx->pc = 0x3DF194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DF190u;
            // 0x3df194: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DF1A4u;
            goto label_3df1a4;
        }
    }
    ctx->pc = 0x3DF198u;
label_3df198:
    // 0x3df198: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3df198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3df19c:
    // 0x3df19c: 0x10000009  b           . + 4 + (0x9 << 2)
label_3df1a0:
    if (ctx->pc == 0x3DF1A0u) {
        ctx->pc = 0x3DF1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF19Cu;
        // 0x3df1a0: 0x2442d6f8  addiu       $v0, $v0, -0x2908 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF1A4u;
        goto label_3df1a4;
    }
    ctx->pc = 0x3DF19Cu;
    {
        const bool branch_taken_0x3df19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF19Cu;
        // 0x3df1a0: 0x2442d6f8  addiu       $v0, $v0, -0x2908 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df19c) {
            ctx->pc = 0x3DF1C4u;
            goto label_3df1c4;
        }
    }
    ctx->pc = 0x3DF1A4u;
label_3df1a4:
    // 0x3df1a4: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_3df1a8:
    if (ctx->pc == 0x3DF1A8u) {
        ctx->pc = 0x3DF1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF1A4u;
        // 0x3df1a8: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF1ACu;
        goto label_3df1ac;
    }
    ctx->pc = 0x3DF1A4u;
    {
        const bool branch_taken_0x3df1a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DF1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF1A4u;
        // 0x3df1a8: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df1a4) {
            ctx->pc = 0x3DF1BCu;
            goto label_3df1bc;
        }
    }
    ctx->pc = 0x3DF1ACu;
label_3df1ac:
    // 0x3df1ac: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3df1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3df1b0:
    // 0x3df1b0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_3df1b4:
    if (ctx->pc == 0x3DF1B4u) {
        ctx->pc = 0x3DF1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF1B0u;
        // 0x3df1b4: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF1B8u;
        goto label_3df1b8;
    }
    ctx->pc = 0x3DF1B0u;
    {
        const bool branch_taken_0x3df1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3df1b0) {
            ctx->pc = 0x3DF1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DF1B0u;
            // 0x3df1b4: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DF1CCu;
            goto label_3df1cc;
        }
    }
    ctx->pc = 0x3DF1B8u;
label_3df1b8:
    // 0x3df1b8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3df1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3df1bc:
    // 0x3df1bc: 0x2410fffd  addiu       $s0, $zero, -0x3
    ctx->pc = 0x3df1bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3df1c0:
    // 0x3df1c0: 0x2442d720  addiu       $v0, $v0, -0x28E0
    ctx->pc = 0x3df1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956832));
label_3df1c4:
    // 0x3df1c4: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x3df1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_3df1c8:
    // 0x3df1c8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3df1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3df1cc:
    // 0x3df1cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3df1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3df1d0:
    // 0x3df1d0: 0x40f809  jalr        $v0
label_3df1d4:
    if (ctx->pc == 0x3DF1D4u) {
        ctx->pc = 0x3DF1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF1D0u;
        // 0x3df1d4: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF1D8u;
        goto label_3df1d8;
    }
    ctx->pc = 0x3DF1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DF1D8u);
        ctx->pc = 0x3DF1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF1D0u;
        // 0x3df1d4: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF1D0u, 0x3DF1D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DF1D8u;
label_3df1d8:
    // 0x3df1d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3df1d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3df1dc:
    // 0x3df1dc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3df1dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3df1e0:
    // 0x3df1e0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3df1e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3df1e4:
    // 0x3df1e4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3df1e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3df1e8:
    // 0x3df1e8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3df1e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3df1ec:
    // 0x3df1ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3df1ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3df1f0:
    // 0x3df1f0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3df1f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3df1f4:
    // 0x3df1f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3df1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3df1f8:
    // 0x3df1f8: 0x3e00008  jr          $ra
label_3df1fc:
    if (ctx->pc == 0x3DF1FCu) {
        ctx->pc = 0x3DF1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF1F8u;
        // 0x3df1fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF200u;
        goto label_fallthrough_0x3df1f8;
    }
    ctx->pc = 0x3DF1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF1F8u;
        // 0x3df1fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3df1f8:
    ctx->pc = 0x3DF200u;
}

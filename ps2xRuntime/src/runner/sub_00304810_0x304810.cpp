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

// Function: sub_00304810
// Address: 0x304810 - 0x305e10
void sub_00304810_0x304810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304810_0x304810");
#endif

    switch (ctx->pc) {
        case 0x304838u: goto label_304838;
        case 0x304844u: goto label_304844;
        case 0x304870u: goto label_304870;
        case 0x30489cu: goto label_30489c;
        case 0x3048ecu: goto label_3048ec;
        case 0x3048fcu: goto label_3048fc;
        case 0x304904u: goto label_304904;
        case 0x30491cu: goto label_30491c;
        case 0x30492cu: goto label_30492c;
        case 0x30493cu: goto label_30493c;
        case 0x304944u: goto label_304944;
        case 0x304978u: goto label_304978;
        case 0x3049a0u: goto label_3049a0;
        case 0x3049acu: goto label_3049ac;
        case 0x3049d8u: goto label_3049d8;
        case 0x304a08u: goto label_304a08;
        case 0x304a58u: goto label_304a58;
        case 0x304a68u: goto label_304a68;
        case 0x304a70u: goto label_304a70;
        case 0x304a84u: goto label_304a84;
        case 0x304a94u: goto label_304a94;
        case 0x304aa4u: goto label_304aa4;
        case 0x304aacu: goto label_304aac;
        case 0x304ad0u: goto label_304ad0;
        case 0x304b10u: goto label_304b10;
        case 0x304b28u: goto label_304b28;
        case 0x304b50u: goto label_304b50;
        case 0x304bc0u: goto label_304bc0;
        case 0x304c00u: goto label_304c00;
        case 0x304c10u: goto label_304c10;
        case 0x304c18u: goto label_304c18;
        case 0x304c2cu: goto label_304c2c;
        case 0x304c3cu: goto label_304c3c;
        case 0x304c4cu: goto label_304c4c;
        case 0x304c54u: goto label_304c54;
        case 0x304c88u: goto label_304c88;
        case 0x304cd0u: goto label_304cd0;
        case 0x304ce8u: goto label_304ce8;
        case 0x304d10u: goto label_304d10;
        case 0x304e00u: goto label_304e00;
        case 0x304e20u: goto label_304e20;
        case 0x304e4cu: goto label_304e4c;
        case 0x304e5cu: goto label_304e5c;
        case 0x304e64u: goto label_304e64;
        case 0x304e78u: goto label_304e78;
        case 0x304e88u: goto label_304e88;
        case 0x304e98u: goto label_304e98;
        case 0x304ea0u: goto label_304ea0;
        case 0x304ed8u: goto label_304ed8;
        case 0x304f14u: goto label_304f14;
        case 0x304f2cu: goto label_304f2c;
        case 0x304f58u: goto label_304f58;
        case 0x304fc0u: goto label_304fc0;
        case 0x305014u: goto label_305014;
        case 0x305034u: goto label_305034;
        case 0x305060u: goto label_305060;
        case 0x305070u: goto label_305070;
        case 0x305078u: goto label_305078;
        case 0x30508cu: goto label_30508c;
        case 0x30509cu: goto label_30509c;
        case 0x3050acu: goto label_3050ac;
        case 0x3050b4u: goto label_3050b4;
        case 0x3050f0u: goto label_3050f0;
        case 0x305100u: goto label_305100;
        case 0x30513cu: goto label_30513c;
        case 0x305154u: goto label_305154;
        case 0x305180u: goto label_305180;
        case 0x3051ecu: goto label_3051ec;
        case 0x30522cu: goto label_30522c;
        case 0x30523cu: goto label_30523c;
        case 0x305244u: goto label_305244;
        case 0x305258u: goto label_305258;
        case 0x305268u: goto label_305268;
        case 0x305278u: goto label_305278;
        case 0x305280u: goto label_305280;
        case 0x3052b0u: goto label_3052b0;
        case 0x305300u: goto label_305300;
        case 0x305318u: goto label_305318;
        case 0x305338u: goto label_305338;
        case 0x305390u: goto label_305390;
        case 0x3053d0u: goto label_3053d0;
        case 0x3053f8u: goto label_3053f8;
        case 0x30545cu: goto label_30545c;
        case 0x30547cu: goto label_30547c;
        case 0x3054a8u: goto label_3054a8;
        case 0x3054b8u: goto label_3054b8;
        case 0x3054c0u: goto label_3054c0;
        case 0x3054d4u: goto label_3054d4;
        case 0x3054e4u: goto label_3054e4;
        case 0x3054f4u: goto label_3054f4;
        case 0x3054fcu: goto label_3054fc;
        case 0x305540u: goto label_305540;
        case 0x305550u: goto label_305550;
        case 0x305588u: goto label_305588;
        case 0x305594u: goto label_305594;
        case 0x3055c0u: goto label_3055c0;
        case 0x30560cu: goto label_30560c;
        case 0x305634u: goto label_305634;
        case 0x305674u: goto label_305674;
        case 0x3056b0u: goto label_3056b0;
        case 0x3056f4u: goto label_3056f4;
        case 0x305704u: goto label_305704;
        case 0x30570cu: goto label_30570c;
        case 0x305720u: goto label_305720;
        case 0x305730u: goto label_305730;
        case 0x305748u: goto label_305748;
        case 0x305758u: goto label_305758;
        case 0x305760u: goto label_305760;
        case 0x305790u: goto label_305790;
        case 0x3057dcu: goto label_3057dc;
        case 0x3057fcu: goto label_3057fc;
        case 0x305818u: goto label_305818;
        case 0x305880u: goto label_305880;
        case 0x305898u: goto label_305898;
        case 0x3058c0u: goto label_3058c0;
        case 0x30591cu: goto label_30591c;
        case 0x305960u: goto label_305960;
        case 0x305984u: goto label_305984;
        case 0x3059b0u: goto label_3059b0;
        case 0x3059c0u: goto label_3059c0;
        case 0x3059c8u: goto label_3059c8;
        case 0x3059dcu: goto label_3059dc;
        case 0x3059ecu: goto label_3059ec;
        case 0x3059fcu: goto label_3059fc;
        case 0x305a04u: goto label_305a04;
        case 0x305a38u: goto label_305a38;
        case 0x305a74u: goto label_305a74;
        case 0x305a8cu: goto label_305a8c;
        case 0x305ab8u: goto label_305ab8;
        case 0x305b20u: goto label_305b20;
        case 0x305b70u: goto label_305b70;
        case 0x305bb0u: goto label_305bb0;
        case 0x305bc0u: goto label_305bc0;
        case 0x305bc8u: goto label_305bc8;
        case 0x305bdcu: goto label_305bdc;
        case 0x305becu: goto label_305bec;
        case 0x305bfcu: goto label_305bfc;
        case 0x305c04u: goto label_305c04;
        case 0x305c30u: goto label_305c30;
        case 0x305c78u: goto label_305c78;
        case 0x305c90u: goto label_305c90;
        case 0x305cc0u: goto label_305cc0;
        case 0x305d28u: goto label_305d28;
        case 0x305d48u: goto label_305d48;
        case 0x305d88u: goto label_305d88;
        case 0x305d98u: goto label_305d98;
        case 0x305da0u: goto label_305da0;
        case 0x305db4u: goto label_305db4;
        case 0x305dc4u: goto label_305dc4;
        case 0x305dd4u: goto label_305dd4;
        case 0x305ddcu: goto label_305ddc;
        default: break;
    }

    ctx->pc = 0x304810u;

    // 0x304810: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x304810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x304814: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x304814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x304818: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x304818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x30481c: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x30481cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
    // 0x304820: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x304820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x304824: 0x26921340  addiu       $s2, $s4, 0x1340
    ctx->pc = 0x304824u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4928));
    // 0x304828: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x304828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x30482c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x30482cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x304830: 0xc0c0910  jal         func_302440
    ctx->pc = 0x304830u;
    SET_GPR_U32(ctx, 31, 0x304838u);
    ctx->pc = 0x304834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304830u;
    // 0x304834: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302440u, 0x304830u, 0x304838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304838u;
label_304838:
    // 0x304838: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x304838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30483c: 0xc0c0a30  jal         func_3028C0
    ctx->pc = 0x30483Cu;
    SET_GPR_U32(ctx, 31, 0x304844u);
    ctx->pc = 0x304840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30483Cu;
    // 0x304840: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028C0u, 0x30483Cu, 0x304844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304844u;
label_304844:
    // 0x304844: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x304844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x304848: 0x8c620c1c  lw          $v0, 0xC1C($v1)
    ctx->pc = 0x304848u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F0C1Cu));
    // 0x30484c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30484Cu;
    {
        const bool branch_taken_0x30484c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30484c) {
            ctx->pc = 0x304868u;
            goto label_304868;
        }
    }
    ctx->pc = 0x304854u;
    // 0x304854: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x304854u;
    {
        const bool branch_taken_0x304854 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x304854) {
            ctx->pc = 0x304868u;
            goto label_304868;
        }
    }
    ctx->pc = 0x30485Cu;
    // 0x30485c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30485cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x304860: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x304860u;
    {
        const bool branch_taken_0x304860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x304860) {
            ctx->pc = 0x304864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304860u;
            // 0x304864: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304878u;
            goto label_304878;
        }
    }
    ctx->pc = 0x304868u;
label_304868:
    // 0x304868: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x304868u;
    SET_GPR_U32(ctx, 31, 0x304870u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x304868u, 0x304870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304870u;
label_304870:
    // 0x304870: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x304870u;
    {
        const bool branch_taken_0x304870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304870u;
        // 0x304874: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304870) {
            ctx->pc = 0x304954u;
            goto label_304954;
        }
    }
    ctx->pc = 0x304878u;
label_304878:
    // 0x304878: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x304878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30487c: 0x2442abc8  addiu       $v0, $v0, -0x5438
    ctx->pc = 0x30487cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945736));
    // 0x304880: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x304880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304884: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x304884u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
    // 0x304888: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x304888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30488c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x30488cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x304890: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x304890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x304894: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x304894u;
    SET_GPR_U32(ctx, 31, 0x30489Cu);
    ctx->pc = 0x304898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304894u;
    // 0x304898: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x304894u, 0x30489Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30489Cu;
label_30489c:
    // 0x30489c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30489cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3048a0: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3048a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3048a4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3048a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3048a8: 0xae911340  sw          $s1, 0x1340($s4)
    ctx->pc = 0x3048a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4928), GPR_U32(ctx, 17));
    // 0x3048ac: 0x24531f80  addiu       $s3, $v0, 0x1F80
    ctx->pc = 0x3048acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 8064));
    // 0x3048b0: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x3048b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x3048b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3048b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3048b8: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x3048b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x3048bc: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3048bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x3048c0: 0x24842a40  addiu       $a0, $a0, 0x2A40
    ctx->pc = 0x3048c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
    // 0x3048c4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3048c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3048c8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3048c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3048cc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3048ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3048d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3048d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3048d4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3048d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3048d8: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x3048d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3048dc: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3048dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3048e0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3048e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3048e4: 0xc0c08d4  jal         func_302350
    ctx->pc = 0x3048E4u;
    SET_GPR_U32(ctx, 31, 0x3048ECu);
    ctx->pc = 0x3048E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3048E4u;
    // 0x3048e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302350u, 0x3048E4u, 0x3048ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3048ECu;
label_3048ec:
    // 0x3048ec: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3048ECu;
    {
        const bool branch_taken_0x3048ec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3048ec) {
            ctx->pc = 0x3048F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3048ECu;
            // 0x3048f0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30490Cu;
            goto label_30490c;
        }
    }
    ctx->pc = 0x3048F4u;
    // 0x3048f4: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x3048F4u;
    SET_GPR_U32(ctx, 31, 0x3048FCu);
    ctx->pc = 0x3048F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3048F4u;
    // 0x3048f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x3048F4u, 0x3048FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3048FCu;
label_3048fc:
    // 0x3048fc: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x3048FCu;
    SET_GPR_U32(ctx, 31, 0x304904u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x3048FCu, 0x304904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304904u;
label_304904:
    // 0x304904: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x304904u;
    {
        const bool branch_taken_0x304904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304904u;
        // 0x304908: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304904) {
            ctx->pc = 0x304954u;
            goto label_304954;
        }
    }
    ctx->pc = 0x30490Cu;
label_30490c:
    // 0x30490c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x30490cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x304910: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x304910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x304914: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x304914u;
    SET_GPR_U32(ctx, 31, 0x30491Cu);
    ctx->pc = 0x304918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304914u;
    // 0x304918: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x304914u, 0x30491Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30491Cu;
label_30491c:
    // 0x30491c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30491Cu;
    {
        const bool branch_taken_0x30491c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x30491c) {
            ctx->pc = 0x304934u;
            goto label_304934;
        }
    }
    ctx->pc = 0x304924u;
    // 0x304924: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x304924u;
    SET_GPR_U32(ctx, 31, 0x30492Cu);
    ctx->pc = 0x304928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304924u;
    // 0x304928: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x304924u, 0x30492Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30492Cu;
label_30492c:
    // 0x30492c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x30492Cu;
    {
        const bool branch_taken_0x30492c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30492Cu;
        // 0x304930: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30492c) {
            ctx->pc = 0x304954u;
            goto label_304954;
        }
    }
    ctx->pc = 0x304934u;
label_304934:
    // 0x304934: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x304934u;
    SET_GPR_U32(ctx, 31, 0x30493Cu);
    ctx->pc = 0x304938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304934u;
    // 0x304938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x304934u, 0x30493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30493Cu;
label_30493c:
    // 0x30493c: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x30493Cu;
    SET_GPR_U32(ctx, 31, 0x304944u);
    ctx->pc = 0x304940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30493Cu;
    // 0x304940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x30493Cu, 0x304944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304944u;
label_304944:
    // 0x304944: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x304944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x304948: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x304948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30494c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x30494cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x304950: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x304950u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_304954:
    // 0x304954: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x304954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x304958: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x304958u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30495c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x30495cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x304960: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x304960u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x304964: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x304964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x304968: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x304968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30496c: 0x3e00008  jr          $ra
    ctx->pc = 0x30496Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30496Cu;
        // 0x304970: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30496Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304974u;
    // 0x304974: 0x0  nop
    ctx->pc = 0x304974u;
    // NOP
label_304978:
    // 0x304978: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x304978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x30497c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x30497cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x304980: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x304980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x304984: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x304984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304988: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x304988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x30498c: 0x3c130061  lui         $s3, 0x61
    ctx->pc = 0x30498cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)97 << 16));
    // 0x304990: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x304990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x304994: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x304994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x304998: 0xc0c0910  jal         func_302440
    ctx->pc = 0x304998u;
    SET_GPR_U32(ctx, 31, 0x3049A0u);
    ctx->pc = 0x30499Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304998u;
    // 0x30499c: 0x26721340  addiu       $s2, $s3, 0x1340 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302440u, 0x304998u, 0x3049A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3049A0u;
label_3049a0:
    // 0x3049a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3049a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3049a4: 0xc0c0a30  jal         func_3028C0
    ctx->pc = 0x3049A4u;
    SET_GPR_U32(ctx, 31, 0x3049ACu);
    ctx->pc = 0x3049A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3049A4u;
    // 0x3049a8: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028C0u, 0x3049A4u, 0x3049ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3049ACu;
label_3049ac:
    // 0x3049ac: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x3049acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x3049b0: 0x8c430c1c  lw          $v1, 0xC1C($v0)
    ctx->pc = 0x3049b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F0C1Cu));
    // 0x3049b4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3049B4u;
    {
        const bool branch_taken_0x3049b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3049b4) {
            ctx->pc = 0x3049D0u;
            goto label_3049d0;
        }
    }
    ctx->pc = 0x3049BCu;
    // 0x3049bc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3049BCu;
    {
        const bool branch_taken_0x3049bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3049bc) {
            ctx->pc = 0x3049D0u;
            goto label_3049d0;
        }
    }
    ctx->pc = 0x3049C4u;
    // 0x3049c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3049c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3049c8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3049C8u;
    {
        const bool branch_taken_0x3049c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3049c8) {
            ctx->pc = 0x3049CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3049C8u;
            // 0x3049cc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3049E0u;
            goto label_3049e0;
        }
    }
    ctx->pc = 0x3049D0u;
label_3049d0:
    // 0x3049d0: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x3049D0u;
    SET_GPR_U32(ctx, 31, 0x3049D8u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x3049D0u, 0x3049D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3049D8u;
label_3049d8:
    // 0x3049d8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x3049D8u;
    {
        const bool branch_taken_0x3049d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3049DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049D8u;
        // 0x3049dc: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3049d8) {
            ctx->pc = 0x304AB0u;
            goto label_304ab0;
        }
    }
    ctx->pc = 0x3049E0u;
label_3049e0:
    // 0x3049e0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3049e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3049e4: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x3049e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
    // 0x3049e8: 0x2442abe0  addiu       $v0, $v0, -0x5420
    ctx->pc = 0x3049e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945760));
    // 0x3049ec: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x3049ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x3049f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3049f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3049f4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3049f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3049f8: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x3049f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x3049fc: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x3049fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x304a00: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x304A00u;
    SET_GPR_U32(ctx, 31, 0x304A08u);
    ctx->pc = 0x304A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304A00u;
    // 0x304a04: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x304A00u, 0x304A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304A08u;
label_304a08:
    // 0x304a08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x304a08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304a0c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x304a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x304a10: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x304a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x304a14: 0xae711340  sw          $s1, 0x1340($s3)
    ctx->pc = 0x304a14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4928), GPR_U32(ctx, 17));
    // 0x304a18: 0x24501f80  addiu       $s0, $v0, 0x1F80
    ctx->pc = 0x304a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8064));
    // 0x304a1c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x304a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x304a20: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x304a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x304a24: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x304a24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x304a28: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x304a28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x304a2c: 0x24842a40  addiu       $a0, $a0, 0x2A40
    ctx->pc = 0x304a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
    // 0x304a30: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x304a30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304a34: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x304a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x304a38: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x304a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x304a3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x304a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304a40: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x304a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x304a44: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x304a44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x304a48: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x304a48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304a4c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x304a4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x304a50: 0xc0c08d4  jal         func_302350
    ctx->pc = 0x304A50u;
    SET_GPR_U32(ctx, 31, 0x304A58u);
    ctx->pc = 0x304A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304A50u;
    // 0x304a54: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302350u, 0x304A50u, 0x304A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304A58u;
label_304a58:
    // 0x304a58: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x304A58u;
    {
        const bool branch_taken_0x304a58 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x304A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A58u;
        // 0x304a5c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304a58) {
            ctx->pc = 0x304A78u;
            goto label_304a78;
        }
    }
    ctx->pc = 0x304A60u;
    // 0x304a60: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x304A60u;
    SET_GPR_U32(ctx, 31, 0x304A68u);
    ctx->pc = 0x304A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304A60u;
    // 0x304a64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x304A60u, 0x304A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304A68u;
label_304a68:
    // 0x304a68: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x304A68u;
    SET_GPR_U32(ctx, 31, 0x304A70u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x304A68u, 0x304A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304A70u;
label_304a70:
    // 0x304a70: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x304A70u;
    {
        const bool branch_taken_0x304a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A70u;
        // 0x304a74: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304a70) {
            ctx->pc = 0x304AB0u;
            goto label_304ab0;
        }
    }
    ctx->pc = 0x304A78u;
label_304a78:
    // 0x304a78: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x304a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x304a7c: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x304A7Cu;
    SET_GPR_U32(ctx, 31, 0x304A84u);
    ctx->pc = 0x304A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304A7Cu;
    // 0x304a80: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x304A7Cu, 0x304A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304A84u;
label_304a84:
    // 0x304a84: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x304A84u;
    {
        const bool branch_taken_0x304a84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x304a84) {
            ctx->pc = 0x304A9Cu;
            goto label_304a9c;
        }
    }
    ctx->pc = 0x304A8Cu;
    // 0x304a8c: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x304A8Cu;
    SET_GPR_U32(ctx, 31, 0x304A94u);
    ctx->pc = 0x304A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304A8Cu;
    // 0x304a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x304A8Cu, 0x304A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304A94u;
label_304a94:
    // 0x304a94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x304A94u;
    {
        const bool branch_taken_0x304a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A94u;
        // 0x304a98: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304a94) {
            ctx->pc = 0x304AB0u;
            goto label_304ab0;
        }
    }
    ctx->pc = 0x304A9Cu;
label_304a9c:
    // 0x304a9c: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x304A9Cu;
    SET_GPR_U32(ctx, 31, 0x304AA4u);
    ctx->pc = 0x304AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304A9Cu;
    // 0x304aa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x304A9Cu, 0x304AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304AA4u;
label_304aa4:
    // 0x304aa4: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x304AA4u;
    SET_GPR_U32(ctx, 31, 0x304AACu);
    ctx->pc = 0x304AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304AA4u;
    // 0x304aa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x304AA4u, 0x304AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304AACu;
label_304aac:
    // 0x304aac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x304aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_304ab0:
    // 0x304ab0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x304ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x304ab4: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x304ab4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x304ab8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x304ab8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x304abc: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x304abcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x304ac0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x304ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x304ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x304AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AC4u;
        // 0x304ac8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304ACCu;
    // 0x304acc: 0x0  nop
    ctx->pc = 0x304accu;
    // NOP
label_304ad0:
    // 0x304ad0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x304ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x304ad4: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x304ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x304ad8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x304ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x304adc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x304adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304ae0: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x304ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x304ae4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x304ae4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304ae8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x304ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x304aec: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x304aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x304af0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x304af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x304af4: 0x3c170061  lui         $s7, 0x61
    ctx->pc = 0x304af4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)97 << 16));
    // 0x304af8: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x304af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x304afc: 0x26f21340  addiu       $s2, $s7, 0x1340
    ctx->pc = 0x304afcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4928));
    // 0x304b00: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x304b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x304b04: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x304b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x304b08: 0xc0c0a30  jal         func_3028C0
    ctx->pc = 0x304B08u;
    SET_GPR_U32(ctx, 31, 0x304B10u);
    ctx->pc = 0x304B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304B08u;
    // 0x304b0c: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028C0u, 0x304B08u, 0x304B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304B10u;
label_304b10:
    // 0x304b10: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x304b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x304b14: 0x8c430c1c  lw          $v1, 0xC1C($v0)
    ctx->pc = 0x304b14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F0C1Cu));
    // 0x304b18: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x304B18u;
    {
        const bool branch_taken_0x304b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x304b18) {
            ctx->pc = 0x304B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304B18u;
            // 0x304b1c: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304B2Cu;
            goto label_304b2c;
        }
    }
    ctx->pc = 0x304B20u;
    // 0x304b20: 0xc0c0a7a  jal         func_3029E8
    ctx->pc = 0x304B20u;
    SET_GPR_U32(ctx, 31, 0x304B28u);
    ctx->pc = 0x3029E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3029E8u, 0x304B20u, 0x304B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304B28u;
label_304b28:
    // 0x304b28: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x304b28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_304b2c:
    // 0x304b2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x304b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304b30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x304b30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304b34: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x304B34u;
    {
        const bool branch_taken_0x304b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x304B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B34u;
        // 0x304b38: 0xa2420010  sb          $v0, 0x10($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304b34) {
            ctx->pc = 0x304B78u;
            goto label_304b78;
        }
    }
    ctx->pc = 0x304B3Cu;
    // 0x304b3c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x304b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x304b40: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x304b40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x304b44: 0x3c150061  lui         $s5, 0x61
    ctx->pc = 0x304b44u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
    // 0x304b48: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x304b48u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
    // 0x304b4c: 0x0  nop
    ctx->pc = 0x304b4cu;
    // NOP
label_304b50:
    // 0x304b50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x304b50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x304b54: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x304b54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x304b58: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x304B58u;
    {
        const bool branch_taken_0x304b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B58u;
        // 0x304b5c: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304b58) {
            ctx->pc = 0x304B88u;
            goto label_304b88;
        }
    }
    ctx->pc = 0x304B60u;
    // 0x304b60: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x304b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x304b64: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x304b64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x304b68: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x304B68u;
    {
        const bool branch_taken_0x304b68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x304B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B68u;
        // 0x304b6c: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304b68) {
            ctx->pc = 0x304B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304b50;
        }
    }
    ctx->pc = 0x304B70u;
    // 0x304b70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x304B70u;
    {
        const bool branch_taken_0x304b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B70u;
        // 0x304b74: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304b70) {
            ctx->pc = 0x304B8Cu;
            goto label_304b8c;
        }
    }
    ctx->pc = 0x304B78u;
label_304b78:
    // 0x304b78: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x304b78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x304b7c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x304b7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x304b80: 0x3c150061  lui         $s5, 0x61
    ctx->pc = 0x304b80u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
    // 0x304b84: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x304b84u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
label_304b88:
    // 0x304b88: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x304b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_304b8c:
    // 0x304b8c: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x304B8Cu;
    {
        const bool branch_taken_0x304b8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x304b8c) {
            ctx->pc = 0x304B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304B8Cu;
            // 0x304b90: 0xae56000c  sw          $s6, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304BA0u;
            goto label_304ba0;
        }
    }
    ctx->pc = 0x304B94u;
    // 0x304b94: 0xa240040f  sb          $zero, 0x40F($s2)
    ctx->pc = 0x304b94u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1039), (uint8_t)GPR_U32(ctx, 0));
    // 0x304b98: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x304b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x304b9c: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x304b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_304ba0:
    // 0x304ba0: 0x24a3abf8  addiu       $v1, $a1, -0x5408
    ctx->pc = 0x304ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945784));
    // 0x304ba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304ba8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x304ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x304bac: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x304bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x304bb0: 0x26941f80  addiu       $s4, $s4, 0x1F80
    ctx->pc = 0x304bb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8064));
    // 0x304bb4: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x304bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x304bb8: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x304BB8u;
    SET_GPR_U32(ctx, 31, 0x304BC0u);
    ctx->pc = 0x304BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304BB8u;
    // 0x304bbc: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x304BB8u, 0x304BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304BC0u;
label_304bc0:
    // 0x304bc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x304bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304bc4: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x304bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x304bc8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x304bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x304bcc: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x304bccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x304bd0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x304bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x304bd4: 0x26a42a40  addiu       $a0, $s5, 0x2A40
    ctx->pc = 0x304bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 10816));
    // 0x304bd8: 0x26e71340  addiu       $a3, $s7, 0x1340
    ctx->pc = 0x304bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4928));
    // 0x304bdc: 0x26080011  addiu       $t0, $s0, 0x11
    ctx->pc = 0x304bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x304be0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x304be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x304be4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x304be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x304be8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x304be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x304bec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x304becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304bf0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x304bf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304bf4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x304bf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x304bf8: 0xc0c08d4  jal         func_302350
    ctx->pc = 0x304BF8u;
    SET_GPR_U32(ctx, 31, 0x304C00u);
    ctx->pc = 0x304BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304BF8u;
    // 0x304bfc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302350u, 0x304BF8u, 0x304C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304C00u;
label_304c00:
    // 0x304c00: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x304C00u;
    {
        const bool branch_taken_0x304c00 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x304C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304C00u;
        // 0x304c04: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304c00) {
            ctx->pc = 0x304C20u;
            goto label_304c20;
        }
    }
    ctx->pc = 0x304C08u;
    // 0x304c08: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x304C08u;
    SET_GPR_U32(ctx, 31, 0x304C10u);
    ctx->pc = 0x304C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304C08u;
    // 0x304c0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x304C08u, 0x304C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304C10u;
label_304c10:
    // 0x304c10: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x304C10u;
    SET_GPR_U32(ctx, 31, 0x304C18u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x304C10u, 0x304C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304C18u;
label_304c18:
    // 0x304c18: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x304C18u;
    {
        const bool branch_taken_0x304c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304C18u;
        // 0x304c1c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304c18) {
            ctx->pc = 0x304C58u;
            goto label_304c58;
        }
    }
    ctx->pc = 0x304C20u;
label_304c20:
    // 0x304c20: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x304c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x304c24: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x304C24u;
    SET_GPR_U32(ctx, 31, 0x304C2Cu);
    ctx->pc = 0x304C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304C24u;
    // 0x304c28: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x304C24u, 0x304C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304C2Cu;
label_304c2c:
    // 0x304c2c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x304C2Cu;
    {
        const bool branch_taken_0x304c2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x304c2c) {
            ctx->pc = 0x304C44u;
            goto label_304c44;
        }
    }
    ctx->pc = 0x304C34u;
    // 0x304c34: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x304C34u;
    SET_GPR_U32(ctx, 31, 0x304C3Cu);
    ctx->pc = 0x304C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304C34u;
    // 0x304c38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x304C34u, 0x304C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304C3Cu;
label_304c3c:
    // 0x304c3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x304C3Cu;
    {
        const bool branch_taken_0x304c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304C3Cu;
        // 0x304c40: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304c3c) {
            ctx->pc = 0x304C58u;
            goto label_304c58;
        }
    }
    ctx->pc = 0x304C44u;
label_304c44:
    // 0x304c44: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x304C44u;
    SET_GPR_U32(ctx, 31, 0x304C4Cu);
    ctx->pc = 0x304C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304C44u;
    // 0x304c48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x304C44u, 0x304C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304C4Cu;
label_304c4c:
    // 0x304c4c: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x304C4Cu;
    SET_GPR_U32(ctx, 31, 0x304C54u);
    ctx->pc = 0x304C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304C4Cu;
    // 0x304c50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x304C4Cu, 0x304C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304C54u;
label_304c54:
    // 0x304c54: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x304c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_304c58:
    // 0x304c58: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x304c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x304c5c: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x304c5cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x304c60: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x304c60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x304c64: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x304c64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x304c68: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x304c68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x304c6c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x304c6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x304c70: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x304c70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x304c74: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x304c74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x304c78: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x304c78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x304c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x304C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304C7Cu;
        // 0x304c80: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304C84u;
    // 0x304c84: 0x0  nop
    ctx->pc = 0x304c84u;
    // NOP
label_304c88:
    // 0x304c88: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x304c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x304c8c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x304c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x304c90: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x304c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x304c94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x304c94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304c98: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x304c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x304c9c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x304c9cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304ca0: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x304ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x304ca4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x304ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304ca8: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x304ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x304cac: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x304cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x304cb0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x304cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x304cb4: 0x3c1e0061  lui         $fp, 0x61
    ctx->pc = 0x304cb4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)97 << 16));
    // 0x304cb8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x304cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x304cbc: 0x27d31340  addiu       $s3, $fp, 0x1340
    ctx->pc = 0x304cbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 4928));
    // 0x304cc0: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x304cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x304cc4: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x304cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x304cc8: 0xc0c0a30  jal         func_3028C0
    ctx->pc = 0x304CC8u;
    SET_GPR_U32(ctx, 31, 0x304CD0u);
    ctx->pc = 0x304CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304CC8u;
    // 0x304ccc: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028C0u, 0x304CC8u, 0x304CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304CD0u;
label_304cd0:
    // 0x304cd0: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x304cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x304cd4: 0x8c620c1c  lw          $v0, 0xC1C($v1)
    ctx->pc = 0x304cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F0C1Cu));
    // 0x304cd8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x304CD8u;
    {
        const bool branch_taken_0x304cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x304cd8) {
            ctx->pc = 0x304CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304CD8u;
            // 0x304cdc: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304CECu;
            goto label_304cec;
        }
    }
    ctx->pc = 0x304CE0u;
    // 0x304ce0: 0xc0c0a7a  jal         func_3029E8
    ctx->pc = 0x304CE0u;
    SET_GPR_U32(ctx, 31, 0x304CE8u);
    ctx->pc = 0x3029E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3029E8u, 0x304CE0u, 0x304CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304CE8u;
label_304ce8:
    // 0x304ce8: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x304ce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_304cec:
    // 0x304cec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x304cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304cf0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x304cf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304cf4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x304CF4u;
    {
        const bool branch_taken_0x304cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x304CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304CF4u;
        // 0x304cf8: 0xa2620050  sb          $v0, 0x50($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 80), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304cf4) {
            ctx->pc = 0x304D38u;
            goto label_304d38;
        }
    }
    ctx->pc = 0x304CFCu;
    // 0x304cfc: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x304cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x304d00: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x304d00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x304d04: 0x3c160061  lui         $s6, 0x61
    ctx->pc = 0x304d04u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)97 << 16));
    // 0x304d08: 0x3c150061  lui         $s5, 0x61
    ctx->pc = 0x304d08u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
    // 0x304d0c: 0x0  nop
    ctx->pc = 0x304d0cu;
    // NOP
label_304d10:
    // 0x304d10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x304d10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x304d14: 0x2a220400  slti        $v0, $s1, 0x400
    ctx->pc = 0x304d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x304d18: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x304D18u;
    {
        const bool branch_taken_0x304d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304D18u;
        // 0x304d1c: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304d18) {
            ctx->pc = 0x304D48u;
            goto label_304d48;
        }
    }
    ctx->pc = 0x304D20u;
    // 0x304d20: 0x2712021  addu        $a0, $s3, $s1
    ctx->pc = 0x304d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x304d24: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x304d24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x304d28: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x304D28u;
    {
        const bool branch_taken_0x304d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x304D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304D28u;
        // 0x304d2c: 0xa0830050  sb          $v1, 0x50($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304d28) {
            ctx->pc = 0x304D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304d10;
        }
    }
    ctx->pc = 0x304D30u;
    // 0x304d30: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x304D30u;
    {
        const bool branch_taken_0x304d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304D30u;
        // 0x304d34: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304d30) {
            ctx->pc = 0x304D4Cu;
            goto label_304d4c;
        }
    }
    ctx->pc = 0x304D38u;
label_304d38:
    // 0x304d38: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x304d38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x304d3c: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x304d3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x304d40: 0x3c160061  lui         $s6, 0x61
    ctx->pc = 0x304d40u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)97 << 16));
    // 0x304d44: 0x3c150061  lui         $s5, 0x61
    ctx->pc = 0x304d44u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
label_304d48:
    // 0x304d48: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x304d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_304d4c:
    // 0x304d4c: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x304D4Cu;
    {
        const bool branch_taken_0x304d4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x304D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304D4Cu;
        // 0x304d50: 0x24a3ac10  addiu       $v1, $a1, -0x53F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304d4c) {
            ctx->pc = 0x304D5Cu;
            goto label_304d5c;
        }
    }
    ctx->pc = 0x304D54u;
    // 0x304d54: 0xa260044f  sb          $zero, 0x44F($s3)
    ctx->pc = 0x304d54u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1103), (uint8_t)GPR_U32(ctx, 0));
    // 0x304d58: 0x241103ff  addiu       $s1, $zero, 0x3FF
    ctx->pc = 0x304d58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_304d5c:
    // 0x304d5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304d60: 0x6a040007  ldl         $a0, 0x7($s0)
    ctx->pc = 0x304d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x304d64: 0x6e040000  ldr         $a0, 0x0($s0)
    ctx->pc = 0x304d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x304d68: 0x6a05000f  ldl         $a1, 0xF($s0)
    ctx->pc = 0x304d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x304d6c: 0x6e050008  ldr         $a1, 0x8($s0)
    ctx->pc = 0x304d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x304d70: 0x6a060017  ldl         $a2, 0x17($s0)
    ctx->pc = 0x304d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x304d74: 0x6e060010  ldr         $a2, 0x10($s0)
    ctx->pc = 0x304d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x304d78: 0x6a07001f  ldl         $a3, 0x1F($s0)
    ctx->pc = 0x304d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x304d7c: 0x6e070018  ldr         $a3, 0x18($s0)
    ctx->pc = 0x304d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x304d80: 0xb2640017  sdl         $a0, 0x17($s3)
    ctx->pc = 0x304d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x304d84: 0xb6640010  sdr         $a0, 0x10($s3)
    ctx->pc = 0x304d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x304d88: 0xb265001f  sdl         $a1, 0x1F($s3)
    ctx->pc = 0x304d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x304d8c: 0xb6650018  sdr         $a1, 0x18($s3)
    ctx->pc = 0x304d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x304d90: 0xb2660027  sdl         $a2, 0x27($s3)
    ctx->pc = 0x304d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x304d94: 0xb6660020  sdr         $a2, 0x20($s3)
    ctx->pc = 0x304d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x304d98: 0xb267002f  sdl         $a3, 0x2F($s3)
    ctx->pc = 0x304d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x304d9c: 0xb6670028  sdr         $a3, 0x28($s3)
    ctx->pc = 0x304d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x304da0: 0x6a040027  ldl         $a0, 0x27($s0)
    ctx->pc = 0x304da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x304da4: 0x6e040020  ldr         $a0, 0x20($s0)
    ctx->pc = 0x304da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x304da8: 0x6a05002f  ldl         $a1, 0x2F($s0)
    ctx->pc = 0x304da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x304dac: 0x6e050028  ldr         $a1, 0x28($s0)
    ctx->pc = 0x304dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x304db0: 0x6a060037  ldl         $a2, 0x37($s0)
    ctx->pc = 0x304db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x304db4: 0x6e060030  ldr         $a2, 0x30($s0)
    ctx->pc = 0x304db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x304db8: 0x6a07003f  ldl         $a3, 0x3F($s0)
    ctx->pc = 0x304db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x304dbc: 0x6e070038  ldr         $a3, 0x38($s0)
    ctx->pc = 0x304dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x304dc0: 0xb2640037  sdl         $a0, 0x37($s3)
    ctx->pc = 0x304dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x304dc4: 0xb6640030  sdr         $a0, 0x30($s3)
    ctx->pc = 0x304dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x304dc8: 0xb265003f  sdl         $a1, 0x3F($s3)
    ctx->pc = 0x304dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x304dcc: 0xb6650038  sdr         $a1, 0x38($s3)
    ctx->pc = 0x304dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x304dd0: 0xb2660047  sdl         $a2, 0x47($s3)
    ctx->pc = 0x304dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x304dd4: 0xb6660040  sdr         $a2, 0x40($s3)
    ctx->pc = 0x304dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x304dd8: 0xb267004f  sdl         $a3, 0x4F($s3)
    ctx->pc = 0x304dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x304ddc: 0xb6670048  sdr         $a3, 0x48($s3)
    ctx->pc = 0x304ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x304de0: 0x26b51f80  addiu       $s5, $s5, 0x1F80
    ctx->pc = 0x304de0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8064));
    // 0x304de4: 0xae77000c  sw          $s7, 0xC($s3)
    ctx->pc = 0x304de4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 23));
    // 0x304de8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x304de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x304dec: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x304decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x304df0: 0x27d01340  addiu       $s0, $fp, 0x1340
    ctx->pc = 0x304df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4928));
    // 0x304df4: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x304df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x304df8: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x304DF8u;
    SET_GPR_U32(ctx, 31, 0x304E00u);
    ctx->pc = 0x304DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304DF8u;
    // 0x304dfc: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x304DF8u, 0x304E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304E00u;
label_304e00:
    // 0x304e00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x304e00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304e04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x304e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304e08: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x304e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x304e0c: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x304e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    // 0x304e10: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x304e10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x304e14: 0x24050450  addiu       $a1, $zero, 0x450
    ctx->pc = 0x304e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1104));
    // 0x304e18: 0xc0c041c  jal         func_301070
    ctx->pc = 0x304E18u;
    SET_GPR_U32(ctx, 31, 0x304E20u);
    ctx->pc = 0x304E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304E18u;
    // 0x304e1c: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301070u, 0x304E18u, 0x304E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304E20u;
label_304e20:
    // 0x304e20: 0x26c42a40  addiu       $a0, $s6, 0x2A40
    ctx->pc = 0x304e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 10816));
    // 0x304e24: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x304e24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304e28: 0x26280051  addiu       $t0, $s1, 0x51
    ctx->pc = 0x304e28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 81));
    // 0x304e2c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x304e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x304e30: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x304e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x304e34: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x304e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x304e38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x304e38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304e3c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x304e3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304e40: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x304e40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x304e44: 0xc0c08d4  jal         func_302350
    ctx->pc = 0x304E44u;
    SET_GPR_U32(ctx, 31, 0x304E4Cu);
    ctx->pc = 0x304E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304E44u;
    // 0x304e48: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302350u, 0x304E44u, 0x304E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304E4Cu;
label_304e4c:
    // 0x304e4c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x304E4Cu;
    {
        const bool branch_taken_0x304e4c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x304E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E4Cu;
        // 0x304e50: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304e4c) {
            ctx->pc = 0x304E6Cu;
            goto label_304e6c;
        }
    }
    ctx->pc = 0x304E54u;
    // 0x304e54: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x304E54u;
    SET_GPR_U32(ctx, 31, 0x304E5Cu);
    ctx->pc = 0x304E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304E54u;
    // 0x304e58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x304E54u, 0x304E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304E5Cu;
label_304e5c:
    // 0x304e5c: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x304E5Cu;
    SET_GPR_U32(ctx, 31, 0x304E64u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x304E5Cu, 0x304E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304E64u;
label_304e64:
    // 0x304e64: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x304E64u;
    {
        const bool branch_taken_0x304e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E64u;
        // 0x304e68: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304e64) {
            ctx->pc = 0x304EA4u;
            goto label_304ea4;
        }
    }
    ctx->pc = 0x304E6Cu;
label_304e6c:
    // 0x304e6c: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x304e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x304e70: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x304E70u;
    SET_GPR_U32(ctx, 31, 0x304E78u);
    ctx->pc = 0x304E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304E70u;
    // 0x304e74: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x304E70u, 0x304E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304E78u;
label_304e78:
    // 0x304e78: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x304E78u;
    {
        const bool branch_taken_0x304e78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x304e78) {
            ctx->pc = 0x304E90u;
            goto label_304e90;
        }
    }
    ctx->pc = 0x304E80u;
    // 0x304e80: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x304E80u;
    SET_GPR_U32(ctx, 31, 0x304E88u);
    ctx->pc = 0x304E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304E80u;
    // 0x304e84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x304E80u, 0x304E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304E88u;
label_304e88:
    // 0x304e88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x304E88u;
    {
        const bool branch_taken_0x304e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E88u;
        // 0x304e8c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304e88) {
            ctx->pc = 0x304EA4u;
            goto label_304ea4;
        }
    }
    ctx->pc = 0x304E90u;
label_304e90:
    // 0x304e90: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x304E90u;
    SET_GPR_U32(ctx, 31, 0x304E98u);
    ctx->pc = 0x304E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304E90u;
    // 0x304e94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x304E90u, 0x304E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304E98u;
label_304e98:
    // 0x304e98: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x304E98u;
    SET_GPR_U32(ctx, 31, 0x304EA0u);
    ctx->pc = 0x304E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304E98u;
    // 0x304e9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x304E98u, 0x304EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304EA0u;
label_304ea0:
    // 0x304ea0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x304ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_304ea4:
    // 0x304ea4: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x304ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x304ea8: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x304ea8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x304eac: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x304eacu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x304eb0: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x304eb0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x304eb4: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x304eb4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x304eb8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x304eb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x304ebc: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x304ebcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x304ec0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x304ec0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x304ec4: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x304ec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x304ec8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x304ec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x304ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x304ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304ECCu;
        // 0x304ed0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304ED4u;
    // 0x304ed4: 0x0  nop
    ctx->pc = 0x304ed4u;
    // NOP
label_304ed8:
    // 0x304ed8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x304ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x304edc: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x304edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x304ee0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x304ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x304ee4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x304ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304ee8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x304ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x304eec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x304eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304ef0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x304ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x304ef4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x304ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x304ef8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x304ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x304efc: 0x3c160061  lui         $s6, 0x61
    ctx->pc = 0x304efcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)97 << 16));
    // 0x304f00: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x304f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x304f04: 0x26d21340  addiu       $s2, $s6, 0x1340
    ctx->pc = 0x304f04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4928));
    // 0x304f08: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x304f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x304f0c: 0xc0c0a30  jal         func_3028C0
    ctx->pc = 0x304F0Cu;
    SET_GPR_U32(ctx, 31, 0x304F14u);
    ctx->pc = 0x304F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304F0Cu;
    // 0x304f10: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028C0u, 0x304F0Cu, 0x304F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304F14u;
label_304f14:
    // 0x304f14: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x304f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x304f18: 0x8c430c1c  lw          $v1, 0xC1C($v0)
    ctx->pc = 0x304f18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F0C1Cu));
    // 0x304f1c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x304F1Cu;
    {
        const bool branch_taken_0x304f1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x304f1c) {
            ctx->pc = 0x304F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304F1Cu;
            // 0x304f20: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304F30u;
            goto label_304f30;
        }
    }
    ctx->pc = 0x304F24u;
    // 0x304f24: 0xc0c0a7a  jal         func_3029E8
    ctx->pc = 0x304F24u;
    SET_GPR_U32(ctx, 31, 0x304F2Cu);
    ctx->pc = 0x3029E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3029E8u, 0x304F24u, 0x304F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304F2Cu;
label_304f2c:
    // 0x304f2c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x304f2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_304f30:
    // 0x304f30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x304f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304f34: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x304f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x304f38: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x304F38u;
    {
        const bool branch_taken_0x304f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x304F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F38u;
        // 0x304f3c: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304f38) {
            ctx->pc = 0x304F84u;
            goto label_304f84;
        }
    }
    ctx->pc = 0x304F40u;
    // 0x304f40: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x304f40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
    // 0x304f44: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x304f44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x304f48: 0x3c150061  lui         $s5, 0x61
    ctx->pc = 0x304f48u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
    // 0x304f4c: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x304f4cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
    // 0x304f50: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x304f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x304f54: 0x0  nop
    ctx->pc = 0x304f54u;
    // NOP
label_304f58:
    // 0x304f58: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x304f58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x304f5c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x304F5Cu;
    {
        const bool branch_taken_0x304f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F5Cu;
        // 0x304f60: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304f5c) {
            ctx->pc = 0x304F94u;
            goto label_304f94;
        }
    }
    ctx->pc = 0x304F64u;
    // 0x304f64: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x304f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x304f68: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x304f68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x304f6c: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x304f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x304f70: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x304f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x304f74: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x304F74u;
    {
        const bool branch_taken_0x304f74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x304f74) {
            ctx->pc = 0x304F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304F74u;
            // 0x304f78: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304f58;
        }
    }
    ctx->pc = 0x304F7Cu;
    // 0x304f7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x304F7Cu;
    {
        const bool branch_taken_0x304f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F7Cu;
        // 0x304f80: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304f7c) {
            ctx->pc = 0x304F98u;
            goto label_304f98;
        }
    }
    ctx->pc = 0x304F84u;
label_304f84:
    // 0x304f84: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x304f84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
    // 0x304f88: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x304f88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x304f8c: 0x3c150061  lui         $s5, 0x61
    ctx->pc = 0x304f8cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
    // 0x304f90: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x304f90u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
label_304f94:
    // 0x304f94: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x304f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_304f98:
    // 0x304f98: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x304F98u;
    {
        const bool branch_taken_0x304f98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x304f98) {
            ctx->pc = 0x304F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304F98u;
            // 0x304f9c: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304FA0u;
            goto label_304fa0;
        }
    }
    ctx->pc = 0x304FA0u;
label_304fa0:
    // 0x304fa0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x304fa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x304fa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x304fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304fa8: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x304fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x304fac: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x304FACu;
    {
        const bool branch_taken_0x304fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x304FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304FACu;
        // 0x304fb0: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304fac) {
            ctx->pc = 0x304FE4u;
            goto label_304fe4;
        }
    }
    ctx->pc = 0x304FB4u;
    // 0x304fb4: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x304fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x304fb8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x304fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x304fbc: 0x0  nop
    ctx->pc = 0x304fbcu;
    // NOP
label_304fc0:
    // 0x304fc0: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x304fc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x304fc4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x304FC4u;
    {
        const bool branch_taken_0x304fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304FC4u;
        // 0x304fc8: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304fc4) {
            ctx->pc = 0x304FE4u;
            goto label_304fe4;
        }
    }
    ctx->pc = 0x304FCCu;
    // 0x304fcc: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x304fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x304fd0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x304fd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x304fd4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x304fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x304fd8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x304fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x304fdc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x304FDCu;
    {
        const bool branch_taken_0x304fdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x304fdc) {
            ctx->pc = 0x304FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304FDCu;
            // 0x304fe0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304fc0;
        }
    }
    ctx->pc = 0x304FE4u;
label_304fe4:
    // 0x304fe4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x304fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x304fe8: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x304FE8u;
    {
        const bool branch_taken_0x304fe8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x304fe8) {
            ctx->pc = 0x304FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304FE8u;
            // 0x304fec: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304FF0u;
            goto label_304ff0;
        }
    }
    ctx->pc = 0x304FF0u;
label_304ff0:
    // 0x304ff0: 0x24e3ac28  addiu       $v1, $a3, -0x53D8
    ctx->pc = 0x304ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945832));
    // 0x304ff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304ff8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x304ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x304ffc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x304ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x305000: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x305000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x305004: 0x26d01340  addiu       $s0, $s6, 0x1340
    ctx->pc = 0x305004u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4928));
    // 0x305008: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x305008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x30500c: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x30500Cu;
    SET_GPR_U32(ctx, 31, 0x305014u);
    ctx->pc = 0x305010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30500Cu;
    // 0x305010: 0x26941f80  addiu       $s4, $s4, 0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x30500Cu, 0x305014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305014u;
label_305014:
    // 0x305014: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x305014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x305018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30501c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30501cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x305020: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x305020u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x305024: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x305024u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x305028: 0x2405080c  addiu       $a1, $zero, 0x80C
    ctx->pc = 0x305028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x30502c: 0xc0c041c  jal         func_301070
    ctx->pc = 0x30502Cu;
    SET_GPR_U32(ctx, 31, 0x305034u);
    ctx->pc = 0x305030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30502Cu;
    // 0x305030: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301070u, 0x30502Cu, 0x305034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305034u;
label_305034:
    // 0x305034: 0x26a42a40  addiu       $a0, $s5, 0x2A40
    ctx->pc = 0x305034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 10816));
    // 0x305038: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x305038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30503c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x30503cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x305040: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x305040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x305044: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x305044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x305048: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30504c: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x30504cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x305050: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x305050u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305054: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x305054u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x305058: 0xc0c08d4  jal         func_302350
    ctx->pc = 0x305058u;
    SET_GPR_U32(ctx, 31, 0x305060u);
    ctx->pc = 0x30505Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305058u;
    // 0x30505c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302350u, 0x305058u, 0x305060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305060u;
label_305060:
    // 0x305060: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x305060u;
    {
        const bool branch_taken_0x305060 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x305064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305060u;
        // 0x305064: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305060) {
            ctx->pc = 0x305080u;
            goto label_305080;
        }
    }
    ctx->pc = 0x305068u;
    // 0x305068: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x305068u;
    SET_GPR_U32(ctx, 31, 0x305070u);
    ctx->pc = 0x30506Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305068u;
    // 0x30506c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x305068u, 0x305070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305070u;
label_305070:
    // 0x305070: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x305070u;
    SET_GPR_U32(ctx, 31, 0x305078u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x305070u, 0x305078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305078u;
label_305078:
    // 0x305078: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x305078u;
    {
        const bool branch_taken_0x305078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305078u;
        // 0x30507c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305078) {
            ctx->pc = 0x3050B8u;
            goto label_3050b8;
        }
    }
    ctx->pc = 0x305080u;
label_305080:
    // 0x305080: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x305080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x305084: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x305084u;
    SET_GPR_U32(ctx, 31, 0x30508Cu);
    ctx->pc = 0x305088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305084u;
    // 0x305088: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x305084u, 0x30508Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30508Cu;
label_30508c:
    // 0x30508c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30508Cu;
    {
        const bool branch_taken_0x30508c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x30508c) {
            ctx->pc = 0x3050A4u;
            goto label_3050a4;
        }
    }
    ctx->pc = 0x305094u;
    // 0x305094: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x305094u;
    SET_GPR_U32(ctx, 31, 0x30509Cu);
    ctx->pc = 0x305098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305094u;
    // 0x305098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x305094u, 0x30509Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30509Cu;
label_30509c:
    // 0x30509c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30509Cu;
    {
        const bool branch_taken_0x30509c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3050A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30509Cu;
        // 0x3050a0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30509c) {
            ctx->pc = 0x3050B8u;
            goto label_3050b8;
        }
    }
    ctx->pc = 0x3050A4u;
label_3050a4:
    // 0x3050a4: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x3050A4u;
    SET_GPR_U32(ctx, 31, 0x3050ACu);
    ctx->pc = 0x3050A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3050A4u;
    // 0x3050a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3050A4u, 0x3050ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3050ACu;
label_3050ac:
    // 0x3050ac: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x3050ACu;
    SET_GPR_U32(ctx, 31, 0x3050B4u);
    ctx->pc = 0x3050B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3050ACu;
    // 0x3050b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x3050ACu, 0x3050B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3050B4u;
label_3050b4:
    // 0x3050b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3050b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3050b8:
    // 0x3050b8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x3050b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3050bc: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x3050bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3050c0: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x3050c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3050c4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x3050c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3050c8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x3050c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3050cc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x3050ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3050d0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x3050d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3050d4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3050d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3050d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3050D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3050DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3050D8u;
        // 0x3050dc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3050D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3050E0u;
    // 0x3050e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3050e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3050e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3050e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3050e8: 0xc0c0ff4  jal         func_303FD0
    ctx->pc = 0x3050E8u;
    SET_GPR_U32(ctx, 31, 0x3050F0u);
    ctx->pc = 0x3050ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3050E8u;
    // 0x3050ec: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303FD0u, 0x3050E8u, 0x3050F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3050F0u;
label_3050f0:
    // 0x3050f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3050f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3050f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3050F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3050F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3050F4u;
        // 0x3050f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3050F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3050FCu;
    // 0x3050fc: 0x0  nop
    ctx->pc = 0x3050fcu;
    // NOP
label_305100:
    // 0x305100: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x305100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x305104: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x305104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x305108: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x305108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x30510c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30510cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305110: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x305110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x305114: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x305114u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305118: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x305118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x30511c: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x30511cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x305120: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x305120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x305124: 0x3c160061  lui         $s6, 0x61
    ctx->pc = 0x305124u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)97 << 16));
    // 0x305128: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x305128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x30512c: 0x26d01340  addiu       $s0, $s6, 0x1340
    ctx->pc = 0x30512cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4928));
    // 0x305130: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x305130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x305134: 0xc0c0a30  jal         func_3028C0
    ctx->pc = 0x305134u;
    SET_GPR_U32(ctx, 31, 0x30513Cu);
    ctx->pc = 0x305138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305134u;
    // 0x305138: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028C0u, 0x305134u, 0x30513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30513Cu;
label_30513c:
    // 0x30513c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x30513cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x305140: 0x8c430c1c  lw          $v1, 0xC1C($v0)
    ctx->pc = 0x305140u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F0C1Cu));
    // 0x305144: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x305144u;
    {
        const bool branch_taken_0x305144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x305144) {
            ctx->pc = 0x305148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305144u;
            // 0x305148: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305158u;
            goto label_305158;
        }
    }
    ctx->pc = 0x30514Cu;
    // 0x30514c: 0xc0c0a7a  jal         func_3029E8
    ctx->pc = 0x30514Cu;
    SET_GPR_U32(ctx, 31, 0x305154u);
    ctx->pc = 0x3029E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3029E8u, 0x30514Cu, 0x305154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305154u;
label_305154:
    // 0x305154: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x305154u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_305158:
    // 0x305158: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x305158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30515c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x30515cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x305160: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x305160u;
    {
        const bool branch_taken_0x305160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x305164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305160u;
        // 0x305164: 0xa2020014  sb          $v0, 0x14($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305160) {
            ctx->pc = 0x3051ACu;
            goto label_3051ac;
        }
    }
    ctx->pc = 0x305168u;
    // 0x305168: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x305168u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x30516c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x30516cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x305170: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x305170u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
    // 0x305174: 0x3c130061  lui         $s3, 0x61
    ctx->pc = 0x305174u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)97 << 16));
    // 0x305178: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x305178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30517c: 0x0  nop
    ctx->pc = 0x30517cu;
    // NOP
label_305180:
    // 0x305180: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x305180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x305184: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x305184u;
    {
        const bool branch_taken_0x305184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305184u;
        // 0x305188: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305184) {
            ctx->pc = 0x3051BCu;
            goto label_3051bc;
        }
    }
    ctx->pc = 0x30518Cu;
    // 0x30518c: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x30518cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x305190: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x305190u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x305194: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x305194u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x305198: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x305198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x30519c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x30519Cu;
    {
        const bool branch_taken_0x30519c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30519c) {
            ctx->pc = 0x3051A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30519Cu;
            // 0x3051a0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305180;
        }
    }
    ctx->pc = 0x3051A4u;
    // 0x3051a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3051A4u;
    {
        const bool branch_taken_0x3051a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3051A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051A4u;
        // 0x3051a8: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3051a4) {
            ctx->pc = 0x3051C0u;
            goto label_3051c0;
        }
    }
    ctx->pc = 0x3051ACu;
label_3051ac:
    // 0x3051ac: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x3051acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x3051b0: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x3051b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3051b4: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x3051b4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
    // 0x3051b8: 0x3c130061  lui         $s3, 0x61
    ctx->pc = 0x3051b8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)97 << 16));
label_3051bc:
    // 0x3051bc: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x3051bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_3051c0:
    // 0x3051c0: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3051C0u;
    {
        const bool branch_taken_0x3051c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3051c0) {
            ctx->pc = 0x3051C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3051C0u;
            // 0x3051c4: 0xa2000413  sb          $zero, 0x413($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3051C8u;
            goto label_3051c8;
        }
    }
    ctx->pc = 0x3051C8u;
label_3051c8:
    // 0x3051c8: 0xae150010  sw          $s5, 0x10($s0)
    ctx->pc = 0x3051c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
    // 0x3051cc: 0x24c3ac40  addiu       $v1, $a2, -0x53C0
    ctx->pc = 0x3051ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945856));
    // 0x3051d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3051d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3051d4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3051d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3051d8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3051d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3051dc: 0x26731f80  addiu       $s3, $s3, 0x1F80
    ctx->pc = 0x3051dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8064));
    // 0x3051e0: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x3051e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x3051e4: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x3051E4u;
    SET_GPR_U32(ctx, 31, 0x3051ECu);
    ctx->pc = 0x3051E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3051E4u;
    // 0x3051e8: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x3051E4u, 0x3051ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3051ECu;
label_3051ec:
    // 0x3051ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3051ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3051f0: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x3051f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x3051f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3051f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3051f8: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x3051f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x3051fc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3051fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x305200: 0x26842a40  addiu       $a0, $s4, 0x2A40
    ctx->pc = 0x305200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 10816));
    // 0x305204: 0x26c71340  addiu       $a3, $s6, 0x1340
    ctx->pc = 0x305204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4928));
    // 0x305208: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x305208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x30520c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x30520cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x305210: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305214: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x305214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x305218: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x305218u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x30521c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x30521cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305220: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x305220u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x305224: 0xc0c08d4  jal         func_302350
    ctx->pc = 0x305224u;
    SET_GPR_U32(ctx, 31, 0x30522Cu);
    ctx->pc = 0x305228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305224u;
    // 0x305228: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302350u, 0x305224u, 0x30522Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30522Cu;
label_30522c:
    // 0x30522c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30522Cu;
    {
        const bool branch_taken_0x30522c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x305230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30522Cu;
        // 0x305230: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30522c) {
            ctx->pc = 0x30524Cu;
            goto label_30524c;
        }
    }
    ctx->pc = 0x305234u;
    // 0x305234: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x305234u;
    SET_GPR_U32(ctx, 31, 0x30523Cu);
    ctx->pc = 0x305238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305234u;
    // 0x305238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x305234u, 0x30523Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30523Cu;
label_30523c:
    // 0x30523c: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x30523Cu;
    SET_GPR_U32(ctx, 31, 0x305244u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x30523Cu, 0x305244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305244u;
label_305244:
    // 0x305244: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x305244u;
    {
        const bool branch_taken_0x305244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305244u;
        // 0x305248: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305244) {
            ctx->pc = 0x305284u;
            goto label_305284;
        }
    }
    ctx->pc = 0x30524Cu;
label_30524c:
    // 0x30524c: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x30524cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x305250: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x305250u;
    SET_GPR_U32(ctx, 31, 0x305258u);
    ctx->pc = 0x305254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305250u;
    // 0x305254: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x305250u, 0x305258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305258u;
label_305258:
    // 0x305258: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x305258u;
    {
        const bool branch_taken_0x305258 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x305258) {
            ctx->pc = 0x305270u;
            goto label_305270;
        }
    }
    ctx->pc = 0x305260u;
    // 0x305260: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x305260u;
    SET_GPR_U32(ctx, 31, 0x305268u);
    ctx->pc = 0x305264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305260u;
    // 0x305264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x305260u, 0x305268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305268u;
label_305268:
    // 0x305268: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x305268u;
    {
        const bool branch_taken_0x305268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305268u;
        // 0x30526c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305268) {
            ctx->pc = 0x305284u;
            goto label_305284;
        }
    }
    ctx->pc = 0x305270u;
label_305270:
    // 0x305270: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x305270u;
    SET_GPR_U32(ctx, 31, 0x305278u);
    ctx->pc = 0x305274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305270u;
    // 0x305274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x305270u, 0x305278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305278u;
label_305278:
    // 0x305278: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x305278u;
    SET_GPR_U32(ctx, 31, 0x305280u);
    ctx->pc = 0x30527Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305278u;
    // 0x30527c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x305278u, 0x305280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305280u;
label_305280:
    // 0x305280: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x305280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_305284:
    // 0x305284: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x305284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x305288: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x305288u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30528c: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x30528cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x305290: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x305290u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x305294: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x305294u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x305298: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x305298u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30529c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x30529cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3052a0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3052a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3052a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3052A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3052A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3052A4u;
        // 0x3052a8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3052A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3052ACu;
    // 0x3052ac: 0x0  nop
    ctx->pc = 0x3052acu;
    // NOP
label_3052b0:
    // 0x3052b0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3052b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x3052b4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3052b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x3052b8: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x3052b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x3052bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3052bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3052c0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x3052c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x3052c4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x3052c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3052c8: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x3052c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x3052cc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3052ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3052d0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x3052d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x3052d4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3052d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3052d8: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x3052d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x3052dc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3052dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3052e0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x3052e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x3052e4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x3052e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3052e8: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x3052e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x3052ec: 0x3c1e0061  lui         $fp, 0x61
    ctx->pc = 0x3052ecu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)97 << 16));
    // 0x3052f0: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x3052f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x3052f4: 0x27d21340  addiu       $s2, $fp, 0x1340
    ctx->pc = 0x3052f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4928));
    // 0x3052f8: 0xc0c0a30  jal         func_3028C0
    ctx->pc = 0x3052F8u;
    SET_GPR_U32(ctx, 31, 0x305300u);
    ctx->pc = 0x3052FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3052F8u;
    // 0x3052fc: 0xffb40080  sd          $s4, 0x80($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028C0u, 0x3052F8u, 0x305300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305300u;
label_305300:
    // 0x305300: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x305300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x305304: 0x8c620c1c  lw          $v0, 0xC1C($v1)
    ctx->pc = 0x305304u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F0C1Cu));
    // 0x305308: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x305308u;
    {
        const bool branch_taken_0x305308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305308) {
            ctx->pc = 0x30530Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305308u;
            // 0x30530c: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30531Cu;
            goto label_30531c;
        }
    }
    ctx->pc = 0x305310u;
    // 0x305310: 0xc0c0a7a  jal         func_3029E8
    ctx->pc = 0x305310u;
    SET_GPR_U32(ctx, 31, 0x305318u);
    ctx->pc = 0x3029E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3029E8u, 0x305310u, 0x305318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305318u;
label_305318:
    // 0x305318: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x305318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_30531c:
    // 0x30531c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30531cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305320: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x305320u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x305324: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x305324u;
    {
        const bool branch_taken_0x305324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x305328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305324u;
        // 0x305328: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305324) {
            ctx->pc = 0x305364u;
            goto label_305364;
        }
    }
    ctx->pc = 0x30532Cu;
    // 0x30532c: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x30532cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x305330: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x305330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x305334: 0x0  nop
    ctx->pc = 0x305334u;
    // NOP
label_305338:
    // 0x305338: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x305338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x30533c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30533Cu;
    {
        const bool branch_taken_0x30533c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30533Cu;
        // 0x305340: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30533c) {
            ctx->pc = 0x305368u;
            goto label_305368;
        }
    }
    ctx->pc = 0x305344u;
    // 0x305344: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x305344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x305348: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x305348u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30534c: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x30534cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x305350: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x305350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x305354: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x305354u;
    {
        const bool branch_taken_0x305354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x305354) {
            ctx->pc = 0x305358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305354u;
            // 0x305358: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305338;
        }
    }
    ctx->pc = 0x30535Cu;
    // 0x30535c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x30535Cu;
    {
        const bool branch_taken_0x30535c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30535Cu;
        // 0x305360: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30535c) {
            ctx->pc = 0x30536Cu;
            goto label_30536c;
        }
    }
    ctx->pc = 0x305364u;
label_305364:
    // 0x305364: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x305364u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
label_305368:
    // 0x305368: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x305368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_30536c:
    // 0x30536c: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x30536Cu;
    {
        const bool branch_taken_0x30536c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x30536c) {
            ctx->pc = 0x305370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30536Cu;
            // 0x305370: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305374u;
            goto label_305374;
        }
    }
    ctx->pc = 0x305374u;
label_305374:
    // 0x305374: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x305374u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x305378: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x305378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30537c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x30537cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x305380: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x305380u;
    {
        const bool branch_taken_0x305380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x305384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305380u;
        // 0x305384: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305380) {
            ctx->pc = 0x3053B4u;
            goto label_3053b4;
        }
    }
    ctx->pc = 0x305388u;
    // 0x305388: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x305388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x30538c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x30538cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_305390:
    // 0x305390: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x305390u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x305394: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x305394u;
    {
        const bool branch_taken_0x305394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305394u;
        // 0x305398: 0x2651021  addu        $v0, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305394) {
            ctx->pc = 0x3053B4u;
            goto label_3053b4;
        }
    }
    ctx->pc = 0x30539Cu;
    // 0x30539c: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x30539cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3053a0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3053a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3053a4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3053a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3053a8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x3053a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3053ac: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3053ACu;
    {
        const bool branch_taken_0x3053ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3053ac) {
            ctx->pc = 0x3053B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3053ACu;
            // 0x3053b0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305390;
        }
    }
    ctx->pc = 0x3053B4u;
label_3053b4:
    // 0x3053b4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x3053b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3053b8: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3053B8u;
    {
        const bool branch_taken_0x3053b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3053b8) {
            ctx->pc = 0x3053BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3053B8u;
            // 0x3053bc: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3053C0u;
            goto label_3053c0;
        }
    }
    ctx->pc = 0x3053C0u;
label_3053c0:
    // 0x3053c0: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3053C0u;
    {
        const bool branch_taken_0x3053c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x3053c0) {
            ctx->pc = 0x3053D8u;
            goto label_3053d8;
        }
    }
    ctx->pc = 0x3053C8u;
    // 0x3053c8: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x3053C8u;
    SET_GPR_U32(ctx, 31, 0x3053D0u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x3053C8u, 0x3053D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3053D0u;
label_3053d0:
    // 0x3053d0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x3053D0u;
    {
        const bool branch_taken_0x3053d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3053D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3053D0u;
        // 0x3053d4: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3053d0) {
            ctx->pc = 0x305500u;
            goto label_305500;
        }
    }
    ctx->pc = 0x3053D8u;
label_3053d8:
    // 0x3053d8: 0x1a200011  blez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3053D8u;
    {
        const bool branch_taken_0x3053d8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3053DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3053D8u;
        // 0x3053dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3053d8) {
            ctx->pc = 0x305420u;
            goto label_305420;
        }
    }
    ctx->pc = 0x3053E0u;
    // 0x3053e0: 0x2646080c  addiu       $a2, $s2, 0x80C
    ctx->pc = 0x3053e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2060));
    // 0x3053e4: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x3053e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
    // 0x3053e8: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x3053e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3053ec: 0x3c150061  lui         $s5, 0x61
    ctx->pc = 0x3053ecu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
    // 0x3053f0: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x3053f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
    // 0x3053f4: 0x0  nop
    ctx->pc = 0x3053f4u;
    // NOP
label_3053f8:
    // 0x3053f8: 0x2c51021  addu        $v0, $s6, $a1
    ctx->pc = 0x3053f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x3053fc: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x3053fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x305400: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x305400u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x305404: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x305404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x305408: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x305408u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x30540c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x30540cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x305410: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x305410u;
    {
        const bool branch_taken_0x305410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305410) {
            ctx->pc = 0x3053F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3053f8;
        }
    }
    ctx->pc = 0x305418u;
    // 0x305418: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x305418u;
    {
        const bool branch_taken_0x305418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305418u;
        // 0x30541c: 0xae510c10  sw          $s1, 0xC10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3088), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305418) {
            ctx->pc = 0x305434u;
            goto label_305434;
        }
    }
    ctx->pc = 0x305420u;
label_305420:
    // 0x305420: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x305420u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
    // 0x305424: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x305424u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x305428: 0x3c150061  lui         $s5, 0x61
    ctx->pc = 0x305428u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
    // 0x30542c: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x30542cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
    // 0x305430: 0xae510c10  sw          $s1, 0xC10($s2)
    ctx->pc = 0x305430u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3088), GPR_U32(ctx, 17));
label_305434:
    // 0x305434: 0x24e3ac58  addiu       $v1, $a3, -0x53A8
    ctx->pc = 0x305434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945880));
    // 0x305438: 0xae570c0c  sw          $s7, 0xC0C($s2)
    ctx->pc = 0x305438u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3084), GPR_U32(ctx, 23));
    // 0x30543c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30543cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305440: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x305440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x305444: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x305444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x305448: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x305448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x30544c: 0x27d01340  addiu       $s0, $fp, 0x1340
    ctx->pc = 0x30544cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4928));
    // 0x305450: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x305450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x305454: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x305454u;
    SET_GPR_U32(ctx, 31, 0x30545Cu);
    ctx->pc = 0x305458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305454u;
    // 0x305458: 0x26941f80  addiu       $s4, $s4, 0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x305454u, 0x30545Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30545Cu;
label_30545c:
    // 0x30545c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30545cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x305460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305464: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x305464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x305468: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x305468u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x30546c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x30546cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x305470: 0x24050c14  addiu       $a1, $zero, 0xC14
    ctx->pc = 0x305470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3092));
    // 0x305474: 0xc0c041c  jal         func_301070
    ctx->pc = 0x305474u;
    SET_GPR_U32(ctx, 31, 0x30547Cu);
    ctx->pc = 0x305478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305474u;
    // 0x305478: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301070u, 0x305474u, 0x30547Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30547Cu;
label_30547c:
    // 0x30547c: 0x26a42a40  addiu       $a0, $s5, 0x2A40
    ctx->pc = 0x30547cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 10816));
    // 0x305480: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x305480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305484: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x305484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x305488: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x305488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x30548c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x30548cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x305490: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305494: 0x24080c14  addiu       $t0, $zero, 0xC14
    ctx->pc = 0x305494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3092));
    // 0x305498: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x305498u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30549c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x30549cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3054a0: 0xc0c08d4  jal         func_302350
    ctx->pc = 0x3054A0u;
    SET_GPR_U32(ctx, 31, 0x3054A8u);
    ctx->pc = 0x3054A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3054A0u;
    // 0x3054a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302350u, 0x3054A0u, 0x3054A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3054A8u;
label_3054a8:
    // 0x3054a8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3054A8u;
    {
        const bool branch_taken_0x3054a8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3054ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3054A8u;
        // 0x3054ac: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3054a8) {
            ctx->pc = 0x3054C8u;
            goto label_3054c8;
        }
    }
    ctx->pc = 0x3054B0u;
    // 0x3054b0: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x3054B0u;
    SET_GPR_U32(ctx, 31, 0x3054B8u);
    ctx->pc = 0x3054B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3054B0u;
    // 0x3054b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x3054B0u, 0x3054B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3054B8u;
label_3054b8:
    // 0x3054b8: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x3054B8u;
    SET_GPR_U32(ctx, 31, 0x3054C0u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x3054B8u, 0x3054C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3054C0u;
label_3054c0:
    // 0x3054c0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3054C0u;
    {
        const bool branch_taken_0x3054c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3054C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3054C0u;
        // 0x3054c4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3054c0) {
            ctx->pc = 0x305500u;
            goto label_305500;
        }
    }
    ctx->pc = 0x3054C8u;
label_3054c8:
    // 0x3054c8: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x3054c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x3054cc: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x3054CCu;
    SET_GPR_U32(ctx, 31, 0x3054D4u);
    ctx->pc = 0x3054D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3054CCu;
    // 0x3054d0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x3054CCu, 0x3054D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3054D4u;
label_3054d4:
    // 0x3054d4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3054D4u;
    {
        const bool branch_taken_0x3054d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3054d4) {
            ctx->pc = 0x3054ECu;
            goto label_3054ec;
        }
    }
    ctx->pc = 0x3054DCu;
    // 0x3054dc: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x3054DCu;
    SET_GPR_U32(ctx, 31, 0x3054E4u);
    ctx->pc = 0x3054E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3054DCu;
    // 0x3054e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x3054DCu, 0x3054E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3054E4u;
label_3054e4:
    // 0x3054e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3054E4u;
    {
        const bool branch_taken_0x3054e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3054E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3054E4u;
        // 0x3054e8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3054e4) {
            ctx->pc = 0x305500u;
            goto label_305500;
        }
    }
    ctx->pc = 0x3054ECu;
label_3054ec:
    // 0x3054ec: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x3054ECu;
    SET_GPR_U32(ctx, 31, 0x3054F4u);
    ctx->pc = 0x3054F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3054ECu;
    // 0x3054f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3054ECu, 0x3054F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3054F4u;
label_3054f4:
    // 0x3054f4: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x3054F4u;
    SET_GPR_U32(ctx, 31, 0x3054FCu);
    ctx->pc = 0x3054F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3054F4u;
    // 0x3054f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x3054F4u, 0x3054FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3054FCu;
label_3054fc:
    // 0x3054fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3054fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_305500:
    // 0x305500: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x305500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x305504: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x305504u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x305508: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x305508u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30550c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x30550cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x305510: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x305510u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x305514: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x305514u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x305518: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x305518u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30551c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x30551cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x305520: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x305520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x305524: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x305524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x305528: 0x3e00008  jr          $ra
    ctx->pc = 0x305528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305528u;
        // 0x30552c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305530u;
    // 0x305530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x305530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x305534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x305534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x305538: 0xc0c0ff4  jal         func_303FD0
    ctx->pc = 0x305538u;
    SET_GPR_U32(ctx, 31, 0x305540u);
    ctx->pc = 0x30553Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305538u;
    // 0x30553c: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303FD0u, 0x305538u, 0x305540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305540u;
label_305540:
    // 0x305540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x305540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305544: 0x3e00008  jr          $ra
    ctx->pc = 0x305544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305544u;
        // 0x305548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30554Cu;
    // 0x30554c: 0x0  nop
    ctx->pc = 0x30554cu;
    // NOP
label_305550:
    // 0x305550: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x305550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x305554: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x305554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x305558: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x305558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x30555c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x30555cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305560: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x305560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x305564: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x305564u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305568: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x305568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x30556c: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x30556cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
    // 0x305570: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x305570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x305574: 0x26911340  addiu       $s1, $s4, 0x1340
    ctx->pc = 0x305574u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4928));
    // 0x305578: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x305578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x30557c: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x30557cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x305580: 0xc0c0910  jal         func_302440
    ctx->pc = 0x305580u;
    SET_GPR_U32(ctx, 31, 0x305588u);
    ctx->pc = 0x305584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305580u;
    // 0x305584: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302440u, 0x305580u, 0x305588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305588u;
label_305588:
    // 0x305588: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x305588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30558c: 0xc0c0a30  jal         func_3028C0
    ctx->pc = 0x30558Cu;
    SET_GPR_U32(ctx, 31, 0x305594u);
    ctx->pc = 0x305590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30558Cu;
    // 0x305590: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028C0u, 0x30558Cu, 0x305594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305594u;
label_305594:
    // 0x305594: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x305594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x305598: 0x8c620c1c  lw          $v0, 0xC1C($v1)
    ctx->pc = 0x305598u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F0C1Cu));
    // 0x30559c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30559Cu;
    {
        const bool branch_taken_0x30559c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30559c) {
            ctx->pc = 0x3055B8u;
            goto label_3055b8;
        }
    }
    ctx->pc = 0x3055A4u;
    // 0x3055a4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3055A4u;
    {
        const bool branch_taken_0x3055a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3055a4) {
            ctx->pc = 0x3055B8u;
            goto label_3055b8;
        }
    }
    ctx->pc = 0x3055ACu;
    // 0x3055ac: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x3055acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3055b0: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3055B0u;
    {
        const bool branch_taken_0x3055b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3055B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3055B0u;
        // 0x3055b4: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3055b0) {
            ctx->pc = 0x3055C8u;
            goto label_3055c8;
        }
    }
    ctx->pc = 0x3055B8u;
label_3055b8:
    // 0x3055b8: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x3055B8u;
    SET_GPR_U32(ctx, 31, 0x3055C0u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x3055B8u, 0x3055C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3055C0u;
label_3055c0:
    // 0x3055c0: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x3055C0u;
    {
        const bool branch_taken_0x3055c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3055C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3055C0u;
        // 0x3055c4: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3055c0) {
            ctx->pc = 0x305764u;
            goto label_305764;
        }
    }
    ctx->pc = 0x3055C8u;
label_3055c8:
    // 0x3055c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3055c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3055cc: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x3055ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
    // 0x3055d0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3055d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x3055d4: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x3055d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3055d8: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x3055d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x3055dc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3055dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3055e0: 0xfe330010  sd          $s3, 0x10($s1)
    ctx->pc = 0x3055e0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 19));
    // 0x3055e4: 0xae350018  sw          $s5, 0x18($s1)
    ctx->pc = 0x3055e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 21));
    // 0x3055e8: 0x2463ac70  addiu       $v1, $v1, -0x5390
    ctx->pc = 0x3055e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945904));
    // 0x3055ec: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x3055ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x3055f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3055f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3055f4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3055f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3055f8: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x3055f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x3055fc: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x3055fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x305600: 0x32508000  andi        $s0, $s2, 0x8000
    ctx->pc = 0x305600u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x305604: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x305604u;
    SET_GPR_U32(ctx, 31, 0x30560Cu);
    ctx->pc = 0x305608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305604u;
    // 0x305608: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x305604u, 0x30560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30560Cu;
label_30560c:
    // 0x30560c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x30560cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305610: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x305610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x305614: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x305614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x305618: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x305618u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x30561c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30561cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x305620: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x305620u;
    {
        const bool branch_taken_0x305620 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x305624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305620u;
        // 0x305624: 0xae931340  sw          $s3, 0x1340($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4928), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305620) {
            ctx->pc = 0x3056B8u;
            goto label_3056b8;
        }
    }
    ctx->pc = 0x305628u;
    // 0x305628: 0x3c15004f  lui         $s5, 0x4F
    ctx->pc = 0x305628u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)79 << 16));
    // 0x30562c: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x30562Cu;
    SET_GPR_U32(ctx, 31, 0x305634u);
    ctx->pc = 0x305630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30562Cu;
    // 0x305630: 0x8ea40c2c  lw          $a0, 0xC2C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x30562Cu, 0x305634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305634u;
label_305634:
    // 0x305634: 0x3c07004f  lui         $a3, 0x4F
    ctx->pc = 0x305634u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)79 << 16));
    // 0x305638: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30563c: 0x8ce30b98  lw          $v1, 0xB98($a3)
    ctx->pc = 0x30563cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F0B98u));
    // 0x305640: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x305640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x305644: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x305644u;
    {
        const bool branch_taken_0x305644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x305648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305644u;
        // 0x305648: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305644) {
            ctx->pc = 0x305668u;
            goto label_305668;
        }
    }
    ctx->pc = 0x30564Cu;
    // 0x30564c: 0x8e831340  lw          $v1, 0x1340($s4)
    ctx->pc = 0x30564cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4928)));
    // 0x305650: 0x3c160061  lui         $s6, 0x61
    ctx->pc = 0x305650u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)97 << 16));
    // 0x305654: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x305654u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
    // 0x305658: 0x31023  negu        $v0, $v1
    ctx->pc = 0x305658u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x30565c: 0xace30b98  sw          $v1, 0xB98($a3)
    ctx->pc = 0x30565cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2968), GPR_U32(ctx, 3));
    // 0x305660: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x305660u;
    {
        const bool branch_taken_0x305660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305660u;
        // 0x305664: 0xae821340  sw          $v0, 0x1340($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4928), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305660) {
            ctx->pc = 0x3056A8u;
            goto label_3056a8;
        }
    }
    ctx->pc = 0x305668u;
label_305668:
    // 0x305668: 0x3c160061  lui         $s6, 0x61
    ctx->pc = 0x305668u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)97 << 16));
    // 0x30566c: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x30566cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
    // 0x305670: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x305670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_305674:
    // 0x305674: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x305674u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x305678: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x305678u;
    {
        const bool branch_taken_0x305678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305678u;
        // 0x30567c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305678) {
            ctx->pc = 0x3056A8u;
            goto label_3056a8;
        }
    }
    ctx->pc = 0x305680u;
    // 0x305680: 0x24e30b98  addiu       $v1, $a3, 0xB98
    ctx->pc = 0x305680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2968));
    // 0x305684: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x305684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x305688: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x305688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30568c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x30568cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x305690: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x305690u;
    {
        const bool branch_taken_0x305690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x305694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305690u;
        // 0x305694: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305690) {
            ctx->pc = 0x305674u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305674;
        }
    }
    ctx->pc = 0x305698u;
    // 0x305698: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x305698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30569c: 0x21823  negu        $v1, $v0
    ctx->pc = 0x30569cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3056a0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3056a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3056a4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3056a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3056a8:
    // 0x3056a8: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x3056A8u;
    SET_GPR_U32(ctx, 31, 0x3056B0u);
    ctx->pc = 0x3056ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3056A8u;
    // 0x3056ac: 0x8ea40c2c  lw          $a0, 0xC2C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x3056A8u, 0x3056B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3056B0u;
label_3056b0:
    // 0x3056b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3056B0u;
    {
        const bool branch_taken_0x3056b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3056B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3056B0u;
        // 0x3056b4: 0x26101f80  addiu       $s0, $s0, 0x1F80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3056b0) {
            ctx->pc = 0x3056C8u;
            goto label_3056c8;
        }
    }
    ctx->pc = 0x3056B8u;
label_3056b8:
    // 0x3056b8: 0x3c160061  lui         $s6, 0x61
    ctx->pc = 0x3056b8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)97 << 16));
    // 0x3056bc: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x3056bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
    // 0x3056c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3056c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3056c4: 0x26101f80  addiu       $s0, $s0, 0x1F80
    ctx->pc = 0x3056c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8064));
label_3056c8:
    // 0x3056c8: 0x26c42a40  addiu       $a0, $s6, 0x2A40
    ctx->pc = 0x3056c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 10816));
    // 0x3056cc: 0x26871340  addiu       $a3, $s4, 0x1340
    ctx->pc = 0x3056ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4928));
    // 0x3056d0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3056d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3056d4: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x3056d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x3056d8: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x3056d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x3056dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3056dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3056e0: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x3056e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3056e4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3056e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3056e8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3056e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3056ec: 0xc0c08d4  jal         func_302350
    ctx->pc = 0x3056ECu;
    SET_GPR_U32(ctx, 31, 0x3056F4u);
    ctx->pc = 0x3056F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3056ECu;
    // 0x3056f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302350u, 0x3056ECu, 0x3056F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3056F4u;
label_3056f4:
    // 0x3056f4: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3056F4u;
    {
        const bool branch_taken_0x3056f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3056F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3056F4u;
        // 0x3056f8: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3056f4) {
            ctx->pc = 0x305714u;
            goto label_305714;
        }
    }
    ctx->pc = 0x3056FCu;
    // 0x3056fc: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x3056FCu;
    SET_GPR_U32(ctx, 31, 0x305704u);
    ctx->pc = 0x305700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3056FCu;
    // 0x305700: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x3056FCu, 0x305704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305704u;
label_305704:
    // 0x305704: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x305704u;
    SET_GPR_U32(ctx, 31, 0x30570Cu);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x305704u, 0x30570Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30570Cu;
label_30570c:
    // 0x30570c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x30570Cu;
    {
        const bool branch_taken_0x30570c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30570Cu;
        // 0x305710: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30570c) {
            ctx->pc = 0x305764u;
            goto label_305764;
        }
    }
    ctx->pc = 0x305714u;
label_305714:
    // 0x305714: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x305714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x305718: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x305718u;
    SET_GPR_U32(ctx, 31, 0x305720u);
    ctx->pc = 0x30571Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305718u;
    // 0x30571c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x305718u, 0x305720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305720u;
label_305720:
    // 0x305720: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x305720u;
    {
        const bool branch_taken_0x305720 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x305720) {
            ctx->pc = 0x305738u;
            goto label_305738;
        }
    }
    ctx->pc = 0x305728u;
    // 0x305728: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x305728u;
    SET_GPR_U32(ctx, 31, 0x305730u);
    ctx->pc = 0x30572Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305728u;
    // 0x30572c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x305728u, 0x305730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305730u;
label_305730:
    // 0x305730: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x305730u;
    {
        const bool branch_taken_0x305730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305730u;
        // 0x305734: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305730) {
            ctx->pc = 0x305764u;
            goto label_305764;
        }
    }
    ctx->pc = 0x305738u;
label_305738:
    // 0x305738: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x305738u;
    {
        const bool branch_taken_0x305738 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x305738) {
            ctx->pc = 0x305750u;
            goto label_305750;
        }
    }
    ctx->pc = 0x305740u;
    // 0x305740: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x305740u;
    SET_GPR_U32(ctx, 31, 0x305748u);
    ctx->pc = 0x305744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305740u;
    // 0x305744: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x305740u, 0x305748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305748u;
label_305748:
    // 0x305748: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x305748u;
    {
        const bool branch_taken_0x305748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305748u;
        // 0x30574c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305748) {
            ctx->pc = 0x305764u;
            goto label_305764;
        }
    }
    ctx->pc = 0x305750u;
label_305750:
    // 0x305750: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x305750u;
    SET_GPR_U32(ctx, 31, 0x305758u);
    ctx->pc = 0x305754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305750u;
    // 0x305754: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x305750u, 0x305758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305758u;
label_305758:
    // 0x305758: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x305758u;
    SET_GPR_U32(ctx, 31, 0x305760u);
    ctx->pc = 0x30575Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305758u;
    // 0x30575c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x305758u, 0x305760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305760u;
label_305760:
    // 0x305760: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x305760u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_305764:
    // 0x305764: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x305764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x305768: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x305768u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30576c: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x30576cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x305770: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x305770u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x305774: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x305774u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x305778: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x305778u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30577c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x30577cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x305780: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x305780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x305784: 0x3e00008  jr          $ra
    ctx->pc = 0x305784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305784u;
        // 0x305788: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30578Cu;
    // 0x30578c: 0x0  nop
    ctx->pc = 0x30578cu;
    // NOP
label_305790:
    // 0x305790: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x305790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x305794: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x305794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x305798: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x305798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x30579c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30579cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3057a0: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x3057a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x3057a4: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x3057a4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3057a8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x3057a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x3057ac: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3057acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3057b0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3057b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x3057b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3057b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3057b8: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x3057b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x3057bc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3057bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3057c0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x3057c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x3057c4: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x3057c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x3057c8: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x3057c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x3057cc: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x3057ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x3057d0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x3057d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x3057d4: 0xc0c0a30  jal         func_3028C0
    ctx->pc = 0x3057D4u;
    SET_GPR_U32(ctx, 31, 0x3057DCu);
    ctx->pc = 0x3057D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3057D4u;
    // 0x3057d8: 0xafa80034  sw          $t0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028C0u, 0x3057D4u, 0x3057DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3057DCu;
label_3057dc:
    // 0x3057dc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3057dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3057e0: 0x24511340  addiu       $s1, $v0, 0x1340
    ctx->pc = 0x3057e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4928));
    // 0x3057e4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x3057e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x3057e8: 0x8c430c1c  lw          $v1, 0xC1C($v0)
    ctx->pc = 0x3057e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F0C1Cu));
    // 0x3057ec: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3057ECu;
    {
        const bool branch_taken_0x3057ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3057ec) {
            ctx->pc = 0x3057F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3057ECu;
            // 0x3057f0: 0x92620000  lbu         $v0, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305800u;
            goto label_305800;
        }
    }
    ctx->pc = 0x3057F4u;
    // 0x3057f4: 0xc0c0a7a  jal         func_3029E8
    ctx->pc = 0x3057F4u;
    SET_GPR_U32(ctx, 31, 0x3057FCu);
    ctx->pc = 0x3029E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3029E8u, 0x3057F4u, 0x3057FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3057FCu;
label_3057fc:
    // 0x3057fc: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3057fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_305800:
    // 0x305800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x305800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305804: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x305804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x305808: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x305808u;
    {
        const bool branch_taken_0x305808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305808u;
        // 0x30580c: 0xa222000c  sb          $v0, 0xC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305808) {
            ctx->pc = 0x305844u;
            goto label_305844;
        }
    }
    ctx->pc = 0x305810u;
    // 0x305810: 0x2e060401  sltiu       $a2, $s0, 0x401
    ctx->pc = 0x305810u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x305814: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x305814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_305818:
    // 0x305818: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x305818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x30581c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30581Cu;
    {
        const bool branch_taken_0x30581c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30581Cu;
        // 0x305820: 0x2651021  addu        $v0, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30581c) {
            ctx->pc = 0x305848u;
            goto label_305848;
        }
    }
    ctx->pc = 0x305824u;
    // 0x305824: 0x2252021  addu        $a0, $s1, $a1
    ctx->pc = 0x305824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x305828: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x305828u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30582c: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x30582cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x305830: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x305830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x305834: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x305834u;
    {
        const bool branch_taken_0x305834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x305834) {
            ctx->pc = 0x305838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305834u;
            // 0x305838: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305818;
        }
    }
    ctx->pc = 0x30583Cu;
    // 0x30583c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x30583Cu;
    {
        const bool branch_taken_0x30583c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30583Cu;
        // 0x305840: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30583c) {
            ctx->pc = 0x30584Cu;
            goto label_30584c;
        }
    }
    ctx->pc = 0x305844u;
label_305844:
    // 0x305844: 0x2e060401  sltiu       $a2, $s0, 0x401
    ctx->pc = 0x305844u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
label_305848:
    // 0x305848: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x305848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_30584c:
    // 0x30584c: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x30584Cu;
    {
        const bool branch_taken_0x30584c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x30584c) {
            ctx->pc = 0x305850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30584Cu;
            // 0x305850: 0xa220040b  sb          $zero, 0x40B($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305854u;
            goto label_305854;
        }
    }
    ctx->pc = 0x305854u;
label_305854:
    // 0x305854: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x305854u;
    {
        const bool branch_taken_0x305854 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x305858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305854u;
        // 0x305858: 0x2fc20401  sltiu       $v0, $fp, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x305854) {
            ctx->pc = 0x305890u;
            goto label_305890;
        }
    }
    ctx->pc = 0x30585Cu;
    // 0x30585c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30585Cu;
    {
        const bool branch_taken_0x30585c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30585Cu;
        // 0x305860: 0x24024601  addiu       $v0, $zero, 0x4601 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17921));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30585c) {
            ctx->pc = 0x305890u;
            goto label_305890;
        }
    }
    ctx->pc = 0x305864u;
    // 0x305864: 0x16a2000e  bne         $s5, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x305864u;
    {
        const bool branch_taken_0x305864 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x305864) {
            ctx->pc = 0x3058A0u;
            goto label_3058a0;
        }
    }
    ctx->pc = 0x30586Cu;
    // 0x30586c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x30586cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x305870: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x305870u;
    {
        const bool branch_taken_0x305870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305870) {
            ctx->pc = 0x305874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305870u;
            // 0x305874: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305888u;
            goto label_305888;
        }
    }
    ctx->pc = 0x305878u;
    // 0x305878: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x305878u;
    SET_GPR_U32(ctx, 31, 0x305880u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x305878u, 0x305880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305880u;
label_305880:
    // 0x305880: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x305880u;
    {
        const bool branch_taken_0x305880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305880u;
        // 0x305884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305880) {
            ctx->pc = 0x305A08u;
            goto label_305a08;
        }
    }
    ctx->pc = 0x305888u;
label_305888:
    // 0x305888: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x305888u;
    {
        const bool branch_taken_0x305888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305888) {
            ctx->pc = 0x3058A0u;
            goto label_3058a0;
        }
    }
    ctx->pc = 0x305890u;
label_305890:
    // 0x305890: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x305890u;
    SET_GPR_U32(ctx, 31, 0x305898u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x305890u, 0x305898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305898u;
label_305898:
    // 0x305898: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x305898u;
    {
        const bool branch_taken_0x305898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305898u;
        // 0x30589c: 0x2402ffea  addiu       $v0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305898) {
            ctx->pc = 0x305A08u;
            goto label_305a08;
        }
    }
    ctx->pc = 0x3058A0u;
label_3058a0:
    // 0x3058a0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3058A0u;
    {
        const bool branch_taken_0x3058a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3058A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3058A0u;
        // 0x3058a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3058a0) {
            ctx->pc = 0x3058E8u;
            goto label_3058e8;
        }
    }
    ctx->pc = 0x3058A8u;
    // 0x3058a8: 0x2626040c  addiu       $a2, $s1, 0x40C
    ctx->pc = 0x3058a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1036));
    // 0x3058ac: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x3058acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
    // 0x3058b0: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x3058b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3058b4: 0x3c170061  lui         $s7, 0x61
    ctx->pc = 0x3058b4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)97 << 16));
    // 0x3058b8: 0x3c160061  lui         $s6, 0x61
    ctx->pc = 0x3058b8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)97 << 16));
    // 0x3058bc: 0x0  nop
    ctx->pc = 0x3058bcu;
    // NOP
label_3058c0:
    // 0x3058c0: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x3058c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x3058c4: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x3058c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3058c8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3058c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3058cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3058ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3058d0: 0xb0102b  sltu        $v0, $a1, $s0
    ctx->pc = 0x3058d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3058d4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3058d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3058d8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3058D8u;
    {
        const bool branch_taken_0x3058d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3058d8) {
            ctx->pc = 0x3058C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3058c0;
        }
    }
    ctx->pc = 0x3058E0u;
    // 0x3058e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3058E0u;
    {
        const bool branch_taken_0x3058e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3058E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3058E0u;
        // 0x3058e4: 0xae300810  sw          $s0, 0x810($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2064), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3058e0) {
            ctx->pc = 0x3058FCu;
            goto label_3058fc;
        }
    }
    ctx->pc = 0x3058E8u;
label_3058e8:
    // 0x3058e8: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x3058e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
    // 0x3058ec: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x3058ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3058f0: 0x3c170061  lui         $s7, 0x61
    ctx->pc = 0x3058f0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)97 << 16));
    // 0x3058f4: 0x3c160061  lui         $s6, 0x61
    ctx->pc = 0x3058f4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)97 << 16));
    // 0x3058f8: 0xae300810  sw          $s0, 0x810($s1)
    ctx->pc = 0x3058f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2064), GPR_U32(ctx, 16));
label_3058fc:
    // 0x3058fc: 0x24e3ac88  addiu       $v1, $a3, -0x5378
    ctx->pc = 0x3058fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945928));
    // 0x305900: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x305900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305904: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x305904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x305908: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x305908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x30590c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x30590cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x305910: 0xae35080c  sw          $s5, 0x80C($s1)
    ctx->pc = 0x305910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2060), GPR_U32(ctx, 21));
    // 0x305914: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x305914u;
    SET_GPR_U32(ctx, 31, 0x30591Cu);
    ctx->pc = 0x305918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305914u;
    // 0x305918: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x305914u, 0x30591Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30591Cu;
label_30591c:
    // 0x30591c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x30591cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305920: 0xae3e0818  sw          $fp, 0x818($s1)
    ctx->pc = 0x305920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 30));
    // 0x305924: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x305924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x305928: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x305928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x30592c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x30592cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x305930: 0x24034601  addiu       $v1, $zero, 0x4601
    ctx->pc = 0x305930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17921));
    // 0x305934: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x305934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x305938: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x305938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x30593c: 0x16a3000a  bne         $s5, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x30593Cu;
    {
        const bool branch_taken_0x30593c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x305940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30593Cu;
        // 0x305940: 0xae220814  sw          $v0, 0x814($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2068), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30593c) {
            ctx->pc = 0x305968u;
            goto label_305968;
        }
    }
    ctx->pc = 0x305944u;
    // 0x305944: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x305944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x305948: 0x2411001c  addiu       $s1, $zero, 0x1C
    ctx->pc = 0x305948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x30594c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x30594cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x305950: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x305950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x305954: 0x2812  mflo        $a1
    ctx->pc = 0x305954u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x305958: 0xc0c041c  jal         func_301070
    ctx->pc = 0x305958u;
    SET_GPR_U32(ctx, 31, 0x305960u);
    ctx->pc = 0x30595Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305958u;
    // 0x30595c: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301070u, 0x305958u, 0x305960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305960u;
label_305960:
    // 0x305960: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x305960u;
    {
        const bool branch_taken_0x305960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305960u;
        // 0x305964: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305960) {
            ctx->pc = 0x305970u;
            goto label_305970;
        }
    }
    ctx->pc = 0x305968u;
label_305968:
    // 0x305968: 0x24110017  addiu       $s1, $zero, 0x17
    ctx->pc = 0x305968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x30596c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x30596cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_305970:
    // 0x305970: 0x2405081c  addiu       $a1, $zero, 0x81C
    ctx->pc = 0x305970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2076));
    // 0x305974: 0x24501340  addiu       $s0, $v0, 0x1340
    ctx->pc = 0x305974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4928));
    // 0x305978: 0x26d21f80  addiu       $s2, $s6, 0x1F80
    ctx->pc = 0x305978u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 8064));
    // 0x30597c: 0xc0c041c  jal         func_301070
    ctx->pc = 0x30597Cu;
    SET_GPR_U32(ctx, 31, 0x305984u);
    ctx->pc = 0x305980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30597Cu;
    // 0x305980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301070u, 0x30597Cu, 0x305984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305984u;
label_305984:
    // 0x305984: 0x26e42a40  addiu       $a0, $s7, 0x2A40
    ctx->pc = 0x305984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 10816));
    // 0x305988: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x305988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30598c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x30598cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305990: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x305990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x305994: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x305994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x305998: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30599c: 0x2408081c  addiu       $t0, $zero, 0x81C
    ctx->pc = 0x30599cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2076));
    // 0x3059a0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3059a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3059a4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3059a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3059a8: 0xc0c08d4  jal         func_302350
    ctx->pc = 0x3059A8u;
    SET_GPR_U32(ctx, 31, 0x3059B0u);
    ctx->pc = 0x3059ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3059A8u;
    // 0x3059ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302350u, 0x3059A8u, 0x3059B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3059B0u;
label_3059b0:
    // 0x3059b0: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3059B0u;
    {
        const bool branch_taken_0x3059b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3059B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3059B0u;
        // 0x3059b4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3059b0) {
            ctx->pc = 0x3059D0u;
            goto label_3059d0;
        }
    }
    ctx->pc = 0x3059B8u;
    // 0x3059b8: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x3059B8u;
    SET_GPR_U32(ctx, 31, 0x3059C0u);
    ctx->pc = 0x3059BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3059B8u;
    // 0x3059bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x3059B8u, 0x3059C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3059C0u;
label_3059c0:
    // 0x3059c0: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x3059C0u;
    SET_GPR_U32(ctx, 31, 0x3059C8u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x3059C0u, 0x3059C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3059C8u;
label_3059c8:
    // 0x3059c8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3059C8u;
    {
        const bool branch_taken_0x3059c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3059CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3059C8u;
        // 0x3059cc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3059c8) {
            ctx->pc = 0x305A08u;
            goto label_305a08;
        }
    }
    ctx->pc = 0x3059D0u;
label_3059d0:
    // 0x3059d0: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x3059d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3059d4: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x3059D4u;
    SET_GPR_U32(ctx, 31, 0x3059DCu);
    ctx->pc = 0x3059D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3059D4u;
    // 0x3059d8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x3059D4u, 0x3059DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3059DCu;
label_3059dc:
    // 0x3059dc: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3059DCu;
    {
        const bool branch_taken_0x3059dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3059dc) {
            ctx->pc = 0x3059F4u;
            goto label_3059f4;
        }
    }
    ctx->pc = 0x3059E4u;
    // 0x3059e4: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x3059E4u;
    SET_GPR_U32(ctx, 31, 0x3059ECu);
    ctx->pc = 0x3059E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3059E4u;
    // 0x3059e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x3059E4u, 0x3059ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3059ECu;
label_3059ec:
    // 0x3059ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3059ECu;
    {
        const bool branch_taken_0x3059ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3059F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3059ECu;
        // 0x3059f0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3059ec) {
            ctx->pc = 0x305A08u;
            goto label_305a08;
        }
    }
    ctx->pc = 0x3059F4u;
label_3059f4:
    // 0x3059f4: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x3059F4u;
    SET_GPR_U32(ctx, 31, 0x3059FCu);
    ctx->pc = 0x3059F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3059F4u;
    // 0x3059f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3059F4u, 0x3059FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3059FCu;
label_3059fc:
    // 0x3059fc: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x3059FCu;
    SET_GPR_U32(ctx, 31, 0x305A04u);
    ctx->pc = 0x305A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3059FCu;
    // 0x305a00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x3059FCu, 0x305A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305A04u;
label_305a04:
    // 0x305a04: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x305a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_305a08:
    // 0x305a08: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x305a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x305a0c: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x305a0cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x305a10: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x305a10u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x305a14: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x305a14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x305a18: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x305a18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x305a1c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x305a1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x305a20: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x305a20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x305a24: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x305a24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x305a28: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x305a28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x305a2c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x305a2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x305a30: 0x3e00008  jr          $ra
    ctx->pc = 0x305A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A30u;
        // 0x305a34: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305A38u;
label_305a38:
    // 0x305a38: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x305a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x305a3c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x305a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x305a40: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x305a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x305a44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x305a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305a48: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x305a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x305a4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x305a4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305a50: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x305a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x305a54: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x305a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x305a58: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x305a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x305a5c: 0x3c160061  lui         $s6, 0x61
    ctx->pc = 0x305a5cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)97 << 16));
    // 0x305a60: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x305a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x305a64: 0x26d21340  addiu       $s2, $s6, 0x1340
    ctx->pc = 0x305a64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4928));
    // 0x305a68: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x305a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x305a6c: 0xc0c0a30  jal         func_3028C0
    ctx->pc = 0x305A6Cu;
    SET_GPR_U32(ctx, 31, 0x305A74u);
    ctx->pc = 0x305A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305A6Cu;
    // 0x305a70: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028C0u, 0x305A6Cu, 0x305A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305A74u;
label_305a74:
    // 0x305a74: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x305a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x305a78: 0x8c430c1c  lw          $v1, 0xC1C($v0)
    ctx->pc = 0x305a78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F0C1Cu));
    // 0x305a7c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x305A7Cu;
    {
        const bool branch_taken_0x305a7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x305a7c) {
            ctx->pc = 0x305A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305A7Cu;
            // 0x305a80: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305A90u;
            goto label_305a90;
        }
    }
    ctx->pc = 0x305A84u;
    // 0x305a84: 0xc0c0a7a  jal         func_3029E8
    ctx->pc = 0x305A84u;
    SET_GPR_U32(ctx, 31, 0x305A8Cu);
    ctx->pc = 0x3029E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3029E8u, 0x305A84u, 0x305A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305A8Cu;
label_305a8c:
    // 0x305a8c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x305a8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_305a90:
    // 0x305a90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x305a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305a94: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x305a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x305a98: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x305A98u;
    {
        const bool branch_taken_0x305a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x305A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A98u;
        // 0x305a9c: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305a98) {
            ctx->pc = 0x305AE4u;
            goto label_305ae4;
        }
    }
    ctx->pc = 0x305AA0u;
    // 0x305aa0: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x305aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
    // 0x305aa4: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x305aa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x305aa8: 0x3c150061  lui         $s5, 0x61
    ctx->pc = 0x305aa8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
    // 0x305aac: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x305aacu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
    // 0x305ab0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x305ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x305ab4: 0x0  nop
    ctx->pc = 0x305ab4u;
    // NOP
label_305ab8:
    // 0x305ab8: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x305ab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x305abc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x305ABCu;
    {
        const bool branch_taken_0x305abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305ABCu;
        // 0x305ac0: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305abc) {
            ctx->pc = 0x305AF4u;
            goto label_305af4;
        }
    }
    ctx->pc = 0x305AC4u;
    // 0x305ac4: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x305ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x305ac8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x305ac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x305acc: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x305accu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x305ad0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x305ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x305ad4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x305AD4u;
    {
        const bool branch_taken_0x305ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x305ad4) {
            ctx->pc = 0x305AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305AD4u;
            // 0x305ad8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305ab8;
        }
    }
    ctx->pc = 0x305ADCu;
    // 0x305adc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x305ADCu;
    {
        const bool branch_taken_0x305adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305ADCu;
        // 0x305ae0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305adc) {
            ctx->pc = 0x305AF8u;
            goto label_305af8;
        }
    }
    ctx->pc = 0x305AE4u;
label_305ae4:
    // 0x305ae4: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x305ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
    // 0x305ae8: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x305ae8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x305aec: 0x3c150061  lui         $s5, 0x61
    ctx->pc = 0x305aecu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
    // 0x305af0: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x305af0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
label_305af4:
    // 0x305af4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x305af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_305af8:
    // 0x305af8: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x305AF8u;
    {
        const bool branch_taken_0x305af8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x305af8) {
            ctx->pc = 0x305AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305AF8u;
            // 0x305afc: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305B00u;
            goto label_305b00;
        }
    }
    ctx->pc = 0x305B00u;
label_305b00:
    // 0x305b00: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x305b00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x305b04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x305b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305b08: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x305b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x305b0c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x305B0Cu;
    {
        const bool branch_taken_0x305b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x305B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B0Cu;
        // 0x305b10: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305b0c) {
            ctx->pc = 0x305B44u;
            goto label_305b44;
        }
    }
    ctx->pc = 0x305B14u;
    // 0x305b14: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x305b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x305b18: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x305b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x305b1c: 0x0  nop
    ctx->pc = 0x305b1cu;
    // NOP
label_305b20:
    // 0x305b20: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x305b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x305b24: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x305B24u;
    {
        const bool branch_taken_0x305b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B24u;
        // 0x305b28: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305b24) {
            ctx->pc = 0x305B44u;
            goto label_305b44;
        }
    }
    ctx->pc = 0x305B2Cu;
    // 0x305b2c: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x305b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x305b30: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x305b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x305b34: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x305b34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x305b38: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x305b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x305b3c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x305B3Cu;
    {
        const bool branch_taken_0x305b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x305b3c) {
            ctx->pc = 0x305B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305B3Cu;
            // 0x305b40: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305b20;
        }
    }
    ctx->pc = 0x305B44u;
label_305b44:
    // 0x305b44: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x305b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x305b48: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x305B48u;
    {
        const bool branch_taken_0x305b48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x305b48) {
            ctx->pc = 0x305B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305B48u;
            // 0x305b4c: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305B50u;
            goto label_305b50;
        }
    }
    ctx->pc = 0x305B50u;
label_305b50:
    // 0x305b50: 0x24e2aca0  addiu       $v0, $a3, -0x5360
    ctx->pc = 0x305b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945952));
    // 0x305b54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305b58: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x305b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x305b5c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x305b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x305b60: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x305b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x305b64: 0x26901f80  addiu       $s0, $s4, 0x1F80
    ctx->pc = 0x305b64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 8064));
    // 0x305b68: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x305B68u;
    SET_GPR_U32(ctx, 31, 0x305B70u);
    ctx->pc = 0x305B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305B68u;
    // 0x305b6c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x305B68u, 0x305B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B70u;
label_305b70:
    // 0x305b70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x305b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305b74: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x305b74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x305b78: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x305b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x305b7c: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x305b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x305b80: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x305b80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x305b84: 0x26a42a40  addiu       $a0, $s5, 0x2A40
    ctx->pc = 0x305b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 10816));
    // 0x305b88: 0x26c71340  addiu       $a3, $s6, 0x1340
    ctx->pc = 0x305b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4928));
    // 0x305b8c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x305b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x305b90: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x305b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x305b94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305b98: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x305b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x305b9c: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x305b9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x305ba0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x305ba0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305ba4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x305ba4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x305ba8: 0xc0c08d4  jal         func_302350
    ctx->pc = 0x305BA8u;
    SET_GPR_U32(ctx, 31, 0x305BB0u);
    ctx->pc = 0x305BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305BA8u;
    // 0x305bac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302350u, 0x305BA8u, 0x305BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305BB0u;
label_305bb0:
    // 0x305bb0: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x305BB0u;
    {
        const bool branch_taken_0x305bb0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x305BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305BB0u;
        // 0x305bb4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305bb0) {
            ctx->pc = 0x305BD0u;
            goto label_305bd0;
        }
    }
    ctx->pc = 0x305BB8u;
    // 0x305bb8: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x305BB8u;
    SET_GPR_U32(ctx, 31, 0x305BC0u);
    ctx->pc = 0x305BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305BB8u;
    // 0x305bbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x305BB8u, 0x305BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305BC0u;
label_305bc0:
    // 0x305bc0: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x305BC0u;
    SET_GPR_U32(ctx, 31, 0x305BC8u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x305BC0u, 0x305BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305BC8u;
label_305bc8:
    // 0x305bc8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x305BC8u;
    {
        const bool branch_taken_0x305bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305BC8u;
        // 0x305bcc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305bc8) {
            ctx->pc = 0x305C08u;
            goto label_305c08;
        }
    }
    ctx->pc = 0x305BD0u;
label_305bd0:
    // 0x305bd0: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x305bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x305bd4: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x305BD4u;
    SET_GPR_U32(ctx, 31, 0x305BDCu);
    ctx->pc = 0x305BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305BD4u;
    // 0x305bd8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x305BD4u, 0x305BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305BDCu;
label_305bdc:
    // 0x305bdc: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x305BDCu;
    {
        const bool branch_taken_0x305bdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x305bdc) {
            ctx->pc = 0x305BF4u;
            goto label_305bf4;
        }
    }
    ctx->pc = 0x305BE4u;
    // 0x305be4: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x305BE4u;
    SET_GPR_U32(ctx, 31, 0x305BECu);
    ctx->pc = 0x305BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305BE4u;
    // 0x305be8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x305BE4u, 0x305BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305BECu;
label_305bec:
    // 0x305bec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x305BECu;
    {
        const bool branch_taken_0x305bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305BECu;
        // 0x305bf0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305bec) {
            ctx->pc = 0x305C08u;
            goto label_305c08;
        }
    }
    ctx->pc = 0x305BF4u;
label_305bf4:
    // 0x305bf4: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x305BF4u;
    SET_GPR_U32(ctx, 31, 0x305BFCu);
    ctx->pc = 0x305BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305BF4u;
    // 0x305bf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x305BF4u, 0x305BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305BFCu;
label_305bfc:
    // 0x305bfc: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x305BFCu;
    SET_GPR_U32(ctx, 31, 0x305C04u);
    ctx->pc = 0x305C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305BFCu;
    // 0x305c00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x305BFCu, 0x305C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305C04u;
label_305c04:
    // 0x305c04: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x305c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_305c08:
    // 0x305c08: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x305c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x305c0c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x305c0cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x305c10: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x305c10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x305c14: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x305c14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x305c18: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x305c18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x305c1c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x305c1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x305c20: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x305c20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x305c24: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x305c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x305c28: 0x3e00008  jr          $ra
    ctx->pc = 0x305C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C28u;
        // 0x305c2c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305C30u;
label_305c30:
    // 0x305c30: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x305c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x305c34: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x305c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x305c38: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x305c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x305c3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x305c3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305c40: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x305c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x305c44: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x305c44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305c48: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x305c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x305c4c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x305c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305c50: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x305c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x305c54: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x305c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x305c58: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x305c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x305c5c: 0x3c1e0061  lui         $fp, 0x61
    ctx->pc = 0x305c5cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)97 << 16));
    // 0x305c60: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x305c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x305c64: 0x27d21340  addiu       $s2, $fp, 0x1340
    ctx->pc = 0x305c64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4928));
    // 0x305c68: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x305c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x305c6c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x305c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x305c70: 0xc0c0a30  jal         func_3028C0
    ctx->pc = 0x305C70u;
    SET_GPR_U32(ctx, 31, 0x305C78u);
    ctx->pc = 0x305C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305C70u;
    // 0x305c74: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028C0u, 0x305C70u, 0x305C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305C78u;
label_305c78:
    // 0x305c78: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x305c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x305c7c: 0x8c620c1c  lw          $v0, 0xC1C($v1)
    ctx->pc = 0x305c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F0C1Cu));
    // 0x305c80: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x305C80u;
    {
        const bool branch_taken_0x305c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305c80) {
            ctx->pc = 0x305C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305C80u;
            // 0x305c84: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305C94u;
            goto label_305c94;
        }
    }
    ctx->pc = 0x305C88u;
    // 0x305c88: 0xc0c0a7a  jal         func_3029E8
    ctx->pc = 0x305C88u;
    SET_GPR_U32(ctx, 31, 0x305C90u);
    ctx->pc = 0x3029E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3029E8u, 0x305C88u, 0x305C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305C90u;
label_305c90:
    // 0x305c90: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x305c90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_305c94:
    // 0x305c94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x305c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305c98: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x305c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x305c9c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x305C9Cu;
    {
        const bool branch_taken_0x305c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x305CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C9Cu;
        // 0x305ca0: 0xa2420014  sb          $v0, 0x14($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305c9c) {
            ctx->pc = 0x305CECu;
            goto label_305cec;
        }
    }
    ctx->pc = 0x305CA4u;
    // 0x305ca4: 0x2e060400  sltiu       $a2, $s0, 0x400
    ctx->pc = 0x305ca4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x305ca8: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x305ca8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
    // 0x305cac: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x305cacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x305cb0: 0x3c170061  lui         $s7, 0x61
    ctx->pc = 0x305cb0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)97 << 16));
    // 0x305cb4: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x305cb4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
    // 0x305cb8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x305cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x305cbc: 0x0  nop
    ctx->pc = 0x305cbcu;
    // NOP
label_305cc0:
    // 0x305cc0: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x305cc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x305cc4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x305CC4u;
    {
        const bool branch_taken_0x305cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CC4u;
        // 0x305cc8: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305cc4) {
            ctx->pc = 0x305D00u;
            goto label_305d00;
        }
    }
    ctx->pc = 0x305CCCu;
    // 0x305ccc: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x305cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x305cd0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x305cd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x305cd4: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x305cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x305cd8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x305cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x305cdc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x305CDCu;
    {
        const bool branch_taken_0x305cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x305cdc) {
            ctx->pc = 0x305CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305CDCu;
            // 0x305ce0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305cc0;
        }
    }
    ctx->pc = 0x305CE4u;
    // 0x305ce4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x305CE4u;
    {
        const bool branch_taken_0x305ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CE4u;
        // 0x305ce8: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305ce4) {
            ctx->pc = 0x305D04u;
            goto label_305d04;
        }
    }
    ctx->pc = 0x305CECu;
label_305cec:
    // 0x305cec: 0x2e060400  sltiu       $a2, $s0, 0x400
    ctx->pc = 0x305cecu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x305cf0: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x305cf0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
    // 0x305cf4: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x305cf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x305cf8: 0x3c170061  lui         $s7, 0x61
    ctx->pc = 0x305cf8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)97 << 16));
    // 0x305cfc: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x305cfcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
label_305d00:
    // 0x305d00: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x305d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_305d04:
    // 0x305d04: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x305D04u;
    {
        const bool branch_taken_0x305d04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x305d04) {
            ctx->pc = 0x305D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305D04u;
            // 0x305d08: 0xa2400413  sb          $zero, 0x413($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1043), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305D0Cu;
            goto label_305d0c;
        }
    }
    ctx->pc = 0x305D0Cu;
label_305d0c:
    // 0x305d0c: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x305d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x305d10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x305d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305d14: 0x46800a  movz        $s0, $v0, $a2
    ctx->pc = 0x305d14u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x305d18: 0xae550010  sw          $s5, 0x10($s2)
    ctx->pc = 0x305d18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 21));
    // 0x305d1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x305d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305d20: 0xc0c041c  jal         func_301070
    ctx->pc = 0x305D20u;
    SET_GPR_U32(ctx, 31, 0x305D28u);
    ctx->pc = 0x305D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305D20u;
    // 0x305d24: 0xae50000c  sw          $s0, 0xC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301070u, 0x305D20u, 0x305D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D28u;
label_305d28:
    // 0x305d28: 0x26901f80  addiu       $s0, $s4, 0x1F80
    ctx->pc = 0x305d28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 8064));
    // 0x305d2c: 0x26c3acb8  addiu       $v1, $s6, -0x5348
    ctx->pc = 0x305d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945976));
    // 0x305d30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x305d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305d34: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x305d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x305d38: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x305d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x305d3c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x305d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x305d40: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x305D40u;
    SET_GPR_U32(ctx, 31, 0x305D48u);
    ctx->pc = 0x305D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305D40u;
    // 0x305d44: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x305D40u, 0x305D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D48u;
label_305d48:
    // 0x305d48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x305d48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305d4c: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x305d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x305d50: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x305d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x305d54: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x305d54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x305d58: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x305d58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x305d5c: 0x26e42a40  addiu       $a0, $s7, 0x2A40
    ctx->pc = 0x305d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 10816));
    // 0x305d60: 0x27c71340  addiu       $a3, $fp, 0x1340
    ctx->pc = 0x305d60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 4928));
    // 0x305d64: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x305d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x305d68: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x305d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x305d6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305d70: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x305d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x305d74: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x305d74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x305d78: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x305d78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305d7c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x305d7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x305d80: 0xc0c08d4  jal         func_302350
    ctx->pc = 0x305D80u;
    SET_GPR_U32(ctx, 31, 0x305D88u);
    ctx->pc = 0x305D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305D80u;
    // 0x305d84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302350u, 0x305D80u, 0x305D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D88u;
label_305d88:
    // 0x305d88: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x305D88u;
    {
        const bool branch_taken_0x305d88 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x305D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D88u;
        // 0x305d8c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305d88) {
            ctx->pc = 0x305DA8u;
            goto label_305da8;
        }
    }
    ctx->pc = 0x305D90u;
    // 0x305d90: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x305D90u;
    SET_GPR_U32(ctx, 31, 0x305D98u);
    ctx->pc = 0x305D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305D90u;
    // 0x305d94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x305D90u, 0x305D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D98u;
label_305d98:
    // 0x305d98: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x305D98u;
    SET_GPR_U32(ctx, 31, 0x305DA0u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x305D98u, 0x305DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305DA0u;
label_305da0:
    // 0x305da0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x305DA0u;
    {
        const bool branch_taken_0x305da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305DA0u;
        // 0x305da4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305da0) {
            ctx->pc = 0x305DE0u;
            goto label_305de0;
        }
    }
    ctx->pc = 0x305DA8u;
label_305da8:
    // 0x305da8: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x305da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x305dac: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x305DACu;
    SET_GPR_U32(ctx, 31, 0x305DB4u);
    ctx->pc = 0x305DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305DACu;
    // 0x305db0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x305DACu, 0x305DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305DB4u;
label_305db4:
    // 0x305db4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x305DB4u;
    {
        const bool branch_taken_0x305db4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x305db4) {
            ctx->pc = 0x305DCCu;
            goto label_305dcc;
        }
    }
    ctx->pc = 0x305DBCu;
    // 0x305dbc: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x305DBCu;
    SET_GPR_U32(ctx, 31, 0x305DC4u);
    ctx->pc = 0x305DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305DBCu;
    // 0x305dc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x305DBCu, 0x305DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305DC4u;
label_305dc4:
    // 0x305dc4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x305DC4u;
    {
        const bool branch_taken_0x305dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305DC4u;
        // 0x305dc8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305dc4) {
            ctx->pc = 0x305DE0u;
            goto label_305de0;
        }
    }
    ctx->pc = 0x305DCCu;
label_305dcc:
    // 0x305dcc: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x305DCCu;
    SET_GPR_U32(ctx, 31, 0x305DD4u);
    ctx->pc = 0x305DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305DCCu;
    // 0x305dd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x305DCCu, 0x305DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305DD4u;
label_305dd4:
    // 0x305dd4: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x305DD4u;
    SET_GPR_U32(ctx, 31, 0x305DDCu);
    ctx->pc = 0x305DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305DD4u;
    // 0x305dd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x305DD4u, 0x305DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305DDCu;
label_305ddc:
    // 0x305ddc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x305ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_305de0:
    // 0x305de0: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x305de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x305de4: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x305de4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x305de8: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x305de8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x305dec: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x305decu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x305df0: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x305df0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x305df4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x305df4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x305df8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x305df8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x305dfc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x305dfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x305e00: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x305e00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x305e04: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x305e04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x305e08: 0x3e00008  jr          $ra
    ctx->pc = 0x305E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E08u;
        // 0x305e0c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305E10u;
}

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

// Function: sub_003428D8
// Address: 0x3428d8 - 0x342a00
void sub_003428D8_0x3428d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003428D8_0x3428d8");
#endif

    switch (ctx->pc) {
        case 0x3428d8u: goto label_3428d8;
        case 0x3428dcu: goto label_3428dc;
        case 0x3428e0u: goto label_3428e0;
        case 0x3428e4u: goto label_3428e4;
        case 0x3428e8u: goto label_3428e8;
        case 0x3428ecu: goto label_3428ec;
        case 0x3428f0u: goto label_3428f0;
        case 0x3428f4u: goto label_3428f4;
        case 0x3428f8u: goto label_3428f8;
        case 0x3428fcu: goto label_3428fc;
        case 0x342900u: goto label_342900;
        case 0x342904u: goto label_342904;
        case 0x342908u: goto label_342908;
        case 0x34290cu: goto label_34290c;
        case 0x342910u: goto label_342910;
        case 0x342914u: goto label_342914;
        case 0x342918u: goto label_342918;
        case 0x34291cu: goto label_34291c;
        case 0x342920u: goto label_342920;
        case 0x342924u: goto label_342924;
        case 0x342928u: goto label_342928;
        case 0x34292cu: goto label_34292c;
        case 0x342930u: goto label_342930;
        case 0x342934u: goto label_342934;
        case 0x342938u: goto label_342938;
        case 0x34293cu: goto label_34293c;
        case 0x342940u: goto label_342940;
        case 0x342944u: goto label_342944;
        case 0x342948u: goto label_342948;
        case 0x34294cu: goto label_34294c;
        case 0x342950u: goto label_342950;
        case 0x342954u: goto label_342954;
        case 0x342958u: goto label_342958;
        case 0x34295cu: goto label_34295c;
        case 0x342960u: goto label_342960;
        case 0x342964u: goto label_342964;
        case 0x342968u: goto label_342968;
        case 0x34296cu: goto label_34296c;
        case 0x342970u: goto label_342970;
        case 0x342974u: goto label_342974;
        case 0x342978u: goto label_342978;
        case 0x34297cu: goto label_34297c;
        case 0x342980u: goto label_342980;
        case 0x342984u: goto label_342984;
        case 0x342988u: goto label_342988;
        case 0x34298cu: goto label_34298c;
        case 0x342990u: goto label_342990;
        case 0x342994u: goto label_342994;
        case 0x342998u: goto label_342998;
        case 0x34299cu: goto label_34299c;
        case 0x3429a0u: goto label_3429a0;
        case 0x3429a4u: goto label_3429a4;
        case 0x3429a8u: goto label_3429a8;
        case 0x3429acu: goto label_3429ac;
        case 0x3429b0u: goto label_3429b0;
        case 0x3429b4u: goto label_3429b4;
        case 0x3429b8u: goto label_3429b8;
        case 0x3429bcu: goto label_3429bc;
        case 0x3429c0u: goto label_3429c0;
        case 0x3429c4u: goto label_3429c4;
        case 0x3429c8u: goto label_3429c8;
        case 0x3429ccu: goto label_3429cc;
        case 0x3429d0u: goto label_3429d0;
        case 0x3429d4u: goto label_3429d4;
        case 0x3429d8u: goto label_3429d8;
        case 0x3429dcu: goto label_3429dc;
        case 0x3429e0u: goto label_3429e0;
        case 0x3429e4u: goto label_3429e4;
        case 0x3429e8u: goto label_3429e8;
        case 0x3429ecu: goto label_3429ec;
        case 0x3429f0u: goto label_3429f0;
        case 0x3429f4u: goto label_3429f4;
        case 0x3429f8u: goto label_3429f8;
        case 0x3429fcu: goto label_3429fc;
        default: break;
    }

    ctx->pc = 0x3428d8u;

label_3428d8:
    // 0x3428d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3428d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3428dc:
    // 0x3428dc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3428dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3428e0:
    // 0x3428e0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3428e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3428e4:
    // 0x3428e4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3428e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3428e8:
    // 0x3428e8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3428e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3428ec:
    // 0x3428ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3428ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3428f0:
    // 0x3428f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3428f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3428f4:
    // 0x3428f4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3428f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3428f8:
    // 0x3428f8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3428f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3428fc:
    // 0x3428fc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3428fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_342900:
    // 0x342900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_342904:
    // 0x342904: 0x34a50130  ori         $a1, $a1, 0x130
    ctx->pc = 0x342904u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
label_342908:
    // 0x342908: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x342908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_34290c:
    // 0x34290c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x34290cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_342910:
    // 0x342910: 0x40f809  jalr        $v0
label_342914:
    if (ctx->pc == 0x342914u) {
        ctx->pc = 0x342914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342910u;
        // 0x342914: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342918u;
        goto label_342918;
    }
    ctx->pc = 0x342910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x342918u);
        ctx->pc = 0x342914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342910u;
        // 0x342914: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342910u, 0x342918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342918u;
label_342918:
    // 0x342918: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x342918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34291c:
    // 0x34291c: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
label_342920:
    if (ctx->pc == 0x342920u) {
        ctx->pc = 0x342920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34291Cu;
        // 0x342920: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342924u;
        goto label_342924;
    }
    ctx->pc = 0x34291Cu;
    {
        const bool branch_taken_0x34291c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x342920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34291Cu;
        // 0x342920: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34291c) {
            ctx->pc = 0x3429DCu;
            goto label_3429dc;
        }
    }
    ctx->pc = 0x342924u;
label_342924:
    // 0x342924: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x342924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_342928:
    // 0x342928: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x342928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_34292c:
    // 0x34292c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34292cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342930:
    // 0x342930: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x342930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_342934:
    // 0x342934: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x342934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
label_342938:
    // 0x342938: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x342938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_34293c:
    // 0x34293c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x34293cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_342940:
    // 0x342940: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x342940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_342944:
    // 0x342944: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x342944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_342948:
    // 0x342948: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x342948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_34294c:
    // 0x34294c: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x34294cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_342950:
    // 0x342950: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x342950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_342954:
    // 0x342954: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x342954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_342958:
    // 0x342958: 0x24c6ffd0  addiu       $a2, $a2, -0x30
    ctx->pc = 0x342958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
label_34295c:
    // 0x34295c: 0xc0bb7e6  jal         func_2EDF98
label_342960:
    if (ctx->pc == 0x342960u) {
        ctx->pc = 0x342960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34295Cu;
        // 0x342960: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342964u;
        goto label_342964;
    }
    ctx->pc = 0x34295Cu;
    SET_GPR_U32(ctx, 31, 0x342964u);
    ctx->pc = 0x342960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34295Cu;
    // 0x342960: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x34295Cu, 0x342964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342964u;
label_342964:
    // 0x342964: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x342964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_342968:
    // 0x342968: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x342968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_34296c:
    // 0x34296c: 0xc0d120c  jal         func_344830
label_342970:
    if (ctx->pc == 0x342970u) {
        ctx->pc = 0x342970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34296Cu;
        // 0x342970: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342974u;
        goto label_342974;
    }
    ctx->pc = 0x34296Cu;
    SET_GPR_U32(ctx, 31, 0x342974u);
    ctx->pc = 0x342970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34296Cu;
    // 0x342970: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x34296Cu, 0x342974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342974u;
label_342974:
    // 0x342974: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_342978:
    if (ctx->pc == 0x342978u) {
        ctx->pc = 0x342978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342974u;
        // 0x342978: 0x8e12000c  lw          $s2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34297Cu;
        goto label_34297c;
    }
    ctx->pc = 0x342974u;
    {
        const bool branch_taken_0x342974 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x342974) {
            ctx->pc = 0x342978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342974u;
            // 0x342978: 0x8e12000c  lw          $s2, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342988u;
            goto label_342988;
        }
    }
    ctx->pc = 0x34297Cu;
label_34297c:
    // 0x34297c: 0xc0d1454  jal         func_345150
label_342980:
    if (ctx->pc == 0x342980u) {
        ctx->pc = 0x342980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34297Cu;
        // 0x342980: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342984u;
        goto label_342984;
    }
    ctx->pc = 0x34297Cu;
    SET_GPR_U32(ctx, 31, 0x342984u);
    ctx->pc = 0x342980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34297Cu;
    // 0x342980: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345150u, 0x34297Cu, 0x342984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342984u;
label_342984:
    // 0x342984: 0x8e12000c  lw          $s2, 0xC($s0)
    ctx->pc = 0x342984u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_342988:
    // 0x342988: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x342988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_34298c:
    // 0x34298c: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
label_342990:
    if (ctx->pc == 0x342990u) {
        ctx->pc = 0x342990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34298Cu;
        // 0x342990: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342994u;
        goto label_342994;
    }
    ctx->pc = 0x34298Cu;
    {
        const bool branch_taken_0x34298c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x342990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34298Cu;
        // 0x342990: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34298c) {
            ctx->pc = 0x3429DCu;
            goto label_3429dc;
        }
    }
    ctx->pc = 0x342994u;
label_342994:
    // 0x342994: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x342994u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342998:
    // 0x342998: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x342998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_34299c:
    // 0x34299c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x34299cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3429a0:
    // 0x3429a0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x3429a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3429a4:
    // 0x3429a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3429a8:
    if (ctx->pc == 0x3429A8u) {
        ctx->pc = 0x3429A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3429A4u;
        // 0x3429a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3429ACu;
        goto label_3429ac;
    }
    ctx->pc = 0x3429A4u;
    {
        const bool branch_taken_0x3429a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3429A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3429A4u;
        // 0x3429a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3429a4) {
            ctx->pc = 0x3429C8u;
            goto label_3429c8;
        }
    }
    ctx->pc = 0x3429ACu;
label_3429ac:
    // 0x3429ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3429acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3429b0:
    // 0x3429b0: 0x40f809  jalr        $v0
label_3429b4:
    if (ctx->pc == 0x3429B4u) {
        ctx->pc = 0x3429B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3429B0u;
        // 0x3429b4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3429B8u;
        goto label_3429b8;
    }
    ctx->pc = 0x3429B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3429B8u);
        ctx->pc = 0x3429B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3429B0u;
        // 0x3429b4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3429B0u, 0x3429B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3429B8u;
label_3429b8:
    // 0x3429b8: 0x50500004  beql        $v0, $s0, . + 4 + (0x4 << 2)
label_3429bc:
    if (ctx->pc == 0x3429BCu) {
        ctx->pc = 0x3429BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3429B8u;
        // 0x3429bc: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3429C0u;
        goto label_3429c0;
    }
    ctx->pc = 0x3429B8u;
    {
        const bool branch_taken_0x3429b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x3429b8) {
            ctx->pc = 0x3429BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3429B8u;
            // 0x3429bc: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3429CCu;
            goto label_3429cc;
        }
    }
    ctx->pc = 0x3429C0u;
label_3429c0:
    // 0x3429c0: 0x10000006  b           . + 4 + (0x6 << 2)
label_3429c4:
    if (ctx->pc == 0x3429C4u) {
        ctx->pc = 0x3429C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3429C0u;
        // 0x3429c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3429C8u;
        goto label_3429c8;
    }
    ctx->pc = 0x3429C0u;
    {
        const bool branch_taken_0x3429c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3429C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3429C0u;
        // 0x3429c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3429c0) {
            ctx->pc = 0x3429DCu;
            goto label_3429dc;
        }
    }
    ctx->pc = 0x3429C8u;
label_3429c8:
    // 0x3429c8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3429c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3429cc:
    // 0x3429cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3429ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3429d0:
    // 0x3429d0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3429d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3429d4:
    // 0x3429d4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_3429d8:
    if (ctx->pc == 0x3429D8u) {
        ctx->pc = 0x3429D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3429D4u;
        // 0x3429d8: 0x2673002c  addiu       $s3, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3429DCu;
        goto label_3429dc;
    }
    ctx->pc = 0x3429D4u;
    {
        const bool branch_taken_0x3429d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3429D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3429D4u;
        // 0x3429d8: 0x2673002c  addiu       $s3, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3429d4) {
            ctx->pc = 0x342998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342998;
        }
    }
    ctx->pc = 0x3429DCu;
label_3429dc:
    // 0x3429dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3429dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3429e0:
    // 0x3429e0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3429e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3429e4:
    // 0x3429e4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3429e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3429e8:
    // 0x3429e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3429e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3429ec:
    // 0x3429ec: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3429ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3429f0:
    // 0x3429f0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3429f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3429f4:
    // 0x3429f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3429f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3429f8:
    // 0x3429f8: 0x3e00008  jr          $ra
label_3429fc:
    if (ctx->pc == 0x3429FCu) {
        ctx->pc = 0x3429FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3429F8u;
        // 0x3429fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342A00u;
        goto label_fallthrough_0x3429f8;
    }
    ctx->pc = 0x3429F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3429FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3429F8u;
        // 0x3429fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3429F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3429f8:
    ctx->pc = 0x342A00u;
}

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

// Function: sub_00419040
// Address: 0x419040 - 0x419140
void sub_00419040_0x419040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419040_0x419040");
#endif

    switch (ctx->pc) {
        case 0x419040u: goto label_419040;
        case 0x419044u: goto label_419044;
        case 0x419048u: goto label_419048;
        case 0x41904cu: goto label_41904c;
        case 0x419050u: goto label_419050;
        case 0x419054u: goto label_419054;
        case 0x419058u: goto label_419058;
        case 0x41905cu: goto label_41905c;
        case 0x419060u: goto label_419060;
        case 0x419064u: goto label_419064;
        case 0x419068u: goto label_419068;
        case 0x41906cu: goto label_41906c;
        case 0x419070u: goto label_419070;
        case 0x419074u: goto label_419074;
        case 0x419078u: goto label_419078;
        case 0x41907cu: goto label_41907c;
        case 0x419080u: goto label_419080;
        case 0x419084u: goto label_419084;
        case 0x419088u: goto label_419088;
        case 0x41908cu: goto label_41908c;
        case 0x419090u: goto label_419090;
        case 0x419094u: goto label_419094;
        case 0x419098u: goto label_419098;
        case 0x41909cu: goto label_41909c;
        case 0x4190a0u: goto label_4190a0;
        case 0x4190a4u: goto label_4190a4;
        case 0x4190a8u: goto label_4190a8;
        case 0x4190acu: goto label_4190ac;
        case 0x4190b0u: goto label_4190b0;
        case 0x4190b4u: goto label_4190b4;
        case 0x4190b8u: goto label_4190b8;
        case 0x4190bcu: goto label_4190bc;
        case 0x4190c0u: goto label_4190c0;
        case 0x4190c4u: goto label_4190c4;
        case 0x4190c8u: goto label_4190c8;
        case 0x4190ccu: goto label_4190cc;
        case 0x4190d0u: goto label_4190d0;
        case 0x4190d4u: goto label_4190d4;
        case 0x4190d8u: goto label_4190d8;
        case 0x4190dcu: goto label_4190dc;
        case 0x4190e0u: goto label_4190e0;
        case 0x4190e4u: goto label_4190e4;
        case 0x4190e8u: goto label_4190e8;
        case 0x4190ecu: goto label_4190ec;
        case 0x4190f0u: goto label_4190f0;
        case 0x4190f4u: goto label_4190f4;
        case 0x4190f8u: goto label_4190f8;
        case 0x4190fcu: goto label_4190fc;
        case 0x419100u: goto label_419100;
        case 0x419104u: goto label_419104;
        case 0x419108u: goto label_419108;
        case 0x41910cu: goto label_41910c;
        case 0x419110u: goto label_419110;
        case 0x419114u: goto label_419114;
        case 0x419118u: goto label_419118;
        case 0x41911cu: goto label_41911c;
        case 0x419120u: goto label_419120;
        case 0x419124u: goto label_419124;
        case 0x419128u: goto label_419128;
        case 0x41912cu: goto label_41912c;
        case 0x419130u: goto label_419130;
        case 0x419134u: goto label_419134;
        case 0x419138u: goto label_419138;
        case 0x41913cu: goto label_41913c;
        default: break;
    }

    ctx->pc = 0x419040u;

label_419040:
    // 0x419040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x419040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_419044:
    // 0x419044: 0x8f82ad80  lw          $v0, -0x5280($gp)
    ctx->pc = 0x419044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946176)));
label_419048:
    // 0x419048: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x419048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_41904c:
    // 0x41904c: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x41904cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_419050:
    // 0x419050: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_419054:
    if (ctx->pc == 0x419054u) {
        ctx->pc = 0x419054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419050u;
        // 0x419054: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419058u;
        goto label_419058;
    }
    ctx->pc = 0x419050u;
    {
        const bool branch_taken_0x419050 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x419054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419050u;
        // 0x419054: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419050) {
            ctx->pc = 0x419070u;
            goto label_419070;
        }
    }
    ctx->pc = 0x419058u;
label_419058:
    // 0x419058: 0xc104b26  jal         func_412C98
label_41905c:
    if (ctx->pc == 0x41905Cu) {
        ctx->pc = 0x419060u;
        goto label_419060;
    }
    ctx->pc = 0x419058u;
    SET_GPR_U32(ctx, 31, 0x419060u);
    ctx->pc = 0x412C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412C98u, 0x419058u, 0x419060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419060u;
label_419060:
    // 0x419060: 0xc10441c  jal         func_411070
label_419064:
    if (ctx->pc == 0x419064u) {
        ctx->pc = 0x419068u;
        goto label_419068;
    }
    ctx->pc = 0x419060u;
    SET_GPR_U32(ctx, 31, 0x419068u);
    ctx->pc = 0x411070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411070u, 0x419060u, 0x419068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419068u;
label_419068:
    // 0x419068: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x419068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_41906c:
    // 0x41906c: 0xac40e9a4  sw          $zero, -0x165C($v0)
    ctx->pc = 0x41906cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961572), GPR_U32(ctx, 0));
label_419070:
    // 0x419070: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x419070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_419074:
    // 0x419074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x419074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_419078:
    // 0x419078: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x419078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41907c:
    // 0x41907c: 0x3e00008  jr          $ra
label_419080:
    if (ctx->pc == 0x419080u) {
        ctx->pc = 0x419080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41907Cu;
        // 0x419080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419084u;
        goto label_419084;
    }
    ctx->pc = 0x41907Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41907Cu;
        // 0x419080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41907Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419084u;
label_419084:
    // 0x419084: 0x0  nop
    ctx->pc = 0x419084u;
    // NOP
label_419088:
    // 0x419088: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x419088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_41908c:
    // 0x41908c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x41908cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_419090:
    // 0x419090: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x419090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_419094:
    // 0x419094: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x419094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_419098:
    // 0x419098: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x419098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_41909c:
    // 0x41909c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x41909cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4190a0:
    // 0x4190a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4190a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4190a4:
    // 0x4190a4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4190a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4190a8:
    // 0x4190a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4190a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4190ac:
    // 0x4190ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4190acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4190b0:
    // 0x4190b0: 0x2453e890  addiu       $s3, $v0, -0x1770
    ctx->pc = 0x4190b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
label_4190b4:
    // 0x4190b4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x4190b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_4190b8:
    // 0x4190b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4190b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4190bc:
    // 0x4190bc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x4190bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4190c0:
    // 0x4190c0: 0x40f809  jalr        $v0
label_4190c4:
    if (ctx->pc == 0x4190C4u) {
        ctx->pc = 0x4190C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4190C0u;
        // 0x4190c4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4190C8u;
        goto label_4190c8;
    }
    ctx->pc = 0x4190C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4190C8u);
        ctx->pc = 0x4190C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4190C0u;
        // 0x4190c4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4190C0u, 0x4190C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4190C8u;
label_4190c8:
    // 0x4190c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4190c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4190cc:
    // 0x4190cc: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
label_4190d0:
    if (ctx->pc == 0x4190D0u) {
        ctx->pc = 0x4190D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4190CCu;
        // 0x4190d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4190D4u;
        goto label_4190d4;
    }
    ctx->pc = 0x4190CCu;
    {
        const bool branch_taken_0x4190cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4190D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4190CCu;
        // 0x4190d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4190cc) {
            ctx->pc = 0x419120u;
            goto label_419120;
        }
    }
    ctx->pc = 0x4190D4u;
label_4190d4:
    // 0x4190d4: 0x2e300001  sltiu       $s0, $s1, 0x1
    ctx->pc = 0x4190d4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4190d8:
    // 0x4190d8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_4190dc:
    if (ctx->pc == 0x4190DCu) {
        ctx->pc = 0x4190DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4190D8u;
        // 0x4190dc: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4190E0u;
        goto label_4190e0;
    }
    ctx->pc = 0x4190D8u;
    {
        const bool branch_taken_0x4190d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4190DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4190D8u;
        // 0x4190dc: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4190d8) {
            ctx->pc = 0x4190F8u;
            goto label_4190f8;
        }
    }
    ctx->pc = 0x4190E0u;
label_4190e0:
    // 0x4190e0: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x4190e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_4190e4:
    // 0x4190e4: 0x24a50698  addiu       $a1, $a1, 0x698
    ctx->pc = 0x4190e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1688));
label_4190e8:
    // 0x4190e8: 0x40f809  jalr        $v0
label_4190ec:
    if (ctx->pc == 0x4190ECu) {
        ctx->pc = 0x4190ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4190E8u;
        // 0x4190ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4190F0u;
        goto label_4190f0;
    }
    ctx->pc = 0x4190E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4190F0u);
        ctx->pc = 0x4190ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4190E8u;
        // 0x4190ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4190E8u, 0x4190F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4190F0u;
label_4190f0:
    // 0x4190f0: 0x1000000b  b           . + 4 + (0xB << 2)
label_4190f4:
    if (ctx->pc == 0x4190F4u) {
        ctx->pc = 0x4190F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4190F0u;
        // 0x4190f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4190F8u;
        goto label_4190f8;
    }
    ctx->pc = 0x4190F0u;
    {
        const bool branch_taken_0x4190f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4190F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4190F0u;
        // 0x4190f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4190f0) {
            ctx->pc = 0x419120u;
            goto label_419120;
        }
    }
    ctx->pc = 0x4190F8u;
label_4190f8:
    // 0x4190f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4190f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4190fc:
    // 0x4190fc: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x4190fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_419100:
    // 0x419100: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x419100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_419104:
    // 0x419104: 0xc1035f6  jal         func_40D7D8
label_419108:
    if (ctx->pc == 0x419108u) {
        ctx->pc = 0x419108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419104u;
        // 0x419108: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41910Cu;
        goto label_41910c;
    }
    ctx->pc = 0x419104u;
    SET_GPR_U32(ctx, 31, 0x41910Cu);
    ctx->pc = 0x419108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419104u;
    // 0x419108: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x419104u, 0x41910Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41910Cu;
label_41910c:
    // 0x41910c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41910cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_419110:
    // 0x419110: 0xc103628  jal         func_40D8A0
label_419114:
    if (ctx->pc == 0x419114u) {
        ctx->pc = 0x419114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419110u;
        // 0x419114: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419118u;
        goto label_419118;
    }
    ctx->pc = 0x419110u;
    SET_GPR_U32(ctx, 31, 0x419118u);
    ctx->pc = 0x419114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419110u;
    // 0x419114: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x419110u, 0x419118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419118u;
label_419118:
    // 0x419118: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x419118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41911c:
    // 0x41911c: 0x0  nop
    ctx->pc = 0x41911cu;
    // NOP
label_419120:
    // 0x419120: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x419120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_419124:
    // 0x419124: 0x250100b  movn        $v0, $s2, $s0
    ctx->pc = 0x419124u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
label_419128:
    // 0x419128: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x419128u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41912c:
    // 0x41912c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x41912cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_419130:
    // 0x419130: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x419130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_419134:
    // 0x419134: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x419134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_419138:
    // 0x419138: 0x3e00008  jr          $ra
label_41913c:
    if (ctx->pc == 0x41913Cu) {
        ctx->pc = 0x41913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419138u;
        // 0x41913c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419140u;
        goto label_fallthrough_0x419138;
    }
    ctx->pc = 0x419138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419138u;
        // 0x41913c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x419138:
    ctx->pc = 0x419140u;
}

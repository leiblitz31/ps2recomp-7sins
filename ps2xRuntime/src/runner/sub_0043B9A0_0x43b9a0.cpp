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

// Function: sub_0043B9A0
// Address: 0x43b9a0 - 0x43cb30
void sub_0043B9A0_0x43b9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043B9A0_0x43b9a0");
#endif

    switch (ctx->pc) {
        case 0x43b9b8u: goto label_43b9b8;
        case 0x43b9d0u: goto label_43b9d0;
        case 0x43ba18u: goto label_43ba18;
        case 0x43bad8u: goto label_43bad8;
        case 0x43bae0u: goto label_43bae0;
        case 0x43baecu: goto label_43baec;
        case 0x43bb44u: goto label_43bb44;
        case 0x43bb64u: goto label_43bb64;
        case 0x43bbb8u: goto label_43bbb8;
        case 0x43bc40u: goto label_43bc40;
        case 0x43bc78u: goto label_43bc78;
        case 0x43bd18u: goto label_43bd18;
        case 0x43be60u: goto label_43be60;
        case 0x43bf50u: goto label_43bf50;
        case 0x43bf68u: goto label_43bf68;
        case 0x43c038u: goto label_43c038;
        case 0x43c180u: goto label_43c180;
        case 0x43c270u: goto label_43c270;
        case 0x43c288u: goto label_43c288;
        case 0x43c340u: goto label_43c340;
        case 0x43c450u: goto label_43c450;
        case 0x43c5c8u: goto label_43c5c8;
        case 0x43c5dcu: goto label_43c5dc;
        case 0x43c620u: goto label_43c620;
        case 0x43c670u: goto label_43c670;
        case 0x43c728u: goto label_43c728;
        case 0x43c7d0u: goto label_43c7d0;
        case 0x43c888u: goto label_43c888;
        case 0x43c920u: goto label_43c920;
        case 0x43c998u: goto label_43c998;
        case 0x43ca18u: goto label_43ca18;
        case 0x43cab4u: goto label_43cab4;
        case 0x43cac4u: goto label_43cac4;
        case 0x43caecu: goto label_43caec;
        case 0x43cafcu: goto label_43cafc;
        default: break;
    }

    ctx->pc = 0x43b9a0u;

    // 0x43b9a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x43b9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x43b9a4: 0x8f84bef8  lw          $a0, -0x4108($gp)
    ctx->pc = 0x43b9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950648)));
    // 0x43b9a8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43B9A8u;
    {
        const bool branch_taken_0x43b9a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B9A8u;
        // 0x43b9ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b9a8) {
            ctx->pc = 0x43B9BCu;
            goto label_43b9bc;
        }
    }
    ctx->pc = 0x43B9B0u;
    // 0x43b9b0: 0xc1074ac  jal         func_41D2B0
    ctx->pc = 0x43B9B0u;
    SET_GPR_U32(ctx, 31, 0x43B9B8u);
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x43B9B0u, 0x43B9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43B9B8u;
label_43b9b8:
    // 0x43b9b8: 0xaf80bef8  sw          $zero, -0x4108($gp)
    ctx->pc = 0x43b9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950648), GPR_U32(ctx, 0));
label_43b9bc:
    // 0x43b9bc: 0x8f84befc  lw          $a0, -0x4104($gp)
    ctx->pc = 0x43b9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950652)));
    // 0x43b9c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43B9C0u;
    {
        const bool branch_taken_0x43b9c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B9C0u;
        // 0x43b9c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b9c0) {
            ctx->pc = 0x43B9D8u;
            goto label_43b9d8;
        }
    }
    ctx->pc = 0x43B9C8u;
    // 0x43b9c8: 0xc1074ac  jal         func_41D2B0
    ctx->pc = 0x43B9C8u;
    SET_GPR_U32(ctx, 31, 0x43B9D0u);
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x43B9C8u, 0x43B9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43B9D0u;
label_43b9d0:
    // 0x43b9d0: 0xaf80befc  sw          $zero, -0x4104($gp)
    ctx->pc = 0x43b9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950652), GPR_U32(ctx, 0));
    // 0x43b9d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43b9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_43b9d8:
    // 0x43b9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x43B9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B9D8u;
        // 0x43b9dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43B9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43B9E0u;
    // 0x43b9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43b9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x43b9e4: 0x8f83bef0  lw          $v1, -0x4110($gp)
    ctx->pc = 0x43b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950640)));
    // 0x43b9e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43b9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x43b9ec: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x43B9ECu;
    {
        const bool branch_taken_0x43b9ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B9ECu;
        // 0x43b9f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b9ec) {
            ctx->pc = 0x43BA18u;
            goto label_43ba18;
        }
    }
    ctx->pc = 0x43B9F4u;
    // 0x43b9f4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x43b9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x43b9f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x43b9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b9fc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x43b9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x43ba00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x43ba00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ba04: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x43ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x43ba08: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x43ba08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x43ba0c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x43ba0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x43ba10: 0xc10d85c  jal         func_436170
    ctx->pc = 0x43BA10u;
    SET_GPR_U32(ctx, 31, 0x43BA18u);
    ctx->pc = 0x43BA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BA10u;
    // 0x43ba14: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x436170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x436170u, 0x43BA10u, 0x43BA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BA18u;
label_43ba18:
    // 0x43ba18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43ba18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43ba1c: 0x3e00008  jr          $ra
    ctx->pc = 0x43BA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BA1Cu;
        // 0x43ba20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43BA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43BA24u;
    // 0x43ba24: 0x0  nop
    ctx->pc = 0x43ba24u;
    // NOP
    // 0x43ba28: 0x84a7001c  lh          $a3, 0x1C($a1)
    ctx->pc = 0x43ba28u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x43ba2c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x43ba2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x43ba30: 0x24864030  addiu       $a2, $a0, 0x4030
    ctx->pc = 0x43ba30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x43ba34: 0xaf85bef0  sw          $a1, -0x4110($gp)
    ctx->pc = 0x43ba34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950640), GPR_U32(ctx, 5));
    // 0x43ba38: 0xac874030  sw          $a3, 0x4030($a0)
    ctx->pc = 0x43ba38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x624030u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x624030u, _value); } while (0);
    // 0x43ba3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43ba40: 0x84a3001e  lh          $v1, 0x1E($a1)
    ctx->pc = 0x43ba40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x43ba44: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x43ba44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x624034u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x624034u, _value); } while (0);
    // 0x43ba48: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x43ba48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x43ba4c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x43ba4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x624038u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x624038u, _value); } while (0);
    // 0x43ba50: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x43ba50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x43ba54: 0x3e00008  jr          $ra
    ctx->pc = 0x43BA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BA54u;
        // 0x43ba58: 0xacc3000c  sw          $v1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43BA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43BA5Cu;
    // 0x43ba5c: 0x0  nop
    ctx->pc = 0x43ba5cu;
    // NOP
    // 0x43ba60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x43ba60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x43ba64: 0x30c30007  andi        $v1, $a2, 0x7
    ctx->pc = 0x43ba64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x43ba68: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x43ba68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x43ba6c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x43ba6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x43ba70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43ba70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ba74: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43ba74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x43ba78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x43ba78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ba7c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x43ba7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x43ba80: 0x30c400f8  andi        $a0, $a2, 0xF8
    ctx->pc = 0x43ba80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)248);
    // 0x43ba84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x43ba84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x43ba88: 0x30d39000  andi        $s3, $a2, 0x9000
    ctx->pc = 0x43ba88u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)36864);
    // 0x43ba8c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x43ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x43ba90: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x43ba90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x43ba94: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x43ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x43ba98: 0xa2030020  sb          $v1, 0x20($s0)
    ctx->pc = 0x43ba98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x43ba9c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x43ba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x43baa0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x43baa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x43baa4: 0xa2040021  sb          $a0, 0x21($s0)
    ctx->pc = 0x43baa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 4));
    // 0x43baa8: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x43baa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x43baac: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x43BAACu;
    {
        const bool branch_taken_0x43baac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BAACu;
        // 0x43bab0: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43baac) {
            ctx->pc = 0x43BBC8u;
            goto label_43bbc8;
        }
    }
    ctx->pc = 0x43BAB4u;
    // 0x43bab4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x43bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x43bab8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x43bab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x43babc: 0x24421480  addiu       $v0, $v0, 0x1480
    ctx->pc = 0x43babcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5248));
    // 0x43bac0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x43bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x43bac4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x43bac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x43bac8: 0x800008  jr          $a0
    ctx->pc = 0x43BAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x43BAD0u: goto label_43bad0;
            case 0x43BB80u: goto label_43bb80;
            case 0x43BB9Cu: goto label_43bb9c;
            case 0x43BBC0u: goto label_43bbc0;
            case 0x43BBC8u: goto label_43bbc8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43BAC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x43BAD0u;
label_43bad0:
    // 0x43bad0: 0xc1083d2  jal         func_420F48
    ctx->pc = 0x43BAD0u;
    SET_GPR_U32(ctx, 31, 0x43BAD8u);
    ctx->pc = 0x43BAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BAD0u;
    // 0x43bad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420F48u, 0x43BAD0u, 0x43BAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BAD8u;
label_43bad8:
    // 0x43bad8: 0xc106234  jal         func_4188D0
    ctx->pc = 0x43BAD8u;
    SET_GPR_U32(ctx, 31, 0x43BAE0u);
    ctx->pc = 0x43BADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BAD8u;
    // 0x43badc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4188D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4188D0u, 0x43BAD8u, 0x43BAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BAE0u;
label_43bae0:
    // 0x43bae0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x43bae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43bae4: 0xc106472  jal         func_4191C8
    ctx->pc = 0x43BAE4u;
    SET_GPR_U32(ctx, 31, 0x43BAECu);
    ctx->pc = 0x43BAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BAE4u;
    // 0x43bae8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4191C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4191C8u, 0x43BAE4u, 0x43BAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BAECu;
label_43baec:
    // 0x43baec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x43baecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x43baf0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x43baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x43baf4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43BAF4u;
    {
        const bool branch_taken_0x43baf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x43BAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BAF4u;
        // 0x43baf8: 0x24040500  addiu       $a0, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43baf4) {
            ctx->pc = 0x43BB08u;
            goto label_43bb08;
        }
    }
    ctx->pc = 0x43BAFCu;
    // 0x43bafc: 0x3a430003  xori        $v1, $s2, 0x3
    ctx->pc = 0x43bafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)3);
    // 0x43bb00: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x43bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x43bb04: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x43bb04u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_43bb08:
    // 0x43bb08: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x43bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x43bb0c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x43bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x43bb10: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43BB10u;
    {
        const bool branch_taken_0x43bb10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x43BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BB10u;
        // 0x43bb14: 0x38630008  xori        $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bb10) {
            ctx->pc = 0x43BB20u;
            goto label_43bb20;
        }
    }
    ctx->pc = 0x43BB18u;
    // 0x43bb18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x43BB18u;
    {
        const bool branch_taken_0x43bb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BB18u;
        // 0x43bb1c: 0x34844000  ori         $a0, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bb18) {
            ctx->pc = 0x43BB28u;
            goto label_43bb28;
        }
    }
    ctx->pc = 0x43BB20u;
label_43bb20:
    // 0x43bb20: 0x34822000  ori         $v0, $a0, 0x2000
    ctx->pc = 0x43bb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x43bb24: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x43bb24u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_43bb28:
    // 0x43bb28: 0x41203  sra         $v0, $a0, 8
    ctx->pc = 0x43bb28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 8));
    // 0x43bb2c: 0x131a02  srl         $v1, $s3, 8
    ctx->pc = 0x43bb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 8));
    // 0x43bb30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x43bb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43bb34: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x43bb34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43bb38: 0xa2020023  sb          $v0, 0x23($s0)
    ctx->pc = 0x43bb38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 2));
    // 0x43bb3c: 0xc10d3f4  jal         func_434FD0
    ctx->pc = 0x43BB3Cu;
    SET_GPR_U32(ctx, 31, 0x43BB44u);
    ctx->pc = 0x43BB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BB3Cu;
    // 0x43bb40: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x434FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x434FD0u, 0x43BB3Cu, 0x43BB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BB44u;
label_43bb44:
    // 0x43bb44: 0x521004  sllv        $v0, $s2, $v0
    ctx->pc = 0x43bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x43bb48: 0x28430401  slti        $v1, $v0, 0x401
    ctx->pc = 0x43bb48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x43bb4c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x43BB4Cu;
    {
        const bool branch_taken_0x43bb4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x43BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BB4Cu;
        // 0x43bb50: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bb4c) {
            ctx->pc = 0x43BB5Cu;
            goto label_43bb5c;
        }
    }
    ctx->pc = 0x43BB54u;
    // 0x43bb54: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x43bb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x43bb58: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x43bb58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_43bb5c:
    // 0x43bb5c: 0xc10d3f4  jal         func_434FD0
    ctx->pc = 0x43BB5Cu;
    SET_GPR_U32(ctx, 31, 0x43BB64u);
    ctx->pc = 0x43BB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BB5Cu;
    // 0x43bb60: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x434FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x434FD0u, 0x43BB5Cu, 0x43BB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BB64u;
label_43bb64:
    // 0x43bb64: 0x521004  sllv        $v0, $s2, $v0
    ctx->pc = 0x43bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x43bb68: 0x28430401  slti        $v1, $v0, 0x401
    ctx->pc = 0x43bb68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x43bb6c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x43BB6Cu;
    {
        const bool branch_taken_0x43bb6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x43BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BB6Cu;
        // 0x43bb70: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bb6c) {
            ctx->pc = 0x43BBB8u;
            goto label_43bbb8;
        }
    }
    ctx->pc = 0x43BB74u;
    // 0x43bb74: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x43bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x43bb78: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x43BB78u;
    {
        const bool branch_taken_0x43bb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BB78u;
        // 0x43bb7c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bb78) {
            ctx->pc = 0x43BBB8u;
            goto label_43bbb8;
        }
    }
    ctx->pc = 0x43BB80u;
label_43bb80:
    // 0x43bb80: 0x30c20f00  andi        $v0, $a2, 0xF00
    ctx->pc = 0x43bb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3840);
    // 0x43bb84: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x43bb84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x43bb88: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x43BB88u;
    {
        const bool branch_taken_0x43bb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BB88u;
        // 0x43bb8c: 0xa2020023  sb          $v0, 0x23($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bb88) {
            ctx->pc = 0x43BBB8u;
            goto label_43bbb8;
        }
    }
    ctx->pc = 0x43BB90u;
    // 0x43bb90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43bb94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x43BB94u;
    {
        const bool branch_taken_0x43bb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BB94u;
        // 0x43bb98: 0xa2020023  sb          $v0, 0x23($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bb94) {
            ctx->pc = 0x43BBB8u;
            goto label_43bbb8;
        }
    }
    ctx->pc = 0x43BB9Cu;
label_43bb9c:
    // 0x43bb9c: 0x8f82ae10  lw          $v0, -0x51F0($gp)
    ctx->pc = 0x43bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946320)));
    // 0x43bba0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x43bba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x43bba4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x43bba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x43bba8: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x43BBA8u;
    {
        const bool branch_taken_0x43bba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x43BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BBA8u;
        // 0x43bbac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bba8) {
            ctx->pc = 0x43BBB4u;
            goto label_43bbb4;
        }
    }
    ctx->pc = 0x43BBB0u;
    // 0x43bbb0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x43bbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_43bbb4:
    // 0x43bbb4: 0xa2050023  sb          $a1, 0x23($s0)
    ctx->pc = 0x43bbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 5));
label_43bbb8:
    // 0x43bbb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x43BBB8u;
    {
        const bool branch_taken_0x43bbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BBB8u;
        // 0x43bbbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bbb8) {
            ctx->pc = 0x43BBCCu;
            goto label_43bbcc;
        }
    }
    ctx->pc = 0x43BBC0u;
label_43bbc0:
    // 0x43bbc0: 0x1000fffd  b           . + 4 + (-0x3 << 2)
    ctx->pc = 0x43BBC0u;
    {
        const bool branch_taken_0x43bbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BBC0u;
        // 0x43bbc4: 0xa2000023  sb          $zero, 0x23($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bbc0) {
            ctx->pc = 0x43BBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43bbb8;
        }
    }
    ctx->pc = 0x43BBC8u;
label_43bbc8:
    // 0x43bbc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x43bbc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43bbcc:
    // 0x43bbcc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x43bbccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x43bbd0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x43bbd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x43bbd4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x43bbd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x43bbd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x43bbd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43bbdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43bbdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43bbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x43BBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BBE0u;
        // 0x43bbe4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43BBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43BBE8u;
    // 0x43bbe8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x43bbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x43bbec: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x43bbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x43bbf0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x43bbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x43bbf4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x43bbf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43bbf8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x43bbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x43bbfc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x43bbfcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43bc00: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x43bc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x43bc04: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x43bc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x43bc08: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x43bc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x43bc0c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x43bc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x43bc10: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x43bc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x43bc14: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x43bc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x43bc18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43bc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x43bc1c: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x43bc1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x43bc20: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x43bc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x43bc24: 0x2f02b  sltu        $fp, $zero, $v0
    ctx->pc = 0x43bc24u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x43bc28: 0x17c00007  bnez        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x43BC28u;
    {
        const bool branch_taken_0x43bc28 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x43BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BC28u;
        // 0x43bc2c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bc28) {
            ctx->pc = 0x43BC48u;
            goto label_43bc48;
        }
    }
    ctx->pc = 0x43BC30u;
    // 0x43bc30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43bc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43bc34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x43bc34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43bc38: 0xc1075c0  jal         func_41D700
    ctx->pc = 0x43BC38u;
    SET_GPR_U32(ctx, 31, 0x43BC40u);
    ctx->pc = 0x43BC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BC38u;
    // 0x43bc3c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x43BC38u, 0x43BC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BC40u;
label_43bc40:
    // 0x43bc40: 0x104003af  beqz        $v0, . + 4 + (0x3AF << 2)
    ctx->pc = 0x43BC40u;
    {
        const bool branch_taken_0x43bc40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BC40u;
        // 0x43bc44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bc40) {
            ctx->pc = 0x43CB00u;
            goto label_43cb00;
        }
    }
    ctx->pc = 0x43BC48u;
label_43bc48:
    // 0x43bc48: 0x92220023  lbu         $v0, 0x23($s1)
    ctx->pc = 0x43bc48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x43bc4c: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x43bc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x43bc50: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x43BC50u;
    {
        const bool branch_taken_0x43bc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43bc50) {
            ctx->pc = 0x43BC54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43BC50u;
            // 0x43bc54: 0x8ee3000c  lw          $v1, 0xC($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43BC84u;
            goto label_43bc84;
        }
    }
    ctx->pc = 0x43BC58u;
    // 0x43bc58: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x43bc58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x43bc5c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x43bc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x43bc60: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x43bc60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x43bc64: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x43BC64u;
    {
        const bool branch_taken_0x43bc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BC64u;
        // 0x43bc68: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bc64) {
            ctx->pc = 0x43BC80u;
            goto label_43bc80;
        }
    }
    ctx->pc = 0x43BC6Cu;
    // 0x43bc6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43bc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43bc70: 0xc1075e0  jal         func_41D780
    ctx->pc = 0x43BC70u;
    SET_GPR_U32(ctx, 31, 0x43BC78u);
    ctx->pc = 0x43BC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BC70u;
    // 0x43bc74: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D780u, 0x43BC70u, 0x43BC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BC78u;
label_43bc78:
    // 0x43bc78: 0x104003a1  beqz        $v0, . + 4 + (0x3A1 << 2)
    ctx->pc = 0x43BC78u;
    {
        const bool branch_taken_0x43bc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BC78u;
        // 0x43bc7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bc78) {
            ctx->pc = 0x43CB00u;
            goto label_43cb00;
        }
    }
    ctx->pc = 0x43BC80u;
label_43bc80:
    // 0x43bc80: 0x8ee3000c  lw          $v1, 0xC($s7)
    ctx->pc = 0x43bc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_43bc84:
    // 0x43bc84: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x43bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x43bc88: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x43bc88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x43bc8c: 0x8ef60014  lw          $s6, 0x14($s7)
    ctx->pc = 0x43bc8cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x43bc90: 0x106200d1  beq         $v1, $v0, . + 4 + (0xD1 << 2)
    ctx->pc = 0x43BC90u;
    {
        const bool branch_taken_0x43bc90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x43BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BC90u;
        // 0x43bc94: 0x8ee50018  lw          $a1, 0x18($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bc90) {
            ctx->pc = 0x43BFD8u;
            goto label_43bfd8;
        }
    }
    ctx->pc = 0x43BC98u;
    // 0x43bc98: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x43bc98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x43bc9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43BC9Cu;
    {
        const bool branch_taken_0x43bc9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BC9Cu;
        // 0x43bca0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bc9c) {
            ctx->pc = 0x43BCB4u;
            goto label_43bcb4;
        }
    }
    ctx->pc = 0x43BCA4u;
    // 0x43bca4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x43BCA4u;
    {
        const bool branch_taken_0x43bca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x43bca4) {
            ctx->pc = 0x43BCA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43BCA4u;
            // 0x43bca8: 0x92230023  lbu         $v1, 0x23($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43BCC8u;
            goto label_43bcc8;
        }
    }
    ctx->pc = 0x43BCACu;
    // 0x43bcac: 0x1000037a  b           . + 4 + (0x37A << 2)
    ctx->pc = 0x43BCACu;
    {
        const bool branch_taken_0x43bcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BCACu;
        // 0x43bcb0: 0x92220023  lbu         $v0, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bcac) {
            ctx->pc = 0x43CA98u;
            goto label_43ca98;
        }
    }
    ctx->pc = 0x43BCB4u;
label_43bcb4:
    // 0x43bcb4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x43bcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x43bcb8: 0x50620255  beql        $v1, $v0, . + 4 + (0x255 << 2)
    ctx->pc = 0x43BCB8u;
    {
        const bool branch_taken_0x43bcb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x43bcb8) {
            ctx->pc = 0x43BCBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43BCB8u;
            // 0x43bcbc: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C610u;
            goto label_43c610;
        }
    }
    ctx->pc = 0x43BCC0u;
    // 0x43bcc0: 0x10000375  b           . + 4 + (0x375 << 2)
    ctx->pc = 0x43BCC0u;
    {
        const bool branch_taken_0x43bcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BCC0u;
        // 0x43bcc4: 0x92220023  lbu         $v0, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bcc0) {
            ctx->pc = 0x43CA98u;
            goto label_43ca98;
        }
    }
    ctx->pc = 0x43BCC8u;
label_43bcc8:
    // 0x43bcc8: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x43bcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x43bccc: 0x104000c0  beqz        $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x43BCCCu;
    {
        const bool branch_taken_0x43bccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BCCCu;
        // 0x43bcd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bccc) {
            ctx->pc = 0x43BFD0u;
            goto label_43bfd0;
        }
    }
    ctx->pc = 0x43BCD4u;
    // 0x43bcd4: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x43bcd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x43bcd8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43BCD8u;
    {
        const bool branch_taken_0x43bcd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x43BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BCD8u;
        // 0x43bcdc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bcd8) {
            ctx->pc = 0x43BCF0u;
            goto label_43bcf0;
        }
    }
    ctx->pc = 0x43BCE0u;
    // 0x43bce0: 0x50620054  beql        $v1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x43BCE0u;
    {
        const bool branch_taken_0x43bce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x43bce0) {
            ctx->pc = 0x43BCE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43BCE0u;
            // 0x43bce4: 0x8e2d0008  lw          $t5, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43BE34u;
            goto label_43be34;
        }
    }
    ctx->pc = 0x43BCE8u;
    // 0x43bce8: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x43BCE8u;
    {
        const bool branch_taken_0x43bce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BCE8u;
        // 0x43bcec: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bce8) {
            ctx->pc = 0x43BF44u;
            goto label_43bf44;
        }
    }
    ctx->pc = 0x43BCF0u;
label_43bcf0:
    // 0x43bcf0: 0x8e2c0008  lw          $t4, 0x8($s1)
    ctx->pc = 0x43bcf0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x43bcf4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x43bcf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43bcf8: 0x240efff8  addiu       $t6, $zero, -0x8
    ctx->pc = 0x43bcf8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x43bcfc: 0x240d00ff  addiu       $t5, $zero, 0xFF
    ctx->pc = 0x43bcfcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x43bd00: 0x258f0020  addiu       $t7, $t4, 0x20
    ctx->pc = 0x43bd00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x43bd04: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x43bd04u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43bd08: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x43bd08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43bd0c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x43bd0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43bd10: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x43bd10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43bd14: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x43bd14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_43bd18:
    // 0x43bd18: 0x95650000  lhu         $a1, 0x0($t3)
    ctx->pc = 0x43bd18u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x43bd1c: 0x519c2  srl         $v1, $a1, 7
    ctx->pc = 0x43bd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x43bd20: 0x52082  srl         $a0, $a1, 2
    ctx->pc = 0x43bd20u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x43bd24: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x43bd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x43bd28: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x43bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x43bd2c: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x43bd2cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x43bd30: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x43bd30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
    // 0x43bd34: 0xa1040001  sb          $a0, 0x1($t0)
    ctx->pc = 0x43bd34u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x43bd38: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x43bd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x43bd3c: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x43bd3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x43bd40: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x43BD40u;
    {
        const bool branch_taken_0x43bd40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BD40u;
        // 0x43bd44: 0xa1220000  sb          $v0, 0x0($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bd40) {
            ctx->pc = 0x43BD50u;
            goto label_43bd50;
        }
    }
    ctx->pc = 0x43BD48u;
    // 0x43bd48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x43BD48u;
    {
        const bool branch_taken_0x43bd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BD48u;
        // 0x43bd4c: 0xa14d0003  sb          $t5, 0x3($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bd48) {
            ctx->pc = 0x43BD54u;
            goto label_43bd54;
        }
    }
    ctx->pc = 0x43BD50u;
label_43bd50:
    // 0x43bd50: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x43bd50u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
label_43bd54:
    // 0x43bd54: 0x95650002  lhu         $a1, 0x2($t3)
    ctx->pc = 0x43bd54u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x43bd58: 0x519c2  srl         $v1, $a1, 7
    ctx->pc = 0x43bd58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x43bd5c: 0x52082  srl         $a0, $a1, 2
    ctx->pc = 0x43bd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x43bd60: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x43bd60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x43bd64: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x43bd64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x43bd68: 0xa0e30006  sb          $v1, 0x6($a3)
    ctx->pc = 0x43bd68u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x43bd6c: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x43bd6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
    // 0x43bd70: 0xa1040005  sb          $a0, 0x5($t0)
    ctx->pc = 0x43bd70u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x43bd74: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x43bd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x43bd78: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x43bd78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x43bd7c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x43BD7Cu;
    {
        const bool branch_taken_0x43bd7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BD7Cu;
        // 0x43bd80: 0xa1220004  sb          $v0, 0x4($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bd7c) {
            ctx->pc = 0x43BD8Cu;
            goto label_43bd8c;
        }
    }
    ctx->pc = 0x43BD84u;
    // 0x43bd84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x43BD84u;
    {
        const bool branch_taken_0x43bd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BD84u;
        // 0x43bd88: 0xa14d0007  sb          $t5, 0x7($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 7), (uint8_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bd84) {
            ctx->pc = 0x43BD90u;
            goto label_43bd90;
        }
    }
    ctx->pc = 0x43BD8Cu;
label_43bd8c:
    // 0x43bd8c: 0xa0c00007  sb          $zero, 0x7($a2)
    ctx->pc = 0x43bd8cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 0));
label_43bd90:
    // 0x43bd90: 0x95650004  lhu         $a1, 0x4($t3)
    ctx->pc = 0x43bd90u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x43bd94: 0x519c2  srl         $v1, $a1, 7
    ctx->pc = 0x43bd94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x43bd98: 0x52082  srl         $a0, $a1, 2
    ctx->pc = 0x43bd98u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x43bd9c: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x43bd9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x43bda0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x43bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x43bda4: 0xa0e3000a  sb          $v1, 0xA($a3)
    ctx->pc = 0x43bda4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x43bda8: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x43bda8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
    // 0x43bdac: 0xa1040009  sb          $a0, 0x9($t0)
    ctx->pc = 0x43bdacu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 9), (uint8_t)GPR_U32(ctx, 4));
    // 0x43bdb0: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x43bdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x43bdb4: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x43bdb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x43bdb8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x43BDB8u;
    {
        const bool branch_taken_0x43bdb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BDB8u;
        // 0x43bdbc: 0xa1220008  sb          $v0, 0x8($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bdb8) {
            ctx->pc = 0x43BDC8u;
            goto label_43bdc8;
        }
    }
    ctx->pc = 0x43BDC0u;
    // 0x43bdc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x43BDC0u;
    {
        const bool branch_taken_0x43bdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BDC0u;
        // 0x43bdc4: 0xa14d000b  sb          $t5, 0xB($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 11), (uint8_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bdc0) {
            ctx->pc = 0x43BDCCu;
            goto label_43bdcc;
        }
    }
    ctx->pc = 0x43BDC8u;
label_43bdc8:
    // 0x43bdc8: 0xa0c0000b  sb          $zero, 0xB($a2)
    ctx->pc = 0x43bdc8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 11), (uint8_t)GPR_U32(ctx, 0));
label_43bdcc:
    // 0x43bdcc: 0x95650006  lhu         $a1, 0x6($t3)
    ctx->pc = 0x43bdccu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x43bdd0: 0x519c2  srl         $v1, $a1, 7
    ctx->pc = 0x43bdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x43bdd4: 0x52082  srl         $a0, $a1, 2
    ctx->pc = 0x43bdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x43bdd8: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x43bdd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x43bddc: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x43bddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x43bde0: 0xa0e3000e  sb          $v1, 0xE($a3)
    ctx->pc = 0x43bde0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x43bde4: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x43bde4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
    // 0x43bde8: 0xa104000d  sb          $a0, 0xD($t0)
    ctx->pc = 0x43bde8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 13), (uint8_t)GPR_U32(ctx, 4));
    // 0x43bdec: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x43bdecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x43bdf0: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x43bdf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x43bdf4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x43BDF4u;
    {
        const bool branch_taken_0x43bdf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BDF4u;
        // 0x43bdf8: 0xa122000c  sb          $v0, 0xC($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bdf4) {
            ctx->pc = 0x43BE04u;
            goto label_43be04;
        }
    }
    ctx->pc = 0x43BDFCu;
    // 0x43bdfc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x43BDFCu;
    {
        const bool branch_taken_0x43bdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BDFCu;
        // 0x43be00: 0xa14d000f  sb          $t5, 0xF($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 15), (uint8_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bdfc) {
            ctx->pc = 0x43BE08u;
            goto label_43be08;
        }
    }
    ctx->pc = 0x43BE04u;
label_43be04:
    // 0x43be04: 0xa0c0000f  sb          $zero, 0xF($a2)
    ctx->pc = 0x43be04u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 15), (uint8_t)GPR_U32(ctx, 0));
label_43be08:
    // 0x43be08: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x43be08u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x43be0c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x43be0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x43be10: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x43be10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x43be14: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x43be14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x43be18: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x43be18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x43be1c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x43be1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x43be20: 0x18f102a  slt         $v0, $t4, $t7
    ctx->pc = 0x43be20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x43be24: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x43BE24u;
    {
        const bool branch_taken_0x43be24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43BE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BE24u;
        // 0x43be28: 0x256b0008  addiu       $t3, $t3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43be24) {
            ctx->pc = 0x43BD18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43bd18;
        }
    }
    ctx->pc = 0x43BE2Cu;
    // 0x43be2c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x43BE2Cu;
    {
        const bool branch_taken_0x43be2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BE2Cu;
        // 0x43be30: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43be2c) {
            ctx->pc = 0x43BF44u;
            goto label_43bf44;
        }
    }
    ctx->pc = 0x43BE34u;
label_43be34:
    // 0x43be34: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x43be34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43be38: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x43be38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x43be3c: 0x3c0fff00  lui         $t7, 0xFF00
    ctx->pc = 0x43be3cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65280 << 16));
    // 0x43be40: 0x25b00040  addiu       $s0, $t5, 0x40
    ctx->pc = 0x43be40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 13), 64));
    // 0x43be44: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x43be44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x43be48: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x43be48u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43be4c: 0x1a0602d  daddu       $t4, $t5, $zero
    ctx->pc = 0x43be4cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43be50: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x43be50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43be54: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x43be54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43be58: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x43be58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43be5c: 0x0  nop
    ctx->pc = 0x43be5cu;
    // NOP
label_43be60:
    // 0x43be60: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x43be60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x43be64: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x43be64u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x43be68: 0x1b0302a  slt         $a2, $t5, $s0
    ctx->pc = 0x43be68u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x43be6c: 0xaf2024  and         $a0, $a1, $t7
    ctx->pc = 0x43be6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 15));
    // 0x43be70: 0x51c02  srl         $v1, $a1, 16
    ctx->pc = 0x43be70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x43be74: 0x87001b  divu        $zero, $a0, $a3
    ctx->pc = 0x43be74u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x43be78: 0xa1230002  sb          $v1, 0x2($t1)
    ctx->pc = 0x43be78u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x43be7c: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x43be7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x43be80: 0xa1420001  sb          $v0, 0x1($t2)
    ctx->pc = 0x43be80u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x43be84: 0xa1650000  sb          $a1, 0x0($t3)
    ctx->pc = 0x43be84u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x43be88: 0x50ee0001  beql        $a3, $t6, . + 4 + (0x1 << 2)
    ctx->pc = 0x43BE88u;
    {
        const bool branch_taken_0x43be88 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 14));
        if (branch_taken_0x43be88) {
            ctx->pc = 0x43BE8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43BE88u;
            // 0x43be8c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43BE90u;
            goto label_43be90;
        }
    }
    ctx->pc = 0x43BE90u;
label_43be90:
    // 0x43be90: 0x2012  mflo        $a0
    ctx->pc = 0x43be90u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x43be94: 0xa1040003  sb          $a0, 0x3($t0)
    ctx->pc = 0x43be94u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x43be98: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x43be98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x43be9c: 0x6f2824  and         $a1, $v1, $t7
    ctx->pc = 0x43be9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 15));
    // 0x43bea0: 0x32402  srl         $a0, $v1, 16
    ctx->pc = 0x43bea0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x43bea4: 0xa7001b  divu        $zero, $a1, $a3
    ctx->pc = 0x43bea4u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x43bea8: 0xa1240006  sb          $a0, 0x6($t1)
    ctx->pc = 0x43bea8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 6), (uint8_t)GPR_U32(ctx, 4));
    // 0x43beac: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x43beacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x43beb0: 0xa1420005  sb          $v0, 0x5($t2)
    ctx->pc = 0x43beb0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x43beb4: 0xa1630004  sb          $v1, 0x4($t3)
    ctx->pc = 0x43beb4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x43beb8: 0x50ee0001  beql        $a3, $t6, . + 4 + (0x1 << 2)
    ctx->pc = 0x43BEB8u;
    {
        const bool branch_taken_0x43beb8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 14));
        if (branch_taken_0x43beb8) {
            ctx->pc = 0x43BEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43BEB8u;
            // 0x43bebc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43BEC0u;
            goto label_43bec0;
        }
    }
    ctx->pc = 0x43BEC0u;
label_43bec0:
    // 0x43bec0: 0x2812  mflo        $a1
    ctx->pc = 0x43bec0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x43bec4: 0xa1050007  sb          $a1, 0x7($t0)
    ctx->pc = 0x43bec4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 5));
    // 0x43bec8: 0x8d830008  lw          $v1, 0x8($t4)
    ctx->pc = 0x43bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x43becc: 0x6f2824  and         $a1, $v1, $t7
    ctx->pc = 0x43beccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 15));
    // 0x43bed0: 0x32402  srl         $a0, $v1, 16
    ctx->pc = 0x43bed0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x43bed4: 0xa7001b  divu        $zero, $a1, $a3
    ctx->pc = 0x43bed4u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x43bed8: 0xa124000a  sb          $a0, 0xA($t1)
    ctx->pc = 0x43bed8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x43bedc: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x43bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x43bee0: 0xa1420009  sb          $v0, 0x9($t2)
    ctx->pc = 0x43bee0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x43bee4: 0xa1630008  sb          $v1, 0x8($t3)
    ctx->pc = 0x43bee4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x43bee8: 0x50ee0001  beql        $a3, $t6, . + 4 + (0x1 << 2)
    ctx->pc = 0x43BEE8u;
    {
        const bool branch_taken_0x43bee8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 14));
        if (branch_taken_0x43bee8) {
            ctx->pc = 0x43BEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43BEE8u;
            // 0x43beec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43BEF0u;
            goto label_43bef0;
        }
    }
    ctx->pc = 0x43BEF0u;
label_43bef0:
    // 0x43bef0: 0x2812  mflo        $a1
    ctx->pc = 0x43bef0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x43bef4: 0xa105000b  sb          $a1, 0xB($t0)
    ctx->pc = 0x43bef4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 11), (uint8_t)GPR_U32(ctx, 5));
    // 0x43bef8: 0x8d84000c  lw          $a0, 0xC($t4)
    ctx->pc = 0x43bef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x43befc: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x43befcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x43bf00: 0x8f2824  and         $a1, $a0, $t7
    ctx->pc = 0x43bf00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 15));
    // 0x43bf04: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x43bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x43bf08: 0xa7001b  divu        $zero, $a1, $a3
    ctx->pc = 0x43bf08u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x43bf0c: 0xa122000e  sb          $v0, 0xE($t1)
    ctx->pc = 0x43bf0cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x43bf10: 0x41a02  srl         $v1, $a0, 8
    ctx->pc = 0x43bf10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x43bf14: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x43bf14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x43bf18: 0xa143000d  sb          $v1, 0xD($t2)
    ctx->pc = 0x43bf18u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x43bf1c: 0xa164000c  sb          $a0, 0xC($t3)
    ctx->pc = 0x43bf1cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 12), (uint8_t)GPR_U32(ctx, 4));
    // 0x43bf20: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x43bf20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x43bf24: 0x50ee0001  beql        $a3, $t6, . + 4 + (0x1 << 2)
    ctx->pc = 0x43BF24u;
    {
        const bool branch_taken_0x43bf24 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 14));
        if (branch_taken_0x43bf24) {
            ctx->pc = 0x43BF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43BF24u;
            // 0x43bf28: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43BF2Cu;
            goto label_43bf2c;
        }
    }
    ctx->pc = 0x43BF2Cu;
label_43bf2c:
    // 0x43bf2c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x43bf2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x43bf30: 0x2812  mflo        $a1
    ctx->pc = 0x43bf30u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x43bf34: 0xa105000f  sb          $a1, 0xF($t0)
    ctx->pc = 0x43bf34u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 15), (uint8_t)GPR_U32(ctx, 5));
    // 0x43bf38: 0x14c0ffc9  bnez        $a2, . + 4 + (-0x37 << 2)
    ctx->pc = 0x43BF38u;
    {
        const bool branch_taken_0x43bf38 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x43BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BF38u;
        // 0x43bf3c: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bf38) {
            ctx->pc = 0x43BE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43be60;
        }
    }
    ctx->pc = 0x43BF40u;
    // 0x43bf40: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x43bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_43bf44:
    // 0x43bf44: 0x184002e1  blez        $v0, . + 4 + (0x2E1 << 2)
    ctx->pc = 0x43BF44u;
    {
        const bool branch_taken_0x43bf44 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BF44u;
        // 0x43bf48: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bf44) {
            ctx->pc = 0x43CACCu;
            goto label_43cacc;
        }
    }
    ctx->pc = 0x43BF4Cu;
    // 0x43bf4c: 0x0  nop
    ctx->pc = 0x43bf4cu;
    // NOP
label_43bf50:
    // 0x43bf50: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x43bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x43bf54: 0x26090001  addiu       $t1, $s0, 0x1
    ctx->pc = 0x43bf54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x43bf58: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x43BF58u;
    {
        const bool branch_taken_0x43bf58 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BF58u;
        // 0x43bf5c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bf58) {
            ctx->pc = 0x43BFA8u;
            goto label_43bfa8;
        }
    }
    ctx->pc = 0x43BF60u;
    // 0x43bf60: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x43bf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43bf64: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x43bf64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_43bf68:
    // 0x43bf68: 0x8622001c  lh          $v0, 0x1C($s1)
    ctx->pc = 0x43bf68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x43bf6c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x43bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x43bf70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x43bf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x43bf74: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x43BF74u;
    {
        const bool branch_taken_0x43bf74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43bf74) {
            ctx->pc = 0x43BF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43BF74u;
            // 0x43bf78: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43BF8Cu;
            goto label_43bf8c;
        }
    }
    ctx->pc = 0x43BF7Cu;
    // 0x43bf7c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x43bf7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x43bf80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x43bf80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x43bf84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x43BF84u;
    {
        const bool branch_taken_0x43bf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BF84u;
        // 0x43bf88: 0x21102  srl         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bf84) {
            ctx->pc = 0x43BF90u;
            goto label_43bf90;
        }
    }
    ctx->pc = 0x43BF8Cu;
label_43bf8c:
    // 0x43bf8c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x43bf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_43bf90:
    // 0x43bf90: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x43bf90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x43bf94: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x43bf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x43bf98: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x43bf98u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x43bf9c: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x43bf9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x43bfa0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x43BFA0u;
    {
        const bool branch_taken_0x43bfa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BFA0u;
        // 0x43bfa4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bfa0) {
            ctx->pc = 0x43BF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43bf68;
        }
    }
    ctx->pc = 0x43BFA8u;
label_43bfa8:
    // 0x43bfa8: 0x8ee40010  lw          $a0, 0x10($s7)
    ctx->pc = 0x43bfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x43bfac: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x43bfacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43bfb0: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x43bfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x43bfb4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x43bfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x43bfb8: 0x2c4b021  addu        $s6, $s6, $a0
    ctx->pc = 0x43bfb8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x43bfbc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x43bfbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x43bfc0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x43BFC0u;
    {
        const bool branch_taken_0x43bfc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BFC0u;
        // 0x43bfc4: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bfc0) {
            ctx->pc = 0x43BF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43bf50;
        }
    }
    ctx->pc = 0x43BFC8u;
    // 0x43bfc8: 0x100002c1  b           . + 4 + (0x2C1 << 2)
    ctx->pc = 0x43BFC8u;
    {
        const bool branch_taken_0x43bfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BFC8u;
        // 0x43bfcc: 0x92220023  lbu         $v0, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bfc8) {
            ctx->pc = 0x43CAD0u;
            goto label_43cad0;
        }
    }
    ctx->pc = 0x43BFD0u;
label_43bfd0:
    // 0x43bfd0: 0x100002b2  b           . + 4 + (0x2B2 << 2)
    ctx->pc = 0x43BFD0u;
    {
        const bool branch_taken_0x43bfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BFD0u;
        // 0x43bfd4: 0x30620060  andi        $v0, $v1, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bfd0) {
            ctx->pc = 0x43CA9Cu;
            goto label_43ca9c;
        }
    }
    ctx->pc = 0x43BFD8u;
label_43bfd8:
    // 0x43bfd8: 0x92240023  lbu         $a0, 0x23($s1)
    ctx->pc = 0x43bfd8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x43bfdc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x43bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x43bfe0: 0x30830060  andi        $v1, $a0, 0x60
    ctx->pc = 0x43bfe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)96);
    // 0x43bfe4: 0x106200c2  beq         $v1, $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x43BFE4u;
    {
        const bool branch_taken_0x43bfe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x43BFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BFE4u;
        // 0x43bfe8: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bfe4) {
            ctx->pc = 0x43C2F0u;
            goto label_43c2f0;
        }
    }
    ctx->pc = 0x43BFECu;
    // 0x43bfec: 0x14620184  bne         $v1, $v0, . + 4 + (0x184 << 2)
    ctx->pc = 0x43BFECu;
    {
        const bool branch_taken_0x43bfec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x43BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BFECu;
        // 0x43bff0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bfec) {
            ctx->pc = 0x43C600u;
            goto label_43c600;
        }
    }
    ctx->pc = 0x43BFF4u;
    // 0x43bff4: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x43bff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x43bff8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43BFF8u;
    {
        const bool branch_taken_0x43bff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x43BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BFF8u;
        // 0x43bffc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bff8) {
            ctx->pc = 0x43C010u;
            goto label_43c010;
        }
    }
    ctx->pc = 0x43C000u;
    // 0x43c000: 0x50620054  beql        $v1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x43C000u;
    {
        const bool branch_taken_0x43c000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x43c000) {
            ctx->pc = 0x43C004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C000u;
            // 0x43c004: 0x8e2d0008  lw          $t5, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C154u;
            goto label_43c154;
        }
    }
    ctx->pc = 0x43C008u;
    // 0x43c008: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x43C008u;
    {
        const bool branch_taken_0x43c008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C008u;
        // 0x43c00c: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c008) {
            ctx->pc = 0x43C264u;
            goto label_43c264;
        }
    }
    ctx->pc = 0x43C010u;
label_43c010:
    // 0x43c010: 0x8e2c0008  lw          $t4, 0x8($s1)
    ctx->pc = 0x43c010u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x43c014: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x43c014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c018: 0x240efff8  addiu       $t6, $zero, -0x8
    ctx->pc = 0x43c018u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x43c01c: 0x240d00ff  addiu       $t5, $zero, 0xFF
    ctx->pc = 0x43c01cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x43c020: 0x258f0020  addiu       $t7, $t4, 0x20
    ctx->pc = 0x43c020u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x43c024: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x43c024u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c028: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x43c028u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c02c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x43c02cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c030: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x43c030u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c034: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x43c034u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_43c038:
    // 0x43c038: 0x95650000  lhu         $a1, 0x0($t3)
    ctx->pc = 0x43c038u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x43c03c: 0x519c2  srl         $v1, $a1, 7
    ctx->pc = 0x43c03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x43c040: 0x52082  srl         $a0, $a1, 2
    ctx->pc = 0x43c040u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x43c044: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x43c044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x43c048: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x43c048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x43c04c: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x43c04cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x43c050: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x43c050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
    // 0x43c054: 0xa1040001  sb          $a0, 0x1($t0)
    ctx->pc = 0x43c054u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x43c058: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x43c058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x43c05c: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x43c05cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x43c060: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x43C060u;
    {
        const bool branch_taken_0x43c060 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C060u;
        // 0x43c064: 0xa1220000  sb          $v0, 0x0($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c060) {
            ctx->pc = 0x43C070u;
            goto label_43c070;
        }
    }
    ctx->pc = 0x43C068u;
    // 0x43c068: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x43C068u;
    {
        const bool branch_taken_0x43c068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C068u;
        // 0x43c06c: 0xa14d0003  sb          $t5, 0x3($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c068) {
            ctx->pc = 0x43C074u;
            goto label_43c074;
        }
    }
    ctx->pc = 0x43C070u;
label_43c070:
    // 0x43c070: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x43c070u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
label_43c074:
    // 0x43c074: 0x95650002  lhu         $a1, 0x2($t3)
    ctx->pc = 0x43c074u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x43c078: 0x519c2  srl         $v1, $a1, 7
    ctx->pc = 0x43c078u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x43c07c: 0x52082  srl         $a0, $a1, 2
    ctx->pc = 0x43c07cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x43c080: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x43c080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x43c084: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x43c084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x43c088: 0xa0e30006  sb          $v1, 0x6($a3)
    ctx->pc = 0x43c088u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x43c08c: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x43c08cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
    // 0x43c090: 0xa1040005  sb          $a0, 0x5($t0)
    ctx->pc = 0x43c090u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x43c094: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x43c094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x43c098: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x43c098u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x43c09c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x43C09Cu;
    {
        const bool branch_taken_0x43c09c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C09Cu;
        // 0x43c0a0: 0xa1220004  sb          $v0, 0x4($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c09c) {
            ctx->pc = 0x43C0ACu;
            goto label_43c0ac;
        }
    }
    ctx->pc = 0x43C0A4u;
    // 0x43c0a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x43C0A4u;
    {
        const bool branch_taken_0x43c0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C0A4u;
        // 0x43c0a8: 0xa14d0007  sb          $t5, 0x7($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 7), (uint8_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c0a4) {
            ctx->pc = 0x43C0B0u;
            goto label_43c0b0;
        }
    }
    ctx->pc = 0x43C0ACu;
label_43c0ac:
    // 0x43c0ac: 0xa0c00007  sb          $zero, 0x7($a2)
    ctx->pc = 0x43c0acu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 0));
label_43c0b0:
    // 0x43c0b0: 0x95650004  lhu         $a1, 0x4($t3)
    ctx->pc = 0x43c0b0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x43c0b4: 0x519c2  srl         $v1, $a1, 7
    ctx->pc = 0x43c0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x43c0b8: 0x52082  srl         $a0, $a1, 2
    ctx->pc = 0x43c0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x43c0bc: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x43c0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x43c0c0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x43c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x43c0c4: 0xa0e3000a  sb          $v1, 0xA($a3)
    ctx->pc = 0x43c0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x43c0c8: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x43c0c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
    // 0x43c0cc: 0xa1040009  sb          $a0, 0x9($t0)
    ctx->pc = 0x43c0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 9), (uint8_t)GPR_U32(ctx, 4));
    // 0x43c0d0: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x43c0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x43c0d4: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x43c0d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x43c0d8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x43C0D8u;
    {
        const bool branch_taken_0x43c0d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C0D8u;
        // 0x43c0dc: 0xa1220008  sb          $v0, 0x8($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c0d8) {
            ctx->pc = 0x43C0E8u;
            goto label_43c0e8;
        }
    }
    ctx->pc = 0x43C0E0u;
    // 0x43c0e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x43C0E0u;
    {
        const bool branch_taken_0x43c0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C0E0u;
        // 0x43c0e4: 0xa14d000b  sb          $t5, 0xB($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 11), (uint8_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c0e0) {
            ctx->pc = 0x43C0ECu;
            goto label_43c0ec;
        }
    }
    ctx->pc = 0x43C0E8u;
label_43c0e8:
    // 0x43c0e8: 0xa0c0000b  sb          $zero, 0xB($a2)
    ctx->pc = 0x43c0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 11), (uint8_t)GPR_U32(ctx, 0));
label_43c0ec:
    // 0x43c0ec: 0x95650006  lhu         $a1, 0x6($t3)
    ctx->pc = 0x43c0ecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x43c0f0: 0x519c2  srl         $v1, $a1, 7
    ctx->pc = 0x43c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x43c0f4: 0x52082  srl         $a0, $a1, 2
    ctx->pc = 0x43c0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x43c0f8: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x43c0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x43c0fc: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x43c0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x43c100: 0xa0e3000e  sb          $v1, 0xE($a3)
    ctx->pc = 0x43c100u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x43c104: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x43c104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
    // 0x43c108: 0xa104000d  sb          $a0, 0xD($t0)
    ctx->pc = 0x43c108u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 13), (uint8_t)GPR_U32(ctx, 4));
    // 0x43c10c: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x43c10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x43c110: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x43c110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x43c114: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x43C114u;
    {
        const bool branch_taken_0x43c114 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C114u;
        // 0x43c118: 0xa122000c  sb          $v0, 0xC($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c114) {
            ctx->pc = 0x43C124u;
            goto label_43c124;
        }
    }
    ctx->pc = 0x43C11Cu;
    // 0x43c11c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x43C11Cu;
    {
        const bool branch_taken_0x43c11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C11Cu;
        // 0x43c120: 0xa14d000f  sb          $t5, 0xF($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 15), (uint8_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c11c) {
            ctx->pc = 0x43C128u;
            goto label_43c128;
        }
    }
    ctx->pc = 0x43C124u;
label_43c124:
    // 0x43c124: 0xa0c0000f  sb          $zero, 0xF($a2)
    ctx->pc = 0x43c124u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 15), (uint8_t)GPR_U32(ctx, 0));
label_43c128:
    // 0x43c128: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x43c128u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x43c12c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x43c12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x43c130: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x43c130u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x43c134: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x43c134u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x43c138: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x43c138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x43c13c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x43c13cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x43c140: 0x18f102a  slt         $v0, $t4, $t7
    ctx->pc = 0x43c140u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x43c144: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x43C144u;
    {
        const bool branch_taken_0x43c144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C144u;
        // 0x43c148: 0x256b0008  addiu       $t3, $t3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c144) {
            ctx->pc = 0x43C038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43c038;
        }
    }
    ctx->pc = 0x43C14Cu;
    // 0x43c14c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x43C14Cu;
    {
        const bool branch_taken_0x43c14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C14Cu;
        // 0x43c150: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c14c) {
            ctx->pc = 0x43C264u;
            goto label_43c264;
        }
    }
    ctx->pc = 0x43C154u;
label_43c154:
    // 0x43c154: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x43c154u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c158: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x43c158u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x43c15c: 0x3c0fff00  lui         $t7, 0xFF00
    ctx->pc = 0x43c15cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65280 << 16));
    // 0x43c160: 0x25b00040  addiu       $s0, $t5, 0x40
    ctx->pc = 0x43c160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 13), 64));
    // 0x43c164: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x43c164u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x43c168: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x43c168u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c16c: 0x1a0602d  daddu       $t4, $t5, $zero
    ctx->pc = 0x43c16cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c170: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x43c170u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c174: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x43c174u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c178: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x43c178u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c17c: 0x0  nop
    ctx->pc = 0x43c17cu;
    // NOP
label_43c180:
    // 0x43c180: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x43c180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x43c184: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x43c184u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x43c188: 0x1b0302a  slt         $a2, $t5, $s0
    ctx->pc = 0x43c188u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x43c18c: 0xaf2024  and         $a0, $a1, $t7
    ctx->pc = 0x43c18cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 15));
    // 0x43c190: 0x51c02  srl         $v1, $a1, 16
    ctx->pc = 0x43c190u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x43c194: 0x87001b  divu        $zero, $a0, $a3
    ctx->pc = 0x43c194u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x43c198: 0xa1230002  sb          $v1, 0x2($t1)
    ctx->pc = 0x43c198u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x43c19c: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x43c19cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x43c1a0: 0xa1420001  sb          $v0, 0x1($t2)
    ctx->pc = 0x43c1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x43c1a4: 0xa1650000  sb          $a1, 0x0($t3)
    ctx->pc = 0x43c1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x43c1a8: 0x50ee0001  beql        $a3, $t6, . + 4 + (0x1 << 2)
    ctx->pc = 0x43C1A8u;
    {
        const bool branch_taken_0x43c1a8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 14));
        if (branch_taken_0x43c1a8) {
            ctx->pc = 0x43C1ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C1A8u;
            // 0x43c1ac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C1B0u;
            goto label_43c1b0;
        }
    }
    ctx->pc = 0x43C1B0u;
label_43c1b0:
    // 0x43c1b0: 0x2012  mflo        $a0
    ctx->pc = 0x43c1b0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x43c1b4: 0xa1040003  sb          $a0, 0x3($t0)
    ctx->pc = 0x43c1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x43c1b8: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x43c1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x43c1bc: 0x6f2824  and         $a1, $v1, $t7
    ctx->pc = 0x43c1bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 15));
    // 0x43c1c0: 0x32402  srl         $a0, $v1, 16
    ctx->pc = 0x43c1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x43c1c4: 0xa7001b  divu        $zero, $a1, $a3
    ctx->pc = 0x43c1c4u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x43c1c8: 0xa1240006  sb          $a0, 0x6($t1)
    ctx->pc = 0x43c1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 6), (uint8_t)GPR_U32(ctx, 4));
    // 0x43c1cc: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x43c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x43c1d0: 0xa1420005  sb          $v0, 0x5($t2)
    ctx->pc = 0x43c1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x43c1d4: 0xa1630004  sb          $v1, 0x4($t3)
    ctx->pc = 0x43c1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x43c1d8: 0x50ee0001  beql        $a3, $t6, . + 4 + (0x1 << 2)
    ctx->pc = 0x43C1D8u;
    {
        const bool branch_taken_0x43c1d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 14));
        if (branch_taken_0x43c1d8) {
            ctx->pc = 0x43C1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C1D8u;
            // 0x43c1dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C1E0u;
            goto label_43c1e0;
        }
    }
    ctx->pc = 0x43C1E0u;
label_43c1e0:
    // 0x43c1e0: 0x2812  mflo        $a1
    ctx->pc = 0x43c1e0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x43c1e4: 0xa1050007  sb          $a1, 0x7($t0)
    ctx->pc = 0x43c1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 5));
    // 0x43c1e8: 0x8d830008  lw          $v1, 0x8($t4)
    ctx->pc = 0x43c1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x43c1ec: 0x6f2824  and         $a1, $v1, $t7
    ctx->pc = 0x43c1ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 15));
    // 0x43c1f0: 0x32402  srl         $a0, $v1, 16
    ctx->pc = 0x43c1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x43c1f4: 0xa7001b  divu        $zero, $a1, $a3
    ctx->pc = 0x43c1f4u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x43c1f8: 0xa124000a  sb          $a0, 0xA($t1)
    ctx->pc = 0x43c1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x43c1fc: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x43c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x43c200: 0xa1420009  sb          $v0, 0x9($t2)
    ctx->pc = 0x43c200u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x43c204: 0xa1630008  sb          $v1, 0x8($t3)
    ctx->pc = 0x43c204u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x43c208: 0x50ee0001  beql        $a3, $t6, . + 4 + (0x1 << 2)
    ctx->pc = 0x43C208u;
    {
        const bool branch_taken_0x43c208 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 14));
        if (branch_taken_0x43c208) {
            ctx->pc = 0x43C20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C208u;
            // 0x43c20c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C210u;
            goto label_43c210;
        }
    }
    ctx->pc = 0x43C210u;
label_43c210:
    // 0x43c210: 0x2812  mflo        $a1
    ctx->pc = 0x43c210u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x43c214: 0xa105000b  sb          $a1, 0xB($t0)
    ctx->pc = 0x43c214u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 11), (uint8_t)GPR_U32(ctx, 5));
    // 0x43c218: 0x8d84000c  lw          $a0, 0xC($t4)
    ctx->pc = 0x43c218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x43c21c: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x43c21cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x43c220: 0x8f2824  and         $a1, $a0, $t7
    ctx->pc = 0x43c220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 15));
    // 0x43c224: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x43c224u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x43c228: 0xa7001b  divu        $zero, $a1, $a3
    ctx->pc = 0x43c228u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x43c22c: 0xa122000e  sb          $v0, 0xE($t1)
    ctx->pc = 0x43c22cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x43c230: 0x41a02  srl         $v1, $a0, 8
    ctx->pc = 0x43c230u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x43c234: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x43c234u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x43c238: 0xa143000d  sb          $v1, 0xD($t2)
    ctx->pc = 0x43c238u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x43c23c: 0xa164000c  sb          $a0, 0xC($t3)
    ctx->pc = 0x43c23cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 12), (uint8_t)GPR_U32(ctx, 4));
    // 0x43c240: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x43c240u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x43c244: 0x50ee0001  beql        $a3, $t6, . + 4 + (0x1 << 2)
    ctx->pc = 0x43C244u;
    {
        const bool branch_taken_0x43c244 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 14));
        if (branch_taken_0x43c244) {
            ctx->pc = 0x43C248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C244u;
            // 0x43c248: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C24Cu;
            goto label_43c24c;
        }
    }
    ctx->pc = 0x43C24Cu;
label_43c24c:
    // 0x43c24c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x43c24cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x43c250: 0x2812  mflo        $a1
    ctx->pc = 0x43c250u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x43c254: 0xa105000f  sb          $a1, 0xF($t0)
    ctx->pc = 0x43c254u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 15), (uint8_t)GPR_U32(ctx, 5));
    // 0x43c258: 0x14c0ffc9  bnez        $a2, . + 4 + (-0x37 << 2)
    ctx->pc = 0x43C258u;
    {
        const bool branch_taken_0x43c258 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x43C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C258u;
        // 0x43c25c: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c258) {
            ctx->pc = 0x43C180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43c180;
        }
    }
    ctx->pc = 0x43C260u;
    // 0x43c260: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x43c260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_43c264:
    // 0x43c264: 0x18400219  blez        $v0, . + 4 + (0x219 << 2)
    ctx->pc = 0x43C264u;
    {
        const bool branch_taken_0x43c264 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C264u;
        // 0x43c268: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c264) {
            ctx->pc = 0x43CACCu;
            goto label_43cacc;
        }
    }
    ctx->pc = 0x43C26Cu;
    // 0x43c26c: 0x0  nop
    ctx->pc = 0x43c26cu;
    // NOP
label_43c270:
    // 0x43c270: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x43c270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x43c274: 0x26090001  addiu       $t1, $s0, 0x1
    ctx->pc = 0x43c274u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x43c278: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x43C278u;
    {
        const bool branch_taken_0x43c278 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C278u;
        // 0x43c27c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c278) {
            ctx->pc = 0x43C2C8u;
            goto label_43c2c8;
        }
    }
    ctx->pc = 0x43C280u;
    // 0x43c280: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x43c280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c284: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x43c284u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_43c288:
    // 0x43c288: 0x8622001c  lh          $v0, 0x1C($s1)
    ctx->pc = 0x43c288u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x43c28c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x43c28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x43c290: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x43c290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x43c294: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x43C294u;
    {
        const bool branch_taken_0x43c294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43c294) {
            ctx->pc = 0x43C298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C294u;
            // 0x43c298: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C2ACu;
            goto label_43c2ac;
        }
    }
    ctx->pc = 0x43C29Cu;
    // 0x43c29c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x43c29cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x43c2a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x43c2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x43c2a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x43C2A4u;
    {
        const bool branch_taken_0x43c2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C2A4u;
        // 0x43c2a8: 0x21102  srl         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c2a4) {
            ctx->pc = 0x43C2B0u;
            goto label_43c2b0;
        }
    }
    ctx->pc = 0x43C2ACu;
label_43c2ac:
    // 0x43c2ac: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x43c2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_43c2b0:
    // 0x43c2b0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x43c2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x43c2b4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x43c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x43c2b8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x43c2b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x43c2bc: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x43c2bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x43c2c0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x43C2C0u;
    {
        const bool branch_taken_0x43c2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43C2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C2C0u;
        // 0x43c2c4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c2c0) {
            ctx->pc = 0x43C288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43c288;
        }
    }
    ctx->pc = 0x43C2C8u;
label_43c2c8:
    // 0x43c2c8: 0x8ee40010  lw          $a0, 0x10($s7)
    ctx->pc = 0x43c2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x43c2cc: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x43c2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c2d0: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x43c2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x43c2d4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x43c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x43c2d8: 0x2c4b021  addu        $s6, $s6, $a0
    ctx->pc = 0x43c2d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x43c2dc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x43c2dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x43c2e0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x43C2E0u;
    {
        const bool branch_taken_0x43c2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C2E0u;
        // 0x43c2e4: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c2e0) {
            ctx->pc = 0x43C270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43c270;
        }
    }
    ctx->pc = 0x43C2E8u;
    // 0x43c2e8: 0x100001f9  b           . + 4 + (0x1F9 << 2)
    ctx->pc = 0x43C2E8u;
    {
        const bool branch_taken_0x43c2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C2E8u;
        // 0x43c2ec: 0x92220023  lbu         $v0, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c2e8) {
            ctx->pc = 0x43CAD0u;
            goto label_43cad0;
        }
    }
    ctx->pc = 0x43C2F0u;
label_43c2f0:
    // 0x43c2f0: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x43c2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x43c2f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43c2f8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43C2F8u;
    {
        const bool branch_taken_0x43c2f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x43C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C2F8u;
        // 0x43c2fc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c2f8) {
            ctx->pc = 0x43C310u;
            goto label_43c310;
        }
    }
    ctx->pc = 0x43C300u;
    // 0x43c300: 0x10620048  beq         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x43C300u;
    {
        const bool branch_taken_0x43c300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x43C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C300u;
        // 0x43c304: 0xa0702d  daddu       $t6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c300) {
            ctx->pc = 0x43C424u;
            goto label_43c424;
        }
    }
    ctx->pc = 0x43C308u;
    // 0x43c308: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x43C308u;
    {
        const bool branch_taken_0x43c308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C308u;
        // 0x43c30c: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c308) {
            ctx->pc = 0x43C5BCu;
            goto label_43c5bc;
        }
    }
    ctx->pc = 0x43C310u;
label_43c310:
    // 0x43c310: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x43c310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c314: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x43c314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x43c318: 0x8e2b0008  lw          $t3, 0x8($s1)
    ctx->pc = 0x43c318u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x43c31c: 0x244f1470  addiu       $t7, $v0, 0x1470
    ctx->pc = 0x43c31cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 5232));
    // 0x43c320: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x43c320u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c324: 0x240efff8  addiu       $t6, $zero, -0x8
    ctx->pc = 0x43c324u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x43c328: 0x240d00ff  addiu       $t5, $zero, 0xFF
    ctx->pc = 0x43c328u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x43c32c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x43c32cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c330: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x43c330u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c334: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x43c334u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c338: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x43c338u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c33c: 0x0  nop
    ctx->pc = 0x43c33cu;
    // NOP
label_43c340:
    // 0x43c340: 0xc1843  sra         $v1, $t4, 1
    ctx->pc = 0x43c340u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 12), 1));
    // 0x43c344: 0x318200e7  andi        $v0, $t4, 0xE7
    ctx->pc = 0x43c344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)231);
    // 0x43c348: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x43c348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x43c34c: 0x6f1821  addu        $v1, $v1, $t7
    ctx->pc = 0x43c34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x43c350: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x43c350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x43c354: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x43c354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x43c358: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x43c358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x43c35c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x43c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x43c360: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x43c360u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x43c364: 0x519c2  srl         $v1, $a1, 7
    ctx->pc = 0x43c364u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x43c368: 0x52082  srl         $a0, $a1, 2
    ctx->pc = 0x43c368u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x43c36c: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x43c36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x43c370: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x43c370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x43c374: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x43c374u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x43c378: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x43c378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
    // 0x43c37c: 0xa1040001  sb          $a0, 0x1($t0)
    ctx->pc = 0x43c37cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x43c380: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x43c380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x43c384: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x43c384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x43c388: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x43C388u;
    {
        const bool branch_taken_0x43c388 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C388u;
        // 0x43c38c: 0xa1220000  sb          $v0, 0x0($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c388) {
            ctx->pc = 0x43C398u;
            goto label_43c398;
        }
    }
    ctx->pc = 0x43C390u;
    // 0x43c390: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x43C390u;
    {
        const bool branch_taken_0x43c390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C390u;
        // 0x43c394: 0xa14d0003  sb          $t5, 0x3($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c390) {
            ctx->pc = 0x43C39Cu;
            goto label_43c39c;
        }
    }
    ctx->pc = 0x43C398u;
label_43c398:
    // 0x43c398: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x43c398u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
label_43c39c:
    // 0x43c39c: 0x25820001  addiu       $v0, $t4, 0x1
    ctx->pc = 0x43c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x43c3a0: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x43c3a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x43c3a4: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x43c3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x43c3a8: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x43c3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x43c3ac: 0x6f1821  addu        $v1, $v1, $t7
    ctx->pc = 0x43c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x43c3b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x43c3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x43c3b4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x43c3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x43c3b8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x43c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x43c3bc: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x43c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x43c3c0: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x43c3c0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x43c3c4: 0x519c2  srl         $v1, $a1, 7
    ctx->pc = 0x43c3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x43c3c8: 0x52082  srl         $a0, $a1, 2
    ctx->pc = 0x43c3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x43c3cc: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x43c3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x43c3d0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x43c3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x43c3d4: 0xa0e30006  sb          $v1, 0x6($a3)
    ctx->pc = 0x43c3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x43c3d8: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x43c3d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
    // 0x43c3dc: 0xa1040005  sb          $a0, 0x5($t0)
    ctx->pc = 0x43c3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x43c3e0: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x43c3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x43c3e4: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x43c3e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x43c3e8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x43C3E8u;
    {
        const bool branch_taken_0x43c3e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C3E8u;
        // 0x43c3ec: 0xa1220004  sb          $v0, 0x4($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c3e8) {
            ctx->pc = 0x43C3F8u;
            goto label_43c3f8;
        }
    }
    ctx->pc = 0x43C3F0u;
    // 0x43c3f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x43C3F0u;
    {
        const bool branch_taken_0x43c3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C3F0u;
        // 0x43c3f4: 0xa14d0007  sb          $t5, 0x7($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 7), (uint8_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c3f0) {
            ctx->pc = 0x43C3FCu;
            goto label_43c3fc;
        }
    }
    ctx->pc = 0x43C3F8u;
label_43c3f8:
    // 0x43c3f8: 0xa0c00007  sb          $zero, 0x7($a2)
    ctx->pc = 0x43c3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 0));
label_43c3fc:
    // 0x43c3fc: 0x258c0002  addiu       $t4, $t4, 0x2
    ctx->pc = 0x43c3fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
    // 0x43c400: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x43c400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x43c404: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x43c404u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x43c408: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x43c408u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x43c40c: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x43c40cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x43c410: 0x29820100  slti        $v0, $t4, 0x100
    ctx->pc = 0x43c410u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x43c414: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x43C414u;
    {
        const bool branch_taken_0x43c414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C414u;
        // 0x43c418: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c414) {
            ctx->pc = 0x43C340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43c340;
        }
    }
    ctx->pc = 0x43C41Cu;
    // 0x43c41c: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x43C41Cu;
    {
        const bool branch_taken_0x43c41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C41Cu;
        // 0x43c420: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c41c) {
            ctx->pc = 0x43C5BCu;
            goto label_43c5bc;
        }
    }
    ctx->pc = 0x43C424u;
label_43c424:
    // 0x43c424: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x43c424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x43c428: 0x3c0d0080  lui         $t5, 0x80
    ctx->pc = 0x43c428u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)128 << 16));
    // 0x43c42c: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x43c42cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x43c430: 0x24551470  addiu       $s5, $v0, 0x1470
    ctx->pc = 0x43c430u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 5232));
    // 0x43c434: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x43c434u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c438: 0x3c14ff00  lui         $s4, 0xFF00
    ctx->pc = 0x43c438u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65280 << 16));
    // 0x43c43c: 0x35ad8080  ori         $t5, $t5, 0x8080
    ctx->pc = 0x43c43cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)32896);
    // 0x43c440: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x43c440u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c444: 0x1c0c02d  daddu       $t8, $t6, $zero
    ctx->pc = 0x43c444u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c448: 0x1c0802d  daddu       $s0, $t6, $zero
    ctx->pc = 0x43c448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c44c: 0x1c0782d  daddu       $t7, $t6, $zero
    ctx->pc = 0x43c44cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_43c450:
    // 0x43c450: 0xc1043  sra         $v0, $t4, 1
    ctx->pc = 0x43c450u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 1));
    // 0x43c454: 0x318300e7  andi        $v1, $t4, 0xE7
    ctx->pc = 0x43c454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)231);
    // 0x43c458: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x43c458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x43c45c: 0x25860001  addiu       $a2, $t4, 0x1
    ctx->pc = 0x43c45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x43c460: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x43c460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x43c464: 0x64843  sra         $t1, $a2, 1
    ctx->pc = 0x43c464u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 6), 1));
    // 0x43c468: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x43c468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x43c46c: 0x3129000c  andi        $t1, $t1, 0xC
    ctx->pc = 0x43c46cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)12);
    // 0x43c470: 0x1354821  addu        $t1, $t1, $s5
    ctx->pc = 0x43c470u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x43c474: 0x30c600e7  andi        $a2, $a2, 0xE7
    ctx->pc = 0x43c474u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)231);
    // 0x43c478: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x43c478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x43c47c: 0x25870002  addiu       $a3, $t4, 0x2
    ctx->pc = 0x43c47cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
    // 0x43c480: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x43c480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x43c484: 0x75043  sra         $t2, $a3, 1
    ctx->pc = 0x43c484u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 7), 1));
    // 0x43c488: 0x791821  addu        $v1, $v1, $t9
    ctx->pc = 0x43c488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x43c48c: 0x314a000c  andi        $t2, $t2, 0xC
    ctx->pc = 0x43c48cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)12);
    // 0x43c490: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x43c490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x43c494: 0x1555021  addu        $t2, $t2, $s5
    ctx->pc = 0x43c494u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
    // 0x43c498: 0x30e700e7  andi        $a3, $a3, 0xE7
    ctx->pc = 0x43c498u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)231);
    // 0x43c49c: 0x25880003  addiu       $t0, $t4, 0x3
    ctx->pc = 0x43c49cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 3));
    // 0x43c4a0: 0x942824  and         $a1, $a0, $s4
    ctx->pc = 0x43c4a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 20));
    // 0x43c4a4: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x43c4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x43c4a8: 0xad001b  divu        $zero, $a1, $t5
    ctx->pc = 0x43c4a8u;
    { uint32_t divisor = GPR_U32(ctx, 13); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x43c4ac: 0xa1e20002  sb          $v0, 0x2($t7)
    ctx->pc = 0x43c4acu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x43c4b0: 0x41a02  srl         $v1, $a0, 8
    ctx->pc = 0x43c4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x43c4b4: 0x85843  sra         $t3, $t0, 1
    ctx->pc = 0x43c4b4u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 8), 1));
    // 0x43c4b8: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x43c4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x43c4bc: 0x316b000c  andi        $t3, $t3, 0xC
    ctx->pc = 0x43c4bcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)12);
    // 0x43c4c0: 0xa3040000  sb          $a0, 0x0($t8)
    ctx->pc = 0x43c4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x43c4c4: 0x1755821  addu        $t3, $t3, $s5
    ctx->pc = 0x43c4c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 21)));
    // 0x43c4c8: 0x51b30001  beql        $t5, $s3, . + 4 + (0x1 << 2)
    ctx->pc = 0x43C4C8u;
    {
        const bool branch_taken_0x43c4c8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 19));
        if (branch_taken_0x43c4c8) {
            ctx->pc = 0x43C4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C4C8u;
            // 0x43c4cc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C4D0u;
            goto label_43c4d0;
        }
    }
    ctx->pc = 0x43C4D0u;
label_43c4d0:
    // 0x43c4d0: 0x310800e7  andi        $t0, $t0, 0xE7
    ctx->pc = 0x43c4d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)231);
    // 0x43c4d4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x43c4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x43c4d8: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x43c4d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x43c4dc: 0x29890100  slti        $t1, $t4, 0x100
    ctx->pc = 0x43c4dcu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x43c4e0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x43c4e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x43c4e4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x43c4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x43c4e8: 0xd93021  addu        $a2, $a2, $t9
    ctx->pc = 0x43c4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 25)));
    // 0x43c4ec: 0x2812  mflo        $a1
    ctx->pc = 0x43c4ecu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x43c4f0: 0xa1c50003  sb          $a1, 0x3($t6)
    ctx->pc = 0x43c4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x43c4f4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x43c4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x43c4f8: 0x742824  and         $a1, $v1, $s4
    ctx->pc = 0x43c4f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x43c4fc: 0x32402  srl         $a0, $v1, 16
    ctx->pc = 0x43c4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x43c500: 0xad001b  divu        $zero, $a1, $t5
    ctx->pc = 0x43c500u;
    { uint32_t divisor = GPR_U32(ctx, 13); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x43c504: 0xa1e40006  sb          $a0, 0x6($t7)
    ctx->pc = 0x43c504u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 6), (uint8_t)GPR_U32(ctx, 4));
    // 0x43c508: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x43c508u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x43c50c: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x43c50cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x43c510: 0xa3030004  sb          $v1, 0x4($t8)
    ctx->pc = 0x43c510u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x43c514: 0x51b30001  beql        $t5, $s3, . + 4 + (0x1 << 2)
    ctx->pc = 0x43C514u;
    {
        const bool branch_taken_0x43c514 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 19));
        if (branch_taken_0x43c514) {
            ctx->pc = 0x43C518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C514u;
            // 0x43c518: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C51Cu;
            goto label_43c51c;
        }
    }
    ctx->pc = 0x43C51Cu;
label_43c51c:
    // 0x43c51c: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x43c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x43c520: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x43c520u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x43c524: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x43c524u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x43c528: 0xf93821  addu        $a3, $a3, $t9
    ctx->pc = 0x43c528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 25)));
    // 0x43c52c: 0x2812  mflo        $a1
    ctx->pc = 0x43c52cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x43c530: 0xa1c50007  sb          $a1, 0x7($t6)
    ctx->pc = 0x43c530u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 7), (uint8_t)GPR_U32(ctx, 5));
    // 0x43c534: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x43c534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x43c538: 0x742824  and         $a1, $v1, $s4
    ctx->pc = 0x43c538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x43c53c: 0x32402  srl         $a0, $v1, 16
    ctx->pc = 0x43c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x43c540: 0xad001b  divu        $zero, $a1, $t5
    ctx->pc = 0x43c540u;
    { uint32_t divisor = GPR_U32(ctx, 13); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x43c544: 0xa1e4000a  sb          $a0, 0xA($t7)
    ctx->pc = 0x43c544u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x43c548: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x43c548u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x43c54c: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x43c54cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x43c550: 0xa3030008  sb          $v1, 0x8($t8)
    ctx->pc = 0x43c550u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x43c554: 0x51b30001  beql        $t5, $s3, . + 4 + (0x1 << 2)
    ctx->pc = 0x43C554u;
    {
        const bool branch_taken_0x43c554 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 19));
        if (branch_taken_0x43c554) {
            ctx->pc = 0x43C558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C554u;
            // 0x43c558: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C55Cu;
            goto label_43c55c;
        }
    }
    ctx->pc = 0x43C55Cu;
label_43c55c:
    // 0x43c55c: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x43c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x43c560: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x43c560u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x43c564: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x43c564u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x43c568: 0x1194021  addu        $t0, $t0, $t9
    ctx->pc = 0x43c568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 25)));
    // 0x43c56c: 0x2812  mflo        $a1
    ctx->pc = 0x43c56cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x43c570: 0xa1c5000b  sb          $a1, 0xB($t6)
    ctx->pc = 0x43c570u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 11), (uint8_t)GPR_U32(ctx, 5));
    // 0x43c574: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x43c574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x43c578: 0x942824  and         $a1, $a0, $s4
    ctx->pc = 0x43c578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 20));
    // 0x43c57c: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x43c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x43c580: 0xad001b  divu        $zero, $a1, $t5
    ctx->pc = 0x43c580u;
    { uint32_t divisor = GPR_U32(ctx, 13); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x43c584: 0xa1e2000e  sb          $v0, 0xE($t7)
    ctx->pc = 0x43c584u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x43c588: 0x41a02  srl         $v1, $a0, 8
    ctx->pc = 0x43c588u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x43c58c: 0x25ef0010  addiu       $t7, $t7, 0x10
    ctx->pc = 0x43c58cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x43c590: 0xa203000d  sb          $v1, 0xD($s0)
    ctx->pc = 0x43c590u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x43c594: 0xa304000c  sb          $a0, 0xC($t8)
    ctx->pc = 0x43c594u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 12), (uint8_t)GPR_U32(ctx, 4));
    // 0x43c598: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x43c598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x43c59c: 0x51b30001  beql        $t5, $s3, . + 4 + (0x1 << 2)
    ctx->pc = 0x43C59Cu;
    {
        const bool branch_taken_0x43c59c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 19));
        if (branch_taken_0x43c59c) {
            ctx->pc = 0x43C5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C59Cu;
            // 0x43c5a0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C5A4u;
            goto label_43c5a4;
        }
    }
    ctx->pc = 0x43C5A4u;
label_43c5a4:
    // 0x43c5a4: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x43c5a4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x43c5a8: 0x2812  mflo        $a1
    ctx->pc = 0x43c5a8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x43c5ac: 0xa1c5000f  sb          $a1, 0xF($t6)
    ctx->pc = 0x43c5acu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 15), (uint8_t)GPR_U32(ctx, 5));
    // 0x43c5b0: 0x1520ffa7  bnez        $t1, . + 4 + (-0x59 << 2)
    ctx->pc = 0x43C5B0u;
    {
        const bool branch_taken_0x43c5b0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x43C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C5B0u;
        // 0x43c5b4: 0x25ce0010  addiu       $t6, $t6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c5b0) {
            ctx->pc = 0x43C450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43c450;
        }
    }
    ctx->pc = 0x43C5B8u;
    // 0x43c5b8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x43c5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_43c5bc:
    // 0x43c5bc: 0x18400143  blez        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x43C5BCu;
    {
        const bool branch_taken_0x43c5bc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43C5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C5BCu;
        // 0x43c5c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c5bc) {
            ctx->pc = 0x43CACCu;
            goto label_43cacc;
        }
    }
    ctx->pc = 0x43C5C4u;
    // 0x43c5c4: 0x0  nop
    ctx->pc = 0x43c5c4u;
    // NOP
label_43c5c8:
    // 0x43c5c8: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x43c5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x43c5cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x43c5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c5d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x43c5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c5d4: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x43C5D4u;
    SET_GPR_U32(ctx, 31, 0x43C5DCu);
    ctx->pc = 0x43C5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43C5D4u;
    // 0x43c5d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x43C5D4u, 0x43C5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43C5DCu;
label_43c5dc:
    // 0x43c5dc: 0x8ee30010  lw          $v1, 0x10($s7)
    ctx->pc = 0x43c5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x43c5e0: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x43c5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x43c5e4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x43c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x43c5e8: 0x2c3b021  addu        $s6, $s6, $v1
    ctx->pc = 0x43c5e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x43c5ec: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x43c5ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x43c5f0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x43C5F0u;
    {
        const bool branch_taken_0x43c5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C5F0u;
        // 0x43c5f4: 0x2449021  addu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c5f0) {
            ctx->pc = 0x43C5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43c5c8;
        }
    }
    ctx->pc = 0x43C5F8u;
    // 0x43c5f8: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x43C5F8u;
    {
        const bool branch_taken_0x43c5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C5F8u;
        // 0x43c5fc: 0x92220023  lbu         $v0, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c5f8) {
            ctx->pc = 0x43CAD0u;
            goto label_43cad0;
        }
    }
    ctx->pc = 0x43C600u;
label_43c600:
    // 0x43c600: 0x1060012c  beqz        $v1, . + 4 + (0x12C << 2)
    ctx->pc = 0x43C600u;
    {
        const bool branch_taken_0x43c600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C600u;
        // 0x43c604: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c600) {
            ctx->pc = 0x43CAB4u;
            goto label_43cab4;
        }
    }
    ctx->pc = 0x43C608u;
    // 0x43c608: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x43C608u;
    {
        const bool branch_taken_0x43c608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43c608) {
            ctx->pc = 0x43CAA4u;
            goto label_43caa4;
        }
    }
    ctx->pc = 0x43C610u;
label_43c610:
    // 0x43c610: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x43c610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c614: 0x92270023  lbu         $a3, 0x23($s1)
    ctx->pc = 0x43c614u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x43c618: 0x1840012c  blez        $v0, . + 4 + (0x12C << 2)
    ctx->pc = 0x43C618u;
    {
        const bool branch_taken_0x43c618 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43C61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C618u;
        // 0x43c61c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c618) {
            ctx->pc = 0x43CACCu;
            goto label_43cacc;
        }
    }
    ctx->pc = 0x43C620u;
label_43c620:
    // 0x43c620: 0x30e3006f  andi        $v1, $a3, 0x6F
    ctx->pc = 0x43c620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)111);
    // 0x43c624: 0x2c620046  sltiu       $v0, $v1, 0x46
    ctx->pc = 0x43c624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)70) ? 1 : 0);
    // 0x43c628: 0x10400110  beqz        $v0, . + 4 + (0x110 << 2)
    ctx->pc = 0x43C628u;
    {
        const bool branch_taken_0x43c628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C628u;
        // 0x43c62c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c628) {
            ctx->pc = 0x43CA6Cu;
            goto label_43ca6c;
        }
    }
    ctx->pc = 0x43C630u;
    // 0x43c630: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x43c630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x43c634: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x43c634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x43c638: 0x244214a0  addiu       $v0, $v0, 0x14A0
    ctx->pc = 0x43c638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5280));
    // 0x43c63c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x43c63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x43c640: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x43c640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x43c644: 0x800008  jr          $a0
    ctx->pc = 0x43C644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x43C64Cu: goto label_43c64c;
            case 0x43C6F8u: goto label_43c6f8;
            case 0x43C7A4u: goto label_43c7a4;
            case 0x43C850u: goto label_43c850;
            case 0x43C8FCu: goto label_43c8fc;
            case 0x43C97Cu: goto label_43c97c;
            case 0x43C9ECu: goto label_43c9ec;
            case 0x43CA6Cu: goto label_43ca6c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43C644u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x43C64Cu;
label_43c64c:
    // 0x43c64c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x43c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x43c650: 0x26090001  addiu       $t1, $s0, 0x1
    ctx->pc = 0x43c650u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x43c654: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x43c654u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x43c658: 0x18400106  blez        $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x43C658u;
    {
        const bool branch_taken_0x43c658 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C658u;
        // 0x43c65c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c658) {
            ctx->pc = 0x43CA74u;
            goto label_43ca74;
        }
    }
    ctx->pc = 0x43C660u;
    // 0x43c660: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x43c660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c664: 0x240bfff8  addiu       $t3, $zero, -0x8
    ctx->pc = 0x43c664u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x43c668: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x43c668u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x43c66c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x43c66cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_43c670:
    // 0x43c670: 0x8622001c  lh          $v0, 0x1C($s1)
    ctx->pc = 0x43c670u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x43c674: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x43c674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x43c678: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x43c678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x43c67c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x43C67Cu;
    {
        const bool branch_taken_0x43c67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43c67c) {
            ctx->pc = 0x43C680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C67Cu;
            // 0x43c680: 0x90e20000  lbu         $v0, 0x0($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C694u;
            goto label_43c694;
        }
    }
    ctx->pc = 0x43C684u;
    // 0x43c684: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x43c684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x43c688: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x43c688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x43c68c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x43C68Cu;
    {
        const bool branch_taken_0x43c68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C68Cu;
        // 0x43c690: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c68c) {
            ctx->pc = 0x43C698u;
            goto label_43c698;
        }
    }
    ctx->pc = 0x43C694u;
label_43c694:
    // 0x43c694: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x43c694u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_43c698:
    // 0x43c698: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x43c698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x43c69c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x43c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x43c6a0: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x43c6a0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x43c6a4: 0x519c2  srl         $v1, $a1, 7
    ctx->pc = 0x43c6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x43c6a8: 0x51082  srl         $v0, $a1, 2
    ctx->pc = 0x43c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x43c6ac: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x43c6acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x43c6b0: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x43c6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x43c6b4: 0x304200f8  andi        $v0, $v0, 0xF8
    ctx->pc = 0x43c6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)248);
    // 0x43c6b8: 0x8b2024  and         $a0, $a0, $t3
    ctx->pc = 0x43c6b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 11));
    // 0x43c6bc: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x43c6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x43c6c0: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x43c6c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x43c6c4: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x43c6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x43c6c8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x43C6C8u;
    {
        const bool branch_taken_0x43c6c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C6C8u;
        // 0x43c6cc: 0xa0c40000  sb          $a0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c6c8) {
            ctx->pc = 0x43C6D8u;
            goto label_43c6d8;
        }
    }
    ctx->pc = 0x43C6D0u;
    // 0x43c6d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x43C6D0u;
    {
        const bool branch_taken_0x43c6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C6D0u;
        // 0x43c6d4: 0xa0ca0003  sb          $t2, 0x3($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c6d0) {
            ctx->pc = 0x43C6DCu;
            goto label_43c6dc;
        }
    }
    ctx->pc = 0x43C6D8u;
label_43c6d8:
    // 0x43c6d8: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x43c6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
label_43c6dc:
    // 0x43c6dc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x43c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x43c6e0: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x43c6e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x43c6e4: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x43c6e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x43c6e8: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x43C6E8u;
    {
        const bool branch_taken_0x43c6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C6E8u;
        // 0x43c6ec: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c6e8) {
            ctx->pc = 0x43C670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43c670;
        }
    }
    ctx->pc = 0x43C6F0u;
    // 0x43c6f0: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x43C6F0u;
    {
        const bool branch_taken_0x43c6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C6F0u;
        // 0x43c6f4: 0x92270023  lbu         $a3, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c6f0) {
            ctx->pc = 0x43CA64u;
            goto label_43ca64;
        }
    }
    ctx->pc = 0x43C6F8u;
label_43c6f8:
    // 0x43c6f8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x43c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x43c6fc: 0x26090001  addiu       $t1, $s0, 0x1
    ctx->pc = 0x43c6fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x43c700: 0x8e2a0008  lw          $t2, 0x8($s1)
    ctx->pc = 0x43c700u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x43c704: 0x184000db  blez        $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x43C704u;
    {
        const bool branch_taken_0x43c704 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C704u;
        // 0x43c708: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c704) {
            ctx->pc = 0x43CA74u;
            goto label_43ca74;
        }
    }
    ctx->pc = 0x43C70Cu;
    // 0x43c70c: 0x3c080080  lui         $t0, 0x80
    ctx->pc = 0x43c70cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)128 << 16));
    // 0x43c710: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x43c710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c714: 0x3c0dff00  lui         $t5, 0xFF00
    ctx->pc = 0x43c714u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65280 << 16));
    // 0x43c718: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x43c718u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x43c71c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x43c71cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c720: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x43c720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c724: 0x0  nop
    ctx->pc = 0x43c724u;
    // NOP
label_43c728:
    // 0x43c728: 0x8622001c  lh          $v0, 0x1C($s1)
    ctx->pc = 0x43c728u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x43c72c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x43c72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x43c730: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x43c730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x43c734: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x43C734u;
    {
        const bool branch_taken_0x43c734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43c734) {
            ctx->pc = 0x43C738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C734u;
            // 0x43c738: 0x90e20000  lbu         $v0, 0x0($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C74Cu;
            goto label_43c74c;
        }
    }
    ctx->pc = 0x43C73Cu;
    // 0x43c73c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x43c73cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x43c740: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x43c740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x43c744: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x43C744u;
    {
        const bool branch_taken_0x43c744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C744u;
        // 0x43c748: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c744) {
            ctx->pc = 0x43C750u;
            goto label_43c750;
        }
    }
    ctx->pc = 0x43C74Cu;
label_43c74c:
    // 0x43c74c: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x43c74cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_43c750:
    // 0x43c750: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x43c750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x43c754: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x43c754u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x43c758: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x43c758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x43c75c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x43c75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x43c760: 0xad1824  and         $v1, $a1, $t5
    ctx->pc = 0x43c760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 13));
    // 0x43c764: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x43c764u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x43c768: 0x68001b  divu        $zero, $v1, $t0
    ctx->pc = 0x43c768u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x43c76c: 0x52402  srl         $a0, $a1, 16
    ctx->pc = 0x43c76cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x43c770: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x43c770u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x43c774: 0xa0c40002  sb          $a0, 0x2($a2)
    ctx->pc = 0x43c774u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x43c778: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x43c778u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x43c77c: 0x510b0001  beql        $t0, $t3, . + 4 + (0x1 << 2)
    ctx->pc = 0x43C77Cu;
    {
        const bool branch_taken_0x43c77c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 11));
        if (branch_taken_0x43c77c) {
            ctx->pc = 0x43C780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C77Cu;
            // 0x43c780: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C784u;
            goto label_43c784;
        }
    }
    ctx->pc = 0x43C784u;
label_43c784:
    // 0x43c784: 0x1812  mflo        $v1
    ctx->pc = 0x43c784u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x43c788: 0xa0c30003  sb          $v1, 0x3($a2)
    ctx->pc = 0x43c788u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x43c78c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x43c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x43c790: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x43c790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x43c794: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x43C794u;
    {
        const bool branch_taken_0x43c794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C794u;
        // 0x43c798: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c794) {
            ctx->pc = 0x43C728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43c728;
        }
    }
    ctx->pc = 0x43C79Cu;
    // 0x43c79c: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x43C79Cu;
    {
        const bool branch_taken_0x43c79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C79Cu;
        // 0x43c7a0: 0x92270023  lbu         $a3, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c79c) {
            ctx->pc = 0x43CA64u;
            goto label_43ca64;
        }
    }
    ctx->pc = 0x43C7A4u;
label_43c7a4:
    // 0x43c7a4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x43c7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x43c7a8: 0x26090001  addiu       $t1, $s0, 0x1
    ctx->pc = 0x43c7a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x43c7ac: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x43c7acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x43c7b0: 0x184000b0  blez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x43C7B0u;
    {
        const bool branch_taken_0x43c7b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C7B0u;
        // 0x43c7b4: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c7b0) {
            ctx->pc = 0x43CA74u;
            goto label_43ca74;
        }
    }
    ctx->pc = 0x43C7B8u;
    // 0x43c7b8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x43c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x43c7bc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x43c7bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c7c0: 0x244d1470  addiu       $t5, $v0, 0x1470
    ctx->pc = 0x43c7c0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 5232));
    // 0x43c7c4: 0x240bfff8  addiu       $t3, $zero, -0x8
    ctx->pc = 0x43c7c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x43c7c8: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x43c7c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x43c7cc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x43c7ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_43c7d0:
    // 0x43c7d0: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x43c7d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x43c7d4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x43c7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x43c7d8: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x43c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x43c7dc: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x43c7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x43c7e0: 0x306300e7  andi        $v1, $v1, 0xE7
    ctx->pc = 0x43c7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)231);
    // 0x43c7e4: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x43c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x43c7e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x43c7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x43c7ec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x43c7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x43c7f0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x43c7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x43c7f4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x43c7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x43c7f8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x43c7f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x43c7fc: 0x221c2  srl         $a0, $v0, 7
    ctx->pc = 0x43c7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
    // 0x43c800: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x43c800u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x43c804: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x43c804u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x43c808: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x43c808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
    // 0x43c80c: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x43c80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x43c810: 0xab2824  and         $a1, $a1, $t3
    ctx->pc = 0x43c810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 11));
    // 0x43c814: 0xa0c40002  sb          $a0, 0x2($a2)
    ctx->pc = 0x43c814u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x43c818: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x43c818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x43c81c: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x43c81cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x43c820: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43C820u;
    {
        const bool branch_taken_0x43c820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C820u;
        // 0x43c824: 0xa0c50000  sb          $a1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c820) {
            ctx->pc = 0x43C830u;
            goto label_43c830;
        }
    }
    ctx->pc = 0x43C828u;
    // 0x43c828: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x43C828u;
    {
        const bool branch_taken_0x43c828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C828u;
        // 0x43c82c: 0xa0ca0003  sb          $t2, 0x3($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c828) {
            ctx->pc = 0x43C834u;
            goto label_43c834;
        }
    }
    ctx->pc = 0x43C830u;
label_43c830:
    // 0x43c830: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x43c830u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
label_43c834:
    // 0x43c834: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x43c834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x43c838: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x43c838u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x43c83c: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x43c83cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x43c840: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x43C840u;
    {
        const bool branch_taken_0x43c840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43C844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C840u;
        // 0x43c844: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c840) {
            ctx->pc = 0x43C7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43c7d0;
        }
    }
    ctx->pc = 0x43C848u;
    // 0x43c848: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x43C848u;
    {
        const bool branch_taken_0x43c848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C848u;
        // 0x43c84c: 0x92270023  lbu         $a3, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c848) {
            ctx->pc = 0x43CA64u;
            goto label_43ca64;
        }
    }
    ctx->pc = 0x43C850u;
label_43c850:
    // 0x43c850: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x43c850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x43c854: 0x26090001  addiu       $t1, $s0, 0x1
    ctx->pc = 0x43c854u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x43c858: 0x8e2a0008  lw          $t2, 0x8($s1)
    ctx->pc = 0x43c858u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x43c85c: 0x18400085  blez        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x43C85Cu;
    {
        const bool branch_taken_0x43c85c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C85Cu;
        // 0x43c860: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c85c) {
            ctx->pc = 0x43CA74u;
            goto label_43ca74;
        }
    }
    ctx->pc = 0x43C864u;
    // 0x43c864: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x43c864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x43c868: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x43c868u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x43c86c: 0x244e1470  addiu       $t6, $v0, 0x1470
    ctx->pc = 0x43c86cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 5232));
    // 0x43c870: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x43c870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c874: 0x3c0dff00  lui         $t5, 0xFF00
    ctx->pc = 0x43c874u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65280 << 16));
    // 0x43c878: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x43c878u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x43c87c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x43c87cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c880: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x43c880u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c884: 0x0  nop
    ctx->pc = 0x43c884u;
    // NOP
label_43c888:
    // 0x43c888: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x43c888u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x43c88c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x43c88cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x43c890: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x43c890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x43c894: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x43c894u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x43c898: 0x30a300e7  andi        $v1, $a1, 0xE7
    ctx->pc = 0x43c898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)231);
    // 0x43c89c: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x43c89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x43c8a0: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x43c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x43c8a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x43c8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x43c8a8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x43c8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x43c8ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x43c8acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x43c8b0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x43c8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x43c8b4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x43c8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x43c8b8: 0xad2024  and         $a0, $a1, $t5
    ctx->pc = 0x43c8b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 13));
    // 0x43c8bc: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x43c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x43c8c0: 0x87001b  divu        $zero, $a0, $a3
    ctx->pc = 0x43c8c0u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x43c8c4: 0x51c02  srl         $v1, $a1, 16
    ctx->pc = 0x43c8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x43c8c8: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x43c8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x43c8cc: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x43c8ccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x43c8d0: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x43c8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x43c8d4: 0x50eb0001  beql        $a3, $t3, . + 4 + (0x1 << 2)
    ctx->pc = 0x43C8D4u;
    {
        const bool branch_taken_0x43c8d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 11));
        if (branch_taken_0x43c8d4) {
            ctx->pc = 0x43C8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C8D4u;
            // 0x43c8d8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C8DCu;
            goto label_43c8dc;
        }
    }
    ctx->pc = 0x43C8DCu;
label_43c8dc:
    // 0x43c8dc: 0x2012  mflo        $a0
    ctx->pc = 0x43c8dcu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x43c8e0: 0xa0c40003  sb          $a0, 0x3($a2)
    ctx->pc = 0x43c8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x43c8e4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x43c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x43c8e8: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x43c8e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x43c8ec: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x43C8ECu;
    {
        const bool branch_taken_0x43c8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C8ECu;
        // 0x43c8f0: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c8ec) {
            ctx->pc = 0x43C888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43c888;
        }
    }
    ctx->pc = 0x43C8F4u;
    // 0x43c8f4: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x43C8F4u;
    {
        const bool branch_taken_0x43c8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C8F4u;
        // 0x43c8f8: 0x92270023  lbu         $a3, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c8f4) {
            ctx->pc = 0x43CA64u;
            goto label_43ca64;
        }
    }
    ctx->pc = 0x43C8FCu;
label_43c8fc:
    // 0x43c8fc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x43c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x43c900: 0x26090001  addiu       $t1, $s0, 0x1
    ctx->pc = 0x43c900u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x43c904: 0x1840005b  blez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x43C904u;
    {
        const bool branch_taken_0x43c904 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C904u;
        // 0x43c908: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c904) {
            ctx->pc = 0x43CA74u;
            goto label_43ca74;
        }
    }
    ctx->pc = 0x43C90Cu;
    // 0x43c90c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x43c90cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c910: 0x240afff8  addiu       $t2, $zero, -0x8
    ctx->pc = 0x43c910u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x43c914: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x43c914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x43c918: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x43c918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c91c: 0x0  nop
    ctx->pc = 0x43c91cu;
    // NOP
label_43c920:
    // 0x43c920: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x43c920u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x43c924: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x43c924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x43c928: 0x219c2  srl         $v1, $v0, 7
    ctx->pc = 0x43c928u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
    // 0x43c92c: 0x22082  srl         $a0, $v0, 2
    ctx->pc = 0x43c92cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x43c930: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x43c930u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x43c934: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x43c934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x43c938: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x43c938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
    // 0x43c93c: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x43c93cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x43c940: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x43c940u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x43c944: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x43c944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x43c948: 0xa0c40001  sb          $a0, 0x1($a2)
    ctx->pc = 0x43c948u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x43c94c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43C94Cu;
    {
        const bool branch_taken_0x43c94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C94Cu;
        // 0x43c950: 0xa0c50000  sb          $a1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c94c) {
            ctx->pc = 0x43C95Cu;
            goto label_43c95c;
        }
    }
    ctx->pc = 0x43C954u;
    // 0x43c954: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x43C954u;
    {
        const bool branch_taken_0x43c954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C954u;
        // 0x43c958: 0xa0c80003  sb          $t0, 0x3($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c954) {
            ctx->pc = 0x43C960u;
            goto label_43c960;
        }
    }
    ctx->pc = 0x43C95Cu;
label_43c95c:
    // 0x43c95c: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x43c95cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
label_43c960:
    // 0x43c960: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x43c960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x43c964: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x43c964u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x43c968: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x43c968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x43c96c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x43C96Cu;
    {
        const bool branch_taken_0x43c96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C96Cu;
        // 0x43c970: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c96c) {
            ctx->pc = 0x43C920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43c920;
        }
    }
    ctx->pc = 0x43C974u;
    // 0x43c974: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x43C974u;
    {
        const bool branch_taken_0x43c974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C974u;
        // 0x43c978: 0x92270023  lbu         $a3, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c974) {
            ctx->pc = 0x43CA64u;
            goto label_43ca64;
        }
    }
    ctx->pc = 0x43C97Cu;
label_43c97c:
    // 0x43c97c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x43c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x43c980: 0x26090001  addiu       $t1, $s0, 0x1
    ctx->pc = 0x43c980u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x43c984: 0x1840003b  blez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x43C984u;
    {
        const bool branch_taken_0x43c984 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C984u;
        // 0x43c988: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c984) {
            ctx->pc = 0x43CA74u;
            goto label_43ca74;
        }
    }
    ctx->pc = 0x43C98Cu;
    // 0x43c98c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x43c98cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c990: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x43c990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x43c994: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x43c994u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_43c998:
    // 0x43c998: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x43c998u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x43c99c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x43c99cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x43c9a0: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x43c9a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x43c9a4: 0x90e40002  lbu         $a0, 0x2($a3)
    ctx->pc = 0x43c9a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x43c9a8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x43c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x43c9ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x43c9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x43c9b0: 0xa0c80003  sb          $t0, 0x3($a2)
    ctx->pc = 0x43c9b0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x43c9b4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x43c9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x43c9b8: 0x24e70003  addiu       $a3, $a3, 0x3
    ctx->pc = 0x43c9b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x43c9bc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x43c9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x43c9c0: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x43c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x43c9c4: 0x32c02  srl         $a1, $v1, 16
    ctx->pc = 0x43c9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x43c9c8: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x43c9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x43c9cc: 0xa0c50002  sb          $a1, 0x2($a2)
    ctx->pc = 0x43c9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x43c9d0: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x43c9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x43c9d4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x43c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x43c9d8: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x43c9d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x43c9dc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x43C9DCu;
    {
        const bool branch_taken_0x43c9dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C9DCu;
        // 0x43c9e0: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c9dc) {
            ctx->pc = 0x43C998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43c998;
        }
    }
    ctx->pc = 0x43C9E4u;
    // 0x43c9e4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x43C9E4u;
    {
        const bool branch_taken_0x43c9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C9E4u;
        // 0x43c9e8: 0x92270023  lbu         $a3, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c9e4) {
            ctx->pc = 0x43CA64u;
            goto label_43ca64;
        }
    }
    ctx->pc = 0x43C9ECu;
label_43c9ec:
    // 0x43c9ec: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x43c9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x43c9f0: 0x26090001  addiu       $t1, $s0, 0x1
    ctx->pc = 0x43c9f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x43c9f4: 0x1840001f  blez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x43C9F4u;
    {
        const bool branch_taken_0x43c9f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43C9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C9F4u;
        // 0x43c9f8: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c9f4) {
            ctx->pc = 0x43CA74u;
            goto label_43ca74;
        }
    }
    ctx->pc = 0x43C9FCu;
    // 0x43c9fc: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x43c9fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x43ca00: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x43ca00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ca04: 0x3c0bff00  lui         $t3, 0xFF00
    ctx->pc = 0x43ca04u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65280 << 16));
    // 0x43ca08: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x43ca08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x43ca0c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x43ca0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ca10: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x43ca10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ca14: 0x0  nop
    ctx->pc = 0x43ca14u;
    // NOP
label_43ca18:
    // 0x43ca18: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x43ca18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x43ca1c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x43ca1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x43ca20: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x43ca20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x43ca24: 0x8b1824  and         $v1, $a0, $t3
    ctx->pc = 0x43ca24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 11));
    // 0x43ca28: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x43ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x43ca2c: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x43ca2cu;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x43ca30: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x43ca30u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x43ca34: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x43ca34u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x43ca38: 0xa0c50002  sb          $a1, 0x2($a2)
    ctx->pc = 0x43ca38u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x43ca3c: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x43ca3cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x43ca40: 0x50ea0001  beql        $a3, $t2, . + 4 + (0x1 << 2)
    ctx->pc = 0x43CA40u;
    {
        const bool branch_taken_0x43ca40 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        if (branch_taken_0x43ca40) {
            ctx->pc = 0x43CA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43CA40u;
            // 0x43ca44: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43CA48u;
            goto label_43ca48;
        }
    }
    ctx->pc = 0x43CA48u;
label_43ca48:
    // 0x43ca48: 0x1812  mflo        $v1
    ctx->pc = 0x43ca48u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x43ca4c: 0xa0c30003  sb          $v1, 0x3($a2)
    ctx->pc = 0x43ca4cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x43ca50: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x43ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x43ca54: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x43ca54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x43ca58: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x43CA58u;
    {
        const bool branch_taken_0x43ca58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CA58u;
        // 0x43ca5c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ca58) {
            ctx->pc = 0x43CA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43ca18;
        }
    }
    ctx->pc = 0x43CA60u;
    // 0x43ca60: 0x92270023  lbu         $a3, 0x23($s1)
    ctx->pc = 0x43ca60u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_43ca64:
    // 0x43ca64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x43CA64u;
    {
        const bool branch_taken_0x43ca64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43CA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CA64u;
        // 0x43ca68: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ca64) {
            ctx->pc = 0x43CA74u;
            goto label_43ca74;
        }
    }
    ctx->pc = 0x43CA6Cu;
label_43ca6c:
    // 0x43ca6c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x43CA6Cu;
    {
        const bool branch_taken_0x43ca6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CA6Cu;
        // 0x43ca70: 0x30e20060  andi        $v0, $a3, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ca6c) {
            ctx->pc = 0x43CA9Cu;
            goto label_43ca9c;
        }
    }
    ctx->pc = 0x43CA74u;
label_43ca74:
    // 0x43ca74: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x43ca74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x43ca78: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x43ca78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ca7c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x43ca7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x43ca80: 0x206202a  slt         $a0, $s0, $a2
    ctx->pc = 0x43ca80u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x43ca84: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x43ca84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x43ca88: 0x1480fee5  bnez        $a0, . + 4 + (-0x11B << 2)
    ctx->pc = 0x43CA88u;
    {
        const bool branch_taken_0x43ca88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x43CA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CA88u;
        // 0x43ca8c: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ca88) {
            ctx->pc = 0x43C620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43c620;
        }
    }
    ctx->pc = 0x43CA90u;
    // 0x43ca90: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x43CA90u;
    {
        const bool branch_taken_0x43ca90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CA90u;
        // 0x43ca94: 0x92220023  lbu         $v0, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ca90) {
            ctx->pc = 0x43CAD0u;
            goto label_43cad0;
        }
    }
    ctx->pc = 0x43CA98u;
label_43ca98:
    // 0x43ca98: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x43ca98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
label_43ca9c:
    // 0x43ca9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43CA9Cu;
    {
        const bool branch_taken_0x43ca9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43CAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CA9Cu;
        // 0x43caa0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ca9c) {
            ctx->pc = 0x43CAB4u;
            goto label_43cab4;
        }
    }
    ctx->pc = 0x43CAA4u;
label_43caa4:
    // 0x43caa4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43CAA4u;
    {
        const bool branch_taken_0x43caa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43caa4) {
            ctx->pc = 0x43CAB4u;
            goto label_43cab4;
        }
    }
    ctx->pc = 0x43CAACu;
    // 0x43caac: 0xc1075ee  jal         func_41D7B8
    ctx->pc = 0x43CAACu;
    SET_GPR_U32(ctx, 31, 0x43CAB4u);
    ctx->pc = 0x43CAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43CAACu;
    // 0x43cab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D7B8u, 0x43CAACu, 0x43CAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43CAB4u;
label_43cab4:
    // 0x43cab4: 0x17c00012  bnez        $fp, . + 4 + (0x12 << 2)
    ctx->pc = 0x43CAB4u;
    {
        const bool branch_taken_0x43cab4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x43CAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CAB4u;
        // 0x43cab8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43cab4) {
            ctx->pc = 0x43CB00u;
            goto label_43cb00;
        }
    }
    ctx->pc = 0x43CABCu;
    // 0x43cabc: 0xc1075d0  jal         func_41D740
    ctx->pc = 0x43CABCu;
    SET_GPR_U32(ctx, 31, 0x43CAC4u);
    ctx->pc = 0x43CAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43CABCu;
    // 0x43cac0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x43CABCu, 0x43CAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43CAC4u;
label_43cac4:
    // 0x43cac4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x43CAC4u;
    {
        const bool branch_taken_0x43cac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43CAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CAC4u;
        // 0x43cac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43cac4) {
            ctx->pc = 0x43CB00u;
            goto label_43cb00;
        }
    }
    ctx->pc = 0x43CACCu;
label_43cacc:
    // 0x43cacc: 0x92220023  lbu         $v0, 0x23($s1)
    ctx->pc = 0x43caccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_43cad0:
    // 0x43cad0: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x43cad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x43cad4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43CAD4u;
    {
        const bool branch_taken_0x43cad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CAD4u;
        // 0x43cad8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43cad4) {
            ctx->pc = 0x43CAECu;
            goto label_43caec;
        }
    }
    ctx->pc = 0x43CADCu;
    // 0x43cadc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43CADCu;
    {
        const bool branch_taken_0x43cadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43cadc) {
            ctx->pc = 0x43CAECu;
            goto label_43caec;
        }
    }
    ctx->pc = 0x43CAE4u;
    // 0x43cae4: 0xc1075ee  jal         func_41D7B8
    ctx->pc = 0x43CAE4u;
    SET_GPR_U32(ctx, 31, 0x43CAECu);
    ctx->pc = 0x43CAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43CAE4u;
    // 0x43cae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D7B8u, 0x43CAE4u, 0x43CAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43CAECu;
label_43caec:
    // 0x43caec: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x43CAECu;
    {
        const bool branch_taken_0x43caec = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x43CAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CAECu;
        // 0x43caf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43caec) {
            ctx->pc = 0x43CB00u;
            goto label_43cb00;
        }
    }
    ctx->pc = 0x43CAF4u;
    // 0x43caf4: 0xc1075d0  jal         func_41D740
    ctx->pc = 0x43CAF4u;
    SET_GPR_U32(ctx, 31, 0x43CAFCu);
    ctx->pc = 0x43CAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43CAF4u;
    // 0x43caf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x43CAF4u, 0x43CAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43CAFCu;
label_43cafc:
    // 0x43cafc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43cb00:
    // 0x43cb00: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x43cb00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x43cb04: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x43cb04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x43cb08: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x43cb08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x43cb0c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x43cb0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x43cb10: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x43cb10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x43cb14: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x43cb14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x43cb18: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x43cb18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x43cb1c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x43cb1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43cb20: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x43cb20u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43cb24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43cb24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43cb28: 0x3e00008  jr          $ra
    ctx->pc = 0x43CB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CB28u;
        // 0x43cb2c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CB30u;
}

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

// Function: sub_004198E0
// Address: 0x4198e0 - 0x419a60
void sub_004198E0_0x4198e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004198E0_0x4198e0");
#endif

    switch (ctx->pc) {
        case 0x4199bcu: goto label_4199bc;
        case 0x4199d8u: goto label_4199d8;
        case 0x4199f8u: goto label_4199f8;
        case 0x419a00u: goto label_419a00;
        case 0x419a28u: goto label_419a28;
        case 0x419a30u: goto label_419a30;
        default: break;
    }

    ctx->pc = 0x4198e0u;

    // 0x4198e0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4198e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4198e4: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x4198e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4198e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4198e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4198ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4198ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4198f0: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x4198f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x4198f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4198f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4198f8: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x4198f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x4198fc: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x4198fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x419900: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x419900u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x419904: 0xe4c10010  swc1        $f1, 0x10($a2)
    ctx->pc = 0x419904u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x419908: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x419908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x41990c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x41990cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x419910: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x419910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x419914: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x419914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x419918: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x419918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x41991c: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x41991cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x419920: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x419920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x419924: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x419924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x419928: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x419928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x41992c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x41992cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x419930: 0xe4c00040  swc1        $f0, 0x40($a2)
    ctx->pc = 0x419930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 64), bits); }
    // 0x419934: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x419934u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x419938: 0x8cc700a0  lw          $a3, 0xA0($a2)
    ctx->pc = 0x419938u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
    // 0x41993c: 0x90e80003  lbu         $t0, 0x3($a3)
    ctx->pc = 0x41993cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x419940: 0x31020003  andi        $v0, $t0, 0x3
    ctx->pc = 0x419940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x419944: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x419944u;
    {
        const bool branch_taken_0x419944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x419944) {
            ctx->pc = 0x419948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419944u;
            // 0x419948: 0x8cc500a0  lw          $a1, 0xA0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x419978u;
            goto label_419978;
        }
    }
    ctx->pc = 0x41994Cu;
    // 0x41994c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41994cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x419950: 0x24e50008  addiu       $a1, $a3, 0x8
    ctx->pc = 0x419950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x419954: 0x8c64e93c  lw          $a0, -0x16C4($v1)
    ctx->pc = 0x419954u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61E93Cu));
    // 0x419958: 0x2462e93c  addiu       $v0, $v1, -0x16C4
    ctx->pc = 0x419958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961468));
    // 0x41995c: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x41995cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x419960: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x419960u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x419964: 0x8c62e93c  lw          $v0, -0x16C4($v1)
    ctx->pc = 0x419964u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61E93Cu));
    // 0x419968: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x419968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x41996c: 0xac65e93c  sw          $a1, -0x16C4($v1)
    ctx->pc = 0x41996cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x61E93Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E93Cu, _value); } while (0);
    // 0x419970: 0x8cc500a0  lw          $a1, 0xA0($a2)
    ctx->pc = 0x419970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
    // 0x419974: 0x0  nop
    ctx->pc = 0x419974u;
    // NOP
label_419978:
    // 0x419978: 0x35040003  ori         $a0, $t0, 0x3
    ctx->pc = 0x419978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)3);
    // 0x41997c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x41997cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419980: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x419980u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x419984: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x419984u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x419988: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x419988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x41998c: 0x3e00008  jr          $ra
    ctx->pc = 0x41998Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41998Cu;
        // 0x419990: 0xa0c30003  sb          $v1, 0x3($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41998Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419994u;
    // 0x419994: 0x0  nop
    ctx->pc = 0x419994u;
    // NOP
    // 0x419998: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x419998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x41999c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41999cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4199a0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4199a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4199a4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4199a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4199a8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4199a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4199ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4199acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4199b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4199b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4199b4: 0xc1064f0  jal         func_4193C0
    ctx->pc = 0x4199B4u;
    SET_GPR_U32(ctx, 31, 0x4199BCu);
    ctx->pc = 0x4199B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4199B4u;
    // 0x4199b8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4193C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4193C0u, 0x4199B4u, 0x4199BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4199BCu;
label_4199bc:
    // 0x4199bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4199bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4199c0: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4199C0u;
    {
        const bool branch_taken_0x4199c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4199C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4199C0u;
        // 0x4199c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4199c0) {
            ctx->pc = 0x4199D8u;
            goto label_4199d8;
        }
    }
    ctx->pc = 0x4199C8u;
    // 0x4199c8: 0x92620003  lbu         $v0, 0x3($s3)
    ctx->pc = 0x4199c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x4199cc: 0x304200fc  andi        $v0, $v0, 0xFC
    ctx->pc = 0x4199ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)252);
    // 0x4199d0: 0xc106794  jal         func_419E50
    ctx->pc = 0x4199D0u;
    SET_GPR_U32(ctx, 31, 0x4199D8u);
    ctx->pc = 0x4199D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4199D0u;
    // 0x4199d4: 0xa2620003  sb          $v0, 0x3($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x4199D0u, 0x4199D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4199D8u;
label_4199d8:
    // 0x4199d8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4199d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4199dc: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x4199DCu;
    {
        const bool branch_taken_0x4199dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4199E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4199DCu;
        // 0x4199e0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4199dc) {
            ctx->pc = 0x419A14u;
            goto label_419a14;
        }
    }
    ctx->pc = 0x4199E4u;
    // 0x4199e4: 0x8cb200a0  lw          $s2, 0xA0($a1)
    ctx->pc = 0x4199e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x4199e8: 0x8e300098  lw          $s0, 0x98($s1)
    ctx->pc = 0x4199e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x4199ec: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4199ECu;
    {
        const bool branch_taken_0x4199ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4199F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4199ECu;
        // 0x4199f0: 0xae3200a0  sw          $s2, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4199ec) {
            ctx->pc = 0x419A3Cu;
            goto label_419a3c;
        }
    }
    ctx->pc = 0x4199F4u;
    // 0x4199f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4199f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4199f8:
    // 0x4199f8: 0xc1068e0  jal         func_41A380
    ctx->pc = 0x4199F8u;
    SET_GPR_U32(ctx, 31, 0x419A00u);
    ctx->pc = 0x4199FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4199F8u;
    // 0x4199fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A380u, 0x4199F8u, 0x419A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419A00u;
label_419a00:
    // 0x419a00: 0x8e10009c  lw          $s0, 0x9C($s0)
    ctx->pc = 0x419a00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x419a04: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x419A04u;
    {
        const bool branch_taken_0x419a04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x419A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419A04u;
        // 0x419a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419a04) {
            ctx->pc = 0x4199F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4199f8;
        }
    }
    ctx->pc = 0x419A0Cu;
    // 0x419a0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x419A0Cu;
    {
        const bool branch_taken_0x419a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x419A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419A0Cu;
        // 0x419a10: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419a0c) {
            ctx->pc = 0x419A40u;
            goto label_419a40;
        }
    }
    ctx->pc = 0x419A14u;
label_419a14:
    // 0x419a14: 0xae1000a0  sw          $s0, 0xA0($s0)
    ctx->pc = 0x419a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 16));
    // 0x419a18: 0x8e100098  lw          $s0, 0x98($s0)
    ctx->pc = 0x419a18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x419a1c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x419A1Cu;
    {
        const bool branch_taken_0x419a1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x419A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419A1Cu;
        // 0x419a20: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419a1c) {
            ctx->pc = 0x419A40u;
            goto label_419a40;
        }
    }
    ctx->pc = 0x419A24u;
    // 0x419a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x419a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_419a28:
    // 0x419a28: 0xc1068e0  jal         func_41A380
    ctx->pc = 0x419A28u;
    SET_GPR_U32(ctx, 31, 0x419A30u);
    ctx->pc = 0x419A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419A28u;
    // 0x419a2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A380u, 0x419A28u, 0x419A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419A30u;
label_419a30:
    // 0x419a30: 0x8e10009c  lw          $s0, 0x9C($s0)
    ctx->pc = 0x419a30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x419a34: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x419A34u;
    {
        const bool branch_taken_0x419a34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x419A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419A34u;
        // 0x419a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419a34) {
            ctx->pc = 0x419A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_419a28;
        }
    }
    ctx->pc = 0x419A3Cu;
label_419a3c:
    // 0x419a3c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x419a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_419a40:
    // 0x419a40: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x419a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x419a44: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x419a44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x419a48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x419a48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x419a4c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x419a4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x419a50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x419a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x419a54: 0x3e00008  jr          $ra
    ctx->pc = 0x419A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419A54u;
        // 0x419a58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419A5Cu;
    // 0x419a5c: 0x0  nop
    ctx->pc = 0x419a5cu;
    // NOP
    ctx->pc = 0x419a60u;
}

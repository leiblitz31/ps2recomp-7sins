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

// Function: sub_00431988
// Address: 0x431988 - 0x431ff0
void sub_00431988_0x431988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00431988_0x431988");
#endif

    switch (ctx->pc) {
        case 0x4319c0u: goto label_4319c0;
        case 0x4319ecu: goto label_4319ec;
        case 0x4319fcu: goto label_4319fc;
        case 0x431a40u: goto label_431a40;
        case 0x431af8u: goto label_431af8;
        case 0x431b18u: goto label_431b18;
        case 0x431b38u: goto label_431b38;
        case 0x431b48u: goto label_431b48;
        case 0x431b88u: goto label_431b88;
        case 0x431ba0u: goto label_431ba0;
        case 0x431bb4u: goto label_431bb4;
        case 0x431bd4u: goto label_431bd4;
        case 0x431be8u: goto label_431be8;
        case 0x431c04u: goto label_431c04;
        case 0x431c18u: goto label_431c18;
        case 0x431c3cu: goto label_431c3c;
        case 0x431c4cu: goto label_431c4c;
        case 0x431c68u: goto label_431c68;
        case 0x431c94u: goto label_431c94;
        case 0x431ca8u: goto label_431ca8;
        case 0x431d08u: goto label_431d08;
        case 0x431d30u: goto label_431d30;
        case 0x431d40u: goto label_431d40;
        case 0x431d50u: goto label_431d50;
        case 0x431d88u: goto label_431d88;
        case 0x431d9cu: goto label_431d9c;
        case 0x431e0cu: goto label_431e0c;
        case 0x431e3cu: goto label_431e3c;
        case 0x431e48u: goto label_431e48;
        case 0x431e70u: goto label_431e70;
        case 0x431e84u: goto label_431e84;
        case 0x431e9cu: goto label_431e9c;
        case 0x431ebcu: goto label_431ebc;
        case 0x431ee4u: goto label_431ee4;
        case 0x431ef0u: goto label_431ef0;
        case 0x431f00u: goto label_431f00;
        case 0x431f10u: goto label_431f10;
        case 0x431f24u: goto label_431f24;
        case 0x431f30u: goto label_431f30;
        case 0x431fb0u: goto label_431fb0;
        case 0x431fbcu: goto label_431fbc;
        default: break;
    }

    ctx->pc = 0x431988u;

label_431988:
    // 0x431988: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x431988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x43198c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x43198cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x431990: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x431990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x431994: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x431994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x431998: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x431998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43199c: 0x27a70064  addiu       $a3, $sp, 0x64
    ctx->pc = 0x43199cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x4319a0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x4319a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x4319a4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x4319a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x4319a8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4319a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4319ac: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x4319acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x4319b0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x4319b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x4319b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4319b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x4319b8: 0xc103322  jal         func_40CC88
    ctx->pc = 0x4319B8u;
    SET_GPR_U32(ctx, 31, 0x4319C0u);
    ctx->pc = 0x4319BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4319B8u;
    // 0x4319bc: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x4319B8u, 0x4319C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4319C0u;
label_4319c0:
    // 0x4319c0: 0x104000b9  beqz        $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x4319C0u;
    {
        const bool branch_taken_0x4319c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4319C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4319C0u;
        // 0x4319c4: 0x8fa30064  lw          $v1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4319c0) {
            ctx->pc = 0x431CA8u;
            goto label_431ca8;
        }
    }
    ctx->pc = 0x4319C8u;
    // 0x4319c8: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x4319c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x4319cc: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x4319ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x4319d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4319d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4319d4: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x4319d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x4319d8: 0x106000a9  beqz        $v1, . + 4 + (0xA9 << 2)
    ctx->pc = 0x4319D8u;
    {
        const bool branch_taken_0x4319d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4319DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4319D8u;
        // 0x4319dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4319d8) {
            ctx->pc = 0x431C80u;
            goto label_431c80;
        }
    }
    ctx->pc = 0x4319E0u;
    // 0x4319e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4319e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4319e4: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x4319E4u;
    SET_GPR_U32(ctx, 31, 0x4319ECu);
    ctx->pc = 0x4319E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4319E4u;
    // 0x4319e8: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4319E4u, 0x4319ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4319ECu;
label_4319ec:
    // 0x4319ec: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x4319ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4319f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4319f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4319f4: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x4319F4u;
    SET_GPR_U32(ctx, 31, 0x4319FCu);
    ctx->pc = 0x4319F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4319F4u;
    // 0x4319f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x4319F4u, 0x4319FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4319FCu;
label_4319fc:
    // 0x4319fc: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x4319FCu;
    {
        const bool branch_taken_0x4319fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4319FCu;
        // 0x431a00: 0x97a2000e  lhu         $v0, 0xE($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4319fc) {
            ctx->pc = 0x431CA8u;
            goto label_431ca8;
        }
    }
    ctx->pc = 0x431A04u;
    // 0x431a04: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x431a04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x431a08: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x431A08u;
    {
        const bool branch_taken_0x431a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x431a08) {
            ctx->pc = 0x431A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431A08u;
            // 0x431a0c: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431A1Cu;
            goto label_431a1c;
        }
    }
    ctx->pc = 0x431A10u;
    // 0x431a10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x431a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x431a14: 0xaf82ae20  sw          $v0, -0x51E0($gp)
    ctx->pc = 0x431a14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946336), GPR_U32(ctx, 2));
    // 0x431a18: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x431a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_431a1c:
    // 0x431a1c: 0x8f90ae90  lw          $s0, -0x5170($gp)
    ctx->pc = 0x431a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
    // 0x431a20: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x431a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x431a24: 0x97a7000c  lhu         $a3, 0xC($sp)
    ctx->pc = 0x431a24u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x431a28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x431a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x431a2c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x431a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x431a30: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x431a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x431a34: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x431a34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x431a38: 0xc10746c  jal         func_41D1B0
    ctx->pc = 0x431A38u;
    SET_GPR_U32(ctx, 31, 0x431A40u);
    ctx->pc = 0x431A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431A38u;
    // 0x431a3c: 0xaf82ae90  sw          $v0, -0x5170($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946448), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x431A38u, 0x431A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431A40u;
label_431a40:
    // 0x431a40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x431a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431a44: 0xaf90ae90  sw          $s0, -0x5170($gp)
    ctx->pc = 0x431a44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946448), GPR_U32(ctx, 16));
    // 0x431a48: 0xaf80ae20  sw          $zero, -0x51E0($gp)
    ctx->pc = 0x431a48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946336), GPR_U32(ctx, 0));
    // 0x431a4c: 0x12200097  beqz        $s1, . + 4 + (0x97 << 2)
    ctx->pc = 0x431A4Cu;
    {
        const bool branch_taken_0x431a4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x431A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431A4Cu;
        // 0x431a50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431a4c) {
            ctx->pc = 0x431CACu;
            goto label_431cac;
        }
    }
    ctx->pc = 0x431A54u;
    // 0x431a54: 0x8f82beb8  lw          $v0, -0x4148($gp)
    ctx->pc = 0x431a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x431a58: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x431a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x431a5c: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x431a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x431a60: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x431a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x431a64: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x431a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x431a68: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x431a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x431a6c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x431a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x431a70: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x431a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x431a74: 0x93a2001c  lbu         $v0, 0x1C($sp)
    ctx->pc = 0x431a74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x431a78: 0xa2020016  sb          $v0, 0x16($s0)
    ctx->pc = 0x431a78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 2));
    // 0x431a7c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x431a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x431a80: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x431a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x431a84: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x431a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x431a88: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x431a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x431a8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x431a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x431a90: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x431a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x431a94: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x431a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x431a98: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x431a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x431a9c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x431a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x431aa0: 0xae050028  sw          $a1, 0x28($s0)
    ctx->pc = 0x431aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
    // 0x431aa4: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x431aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x431aa8: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x431aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x431aac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x431aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x431ab0: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x431ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x431ab4: 0x97a2003c  lhu         $v0, 0x3C($sp)
    ctx->pc = 0x431ab4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x431ab8: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x431ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x431abc: 0x97a3000e  lhu         $v1, 0xE($sp)
    ctx->pc = 0x431abcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 14)));
    // 0x431ac0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x431ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431ac4: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x431ac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x431ac8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x431AC8u;
    {
        const bool branch_taken_0x431ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431AC8u;
        // 0x431acc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431ac8) {
            ctx->pc = 0x431B24u;
            goto label_431b24;
        }
    }
    ctx->pc = 0x431AD0u;
    // 0x431ad0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x431ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x431ad4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x431ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x431ad8: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x431AD8u;
    {
        const bool branch_taken_0x431ad8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x431ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431AD8u;
        // 0x431adc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431ad8) {
            ctx->pc = 0x431B00u;
            goto label_431b00;
        }
    }
    ctx->pc = 0x431AE0u;
    // 0x431ae0: 0x92030036  lbu         $v1, 0x36($s0)
    ctx->pc = 0x431ae0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x431ae4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x431ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x431ae8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x431AE8u;
    {
        const bool branch_taken_0x431ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431AE8u;
        // 0x431aec: 0x34620002  ori         $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x431ae8) {
            ctx->pc = 0x431B20u;
            goto label_431b20;
        }
    }
    ctx->pc = 0x431AF0u;
    // 0x431af0: 0xc1074ac  jal         func_41D2B0
    ctx->pc = 0x431AF0u;
    SET_GPR_U32(ctx, 31, 0x431AF8u);
    ctx->pc = 0x431AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431AF0u;
    // 0x431af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x431AF0u, 0x431AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431AF8u;
label_431af8:
    // 0x431af8: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x431AF8u;
    {
        const bool branch_taken_0x431af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431AF8u;
        // 0x431afc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431af8) {
            ctx->pc = 0x431CACu;
            goto label_431cac;
        }
    }
    ctx->pc = 0x431B00u;
label_431b00:
    // 0x431b00: 0x92030036  lbu         $v1, 0x36($s0)
    ctx->pc = 0x431b00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x431b04: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x431b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x431b08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x431B08u;
    {
        const bool branch_taken_0x431b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431B08u;
        // 0x431b0c: 0x306200fd  andi        $v0, $v1, 0xFD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
        ctx->in_delay_slot = false;
        if (branch_taken_0x431b08) {
            ctx->pc = 0x431B20u;
            goto label_431b20;
        }
    }
    ctx->pc = 0x431B10u;
    // 0x431b10: 0xc1074ac  jal         func_41D2B0
    ctx->pc = 0x431B10u;
    SET_GPR_U32(ctx, 31, 0x431B18u);
    ctx->pc = 0x431B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431B10u;
    // 0x431b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x431B10u, 0x431B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431B18u;
label_431b18:
    // 0x431b18: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x431B18u;
    {
        const bool branch_taken_0x431b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431B18u;
        // 0x431b1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431b18) {
            ctx->pc = 0x431CACu;
            goto label_431cac;
        }
    }
    ctx->pc = 0x431B20u;
label_431b20:
    // 0x431b20: 0xa2020036  sb          $v0, 0x36($s0)
    ctx->pc = 0x431b20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 2));
label_431b24:
    // 0x431b24: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x431b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431b28: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x431b28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431b2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x431b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431b30: 0xc103322  jal         func_40CC88
    ctx->pc = 0x431B30u;
    SET_GPR_U32(ctx, 31, 0x431B38u);
    ctx->pc = 0x431B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431B30u;
    // 0x431b34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x431B30u, 0x431B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431B38u;
label_431b38:
    // 0x431b38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x431B38u;
    {
        const bool branch_taken_0x431b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x431B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431B38u;
        // 0x431b3c: 0x8fa30064  lw          $v1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431b38) {
            ctx->pc = 0x431B50u;
            goto label_431b50;
        }
    }
    ctx->pc = 0x431B40u;
    // 0x431b40: 0xc1074ac  jal         func_41D2B0
    ctx->pc = 0x431B40u;
    SET_GPR_U32(ctx, 31, 0x431B48u);
    ctx->pc = 0x431B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431B40u;
    // 0x431b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x431B40u, 0x431B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431B48u;
label_431b48:
    // 0x431b48: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x431B48u;
    {
        const bool branch_taken_0x431b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431B48u;
        // 0x431b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431b48) {
            ctx->pc = 0x431CACu;
            goto label_431cac;
        }
    }
    ctx->pc = 0x431B50u;
label_431b50:
    // 0x431b50: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x431b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x431b54: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x431b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x431b58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x431b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x431b5c: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x431b5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x431b60: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x431B60u;
    {
        const bool branch_taken_0x431b60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x431B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431B60u;
        // 0x431b64: 0x97a2000e  lhu         $v0, 0xE($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431b60) {
            ctx->pc = 0x431C54u;
            goto label_431c54;
        }
    }
    ctx->pc = 0x431B68u;
    // 0x431b68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x431b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431b6c: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x431b6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x431b70: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x431B70u;
    {
        const bool branch_taken_0x431b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x431B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431B70u;
        // 0x431b74: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431b70) {
            ctx->pc = 0x431BBCu;
            goto label_431bbc;
        }
    }
    ctx->pc = 0x431B78u;
    // 0x431b78: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x431b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x431b7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x431b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431b80: 0xc10480a  jal         func_412028
    ctx->pc = 0x431B80u;
    SET_GPR_U32(ctx, 31, 0x431B88u);
    ctx->pc = 0x431B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431B80u;
    // 0x431b84: 0x8fa60060  lw          $a2, 0x60($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x431B80u, 0x431B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431B88u;
label_431b88:
    // 0x431b88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x431b88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431b8c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x431b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x431b90: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x431B90u;
    {
        const bool branch_taken_0x431b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x431b90) {
            ctx->pc = 0x431B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431B90u;
            // 0x431b94: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431BA8u;
            goto label_431ba8;
        }
    }
    ctx->pc = 0x431B98u;
    // 0x431b98: 0xc1074ac  jal         func_41D2B0
    ctx->pc = 0x431B98u;
    SET_GPR_U32(ctx, 31, 0x431BA0u);
    ctx->pc = 0x431B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431B98u;
    // 0x431b9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x431B98u, 0x431BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431BA0u;
label_431ba0:
    // 0x431ba0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x431BA0u;
    {
        const bool branch_taken_0x431ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431BA0u;
        // 0x431ba4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431ba0) {
            ctx->pc = 0x431CACu;
            goto label_431cac;
        }
    }
    ctx->pc = 0x431BA8u;
label_431ba8:
    // 0x431ba8: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x431ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x431bac: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x431BACu;
    SET_GPR_U32(ctx, 31, 0x431BB4u);
    ctx->pc = 0x431BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431BACu;
    // 0x431bb0: 0x24a5007f  addiu       $a1, $a1, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x431BACu, 0x431BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431BB4u;
label_431bb4:
    // 0x431bb4: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x431BB4u;
    {
        const bool branch_taken_0x431bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431BB4u;
        // 0x431bb8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431bb4) {
            ctx->pc = 0x431CACu;
            goto label_431cac;
        }
    }
    ctx->pc = 0x431BBCu;
label_431bbc:
    // 0x431bbc: 0x14820021  bne         $a0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x431BBCu;
    {
        const bool branch_taken_0x431bbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x431BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431BBCu;
        // 0x431bc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431bbc) {
            ctx->pc = 0x431C44u;
            goto label_431c44;
        }
    }
    ctx->pc = 0x431BC4u;
    // 0x431bc4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x431bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x431bc8: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x431bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x431bcc: 0xc10480a  jal         func_412028
    ctx->pc = 0x431BCCu;
    SET_GPR_U32(ctx, 31, 0x431BD4u);
    ctx->pc = 0x431BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431BCCu;
    // 0x431bd0: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x431BCCu, 0x431BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431BD4u;
label_431bd4:
    // 0x431bd4: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x431bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x431bd8: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x431BD8u;
    {
        const bool branch_taken_0x431bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x431bd8) {
            ctx->pc = 0x431BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431BD8u;
            // 0x431bdc: 0x8e06002c  lw          $a2, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431BF0u;
            goto label_431bf0;
        }
    }
    ctx->pc = 0x431BE0u;
    // 0x431be0: 0xc1074ac  jal         func_41D2B0
    ctx->pc = 0x431BE0u;
    SET_GPR_U32(ctx, 31, 0x431BE8u);
    ctx->pc = 0x431BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431BE0u;
    // 0x431be4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x431BE0u, 0x431BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431BE8u;
label_431be8:
    // 0x431be8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x431BE8u;
    {
        const bool branch_taken_0x431be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431BE8u;
        // 0x431bec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431be8) {
            ctx->pc = 0x431CACu;
            goto label_431cac;
        }
    }
    ctx->pc = 0x431BF0u;
label_431bf0:
    // 0x431bf0: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x431BF0u;
    {
        const bool branch_taken_0x431bf0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x431BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431BF0u;
        // 0x431bf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431bf0) {
            ctx->pc = 0x431C20u;
            goto label_431c20;
        }
    }
    ctx->pc = 0x431BF8u;
    // 0x431bf8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x431bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x431bfc: 0xc10480a  jal         func_412028
    ctx->pc = 0x431BFCu;
    SET_GPR_U32(ctx, 31, 0x431C04u);
    ctx->pc = 0x431C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431BFCu;
    // 0x431c00: 0x24a5ffb0  addiu       $a1, $a1, -0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x431BFCu, 0x431C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431C04u;
label_431c04:
    // 0x431c04: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x431c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x431c08: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x431C08u;
    {
        const bool branch_taken_0x431c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x431c08) {
            ctx->pc = 0x431C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431C08u;
            // 0x431c0c: 0x8e05002c  lw          $a1, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431C24u;
            goto label_431c24;
        }
    }
    ctx->pc = 0x431C10u;
    // 0x431c10: 0xc1074ac  jal         func_41D2B0
    ctx->pc = 0x431C10u;
    SET_GPR_U32(ctx, 31, 0x431C18u);
    ctx->pc = 0x431C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431C10u;
    // 0x431c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x431C10u, 0x431C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431C18u;
label_431c18:
    // 0x431c18: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x431C18u;
    {
        const bool branch_taken_0x431c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431C18u;
        // 0x431c1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431c18) {
            ctx->pc = 0x431CACu;
            goto label_431cac;
        }
    }
    ctx->pc = 0x431C20u;
label_431c20:
    // 0x431c20: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x431c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_431c24:
    // 0x431c24: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x431c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x431c28: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x431c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x431c2c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x431c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x431c30: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x431c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x431c34: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x431C34u;
    SET_GPR_U32(ctx, 31, 0x431C3Cu);
    ctx->pc = 0x431C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431C34u;
    // 0x431c38: 0x24a5002f  addiu       $a1, $a1, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x431C34u, 0x431C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431C3Cu;
label_431c3c:
    // 0x431c3c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x431C3Cu;
    {
        const bool branch_taken_0x431c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431C3Cu;
        // 0x431c40: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431c3c) {
            ctx->pc = 0x431C78u;
            goto label_431c78;
        }
    }
    ctx->pc = 0x431C44u;
label_431c44:
    // 0x431c44: 0xc1074ac  jal         func_41D2B0
    ctx->pc = 0x431C44u;
    SET_GPR_U32(ctx, 31, 0x431C4Cu);
    ctx->pc = 0x431C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431C44u;
    // 0x431c48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x431C44u, 0x431C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431C4Cu;
label_431c4c:
    // 0x431c4c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x431C4Cu;
    {
        const bool branch_taken_0x431c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431C4Cu;
        // 0x431c50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431c4c) {
            ctx->pc = 0x431CACu;
            goto label_431cac;
        }
    }
    ctx->pc = 0x431C54u;
label_431c54:
    // 0x431c54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x431c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x431c58: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x431c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x431c5c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x431c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x431c60: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x431C60u;
    SET_GPR_U32(ctx, 31, 0x431C68u);
    ctx->pc = 0x431C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431C60u;
    // 0x431c64: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x431C60u, 0x431C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431C68u;
label_431c68:
    // 0x431c68: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x431c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x431c6c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x431C6Cu;
    {
        const bool branch_taken_0x431c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431C6Cu;
        // 0x431c70: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431c6c) {
            ctx->pc = 0x431CA0u;
            goto label_431ca0;
        }
    }
    ctx->pc = 0x431C74u;
    // 0x431c74: 0x0  nop
    ctx->pc = 0x431c74u;
    // NOP
label_431c78:
    // 0x431c78: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x431C78u;
    {
        const bool branch_taken_0x431c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431C78u;
        // 0x431c7c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431c78) {
            ctx->pc = 0x431CB0u;
            goto label_431cb0;
        }
    }
    ctx->pc = 0x431C80u;
label_431c80:
    // 0x431c80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x431c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x431c84: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x431c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x431c88: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x431c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x431c8c: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x431C8Cu;
    SET_GPR_U32(ctx, 31, 0x431C94u);
    ctx->pc = 0x431C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431C8Cu;
    // 0x431c90: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x431C8Cu, 0x431C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431C94u;
label_431c94:
    // 0x431c94: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x431c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x431c98: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x431c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x431c9c: 0x0  nop
    ctx->pc = 0x431c9cu;
    // NOP
label_431ca0:
    // 0x431ca0: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x431CA0u;
    SET_GPR_U32(ctx, 31, 0x431CA8u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x431CA0u, 0x431CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431CA8u;
label_431ca8:
    // 0x431ca8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x431ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_431cac:
    // 0x431cac: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x431cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_431cb0:
    // 0x431cb0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x431cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x431cb4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x431cb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x431cb8: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x431cb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x431cbc: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x431cbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x431cc0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x431cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x431cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x431CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x431CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431CC4u;
        // 0x431cc8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x431CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x431CCCu;
    // 0x431ccc: 0x0  nop
    ctx->pc = 0x431cccu;
    // NOP
    // 0x431cd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x431cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x431cd4: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x431cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x431cd8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x431cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x431cdc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x431cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x431ce0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x431ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x431ce4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x431ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431ce8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x431ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x431cec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x431cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431cf0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x431cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x431cf4: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x431cf4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x431cf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x431cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x431cfc: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x431cfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x431d00: 0xc103404  jal         func_40D010
    ctx->pc = 0x431D00u;
    SET_GPR_U32(ctx, 31, 0x431D08u);
    ctx->pc = 0x431D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431D00u;
    // 0x431d04: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x431D00u, 0x431D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431D08u;
label_431d08:
    // 0x431d08: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x431D08u;
    {
        const bool branch_taken_0x431d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D08u;
        // 0x431d0c: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431d08) {
            ctx->pc = 0x431DA4u;
            goto label_431da4;
        }
    }
    ctx->pc = 0x431D10u;
    // 0x431d10: 0x96030050  lhu         $v1, 0x50($s0)
    ctx->pc = 0x431d10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x431d14: 0x8c469e28  lw          $a2, -0x61D8($v0)
    ctx->pc = 0x431d14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942248)));
    // 0x431d18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x431d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431d1c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x431d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x431d20: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x431d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431d24: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x431d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x431d28: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x431D28u;
    SET_GPR_U32(ctx, 31, 0x431D30u);
    ctx->pc = 0x431D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431D28u;
    // 0x431d2c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x431D28u, 0x431D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431D30u;
label_431d30:
    // 0x431d30: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x431D30u;
    {
        const bool branch_taken_0x431d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D30u;
        // 0x431d34: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431d30) {
            ctx->pc = 0x431DA4u;
            goto label_431da4;
        }
    }
    ctx->pc = 0x431D38u;
    // 0x431d38: 0xc105336  jal         func_414CD8
    ctx->pc = 0x431D38u;
    SET_GPR_U32(ctx, 31, 0x431D40u);
    ctx->pc = 0x431D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431D38u;
    // 0x431d3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414CD8u, 0x431D38u, 0x431D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431D40u;
label_431d40:
    // 0x431d40: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x431D40u;
    {
        const bool branch_taken_0x431d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D40u;
        // 0x431d44: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431d40) {
            ctx->pc = 0x431DA4u;
            goto label_431da4;
        }
    }
    ctx->pc = 0x431D48u;
    // 0x431d48: 0xc105336  jal         func_414CD8
    ctx->pc = 0x431D48u;
    SET_GPR_U32(ctx, 31, 0x431D50u);
    ctx->pc = 0x431D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431D48u;
    // 0x431d4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414CD8u, 0x431D48u, 0x431D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431D50u;
label_431d50:
    // 0x431d50: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x431D50u;
    {
        const bool branch_taken_0x431d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D50u;
        // 0x431d54: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431d50) {
            ctx->pc = 0x431DA4u;
            goto label_431da4;
        }
    }
    ctx->pc = 0x431D58u;
    // 0x431d58: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x431d58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x431d5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x431d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431d60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x431d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x431d64: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x431d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x431d68: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x431d68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x431d6c: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x431d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x431d70: 0x2408002d  addiu       $t0, $zero, 0x2D
    ctx->pc = 0x431d70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x431d74: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x431d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x431d78: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x431d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x431d7c: 0x24700058  addiu       $s0, $v1, 0x58
    ctx->pc = 0x431d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x431d80: 0xc103404  jal         func_40D010
    ctx->pc = 0x431D80u;
    SET_GPR_U32(ctx, 31, 0x431D88u);
    ctx->pc = 0x431D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431D80u;
    // 0x431d84: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x431D80u, 0x431D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431D88u;
label_431d88:
    // 0x431d88: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x431D88u;
    {
        const bool branch_taken_0x431d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D88u;
        // 0x431d8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431d88) {
            ctx->pc = 0x431DA4u;
            goto label_431da4;
        }
    }
    ctx->pc = 0x431D90u;
    // 0x431d90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x431d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431d94: 0xc10c5a8  jal         func_4316A0
    ctx->pc = 0x431D94u;
    SET_GPR_U32(ctx, 31, 0x431D9Cu);
    ctx->pc = 0x431D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431D94u;
    // 0x431d98: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4316A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4316A0u, 0x431D94u, 0x431D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431D9Cu;
label_431d9c:
    // 0x431d9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x431D9Cu;
    {
        const bool branch_taken_0x431d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D9Cu;
        // 0x431da0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x431d9c) {
            ctx->pc = 0x431DA8u;
            goto label_431da8;
        }
    }
    ctx->pc = 0x431DA4u;
label_431da4:
    // 0x431da4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x431da4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_431da8:
    // 0x431da8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x431da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x431dac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x431dacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x431db0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x431db0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x431db4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x431db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x431db8: 0x3e00008  jr          $ra
    ctx->pc = 0x431DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x431DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431DB8u;
        // 0x431dbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x431DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x431DC0u;
    // 0x431dc0: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x431dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x431dc4: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x431dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
    // 0x431dc8: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x431dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x431dcc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x431dccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431dd0: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x431dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
    // 0x431dd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x431dd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431dd8: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x431dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
    // 0x431ddc: 0x27b60130  addiu       $s6, $sp, 0x130
    ctx->pc = 0x431ddcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x431de0: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x431de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x431de4: 0x27b70134  addiu       $s7, $sp, 0x134
    ctx->pc = 0x431de4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x431de8: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x431de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
    // 0x431dec: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x431decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
    // 0x431df0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x431df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x431df4: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x431df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
    // 0x431df8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x431df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431dfc: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x431dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x431e00: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x431e00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431e04: 0xc103322  jal         func_40CC88
    ctx->pc = 0x431E04u;
    SET_GPR_U32(ctx, 31, 0x431E0Cu);
    ctx->pc = 0x431E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431E04u;
    // 0x431e08: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x431E04u, 0x431E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431E0Cu;
label_431e0c:
    // 0x431e0c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x431E0Cu;
    {
        const bool branch_taken_0x431e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431E0Cu;
        // 0x431e10: 0x8fa20134  lw          $v0, 0x134($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431e0c) {
            ctx->pc = 0x431E48u;
            goto label_431e48;
        }
    }
    ctx->pc = 0x431E14u;
    // 0x431e14: 0x3c10fffc  lui         $s0, 0xFFFC
    ctx->pc = 0x431e14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65532 << 16));
    // 0x431e18: 0x3610b000  ori         $s0, $s0, 0xB000
    ctx->pc = 0x431e18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)45056);
    // 0x431e1c: 0x509821  addu        $s3, $v0, $s0
    ctx->pc = 0x431e1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x431e20: 0x2e732003  sltiu       $s3, $s3, 0x2003
    ctx->pc = 0x431e20u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x431e24: 0x1260005d  beqz        $s3, . + 4 + (0x5D << 2)
    ctx->pc = 0x431E24u;
    {
        const bool branch_taken_0x431e24 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x431E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431E24u;
        // 0x431e28: 0x8fa60130  lw          $a2, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431e24) {
            ctx->pc = 0x431F9Cu;
            goto label_431f9c;
        }
    }
    ctx->pc = 0x431E2Cu;
    // 0x431e2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x431e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431e30: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x431e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x431e34: 0xc10480a  jal         func_412028
    ctx->pc = 0x431E34u;
    SET_GPR_U32(ctx, 31, 0x431E3Cu);
    ctx->pc = 0x431E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431E34u;
    // 0x431e38: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x431E34u, 0x431E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431E3Cu;
label_431e3c:
    // 0x431e3c: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x431e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x431e40: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x431E40u;
    {
        const bool branch_taken_0x431e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x431E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431E40u;
        // 0x431e44: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431e40) {
            ctx->pc = 0x431E50u;
            goto label_431e50;
        }
    }
    ctx->pc = 0x431E48u;
label_431e48:
    // 0x431e48: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x431E48u;
    {
        const bool branch_taken_0x431e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431E48u;
        // 0x431e4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431e48) {
            ctx->pc = 0x431FC4u;
            goto label_431fc4;
        }
    }
    ctx->pc = 0x431E50u;
label_431e50:
    // 0x431e50: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x431e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x431e54: 0x34425350  ori         $v0, $v0, 0x5350
    ctx->pc = 0x431e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21328);
    // 0x431e58: 0x1462005a  bne         $v1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x431E58u;
    {
        const bool branch_taken_0x431e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x431E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431E58u;
        // 0x431e5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431e58) {
            ctx->pc = 0x431FC4u;
            goto label_431fc4;
        }
    }
    ctx->pc = 0x431E60u;
    // 0x431e60: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x431e60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x431e64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x431e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431e68: 0xc10521e  jal         func_414878
    ctx->pc = 0x431E68u;
    SET_GPR_U32(ctx, 31, 0x431E70u);
    ctx->pc = 0x431E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431E68u;
    // 0x431e6c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414878u, 0x431E68u, 0x431E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431E70u;
label_431e70:
    // 0x431e70: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x431E70u;
    {
        const bool branch_taken_0x431e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431E70u;
        // 0x431e74: 0x27b40090  addiu       $s4, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431e70) {
            ctx->pc = 0x431E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_431e48;
        }
    }
    ctx->pc = 0x431E78u;
    // 0x431e78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x431e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431e7c: 0xc10521e  jal         func_414878
    ctx->pc = 0x431E7Cu;
    SET_GPR_U32(ctx, 31, 0x431E84u);
    ctx->pc = 0x431E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431E7Cu;
    // 0x431e80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414878u, 0x431E7Cu, 0x431E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431E84u;
label_431e84:
    // 0x431e84: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x431E84u;
    {
        const bool branch_taken_0x431e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431E84u;
        // 0x431e88: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431e84) {
            ctx->pc = 0x431E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_431e48;
        }
    }
    ctx->pc = 0x431E8Cu;
    // 0x431e8c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x431e8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431e90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x431e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431e94: 0xc103322  jal         func_40CC88
    ctx->pc = 0x431E94u;
    SET_GPR_U32(ctx, 31, 0x431E9Cu);
    ctx->pc = 0x431E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431E94u;
    // 0x431e98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x431E94u, 0x431E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431E9Cu;
label_431e9c:
    // 0x431e9c: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x431E9Cu;
    {
        const bool branch_taken_0x431e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431E9Cu;
        // 0x431ea0: 0x8fa20134  lw          $v0, 0x134($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431e9c) {
            ctx->pc = 0x431E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_431e48;
        }
    }
    ctx->pc = 0x431EA4u;
    // 0x431ea4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x431ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x431ea8: 0x2c422003  sltiu       $v0, $v0, 0x2003
    ctx->pc = 0x431ea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x431eac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x431EACu;
    {
        const bool branch_taken_0x431eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431EACu;
        // 0x431eb0: 0x8fa50130  lw          $a1, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431eac) {
            ctx->pc = 0x431ED0u;
            goto label_431ed0;
        }
    }
    ctx->pc = 0x431EB4u;
    // 0x431eb4: 0xc10c662  jal         func_431988
    ctx->pc = 0x431EB4u;
    SET_GPR_U32(ctx, 31, 0x431EBCu);
    ctx->pc = 0x431EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431EB4u;
    // 0x431eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431988u;
    goto label_431988;
    ctx->pc = 0x431EBCu;
label_431ebc:
    // 0x431ebc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x431ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431ec0: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x431EC0u;
    {
        const bool branch_taken_0x431ec0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x431EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431EC0u;
        // 0x431ec4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431ec0) {
            ctx->pc = 0x431EF8u;
            goto label_431ef8;
        }
    }
    ctx->pc = 0x431EC8u;
    // 0x431ec8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x431EC8u;
    {
        const bool branch_taken_0x431ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431EC8u;
        // 0x431ecc: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431ec8) {
            ctx->pc = 0x431FC8u;
            goto label_431fc8;
        }
    }
    ctx->pc = 0x431ED0u;
label_431ed0:
    // 0x431ed0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x431ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x431ed4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x431ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x431ed8: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x431ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x431edc: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x431EDCu;
    SET_GPR_U32(ctx, 31, 0x431EE4u);
    ctx->pc = 0x431EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431EDCu;
    // 0x431ee0: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x431EDCu, 0x431EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431EE4u;
label_431ee4:
    // 0x431ee4: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x431ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x431ee8: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x431EE8u;
    SET_GPR_U32(ctx, 31, 0x431EF0u);
    ctx->pc = 0x431EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431EE8u;
    // 0x431eec: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x431EE8u, 0x431EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431EF0u;
label_431ef0:
    // 0x431ef0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x431EF0u;
    {
        const bool branch_taken_0x431ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431EF0u;
        // 0x431ef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431ef0) {
            ctx->pc = 0x431FC4u;
            goto label_431fc4;
        }
    }
    ctx->pc = 0x431EF8u;
label_431ef8:
    // 0x431ef8: 0xc10820a  jal         func_420828
    ctx->pc = 0x431EF8u;
    SET_GPR_U32(ctx, 31, 0x431F00u);
    ctx->pc = 0x431EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431EF8u;
    // 0x431efc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420828u, 0x431EF8u, 0x431F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431F00u;
label_431f00:
    // 0x431f00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x431F00u;
    {
        const bool branch_taken_0x431f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x431F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431F00u;
        // 0x431f04: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431f00) {
            ctx->pc = 0x431F18u;
            goto label_431f18;
        }
    }
    ctx->pc = 0x431F08u;
    // 0x431f08: 0xc1074ac  jal         func_41D2B0
    ctx->pc = 0x431F08u;
    SET_GPR_U32(ctx, 31, 0x431F10u);
    ctx->pc = 0x431F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431F08u;
    // 0x431f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x431F08u, 0x431F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431F10u;
label_431f10:
    // 0x431f10: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x431F10u;
    {
        const bool branch_taken_0x431f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431F10u;
        // 0x431f14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431f10) {
            ctx->pc = 0x431FC4u;
            goto label_431fc4;
        }
    }
    ctx->pc = 0x431F18u;
label_431f18:
    // 0x431f18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x431f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431f1c: 0xc10815c  jal         func_420570
    ctx->pc = 0x431F1Cu;
    SET_GPR_U32(ctx, 31, 0x431F24u);
    ctx->pc = 0x431F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431F1Cu;
    // 0x431f20: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420570u, 0x431F1Cu, 0x431F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431F24u;
label_431f24:
    // 0x431f24: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x431f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x431f28: 0xc108184  jal         func_420610
    ctx->pc = 0x431F28u;
    SET_GPR_U32(ctx, 31, 0x431F30u);
    ctx->pc = 0x431F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431F28u;
    // 0x431f2c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420610u, 0x431F28u, 0x431F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431F30u;
label_431f30:
    // 0x431f30: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x431f30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x431f34: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x431f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x431f38: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x431f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x431f3c: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x431f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x431f40: 0x8ce30050  lw          $v1, 0x50($a3)
    ctx->pc = 0x431f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x431f44: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x431f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x431f48: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x431f48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x431f4c: 0x34a5f0ff  ori         $a1, $a1, 0xF0FF
    ctx->pc = 0x431f4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61695);
    // 0x431f50: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x431f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x431f54: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x431f54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x431f58: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x431f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x431f5c: 0x34c60fff  ori         $a2, $a2, 0xFFF
    ctx->pc = 0x431f5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4095);
    // 0x431f60: 0xace30050  sw          $v1, 0x50($a3)
    ctx->pc = 0x431f60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 3));
    // 0x431f64: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x431f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x431f68: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x431f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x431f6c: 0x22203  sra         $a0, $v0, 8
    ctx->pc = 0x431f6cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 8));
    // 0x431f70: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x431f70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x431f74: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x431f74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x431f78: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x431f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x431f7c: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x431f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x431f80: 0x82100a  movz        $v0, $a0, $v0
    ctx->pc = 0x431f80u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x431f84: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x431f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x431f88: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x431f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x431f8c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x431f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x431f90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x431f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x431f94: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x431F94u;
    {
        const bool branch_taken_0x431f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431F94u;
        // 0x431f98: 0xace30050  sw          $v1, 0x50($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431f94) {
            ctx->pc = 0x431FC0u;
            goto label_431fc0;
        }
    }
    ctx->pc = 0x431F9Cu;
label_431f9c:
    // 0x431f9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x431f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x431fa0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x431fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x431fa4: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x431fa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x431fa8: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x431FA8u;
    SET_GPR_U32(ctx, 31, 0x431FB0u);
    ctx->pc = 0x431FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431FA8u;
    // 0x431fac: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x431FA8u, 0x431FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431FB0u;
label_431fb0:
    // 0x431fb0: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x431fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x431fb4: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x431FB4u;
    SET_GPR_U32(ctx, 31, 0x431FBCu);
    ctx->pc = 0x431FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431FB4u;
    // 0x431fb8: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x431FB4u, 0x431FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431FBCu;
label_431fbc:
    // 0x431fbc: 0x0  nop
    ctx->pc = 0x431fbcu;
    // NOP
label_431fc0:
    // 0x431fc0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x431fc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_431fc4:
    // 0x431fc4: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x431fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_431fc8:
    // 0x431fc8: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x431fc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x431fcc: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x431fccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x431fd0: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x431fd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x431fd4: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x431fd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x431fd8: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x431fd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x431fdc: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x431fdcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x431fe0: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x431fe0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x431fe4: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x431fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x431fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x431FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x431FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431FE8u;
        // 0x431fec: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x431FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x431FF0u;
}

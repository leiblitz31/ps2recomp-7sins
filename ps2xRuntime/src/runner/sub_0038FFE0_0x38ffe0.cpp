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

// Function: sub_0038FFE0
// Address: 0x38ffe0 - 0x3900e8
void sub_0038FFE0_0x38ffe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038FFE0_0x38ffe0");
#endif

    switch (ctx->pc) {
        case 0x38ffe0u: goto label_38ffe0;
        case 0x38ffe4u: goto label_38ffe4;
        case 0x38ffe8u: goto label_38ffe8;
        case 0x38ffecu: goto label_38ffec;
        case 0x38fff0u: goto label_38fff0;
        case 0x38fff4u: goto label_38fff4;
        case 0x38fff8u: goto label_38fff8;
        case 0x38fffcu: goto label_38fffc;
        case 0x390000u: goto label_390000;
        case 0x390004u: goto label_390004;
        case 0x390008u: goto label_390008;
        case 0x39000cu: goto label_39000c;
        case 0x390010u: goto label_390010;
        case 0x390014u: goto label_390014;
        case 0x390018u: goto label_390018;
        case 0x39001cu: goto label_39001c;
        case 0x390020u: goto label_390020;
        case 0x390024u: goto label_390024;
        case 0x390028u: goto label_390028;
        case 0x39002cu: goto label_39002c;
        case 0x390030u: goto label_390030;
        case 0x390034u: goto label_390034;
        case 0x390038u: goto label_390038;
        case 0x39003cu: goto label_39003c;
        case 0x390040u: goto label_390040;
        case 0x390044u: goto label_390044;
        case 0x390048u: goto label_390048;
        case 0x39004cu: goto label_39004c;
        case 0x390050u: goto label_390050;
        case 0x390054u: goto label_390054;
        case 0x390058u: goto label_390058;
        case 0x39005cu: goto label_39005c;
        case 0x390060u: goto label_390060;
        case 0x390064u: goto label_390064;
        case 0x390068u: goto label_390068;
        case 0x39006cu: goto label_39006c;
        case 0x390070u: goto label_390070;
        case 0x390074u: goto label_390074;
        case 0x390078u: goto label_390078;
        case 0x39007cu: goto label_39007c;
        case 0x390080u: goto label_390080;
        case 0x390084u: goto label_390084;
        case 0x390088u: goto label_390088;
        case 0x39008cu: goto label_39008c;
        case 0x390090u: goto label_390090;
        case 0x390094u: goto label_390094;
        case 0x390098u: goto label_390098;
        case 0x39009cu: goto label_39009c;
        case 0x3900a0u: goto label_3900a0;
        case 0x3900a4u: goto label_3900a4;
        case 0x3900a8u: goto label_3900a8;
        case 0x3900acu: goto label_3900ac;
        case 0x3900b0u: goto label_3900b0;
        case 0x3900b4u: goto label_3900b4;
        case 0x3900b8u: goto label_3900b8;
        case 0x3900bcu: goto label_3900bc;
        case 0x3900c0u: goto label_3900c0;
        case 0x3900c4u: goto label_3900c4;
        case 0x3900c8u: goto label_3900c8;
        case 0x3900ccu: goto label_3900cc;
        case 0x3900d0u: goto label_3900d0;
        case 0x3900d4u: goto label_3900d4;
        case 0x3900d8u: goto label_3900d8;
        case 0x3900dcu: goto label_3900dc;
        case 0x3900e0u: goto label_3900e0;
        case 0x3900e4u: goto label_3900e4;
        default: break;
    }

    ctx->pc = 0x38ffe0u;

label_38ffe0:
    // 0x38ffe0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x38ffe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_38ffe4:
    // 0x38ffe4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x38ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_38ffe8:
    // 0x38ffe8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x38ffe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_38ffec:
    // 0x38ffec: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x38ffecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_38fff0:
    // 0x38fff0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x38fff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_38fff4:
    // 0x38fff4: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x38fff4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_38fff8:
    // 0x38fff8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38fff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_38fffc:
    // 0x38fffc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38fffcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_390000:
    // 0x390000: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x390000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_390004:
    // 0x390004: 0x2453e880  addiu       $s3, $v0, -0x1780
    ctx->pc = 0x390004u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_390008:
    // 0x390008: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x390008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39000c:
    // 0x39000c: 0x8e620118  lw          $v0, 0x118($s3)
    ctx->pc = 0x39000cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_390010:
    // 0x390010: 0x40f809  jalr        $v0
label_390014:
    if (ctx->pc == 0x390014u) {
        ctx->pc = 0x390014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390010u;
        // 0x390014: 0x8f84a9c8  lw          $a0, -0x5638($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390018u;
        goto label_390018;
    }
    ctx->pc = 0x390010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x390018u);
        ctx->pc = 0x390014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390010u;
        // 0x390014: 0x8f84a9c8  lw          $a0, -0x5638($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945224)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390010u, 0x390018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390018u;
label_390018:
    // 0x390018: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x390018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39001c:
    // 0x39001c: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_390020:
    if (ctx->pc == 0x390020u) {
        ctx->pc = 0x390020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39001Cu;
        // 0x390020: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390024u;
        goto label_390024;
    }
    ctx->pc = 0x39001Cu;
    {
        const bool branch_taken_0x39001c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x390020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39001Cu;
        // 0x390020: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39001c) {
            ctx->pc = 0x3900A0u;
            goto label_3900a0;
        }
    }
    ctx->pc = 0x390024u;
label_390024:
    // 0x390024: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
label_390028:
    if (ctx->pc == 0x390028u) {
        ctx->pc = 0x390028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390024u;
        // 0x390028: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39002Cu;
        goto label_39002c;
    }
    ctx->pc = 0x390024u;
    {
        const bool branch_taken_0x390024 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x390028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390024u;
        // 0x390028: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390024) {
            ctx->pc = 0x390090u;
            goto label_390090;
        }
    }
    ctx->pc = 0x39002Cu;
label_39002c:
    // 0x39002c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x39002cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_390030:
    // 0x390030: 0x8e620108  lw          $v0, 0x108($s3)
    ctx->pc = 0x390030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
label_390034:
    // 0x390034: 0x2438818  mult        $s1, $s2, $v1
    ctx->pc = 0x390034u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_390038:
    // 0x390038: 0x3c050103  lui         $a1, 0x103
    ctx->pc = 0x390038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
label_39003c:
    // 0x39003c: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x39003cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_390040:
    // 0x390040: 0x40f809  jalr        $v0
label_390044:
    if (ctx->pc == 0x390044u) {
        ctx->pc = 0x390044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390040u;
        // 0x390044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390048u;
        goto label_390048;
    }
    ctx->pc = 0x390040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x390048u);
        ctx->pc = 0x390044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390040u;
        // 0x390044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390040u, 0x390048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390048u;
label_390048:
    // 0x390048: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_39004c:
    if (ctx->pc == 0x39004Cu) {
        ctx->pc = 0x39004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390048u;
        // 0x39004c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390050u;
        goto label_390050;
    }
    ctx->pc = 0x390048u;
    {
        const bool branch_taken_0x390048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390048u;
        // 0x39004c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390048) {
            ctx->pc = 0x390088u;
            goto label_390088;
        }
    }
    ctx->pc = 0x390050u;
label_390050:
    // 0x390050: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x390050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_390054:
    // 0x390054: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x390054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_390058:
    // 0x390058: 0x40f809  jalr        $v0
label_39005c:
    if (ctx->pc == 0x39005Cu) {
        ctx->pc = 0x39005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390058u;
        // 0x39005c: 0x8f84a9c8  lw          $a0, -0x5638($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390060u;
        goto label_390060;
    }
    ctx->pc = 0x390058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x390060u);
        ctx->pc = 0x39005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390058u;
        // 0x39005c: 0x8f84a9c8  lw          $a0, -0x5638($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945224)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390058u, 0x390060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390060u;
label_390060:
    // 0x390060: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x390060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_390064:
    // 0x390064: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x390064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_390068:
    // 0x390068: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x390068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_39006c:
    // 0x39006c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39006cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_390070:
    // 0x390070: 0xc1035f6  jal         func_40D7D8
label_390074:
    if (ctx->pc == 0x390074u) {
        ctx->pc = 0x390074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390070u;
        // 0x390074: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x390078u;
        goto label_390078;
    }
    ctx->pc = 0x390070u;
    SET_GPR_U32(ctx, 31, 0x390078u);
    ctx->pc = 0x390074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390070u;
    // 0x390074: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x390070u, 0x390078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390078u;
label_390078:
    // 0x390078: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x390078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39007c:
    // 0x39007c: 0x10000010  b           . + 4 + (0x10 << 2)
label_390080:
    if (ctx->pc == 0x390080u) {
        ctx->pc = 0x390080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39007Cu;
        // 0x390080: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390084u;
        goto label_390084;
    }
    ctx->pc = 0x39007Cu;
    {
        const bool branch_taken_0x39007c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39007Cu;
        // 0x390080: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39007c) {
            ctx->pc = 0x3900C0u;
            goto label_3900c0;
        }
    }
    ctx->pc = 0x390084u;
label_390084:
    // 0x390084: 0x0  nop
    ctx->pc = 0x390084u;
    // NOP
label_390088:
    // 0x390088: 0x10000003  b           . + 4 + (0x3 << 2)
label_39008c:
    if (ctx->pc == 0x39008Cu) {
        ctx->pc = 0x39008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390088u;
        // 0x39008c: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390090u;
        goto label_390090;
    }
    ctx->pc = 0x390088u;
    {
        const bool branch_taken_0x390088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390088u;
        // 0x39008c: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390088) {
            ctx->pc = 0x390098u;
            goto label_390098;
        }
    }
    ctx->pc = 0x390090u;
label_390090:
    // 0x390090: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x390090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_390094:
    // 0x390094: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x390094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_390098:
    // 0x390098: 0x1000000c  b           . + 4 + (0xC << 2)
label_39009c:
    if (ctx->pc == 0x39009Cu) {
        ctx->pc = 0x39009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390098u;
        // 0x39009c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3900A0u;
        goto label_3900a0;
    }
    ctx->pc = 0x390098u;
    {
        const bool branch_taken_0x390098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390098u;
        // 0x39009c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390098) {
            ctx->pc = 0x3900CCu;
            goto label_3900cc;
        }
    }
    ctx->pc = 0x3900A0u;
label_3900a0:
    // 0x3900a0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3900a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3900a4:
    // 0x3900a4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3900a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_3900a8:
    // 0x3900a8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3900a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3900ac:
    // 0x3900ac: 0xc1035f6  jal         func_40D7D8
label_3900b0:
    if (ctx->pc == 0x3900B0u) {
        ctx->pc = 0x3900B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3900ACu;
        // 0x3900b0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3900B4u;
        goto label_3900b4;
    }
    ctx->pc = 0x3900ACu;
    SET_GPR_U32(ctx, 31, 0x3900B4u);
    ctx->pc = 0x3900B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3900ACu;
    // 0x3900b0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3900ACu, 0x3900B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3900B4u;
label_3900b4:
    // 0x3900b4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3900b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_3900b8:
    // 0x3900b8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3900b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3900bc:
    // 0x3900bc: 0x0  nop
    ctx->pc = 0x3900bcu;
    // NOP
label_3900c0:
    // 0x3900c0: 0xc103628  jal         func_40D8A0
label_3900c4:
    if (ctx->pc == 0x3900C4u) {
        ctx->pc = 0x3900C8u;
        goto label_3900c8;
    }
    ctx->pc = 0x3900C0u;
    SET_GPR_U32(ctx, 31, 0x3900C8u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3900C0u, 0x3900C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3900C8u;
label_3900c8:
    // 0x3900c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3900c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3900cc:
    // 0x3900cc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3900ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3900d0:
    // 0x3900d0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3900d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3900d4:
    // 0x3900d4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3900d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3900d8:
    // 0x3900d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3900d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3900dc:
    // 0x3900dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3900dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3900e0:
    // 0x3900e0: 0x3e00008  jr          $ra
label_3900e4:
    if (ctx->pc == 0x3900E4u) {
        ctx->pc = 0x3900E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3900E0u;
        // 0x3900e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3900E8u;
        goto label_fallthrough_0x3900e0;
    }
    ctx->pc = 0x3900E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3900E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3900E0u;
        // 0x3900e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3900E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3900e0:
    ctx->pc = 0x3900E8u;
}

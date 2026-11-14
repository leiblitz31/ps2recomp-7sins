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

// Function: sub_003DD030
// Address: 0x3dd030 - 0x3dd138
void sub_003DD030_0x3dd030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD030_0x3dd030");
#endif

    switch (ctx->pc) {
        case 0x3dd030u: goto label_3dd030;
        case 0x3dd034u: goto label_3dd034;
        case 0x3dd038u: goto label_3dd038;
        case 0x3dd03cu: goto label_3dd03c;
        case 0x3dd040u: goto label_3dd040;
        case 0x3dd044u: goto label_3dd044;
        case 0x3dd048u: goto label_3dd048;
        case 0x3dd04cu: goto label_3dd04c;
        case 0x3dd050u: goto label_3dd050;
        case 0x3dd054u: goto label_3dd054;
        case 0x3dd058u: goto label_3dd058;
        case 0x3dd05cu: goto label_3dd05c;
        case 0x3dd060u: goto label_3dd060;
        case 0x3dd064u: goto label_3dd064;
        case 0x3dd068u: goto label_3dd068;
        case 0x3dd06cu: goto label_3dd06c;
        case 0x3dd070u: goto label_3dd070;
        case 0x3dd074u: goto label_3dd074;
        case 0x3dd078u: goto label_3dd078;
        case 0x3dd07cu: goto label_3dd07c;
        case 0x3dd080u: goto label_3dd080;
        case 0x3dd084u: goto label_3dd084;
        case 0x3dd088u: goto label_3dd088;
        case 0x3dd08cu: goto label_3dd08c;
        case 0x3dd090u: goto label_3dd090;
        case 0x3dd094u: goto label_3dd094;
        case 0x3dd098u: goto label_3dd098;
        case 0x3dd09cu: goto label_3dd09c;
        case 0x3dd0a0u: goto label_3dd0a0;
        case 0x3dd0a4u: goto label_3dd0a4;
        case 0x3dd0a8u: goto label_3dd0a8;
        case 0x3dd0acu: goto label_3dd0ac;
        case 0x3dd0b0u: goto label_3dd0b0;
        case 0x3dd0b4u: goto label_3dd0b4;
        case 0x3dd0b8u: goto label_3dd0b8;
        case 0x3dd0bcu: goto label_3dd0bc;
        case 0x3dd0c0u: goto label_3dd0c0;
        case 0x3dd0c4u: goto label_3dd0c4;
        case 0x3dd0c8u: goto label_3dd0c8;
        case 0x3dd0ccu: goto label_3dd0cc;
        case 0x3dd0d0u: goto label_3dd0d0;
        case 0x3dd0d4u: goto label_3dd0d4;
        case 0x3dd0d8u: goto label_3dd0d8;
        case 0x3dd0dcu: goto label_3dd0dc;
        case 0x3dd0e0u: goto label_3dd0e0;
        case 0x3dd0e4u: goto label_3dd0e4;
        case 0x3dd0e8u: goto label_3dd0e8;
        case 0x3dd0ecu: goto label_3dd0ec;
        case 0x3dd0f0u: goto label_3dd0f0;
        case 0x3dd0f4u: goto label_3dd0f4;
        case 0x3dd0f8u: goto label_3dd0f8;
        case 0x3dd0fcu: goto label_3dd0fc;
        case 0x3dd100u: goto label_3dd100;
        case 0x3dd104u: goto label_3dd104;
        case 0x3dd108u: goto label_3dd108;
        case 0x3dd10cu: goto label_3dd10c;
        case 0x3dd110u: goto label_3dd110;
        case 0x3dd114u: goto label_3dd114;
        case 0x3dd118u: goto label_3dd118;
        case 0x3dd11cu: goto label_3dd11c;
        case 0x3dd120u: goto label_3dd120;
        case 0x3dd124u: goto label_3dd124;
        case 0x3dd128u: goto label_3dd128;
        case 0x3dd12cu: goto label_3dd12c;
        case 0x3dd130u: goto label_3dd130;
        case 0x3dd134u: goto label_3dd134;
        default: break;
    }

    ctx->pc = 0x3dd030u;

label_3dd030:
    // 0x3dd030: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3dd030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3dd034:
    // 0x3dd034: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3dd034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3dd038:
    // 0x3dd038: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3dd038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3dd03c:
    // 0x3dd03c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3dd03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3dd040:
    // 0x3dd040: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dd040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dd044:
    // 0x3dd044: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3dd044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3dd048:
    // 0x3dd048: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3dd048u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dd04c:
    // 0x3dd04c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dd04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3dd050:
    // 0x3dd050: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3dd050u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3dd054:
    // 0x3dd054: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3dd054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dd058:
    // 0x3dd058: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x3dd058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_3dd05c:
    // 0x3dd05c: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3dd05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3dd060:
    // 0x3dd060: 0x40f809  jalr        $v0
label_3dd064:
    if (ctx->pc == 0x3DD064u) {
        ctx->pc = 0x3DD064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD060u;
        // 0x3dd064: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD068u;
        goto label_3dd068;
    }
    ctx->pc = 0x3DD060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DD068u);
        ctx->pc = 0x3DD064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD060u;
        // 0x3dd064: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD060u, 0x3DD068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DD068u;
label_3dd068:
    // 0x3dd068: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3dd068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd06c:
    // 0x3dd06c: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
label_3dd070:
    if (ctx->pc == 0x3DD070u) {
        ctx->pc = 0x3DD070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD06Cu;
        // 0x3dd070: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD074u;
        goto label_3dd074;
    }
    ctx->pc = 0x3DD06Cu;
    {
        const bool branch_taken_0x3dd06c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD06Cu;
        // 0x3dd070: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd06c) {
            ctx->pc = 0x3DD118u;
            goto label_3dd118;
        }
    }
    ctx->pc = 0x3DD074u;
label_3dd074:
    // 0x3dd074: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3dd074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3dd078:
    // 0x3dd078: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3dd078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3dd07c:
    // 0x3dd07c: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x3dd07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3dd080:
    // 0x3dd080: 0x40f809  jalr        $v0
label_3dd084:
    if (ctx->pc == 0x3DD084u) {
        ctx->pc = 0x3DD084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD080u;
        // 0x3dd084: 0x240605a0  addiu       $a2, $zero, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD088u;
        goto label_3dd088;
    }
    ctx->pc = 0x3DD080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DD088u);
        ctx->pc = 0x3DD084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD080u;
        // 0x3dd084: 0x240605a0  addiu       $a2, $zero, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1440));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD080u, 0x3DD088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DD088u;
label_3dd088:
    // 0x3dd088: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3dd08c:
    if (ctx->pc == 0x3DD08Cu) {
        ctx->pc = 0x3DD08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD088u;
        // 0x3dd08c: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD090u;
        goto label_3dd090;
    }
    ctx->pc = 0x3DD088u;
    {
        const bool branch_taken_0x3dd088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD088u;
        // 0x3dd08c: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd088) {
            ctx->pc = 0x3DD0C0u;
            goto label_3dd0c0;
        }
    }
    ctx->pc = 0x3DD090u;
label_3dd090:
    // 0x3dd090: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3dd090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3dd094:
    // 0x3dd094: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3dd094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dd098:
    // 0x3dd098: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x3dd098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3dd09c:
    // 0x3dd09c: 0x40f809  jalr        $v0
label_3dd0a0:
    if (ctx->pc == 0x3DD0A0u) {
        ctx->pc = 0x3DD0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD09Cu;
        // 0x3dd0a0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD0A4u;
        goto label_3dd0a4;
    }
    ctx->pc = 0x3DD09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DD0A4u);
        ctx->pc = 0x3DD0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD09Cu;
        // 0x3dd0a0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD09Cu, 0x3DD0A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DD0A4u;
label_3dd0a4:
    // 0x3dd0a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3dd0a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd0a8:
    // 0x3dd0a8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_3dd0ac:
    if (ctx->pc == 0x3DD0ACu) {
        ctx->pc = 0x3DD0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD0A8u;
        // 0x3dd0ac: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD0B0u;
        goto label_3dd0b0;
    }
    ctx->pc = 0x3DD0A8u;
    {
        const bool branch_taken_0x3dd0a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DD0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD0A8u;
        // 0x3dd0ac: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd0a8) {
            ctx->pc = 0x3DD0D8u;
            goto label_3dd0d8;
        }
    }
    ctx->pc = 0x3DD0B0u;
label_3dd0b0:
    // 0x3dd0b0: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x3dd0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3dd0b4:
    // 0x3dd0b4: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3dd0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3dd0b8:
    // 0x3dd0b8: 0x40f809  jalr        $v0
label_3dd0bc:
    if (ctx->pc == 0x3DD0BCu) {
        ctx->pc = 0x3DD0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD0B8u;
        // 0x3dd0bc: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD0C0u;
        goto label_3dd0c0;
    }
    ctx->pc = 0x3DD0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DD0C0u);
        ctx->pc = 0x3DD0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD0B8u;
        // 0x3dd0bc: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD0B8u, 0x3DD0C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DD0C0u;
label_3dd0c0:
    // 0x3dd0c0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3dd0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3dd0c4:
    // 0x3dd0c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dd0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dd0c8:
    // 0x3dd0c8: 0x40f809  jalr        $v0
label_3dd0cc:
    if (ctx->pc == 0x3DD0CCu) {
        ctx->pc = 0x3DD0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD0C8u;
        // 0x3dd0cc: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD0D0u;
        goto label_3dd0d0;
    }
    ctx->pc = 0x3DD0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DD0D0u);
        ctx->pc = 0x3DD0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD0C8u;
        // 0x3dd0cc: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD0C8u, 0x3DD0D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DD0D0u;
label_3dd0d0:
    // 0x3dd0d0: 0x10000011  b           . + 4 + (0x11 << 2)
label_3dd0d4:
    if (ctx->pc == 0x3DD0D4u) {
        ctx->pc = 0x3DD0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD0D0u;
        // 0x3dd0d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD0D8u;
        goto label_3dd0d8;
    }
    ctx->pc = 0x3DD0D0u;
    {
        const bool branch_taken_0x3dd0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD0D0u;
        // 0x3dd0d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd0d0) {
            ctx->pc = 0x3DD118u;
            goto label_3dd118;
        }
    }
    ctx->pc = 0x3DD0D8u;
label_3dd0d8:
    // 0x3dd0d8: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x3dd0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_3dd0dc:
    // 0x3dd0dc: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x3dd0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_3dd0e0:
    // 0x3dd0e0: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x3dd0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_3dd0e4:
    // 0x3dd0e4: 0xae12003c  sw          $s2, 0x3C($s0)
    ctx->pc = 0x3dd0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 18));
label_3dd0e8:
    // 0x3dd0e8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3dd0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3dd0ec:
    // 0x3dd0ec: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3dd0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_3dd0f0:
    // 0x3dd0f0: 0xfe000020  sd          $zero, 0x20($s0)
    ctx->pc = 0x3dd0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 0));
label_3dd0f4:
    // 0x3dd0f4: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_3dd0f8:
    if (ctx->pc == 0x3DD0F8u) {
        ctx->pc = 0x3DD0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD0F4u;
        // 0x3dd0f8: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD0FCu;
        goto label_3dd0fc;
    }
    ctx->pc = 0x3DD0F4u;
    {
        const bool branch_taken_0x3dd0f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD0F4u;
        // 0x3dd0f8: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd0f4) {
            ctx->pc = 0x3DD114u;
            goto label_3dd114;
        }
    }
    ctx->pc = 0x3DD0FCu;
label_3dd0fc:
    // 0x3dd0fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3dd0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd100:
    // 0x3dd100: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3dd100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd104:
    // 0x3dd104: 0x240f809  jalr        $s2
label_3dd108:
    if (ctx->pc == 0x3DD108u) {
        ctx->pc = 0x3DD108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD104u;
        // 0x3dd108: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD10Cu;
        goto label_3dd10c;
    }
    ctx->pc = 0x3DD104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x3DD10Cu);
        ctx->pc = 0x3DD108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD104u;
        // 0x3dd108: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD104u, 0x3DD10Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DD10Cu;
label_3dd10c:
    // 0x3dd10c: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x3dd10cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
label_3dd110:
    // 0x3dd110: 0xfe220038  sd          $v0, 0x38($s1)
    ctx->pc = 0x3dd110u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 2));
label_3dd114:
    // 0x3dd114: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3dd114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dd118:
    // 0x3dd118: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3dd118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dd11c:
    // 0x3dd11c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3dd11cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3dd120:
    // 0x3dd120: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3dd120u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dd124:
    // 0x3dd124: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3dd124u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dd128:
    // 0x3dd128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dd128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3dd12c:
    // 0x3dd12c: 0x3e00008  jr          $ra
label_3dd130:
    if (ctx->pc == 0x3DD130u) {
        ctx->pc = 0x3DD130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD12Cu;
        // 0x3dd130: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD134u;
        goto label_3dd134;
    }
    ctx->pc = 0x3DD12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD12Cu;
        // 0x3dd130: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD134u;
label_3dd134:
    // 0x3dd134: 0x0  nop
    ctx->pc = 0x3dd134u;
    // NOP
    ctx->pc = 0x3dd138u;
}

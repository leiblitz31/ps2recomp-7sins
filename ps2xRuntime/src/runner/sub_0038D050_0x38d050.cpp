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

// Function: sub_0038D050
// Address: 0x38d050 - 0x38d110
void sub_0038D050_0x38d050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D050_0x38d050");
#endif

    switch (ctx->pc) {
        case 0x38d050u: goto label_38d050;
        case 0x38d054u: goto label_38d054;
        case 0x38d058u: goto label_38d058;
        case 0x38d05cu: goto label_38d05c;
        case 0x38d060u: goto label_38d060;
        case 0x38d064u: goto label_38d064;
        case 0x38d068u: goto label_38d068;
        case 0x38d06cu: goto label_38d06c;
        case 0x38d070u: goto label_38d070;
        case 0x38d074u: goto label_38d074;
        case 0x38d078u: goto label_38d078;
        case 0x38d07cu: goto label_38d07c;
        case 0x38d080u: goto label_38d080;
        case 0x38d084u: goto label_38d084;
        case 0x38d088u: goto label_38d088;
        case 0x38d08cu: goto label_38d08c;
        case 0x38d090u: goto label_38d090;
        case 0x38d094u: goto label_38d094;
        case 0x38d098u: goto label_38d098;
        case 0x38d09cu: goto label_38d09c;
        case 0x38d0a0u: goto label_38d0a0;
        case 0x38d0a4u: goto label_38d0a4;
        case 0x38d0a8u: goto label_38d0a8;
        case 0x38d0acu: goto label_38d0ac;
        case 0x38d0b0u: goto label_38d0b0;
        case 0x38d0b4u: goto label_38d0b4;
        case 0x38d0b8u: goto label_38d0b8;
        case 0x38d0bcu: goto label_38d0bc;
        case 0x38d0c0u: goto label_38d0c0;
        case 0x38d0c4u: goto label_38d0c4;
        case 0x38d0c8u: goto label_38d0c8;
        case 0x38d0ccu: goto label_38d0cc;
        case 0x38d0d0u: goto label_38d0d0;
        case 0x38d0d4u: goto label_38d0d4;
        case 0x38d0d8u: goto label_38d0d8;
        case 0x38d0dcu: goto label_38d0dc;
        case 0x38d0e0u: goto label_38d0e0;
        case 0x38d0e4u: goto label_38d0e4;
        case 0x38d0e8u: goto label_38d0e8;
        case 0x38d0ecu: goto label_38d0ec;
        case 0x38d0f0u: goto label_38d0f0;
        case 0x38d0f4u: goto label_38d0f4;
        case 0x38d0f8u: goto label_38d0f8;
        case 0x38d0fcu: goto label_38d0fc;
        case 0x38d100u: goto label_38d100;
        case 0x38d104u: goto label_38d104;
        case 0x38d108u: goto label_38d108;
        case 0x38d10cu: goto label_38d10c;
        default: break;
    }

    ctx->pc = 0x38d050u;

label_38d050:
    // 0x38d050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38d050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_38d054:
    // 0x38d054: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x38d054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_38d058:
    // 0x38d058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38d058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38d05c:
    // 0x38d05c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38d05cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38d060:
    // 0x38d060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38d060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38d064:
    // 0x38d064: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x38d064u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_38d068:
    // 0x38d068: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38d068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_38d06c:
    // 0x38d06c: 0x1c400020  bgtz        $v0, . + 4 + (0x20 << 2)
label_38d070:
    if (ctx->pc == 0x38D070u) {
        ctx->pc = 0x38D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D06Cu;
        // 0x38d070: 0x9603000e  lhu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D074u;
        goto label_38d074;
    }
    ctx->pc = 0x38D06Cu;
    {
        const bool branch_taken_0x38d06c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x38D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D06Cu;
        // 0x38d070: 0x9603000e  lhu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d06c) {
            ctx->pc = 0x38D0F0u;
            goto label_38d0f0;
        }
    }
    ctx->pc = 0x38D074u;
label_38d074:
    // 0x38d074: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x38d074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_38d078:
    // 0x38d078: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_38d07c:
    if (ctx->pc == 0x38D07Cu) {
        ctx->pc = 0x38D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D078u;
        // 0x38d07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D080u;
        goto label_38d080;
    }
    ctx->pc = 0x38D078u;
    {
        const bool branch_taken_0x38d078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d078) {
            ctx->pc = 0x38D07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D078u;
            // 0x38d07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D08Cu;
            goto label_38d08c;
        }
    }
    ctx->pc = 0x38D080u;
label_38d080:
    // 0x38d080: 0xc104702  jal         func_411C08
label_38d084:
    if (ctx->pc == 0x38D084u) {
        ctx->pc = 0x38D088u;
        goto label_38d088;
    }
    ctx->pc = 0x38D080u;
    SET_GPR_U32(ctx, 31, 0x38D088u);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x38D080u, 0x38D088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D088u;
label_38d088:
    // 0x38d088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38d088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38d08c:
    // 0x38d08c: 0xc0e33ee  jal         func_38CFB8
label_38d090:
    if (ctx->pc == 0x38D090u) {
        ctx->pc = 0x38D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D08Cu;
        // 0x38d090: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D094u;
        goto label_38d094;
    }
    ctx->pc = 0x38D08Cu;
    SET_GPR_U32(ctx, 31, 0x38D094u);
    ctx->pc = 0x38D090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D08Cu;
    // 0x38d090: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x38D08Cu, 0x38D094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D094u;
label_38d094:
    // 0x38d094: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x38d094u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
label_38d098:
    // 0x38d098: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38d098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_38d09c:
    // 0x38d09c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38d09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38d0a0:
    // 0x38d0a0: 0xc104ca6  jal         func_413298
label_38d0a4:
    if (ctx->pc == 0x38D0A4u) {
        ctx->pc = 0x38D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D0A0u;
        // 0x38d0a4: 0x2484add0  addiu       $a0, $a0, -0x5230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D0A8u;
        goto label_38d0a8;
    }
    ctx->pc = 0x38D0A0u;
    SET_GPR_U32(ctx, 31, 0x38D0A8u);
    ctx->pc = 0x38D0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D0A0u;
    // 0x38d0a4: 0x2484add0  addiu       $a0, $a0, -0x5230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x38D0A0u, 0x38D0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D0A8u;
label_38d0a8:
    // 0x38d0a8: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x38d0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_38d0ac:
    // 0x38d0ac: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_38d0b0:
    if (ctx->pc == 0x38D0B0u) {
        ctx->pc = 0x38D0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D0ACu;
        // 0x38d0b0: 0x2622e880  addiu       $v0, $s1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D0B4u;
        goto label_38d0b4;
    }
    ctx->pc = 0x38D0ACu;
    {
        const bool branch_taken_0x38d0ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D0ACu;
        // 0x38d0b0: 0x2622e880  addiu       $v0, $s1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d0ac) {
            ctx->pc = 0x38D0C4u;
            goto label_38d0c4;
        }
    }
    ctx->pc = 0x38D0B4u;
label_38d0b4:
    // 0x38d0b4: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x38d0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_38d0b8:
    // 0x38d0b8: 0x60f809  jalr        $v1
label_38d0bc:
    if (ctx->pc == 0x38D0BCu) {
        ctx->pc = 0x38D0C0u;
        goto label_38d0c0;
    }
    ctx->pc = 0x38D0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38D0C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D0B8u, 0x38D0C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38D0C0u;
label_38d0c0:
    // 0x38d0c0: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x38d0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_38d0c4:
    // 0x38d0c4: 0xc0e3da0  jal         func_38F680
label_38d0c8:
    if (ctx->pc == 0x38D0C8u) {
        ctx->pc = 0x38D0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D0C4u;
        // 0x38d0c8: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D0CCu;
        goto label_38d0cc;
    }
    ctx->pc = 0x38D0C4u;
    SET_GPR_U32(ctx, 31, 0x38D0CCu);
    ctx->pc = 0x38D0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D0C4u;
    // 0x38d0c8: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F680u, 0x38D0C4u, 0x38D0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D0CCu;
label_38d0cc:
    // 0x38d0cc: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x38d0ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_38d0d0:
    // 0x38d0d0: 0x2622e880  addiu       $v0, $s1, -0x1780
    ctx->pc = 0x38d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_38d0d4:
    // 0x38d0d4: 0x8c45010c  lw          $a1, 0x10C($v0)
    ctx->pc = 0x38d0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_38d0d8:
    // 0x38d0d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38d0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38d0dc:
    // 0x38d0dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38d0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38d0e0:
    // 0x38d0e0: 0xa0f809  jalr        $a1
label_38d0e4:
    if (ctx->pc == 0x38D0E4u) {
        ctx->pc = 0x38D0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D0E0u;
        // 0x38d0e4: 0xa603000e  sh          $v1, 0xE($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D0E8u;
        goto label_38d0e8;
    }
    ctx->pc = 0x38D0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x38D0E8u);
        ctx->pc = 0x38D0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D0E0u;
        // 0x38d0e4: 0xa603000e  sh          $v1, 0xE($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D0E0u, 0x38D0E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38D0E8u;
label_38d0e8:
    // 0x38d0e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_38d0ec:
    if (ctx->pc == 0x38D0ECu) {
        ctx->pc = 0x38D0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D0E8u;
        // 0x38d0ec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D0F0u;
        goto label_38d0f0;
    }
    ctx->pc = 0x38D0E8u;
    {
        const bool branch_taken_0x38d0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D0E8u;
        // 0x38d0ec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d0e8) {
            ctx->pc = 0x38D0FCu;
            goto label_38d0fc;
        }
    }
    ctx->pc = 0x38D0F0u;
label_38d0f0:
    // 0x38d0f0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x38d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38d0f4:
    // 0x38d0f4: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x38d0f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
label_38d0f8:
    // 0x38d0f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x38d0f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38d0fc:
    // 0x38d0fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38d100:
    // 0x38d100: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38d100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38d104:
    // 0x38d104: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38d104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38d108:
    // 0x38d108: 0x3e00008  jr          $ra
label_38d10c:
    if (ctx->pc == 0x38D10Cu) {
        ctx->pc = 0x38D10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D108u;
        // 0x38d10c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D110u;
        goto label_fallthrough_0x38d108;
    }
    ctx->pc = 0x38D108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D108u;
        // 0x38d10c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38d108:
    ctx->pc = 0x38D110u;
}

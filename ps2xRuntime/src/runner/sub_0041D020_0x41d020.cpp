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

// Function: sub_0041D020
// Address: 0x41d020 - 0x41d0c8
void sub_0041D020_0x41d020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D020_0x41d020");
#endif

    switch (ctx->pc) {
        case 0x41d020u: goto label_41d020;
        case 0x41d024u: goto label_41d024;
        case 0x41d028u: goto label_41d028;
        case 0x41d02cu: goto label_41d02c;
        case 0x41d030u: goto label_41d030;
        case 0x41d034u: goto label_41d034;
        case 0x41d038u: goto label_41d038;
        case 0x41d03cu: goto label_41d03c;
        case 0x41d040u: goto label_41d040;
        case 0x41d044u: goto label_41d044;
        case 0x41d048u: goto label_41d048;
        case 0x41d04cu: goto label_41d04c;
        case 0x41d050u: goto label_41d050;
        case 0x41d054u: goto label_41d054;
        case 0x41d058u: goto label_41d058;
        case 0x41d05cu: goto label_41d05c;
        case 0x41d060u: goto label_41d060;
        case 0x41d064u: goto label_41d064;
        case 0x41d068u: goto label_41d068;
        case 0x41d06cu: goto label_41d06c;
        case 0x41d070u: goto label_41d070;
        case 0x41d074u: goto label_41d074;
        case 0x41d078u: goto label_41d078;
        case 0x41d07cu: goto label_41d07c;
        case 0x41d080u: goto label_41d080;
        case 0x41d084u: goto label_41d084;
        case 0x41d088u: goto label_41d088;
        case 0x41d08cu: goto label_41d08c;
        case 0x41d090u: goto label_41d090;
        case 0x41d094u: goto label_41d094;
        case 0x41d098u: goto label_41d098;
        case 0x41d09cu: goto label_41d09c;
        case 0x41d0a0u: goto label_41d0a0;
        case 0x41d0a4u: goto label_41d0a4;
        case 0x41d0a8u: goto label_41d0a8;
        case 0x41d0acu: goto label_41d0ac;
        case 0x41d0b0u: goto label_41d0b0;
        case 0x41d0b4u: goto label_41d0b4;
        case 0x41d0b8u: goto label_41d0b8;
        case 0x41d0bcu: goto label_41d0bc;
        case 0x41d0c0u: goto label_41d0c0;
        case 0x41d0c4u: goto label_41d0c4;
        default: break;
    }

    ctx->pc = 0x41d020u;

label_41d020:
    // 0x41d020: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x41d020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_41d024:
    // 0x41d024: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41d024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41d028:
    // 0x41d028: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x41d028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_41d02c:
    // 0x41d02c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x41d02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_41d030:
    // 0x41d030: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x41d030u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_41d034:
    // 0x41d034: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41d034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41d038:
    // 0x41d038: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x41d038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_41d03c:
    // 0x41d03c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x41d03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_41d040:
    // 0x41d040: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x41d040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41d044:
    // 0x41d044: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x41d044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_41d048:
    // 0x41d048: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x41d048u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_41d04c:
    // 0x41d04c: 0x8c62e8ec  lw          $v0, -0x1714($v1)
    ctx->pc = 0x41d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961388)));
label_41d050:
    // 0x41d050: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x41d050u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_41d054:
    // 0x41d054: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x41d054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_41d058:
    // 0x41d058: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x41d058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_41d05c:
    // 0x41d05c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41d05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41d060:
    // 0x41d060: 0x40f809  jalr        $v0
label_41d064:
    if (ctx->pc == 0x41D064u) {
        ctx->pc = 0x41D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D060u;
        // 0x41d064: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D068u;
        goto label_41d068;
    }
    ctx->pc = 0x41D060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41D068u);
        ctx->pc = 0x41D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D060u;
        // 0x41d064: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D060u, 0x41D068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41D068u;
label_41d068:
    // 0x41d068: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_41d06c:
    if (ctx->pc == 0x41D06Cu) {
        ctx->pc = 0x41D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D068u;
        // 0x41d06c: 0x93a30023  lbu         $v1, 0x23($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D070u;
        goto label_41d070;
    }
    ctx->pc = 0x41D068u;
    {
        const bool branch_taken_0x41d068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D068u;
        // 0x41d06c: 0x93a30023  lbu         $v1, 0x23($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d068) {
            ctx->pc = 0x41D0A0u;
            goto label_41d0a0;
        }
    }
    ctx->pc = 0x41D070u;
label_41d070:
    // 0x41d070: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41d070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41d074:
    // 0x41d074: 0x93a40020  lbu         $a0, 0x20($sp)
    ctx->pc = 0x41d074u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_41d078:
    // 0x41d078: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x41d078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_41d07c:
    // 0x41d07c: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x41d07cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_41d080:
    // 0x41d080: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x41d080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_41d084:
    // 0x41d084: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x41d084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_41d088:
    // 0x41d088: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x41d088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_41d08c:
    // 0x41d08c: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x41d08cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
label_41d090:
    // 0x41d090: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x41d090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_41d094:
    // 0x41d094: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x41d094u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
label_41d098:
    // 0x41d098: 0x10000002  b           . + 4 + (0x2 << 2)
label_41d09c:
    if (ctx->pc == 0x41D09Cu) {
        ctx->pc = 0x41D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D098u;
        // 0x41d09c: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D0A0u;
        goto label_41d0a0;
    }
    ctx->pc = 0x41D098u;
    {
        const bool branch_taken_0x41d098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D098u;
        // 0x41d09c: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d098) {
            ctx->pc = 0x41D0A4u;
            goto label_41d0a4;
        }
    }
    ctx->pc = 0x41D0A0u;
label_41d0a0:
    // 0x41d0a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x41d0a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41d0a4:
    // 0x41d0a4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x41d0a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_41d0a8:
    // 0x41d0a8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x41d0a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_41d0ac:
    // 0x41d0ac: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x41d0acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_41d0b0:
    // 0x41d0b0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x41d0b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_41d0b4:
    // 0x41d0b4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x41d0b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41d0b8:
    // 0x41d0b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x41d0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_41d0bc:
    // 0x41d0bc: 0x3e00008  jr          $ra
label_41d0c0:
    if (ctx->pc == 0x41D0C0u) {
        ctx->pc = 0x41D0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D0BCu;
        // 0x41d0c0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D0C4u;
        goto label_41d0c4;
    }
    ctx->pc = 0x41D0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D0BCu;
        // 0x41d0c0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D0C4u;
label_41d0c4:
    // 0x41d0c4: 0x0  nop
    ctx->pc = 0x41d0c4u;
    // NOP
    ctx->pc = 0x41d0c8u;
}

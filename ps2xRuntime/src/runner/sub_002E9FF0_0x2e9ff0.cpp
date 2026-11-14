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

// Function: sub_002E9FF0
// Address: 0x2e9ff0 - 0x2ea0b0
void sub_002E9FF0_0x2e9ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9FF0_0x2e9ff0");
#endif

    switch (ctx->pc) {
        case 0x2ea03cu: goto label_2ea03c;
        case 0x2ea048u: goto label_2ea048;
        case 0x2ea07cu: goto label_2ea07c;
        case 0x2ea08cu: goto label_2ea08c;
        default: break;
    }

    ctx->pc = 0x2e9ff0u;

    // 0x2e9ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e9ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e9ff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e9ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e9ff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e9ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e9ffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e9ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ea000: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ea000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea004: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2ea004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ea008: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2ea008u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ea00c: 0x26250220  addiu       $a1, $s1, 0x220
    ctx->pc = 0x2ea00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x2ea010: 0x30500040  andi        $s0, $v0, 0x40
    ctx->pc = 0x2ea010u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2ea014: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2ea014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2ea018: 0xac820230  sw          $v0, 0x230($a0)
    ctx->pc = 0x2ea018u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 2));
    // 0x2ea01c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2ea01cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ea020: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2ea020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2ea024: 0xac82022c  sw          $v0, 0x22C($a0)
    ctx->pc = 0x2ea024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 556), GPR_U32(ctx, 2));
    // 0x2ea028: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2ea028u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ea02c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2ea02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2ea030: 0xac820228  sw          $v0, 0x228($a0)
    ctx->pc = 0x2ea030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 552), GPR_U32(ctx, 2));
    // 0x2ea034: 0xc0ba1c8  jal         func_2E8720
    ctx->pc = 0x2EA034u;
    SET_GPR_U32(ctx, 31, 0x2EA03Cu);
    ctx->pc = 0x2EA038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA034u;
    // 0x2ea038: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2EA034u, 0x2EA03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA03Cu;
label_2ea03c:
    // 0x2ea03c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ea03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea040: 0xc0ba1c8  jal         func_2E8720
    ctx->pc = 0x2EA040u;
    SET_GPR_U32(ctx, 31, 0x2EA048u);
    ctx->pc = 0x2EA044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA040u;
    // 0x2ea044: 0x26250224  addiu       $a1, $s1, 0x224 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 548));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2EA040u, 0x2EA048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA048u;
label_2ea048:
    // 0x2ea048: 0x8e230230  lw          $v1, 0x230($s1)
    ctx->pc = 0x2ea048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x2ea04c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EA04Cu;
    {
        const bool branch_taken_0x2ea04c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA04Cu;
        // 0x2ea050: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea04c) {
            ctx->pc = 0x2EA068u;
            goto label_2ea068;
        }
    }
    ctx->pc = 0x2EA054u;
    // 0x2ea054: 0x7a230200  lq          $v1, 0x200($s1)
    ctx->pc = 0x2ea054u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x2ea058: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2ea058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ea05c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2ea05cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2ea060: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EA060u;
    {
        const bool branch_taken_0x2ea060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA060u;
        // 0x2ea064: 0xae230018  sw          $v1, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea060) {
            ctx->pc = 0x2EA070u;
            goto label_2ea070;
        }
    }
    ctx->pc = 0x2EA068u;
label_2ea068:
    // 0x2ea068: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2ea068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2ea06c: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x2ea06cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_2ea070:
    // 0x2ea070: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA070u;
    {
        const bool branch_taken_0x2ea070 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA070u;
        // 0x2ea074: 0x26250234  addiu       $a1, $s1, 0x234 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 564));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea070) {
            ctx->pc = 0x2EA084u;
            goto label_2ea084;
        }
    }
    ctx->pc = 0x2EA078u;
    // 0x2ea078: 0xae200234  sw          $zero, 0x234($s1)
    ctx->pc = 0x2ea078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 564), GPR_U32(ctx, 0));
label_2ea07c:
    // 0x2ea07c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA07Cu;
    {
        const bool branch_taken_0x2ea07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA07Cu;
        // 0x2ea080: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea07c) {
            ctx->pc = 0x2EA094u;
            goto label_2ea094;
        }
    }
    ctx->pc = 0x2EA084u;
label_2ea084:
    // 0x2ea084: 0xc0ba1c8  jal         func_2E8720
    ctx->pc = 0x2EA084u;
    SET_GPR_U32(ctx, 31, 0x2EA08Cu);
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2EA084u, 0x2EA08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA08Cu;
label_2ea08c:
    // 0x2ea08c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x2EA08Cu;
    {
        const bool branch_taken_0x2ea08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea08c) {
            ctx->pc = 0x2EA07Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ea07c;
        }
    }
    ctx->pc = 0x2EA094u;
label_2ea094:
    // 0x2ea094: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ea094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ea098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea09c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA09Cu;
        // 0x2ea0a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA0A4u;
    // 0x2ea0a4: 0x0  nop
    ctx->pc = 0x2ea0a4u;
    // NOP
    // 0x2ea0a8: 0x0  nop
    ctx->pc = 0x2ea0a8u;
    // NOP
    // 0x2ea0ac: 0x0  nop
    ctx->pc = 0x2ea0acu;
    // NOP
    ctx->pc = 0x2ea0b0u;
}

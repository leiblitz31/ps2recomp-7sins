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

// Function: sub_00341018
// Address: 0x341018 - 0x3410b0
void sub_00341018_0x341018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341018_0x341018");
#endif

    switch (ctx->pc) {
        case 0x341018u: goto label_341018;
        case 0x34101cu: goto label_34101c;
        case 0x341020u: goto label_341020;
        case 0x341024u: goto label_341024;
        case 0x341028u: goto label_341028;
        case 0x34102cu: goto label_34102c;
        case 0x341030u: goto label_341030;
        case 0x341034u: goto label_341034;
        case 0x341038u: goto label_341038;
        case 0x34103cu: goto label_34103c;
        case 0x341040u: goto label_341040;
        case 0x341044u: goto label_341044;
        case 0x341048u: goto label_341048;
        case 0x34104cu: goto label_34104c;
        case 0x341050u: goto label_341050;
        case 0x341054u: goto label_341054;
        case 0x341058u: goto label_341058;
        case 0x34105cu: goto label_34105c;
        case 0x341060u: goto label_341060;
        case 0x341064u: goto label_341064;
        case 0x341068u: goto label_341068;
        case 0x34106cu: goto label_34106c;
        case 0x341070u: goto label_341070;
        case 0x341074u: goto label_341074;
        case 0x341078u: goto label_341078;
        case 0x34107cu: goto label_34107c;
        case 0x341080u: goto label_341080;
        case 0x341084u: goto label_341084;
        case 0x341088u: goto label_341088;
        case 0x34108cu: goto label_34108c;
        case 0x341090u: goto label_341090;
        case 0x341094u: goto label_341094;
        case 0x341098u: goto label_341098;
        case 0x34109cu: goto label_34109c;
        case 0x3410a0u: goto label_3410a0;
        case 0x3410a4u: goto label_3410a4;
        case 0x3410a8u: goto label_3410a8;
        case 0x3410acu: goto label_3410ac;
        default: break;
    }

    ctx->pc = 0x341018u;

label_341018:
    // 0x341018: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x341018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_34101c:
    // 0x34101c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34101cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_341020:
    // 0x341020: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x341020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_341024:
    // 0x341024: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x341024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_341028:
    // 0x341028: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x341028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_34102c:
    // 0x34102c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x34102cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_341030:
    // 0x341030: 0x40f809  jalr        $v0
label_341034:
    if (ctx->pc == 0x341034u) {
        ctx->pc = 0x341034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341030u;
        // 0x341034: 0x34a50130  ori         $a1, $a1, 0x130 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x341038u;
        goto label_341038;
    }
    ctx->pc = 0x341030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x341038u);
        ctx->pc = 0x341034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341030u;
        // 0x341034: 0x34a50130  ori         $a1, $a1, 0x130 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341030u, 0x341038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341038u;
label_341038:
    // 0x341038: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x341038u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34103c:
    // 0x34103c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_341040:
    if (ctx->pc == 0x341040u) {
        ctx->pc = 0x341040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34103Cu;
        // 0x341040: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341044u;
        goto label_341044;
    }
    ctx->pc = 0x34103Cu;
    {
        const bool branch_taken_0x34103c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x341040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34103Cu;
        // 0x341040: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34103c) {
            ctx->pc = 0x34109Cu;
            goto label_34109c;
        }
    }
    ctx->pc = 0x341044u;
label_341044:
    // 0x341044: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x341044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_341048:
    // 0x341048: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x341048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34104c:
    // 0x34104c: 0xc0bb7e6  jal         func_2EDF98
label_341050:
    if (ctx->pc == 0x341050u) {
        ctx->pc = 0x341050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34104Cu;
        // 0x341050: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341054u;
        goto label_341054;
    }
    ctx->pc = 0x34104Cu;
    SET_GPR_U32(ctx, 31, 0x341054u);
    ctx->pc = 0x341050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34104Cu;
    // 0x341050: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x34104Cu, 0x341054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341054u;
label_341054:
    // 0x341054: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x341054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_341058:
    // 0x341058: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x341058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_34105c:
    // 0x34105c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x34105cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_341060:
    // 0x341060: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x341060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_341064:
    // 0x341064: 0xac630000  sw          $v1, 0x0($v1)
    ctx->pc = 0x341064u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
label_341068:
    // 0x341068: 0x2442c2c8  addiu       $v0, $v0, -0x3D38
    ctx->pc = 0x341068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951624));
label_34106c:
    // 0x34106c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x34106cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_341070:
    // 0x341070: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x341070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_341074:
    // 0x341074: 0xacdd0004  sw          $sp, 0x4($a2)
    ctx->pc = 0x341074u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 29));
label_341078:
    // 0x341078: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_34107c:
    if (ctx->pc == 0x34107Cu) {
        ctx->pc = 0x34107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341078u;
        // 0x34107c: 0xacc40008  sw          $a0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341080u;
        goto label_341080;
    }
    ctx->pc = 0x341078u;
    {
        const bool branch_taken_0x341078 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x34107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341078u;
        // 0x34107c: 0xacc40008  sw          $a0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341078) {
            ctx->pc = 0x341088u;
            goto label_341088;
        }
    }
    ctx->pc = 0x341080u;
label_341080:
    // 0x341080: 0x10000004  b           . + 4 + (0x4 << 2)
label_341084:
    if (ctx->pc == 0x341084u) {
        ctx->pc = 0x341084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341080u;
        // 0x341084: 0xac630000  sw          $v1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341088u;
        goto label_341088;
    }
    ctx->pc = 0x341080u;
    {
        const bool branch_taken_0x341080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341080u;
        // 0x341084: 0xac630000  sw          $v1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341080) {
            ctx->pc = 0x341094u;
            goto label_341094;
        }
    }
    ctx->pc = 0x341088u;
label_341088:
    // 0x341088: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x341088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_34108c:
    // 0x34108c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34108cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_341090:
    // 0x341090: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x341090u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_341094:
    // 0x341094: 0x24e2c2c8  addiu       $v0, $a3, -0x3D38
    ctx->pc = 0x341094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951624));
label_341098:
    // 0x341098: 0xac460060  sw          $a2, 0x60($v0)
    ctx->pc = 0x341098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 6));
label_34109c:
    // 0x34109c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34109cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3410a0:
    // 0x3410a0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3410a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3410a4:
    // 0x3410a4: 0x3e00008  jr          $ra
label_3410a8:
    if (ctx->pc == 0x3410A8u) {
        ctx->pc = 0x3410A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3410A4u;
        // 0x3410a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3410ACu;
        goto label_3410ac;
    }
    ctx->pc = 0x3410A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3410A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3410A4u;
        // 0x3410a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3410A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3410ACu;
label_3410ac:
    // 0x3410ac: 0x0  nop
    ctx->pc = 0x3410acu;
    // NOP
    ctx->pc = 0x3410b0u;
}

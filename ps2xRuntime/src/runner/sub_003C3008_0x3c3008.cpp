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

// Function: sub_003C3008
// Address: 0x3c3008 - 0x3c30c0
void sub_003C3008_0x3c3008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3008_0x3c3008");
#endif

    switch (ctx->pc) {
        case 0x3c3008u: goto label_3c3008;
        case 0x3c300cu: goto label_3c300c;
        case 0x3c3010u: goto label_3c3010;
        case 0x3c3014u: goto label_3c3014;
        case 0x3c3018u: goto label_3c3018;
        case 0x3c301cu: goto label_3c301c;
        case 0x3c3020u: goto label_3c3020;
        case 0x3c3024u: goto label_3c3024;
        case 0x3c3028u: goto label_3c3028;
        case 0x3c302cu: goto label_3c302c;
        case 0x3c3030u: goto label_3c3030;
        case 0x3c3034u: goto label_3c3034;
        case 0x3c3038u: goto label_3c3038;
        case 0x3c303cu: goto label_3c303c;
        case 0x3c3040u: goto label_3c3040;
        case 0x3c3044u: goto label_3c3044;
        case 0x3c3048u: goto label_3c3048;
        case 0x3c304cu: goto label_3c304c;
        case 0x3c3050u: goto label_3c3050;
        case 0x3c3054u: goto label_3c3054;
        case 0x3c3058u: goto label_3c3058;
        case 0x3c305cu: goto label_3c305c;
        case 0x3c3060u: goto label_3c3060;
        case 0x3c3064u: goto label_3c3064;
        case 0x3c3068u: goto label_3c3068;
        case 0x3c306cu: goto label_3c306c;
        case 0x3c3070u: goto label_3c3070;
        case 0x3c3074u: goto label_3c3074;
        case 0x3c3078u: goto label_3c3078;
        case 0x3c307cu: goto label_3c307c;
        case 0x3c3080u: goto label_3c3080;
        case 0x3c3084u: goto label_3c3084;
        case 0x3c3088u: goto label_3c3088;
        case 0x3c308cu: goto label_3c308c;
        case 0x3c3090u: goto label_3c3090;
        case 0x3c3094u: goto label_3c3094;
        case 0x3c3098u: goto label_3c3098;
        case 0x3c309cu: goto label_3c309c;
        case 0x3c30a0u: goto label_3c30a0;
        case 0x3c30a4u: goto label_3c30a4;
        case 0x3c30a8u: goto label_3c30a8;
        case 0x3c30acu: goto label_3c30ac;
        case 0x3c30b0u: goto label_3c30b0;
        case 0x3c30b4u: goto label_3c30b4;
        case 0x3c30b8u: goto label_3c30b8;
        case 0x3c30bcu: goto label_3c30bc;
        default: break;
    }

    ctx->pc = 0x3c3008u;

label_3c3008:
    // 0x3c3008: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c3008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3c300c:
    // 0x3c300c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3c300cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3c3010:
    // 0x3c3010: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3c3010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3c3014:
    // 0x3c3014: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c3014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c3018:
    // 0x3c3018: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c3018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c301c:
    // 0x3c301c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c301cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c3020:
    // 0x3c3020: 0x2444dff0  addiu       $a0, $v0, -0x2010
    ctx->pc = 0x3c3020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959088));
label_3c3024:
    // 0x3c3024: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3c3024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3c3028:
    // 0x3c3028: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_3c302c:
    if (ctx->pc == 0x3C302Cu) {
        ctx->pc = 0x3C302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3028u;
        // 0x3c302c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3030u;
        goto label_3c3030;
    }
    ctx->pc = 0x3C3028u;
    {
        const bool branch_taken_0x3c3028 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3C302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3028u;
        // 0x3c302c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3028) {
            ctx->pc = 0x3C3060u;
            goto label_3c3060;
        }
    }
    ctx->pc = 0x3C3030u;
label_3c3030:
    // 0x3c3030: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3c3030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3c3034:
    // 0x3c3034: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c3034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c3038:
    // 0x3c3038: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3c3038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3c303c:
    // 0x3c303c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3c3040:
    if (ctx->pc == 0x3C3040u) {
        ctx->pc = 0x3C3040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C303Cu;
        // 0x3c3040: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3044u;
        goto label_3c3044;
    }
    ctx->pc = 0x3C303Cu;
    {
        const bool branch_taken_0x3c303c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C303Cu;
        // 0x3c3040: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c303c) {
            ctx->pc = 0x3C3064u;
            goto label_3c3064;
        }
    }
    ctx->pc = 0x3C3044u;
label_3c3044:
    // 0x3c3044: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3c3044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3c3048:
    // 0x3c3048: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3c304c:
    if (ctx->pc == 0x3C304Cu) {
        ctx->pc = 0x3C304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3048u;
        // 0x3c304c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3050u;
        goto label_3c3050;
    }
    ctx->pc = 0x3C3048u;
    {
        const bool branch_taken_0x3c3048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3048) {
            ctx->pc = 0x3C304Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3048u;
            // 0x3c304c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3064u;
            goto label_3c3064;
        }
    }
    ctx->pc = 0x3C3050u;
label_3c3050:
    // 0x3c3050: 0x40f809  jalr        $v0
label_3c3054:
    if (ctx->pc == 0x3C3054u) {
        ctx->pc = 0x3C3054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3050u;
        // 0x3c3054: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3058u;
        goto label_3c3058;
    }
    ctx->pc = 0x3C3050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C3058u);
        ctx->pc = 0x3C3054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3050u;
        // 0x3c3054: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3050u, 0x3C3058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C3058u;
label_3c3058:
    // 0x3c3058: 0x10000002  b           . + 4 + (0x2 << 2)
label_3c305c:
    if (ctx->pc == 0x3C305Cu) {
        ctx->pc = 0x3C305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3058u;
        // 0x3c305c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3060u;
        goto label_3c3060;
    }
    ctx->pc = 0x3C3058u;
    {
        const bool branch_taken_0x3c3058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3058u;
        // 0x3c305c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3058) {
            ctx->pc = 0x3C3064u;
            goto label_3c3064;
        }
    }
    ctx->pc = 0x3C3060u;
label_3c3060:
    // 0x3c3060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c3060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c3064:
    // 0x3c3064: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3c3068:
    if (ctx->pc == 0x3C3068u) {
        ctx->pc = 0x3C3068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3064u;
        // 0x3c3068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C306Cu;
        goto label_3c306c;
    }
    ctx->pc = 0x3C3064u;
    {
        const bool branch_taken_0x3c3064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3064u;
        // 0x3c3068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3064) {
            ctx->pc = 0x3C30A8u;
            goto label_3c30a8;
        }
    }
    ctx->pc = 0x3C306Cu;
label_3c306c:
    // 0x3c306c: 0xc0f0c30  jal         func_3C30C0
label_3c3070:
    if (ctx->pc == 0x3C3070u) {
        ctx->pc = 0x3C3070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C306Cu;
        // 0x3c3070: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3074u;
        goto label_3c3074;
    }
    ctx->pc = 0x3C306Cu;
    SET_GPR_U32(ctx, 31, 0x3C3074u);
    ctx->pc = 0x3C3070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C306Cu;
    // 0x3c3070: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C30C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C30C0u, 0x3C306Cu, 0x3C3074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3074u;
label_3c3074:
    // 0x3c3074: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_3c3078:
    if (ctx->pc == 0x3C3078u) {
        ctx->pc = 0x3C3078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3074u;
        // 0x3c3078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C307Cu;
        goto label_3c307c;
    }
    ctx->pc = 0x3C3074u;
    {
        const bool branch_taken_0x3c3074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3074u;
        // 0x3c3078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3074) {
            ctx->pc = 0x3C30A8u;
            goto label_3c30a8;
        }
    }
    ctx->pc = 0x3C307Cu;
label_3c307c:
    // 0x3c307c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c307cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c3080:
    // 0x3c3080: 0xc0f08e4  jal         func_3C2390
label_3c3084:
    if (ctx->pc == 0x3C3084u) {
        ctx->pc = 0x3C3084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3080u;
        // 0x3c3084: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3088u;
        goto label_3c3088;
    }
    ctx->pc = 0x3C3080u;
    SET_GPR_U32(ctx, 31, 0x3C3088u);
    ctx->pc = 0x3C3084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3080u;
    // 0x3c3084: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2390u, 0x3C3080u, 0x3C3088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3088u;
label_3c3088:
    // 0x3c3088: 0x2625dff0  addiu       $a1, $s1, -0x2010
    ctx->pc = 0x3c3088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294959088));
label_3c308c:
    // 0x3c308c: 0x8e24dff0  lw          $a0, -0x2010($s1)
    ctx->pc = 0x3c308cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294959088)));
label_3c3090:
    // 0x3c3090: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3c3090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3c3094:
    // 0x3c3094: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c3094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c3098:
    // 0x3c3098: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3c3098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_3c309c:
    // 0x3c309c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c309cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3c30a0:
    // 0x3c30a0: 0xae30dff0  sw          $s0, -0x2010($s1)
    ctx->pc = 0x3c30a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294959088), GPR_U32(ctx, 16));
label_3c30a4:
    // 0x3c30a4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x3c30a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_3c30a8:
    // 0x3c30a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3c30a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c30ac:
    // 0x3c30ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c30acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c30b0:
    // 0x3c30b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c30b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c30b4:
    // 0x3c30b4: 0x3e00008  jr          $ra
label_3c30b8:
    if (ctx->pc == 0x3C30B8u) {
        ctx->pc = 0x3C30B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C30B4u;
        // 0x3c30b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C30BCu;
        goto label_3c30bc;
    }
    ctx->pc = 0x3C30B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C30B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C30B4u;
        // 0x3c30b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C30B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C30BCu;
label_3c30bc:
    // 0x3c30bc: 0x0  nop
    ctx->pc = 0x3c30bcu;
    // NOP
    ctx->pc = 0x3c30c0u;
}

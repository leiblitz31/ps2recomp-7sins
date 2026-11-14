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

// Function: sub_001C50C0
// Address: 0x1c50c0 - 0x1c5170
void sub_001C50C0_0x1c50c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C50C0_0x1c50c0");
#endif

    switch (ctx->pc) {
        case 0x1c50c0u: goto label_1c50c0;
        case 0x1c50c4u: goto label_1c50c4;
        case 0x1c50c8u: goto label_1c50c8;
        case 0x1c50ccu: goto label_1c50cc;
        case 0x1c50d0u: goto label_1c50d0;
        case 0x1c50d4u: goto label_1c50d4;
        case 0x1c50d8u: goto label_1c50d8;
        case 0x1c50dcu: goto label_1c50dc;
        case 0x1c50e0u: goto label_1c50e0;
        case 0x1c50e4u: goto label_1c50e4;
        case 0x1c50e8u: goto label_1c50e8;
        case 0x1c50ecu: goto label_1c50ec;
        case 0x1c50f0u: goto label_1c50f0;
        case 0x1c50f4u: goto label_1c50f4;
        case 0x1c50f8u: goto label_1c50f8;
        case 0x1c50fcu: goto label_1c50fc;
        case 0x1c5100u: goto label_1c5100;
        case 0x1c5104u: goto label_1c5104;
        case 0x1c5108u: goto label_1c5108;
        case 0x1c510cu: goto label_1c510c;
        case 0x1c5110u: goto label_1c5110;
        case 0x1c5114u: goto label_1c5114;
        case 0x1c5118u: goto label_1c5118;
        case 0x1c511cu: goto label_1c511c;
        case 0x1c5120u: goto label_1c5120;
        case 0x1c5124u: goto label_1c5124;
        case 0x1c5128u: goto label_1c5128;
        case 0x1c512cu: goto label_1c512c;
        case 0x1c5130u: goto label_1c5130;
        case 0x1c5134u: goto label_1c5134;
        case 0x1c5138u: goto label_1c5138;
        case 0x1c513cu: goto label_1c513c;
        case 0x1c5140u: goto label_1c5140;
        case 0x1c5144u: goto label_1c5144;
        case 0x1c5148u: goto label_1c5148;
        case 0x1c514cu: goto label_1c514c;
        case 0x1c5150u: goto label_1c5150;
        case 0x1c5154u: goto label_1c5154;
        case 0x1c5158u: goto label_1c5158;
        case 0x1c515cu: goto label_1c515c;
        case 0x1c5160u: goto label_1c5160;
        case 0x1c5164u: goto label_1c5164;
        case 0x1c5168u: goto label_1c5168;
        case 0x1c516cu: goto label_1c516c;
        default: break;
    }

    ctx->pc = 0x1c50c0u;

label_1c50c0:
    // 0x1c50c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c50c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1c50c4:
    // 0x1c50c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c50c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c50c8:
    // 0x1c50c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c50c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c50cc:
    // 0x1c50cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c50ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c50d0:
    // 0x1c50d0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1c50d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1c50d4:
    // 0x1c50d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c50d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c50d8:
    // 0x1c50d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c50dc:
    if (ctx->pc == 0x1C50DCu) {
        ctx->pc = 0x1C50E0u;
        goto label_1c50e0;
    }
    ctx->pc = 0x1C50D8u;
    {
        const bool branch_taken_0x1c50d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c50d8) {
            ctx->pc = 0x1C50E8u;
            goto label_1c50e8;
        }
    }
    ctx->pc = 0x1C50E0u;
label_1c50e0:
    // 0x1c50e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c50e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c50e4:
    // 0x1c50e4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1c50e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1c50e8:
    // 0x1c50e8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1c50e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c50ec:
    // 0x1c50ec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1c50ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1c50f0:
    // 0x1c50f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c50f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c50f4:
    // 0x1c50f4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1c50f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c50f8:
    // 0x1c50f8: 0xc119b68  jal         func_466DA0
label_1c50fc:
    if (ctx->pc == 0x1C50FCu) {
        ctx->pc = 0x1C5100u;
        goto label_1c5100;
    }
    ctx->pc = 0x1C50F8u;
    SET_GPR_U32(ctx, 31, 0x1C5100u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1C50F8u, 0x1C5100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5100u;
label_1c5100:
    // 0x1c5100: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c5100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c5104:
    // 0x1c5104: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1c5108:
    if (ctx->pc == 0x1C5108u) {
        ctx->pc = 0x1C510Cu;
        goto label_1c510c;
    }
    ctx->pc = 0x1C5104u;
    {
        const bool branch_taken_0x1c5104 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5104) {
            ctx->pc = 0x1C5118u;
            goto label_1c5118;
        }
    }
    ctx->pc = 0x1C510Cu;
label_1c510c:
    // 0x1c510c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c510cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c5110:
    // 0x1c5110: 0x1000000e  b           . + 4 + (0xE << 2)
label_1c5114:
    if (ctx->pc == 0x1C5114u) {
        ctx->pc = 0x1C5118u;
        goto label_1c5118;
    }
    ctx->pc = 0x1C5110u;
    {
        const bool branch_taken_0x1c5110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5110) {
            ctx->pc = 0x1C514Cu;
            goto label_1c514c;
        }
    }
    ctx->pc = 0x1C5118u;
label_1c5118:
    // 0x1c5118: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c5118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c511c:
    // 0x1c511c: 0xc0ba088  jal         func_2E8220
label_1c5120:
    if (ctx->pc == 0x1C5120u) {
        ctx->pc = 0x1C5124u;
        goto label_1c5124;
    }
    ctx->pc = 0x1C511Cu;
    SET_GPR_U32(ctx, 31, 0x1C5124u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1C511Cu, 0x1C5124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5124u;
label_1c5124:
    // 0x1c5124: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c5124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c5128:
    // 0x1c5128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c512c:
    // 0x1c512c: 0xc0ba088  jal         func_2E8220
label_1c5130:
    if (ctx->pc == 0x1C5130u) {
        ctx->pc = 0x1C5134u;
        goto label_1c5134;
    }
    ctx->pc = 0x1C512Cu;
    SET_GPR_U32(ctx, 31, 0x1C5134u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1C512Cu, 0x1C5134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5134u;
label_1c5134:
    // 0x1c5134: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_1c5138:
    if (ctx->pc == 0x1C5138u) {
        ctx->pc = 0x1C513Cu;
        goto label_1c513c;
    }
    ctx->pc = 0x1C5134u;
    {
        const bool branch_taken_0x1c5134 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5134) {
            ctx->pc = 0x1C50E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c50e8;
        }
    }
    ctx->pc = 0x1C513Cu;
label_1c513c:
    // 0x1c513c: 0x200f809  jalr        $s0
label_1c5140:
    if (ctx->pc == 0x1C5140u) {
        ctx->pc = 0x1C5144u;
        goto label_1c5144;
    }
    ctx->pc = 0x1C513Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1C5144u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C513Cu, 0x1C5144u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C5144u;
label_1c5144:
    // 0x1c5144: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_1c5148:
    if (ctx->pc == 0x1C5148u) {
        ctx->pc = 0x1C514Cu;
        goto label_1c514c;
    }
    ctx->pc = 0x1C5144u;
    {
        const bool branch_taken_0x1c5144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5144) {
            ctx->pc = 0x1C50E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c50e8;
        }
    }
    ctx->pc = 0x1C514Cu;
label_1c514c:
    // 0x1c514c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c514cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c5150:
    // 0x1c5150: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c5150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c5154:
    // 0x1c5154: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c5154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c5158:
    // 0x1c5158: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1c5158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c515c:
    // 0x1c515c: 0x3e00008  jr          $ra
label_1c5160:
    if (ctx->pc == 0x1C5160u) {
        ctx->pc = 0x1C5164u;
        goto label_1c5164;
    }
    ctx->pc = 0x1C515Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C515Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5164u;
label_1c5164:
    // 0x1c5164: 0x0  nop
    ctx->pc = 0x1c5164u;
    // NOP
label_1c5168:
    // 0x1c5168: 0x0  nop
    ctx->pc = 0x1c5168u;
    // NOP
label_1c516c:
    // 0x1c516c: 0x0  nop
    ctx->pc = 0x1c516cu;
    // NOP
    ctx->pc = 0x1c5170u;
}

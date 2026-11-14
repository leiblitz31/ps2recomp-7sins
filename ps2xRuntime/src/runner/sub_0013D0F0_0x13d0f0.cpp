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

// Function: sub_0013D0F0
// Address: 0x13d0f0 - 0x13d190
void sub_0013D0F0_0x13d0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D0F0_0x13d0f0");
#endif

    switch (ctx->pc) {
        case 0x13d0f0u: goto label_13d0f0;
        case 0x13d0f4u: goto label_13d0f4;
        case 0x13d0f8u: goto label_13d0f8;
        case 0x13d0fcu: goto label_13d0fc;
        case 0x13d100u: goto label_13d100;
        case 0x13d104u: goto label_13d104;
        case 0x13d108u: goto label_13d108;
        case 0x13d10cu: goto label_13d10c;
        case 0x13d110u: goto label_13d110;
        case 0x13d114u: goto label_13d114;
        case 0x13d118u: goto label_13d118;
        case 0x13d11cu: goto label_13d11c;
        case 0x13d120u: goto label_13d120;
        case 0x13d124u: goto label_13d124;
        case 0x13d128u: goto label_13d128;
        case 0x13d12cu: goto label_13d12c;
        case 0x13d130u: goto label_13d130;
        case 0x13d134u: goto label_13d134;
        case 0x13d138u: goto label_13d138;
        case 0x13d13cu: goto label_13d13c;
        case 0x13d140u: goto label_13d140;
        case 0x13d144u: goto label_13d144;
        case 0x13d148u: goto label_13d148;
        case 0x13d14cu: goto label_13d14c;
        case 0x13d150u: goto label_13d150;
        case 0x13d154u: goto label_13d154;
        case 0x13d158u: goto label_13d158;
        case 0x13d15cu: goto label_13d15c;
        case 0x13d160u: goto label_13d160;
        case 0x13d164u: goto label_13d164;
        case 0x13d168u: goto label_13d168;
        case 0x13d16cu: goto label_13d16c;
        case 0x13d170u: goto label_13d170;
        case 0x13d174u: goto label_13d174;
        case 0x13d178u: goto label_13d178;
        case 0x13d17cu: goto label_13d17c;
        case 0x13d180u: goto label_13d180;
        case 0x13d184u: goto label_13d184;
        case 0x13d188u: goto label_13d188;
        case 0x13d18cu: goto label_13d18c;
        default: break;
    }

    ctx->pc = 0x13d0f0u;

label_13d0f0:
    // 0x13d0f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13d0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_13d0f4:
    // 0x13d0f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13d0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13d0f8:
    // 0x13d0f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13d0fc:
    // 0x13d0fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13d100:
    // 0x13d100: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x13d100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_13d104:
    // 0x13d104: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13d104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_13d108:
    // 0x13d108: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_13d10c:
    if (ctx->pc == 0x13D10Cu) {
        ctx->pc = 0x13D110u;
        goto label_13d110;
    }
    ctx->pc = 0x13D108u;
    {
        const bool branch_taken_0x13d108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d108) {
            ctx->pc = 0x13D118u;
            goto label_13d118;
        }
    }
    ctx->pc = 0x13D110u;
label_13d110:
    // 0x13d110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13d114:
    // 0x13d114: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x13d114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_13d118:
    // 0x13d118: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13d118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_13d11c:
    // 0x13d11c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x13d11cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_13d120:
    // 0x13d120: 0xc119b68  jal         func_466DA0
label_13d124:
    if (ctx->pc == 0x13D124u) {
        ctx->pc = 0x13D128u;
        goto label_13d128;
    }
    ctx->pc = 0x13D120u;
    SET_GPR_U32(ctx, 31, 0x13D128u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x13D120u, 0x13D128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D128u;
label_13d128:
    // 0x13d128: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13d128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13d12c:
    // 0x13d12c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_13d130:
    if (ctx->pc == 0x13D130u) {
        ctx->pc = 0x13D134u;
        goto label_13d134;
    }
    ctx->pc = 0x13D12Cu;
    {
        const bool branch_taken_0x13d12c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d12c) {
            ctx->pc = 0x13D140u;
            goto label_13d140;
        }
    }
    ctx->pc = 0x13D134u;
label_13d134:
    // 0x13d134: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13d134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13d138:
    // 0x13d138: 0x1000000e  b           . + 4 + (0xE << 2)
label_13d13c:
    if (ctx->pc == 0x13D13Cu) {
        ctx->pc = 0x13D140u;
        goto label_13d140;
    }
    ctx->pc = 0x13D138u;
    {
        const bool branch_taken_0x13d138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d138) {
            ctx->pc = 0x13D174u;
            goto label_13d174;
        }
    }
    ctx->pc = 0x13D140u;
label_13d140:
    // 0x13d140: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13d140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13d144:
    // 0x13d144: 0xc0ba088  jal         func_2E8220
label_13d148:
    if (ctx->pc == 0x13D148u) {
        ctx->pc = 0x13D14Cu;
        goto label_13d14c;
    }
    ctx->pc = 0x13D144u;
    SET_GPR_U32(ctx, 31, 0x13D14Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x13D144u, 0x13D14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D14Cu;
label_13d14c:
    // 0x13d14c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13d14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13d150:
    // 0x13d150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13d150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13d154:
    // 0x13d154: 0xc0ba088  jal         func_2E8220
label_13d158:
    if (ctx->pc == 0x13D158u) {
        ctx->pc = 0x13D15Cu;
        goto label_13d15c;
    }
    ctx->pc = 0x13D154u;
    SET_GPR_U32(ctx, 31, 0x13D15Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x13D154u, 0x13D15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D15Cu;
label_13d15c:
    // 0x13d15c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_13d160:
    if (ctx->pc == 0x13D160u) {
        ctx->pc = 0x13D164u;
        goto label_13d164;
    }
    ctx->pc = 0x13D15Cu;
    {
        const bool branch_taken_0x13d15c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d15c) {
            ctx->pc = 0x13D118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d118;
        }
    }
    ctx->pc = 0x13D164u;
label_13d164:
    // 0x13d164: 0x200f809  jalr        $s0
label_13d168:
    if (ctx->pc == 0x13D168u) {
        ctx->pc = 0x13D16Cu;
        goto label_13d16c;
    }
    ctx->pc = 0x13D164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x13D16Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D164u, 0x13D16Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D16Cu;
label_13d16c:
    // 0x13d16c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_13d170:
    if (ctx->pc == 0x13D170u) {
        ctx->pc = 0x13D174u;
        goto label_13d174;
    }
    ctx->pc = 0x13D16Cu;
    {
        const bool branch_taken_0x13d16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d16c) {
            ctx->pc = 0x13D118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d118;
        }
    }
    ctx->pc = 0x13D174u;
label_13d174:
    // 0x13d174: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13d174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13d178:
    // 0x13d178: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13d17c:
    // 0x13d17c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d17cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13d180:
    // 0x13d180: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x13d180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_13d184:
    // 0x13d184: 0x3e00008  jr          $ra
label_13d188:
    if (ctx->pc == 0x13D188u) {
        ctx->pc = 0x13D18Cu;
        goto label_13d18c;
    }
    ctx->pc = 0x13D184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D18Cu;
label_13d18c:
    // 0x13d18c: 0x0  nop
    ctx->pc = 0x13d18cu;
    // NOP
    ctx->pc = 0x13d190u;
}

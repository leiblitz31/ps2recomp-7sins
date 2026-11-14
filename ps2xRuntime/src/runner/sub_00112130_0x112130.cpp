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

// Function: sub_00112130
// Address: 0x112130 - 0x1121d0
void sub_00112130_0x112130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112130_0x112130");
#endif

    switch (ctx->pc) {
        case 0x112130u: goto label_112130;
        case 0x112134u: goto label_112134;
        case 0x112138u: goto label_112138;
        case 0x11213cu: goto label_11213c;
        case 0x112140u: goto label_112140;
        case 0x112144u: goto label_112144;
        case 0x112148u: goto label_112148;
        case 0x11214cu: goto label_11214c;
        case 0x112150u: goto label_112150;
        case 0x112154u: goto label_112154;
        case 0x112158u: goto label_112158;
        case 0x11215cu: goto label_11215c;
        case 0x112160u: goto label_112160;
        case 0x112164u: goto label_112164;
        case 0x112168u: goto label_112168;
        case 0x11216cu: goto label_11216c;
        case 0x112170u: goto label_112170;
        case 0x112174u: goto label_112174;
        case 0x112178u: goto label_112178;
        case 0x11217cu: goto label_11217c;
        case 0x112180u: goto label_112180;
        case 0x112184u: goto label_112184;
        case 0x112188u: goto label_112188;
        case 0x11218cu: goto label_11218c;
        case 0x112190u: goto label_112190;
        case 0x112194u: goto label_112194;
        case 0x112198u: goto label_112198;
        case 0x11219cu: goto label_11219c;
        case 0x1121a0u: goto label_1121a0;
        case 0x1121a4u: goto label_1121a4;
        case 0x1121a8u: goto label_1121a8;
        case 0x1121acu: goto label_1121ac;
        case 0x1121b0u: goto label_1121b0;
        case 0x1121b4u: goto label_1121b4;
        case 0x1121b8u: goto label_1121b8;
        case 0x1121bcu: goto label_1121bc;
        case 0x1121c0u: goto label_1121c0;
        case 0x1121c4u: goto label_1121c4;
        case 0x1121c8u: goto label_1121c8;
        case 0x1121ccu: goto label_1121cc;
        default: break;
    }

    ctx->pc = 0x112130u;

label_112130:
    // 0x112130: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x112130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_112134:
    // 0x112134: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x112134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_112138:
    // 0x112138: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x112138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_11213c:
    // 0x11213c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11213cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_112140:
    // 0x112140: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x112140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_112144:
    // 0x112144: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x112144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_112148:
    // 0x112148: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_11214c:
    if (ctx->pc == 0x11214Cu) {
        ctx->pc = 0x112150u;
        goto label_112150;
    }
    ctx->pc = 0x112148u;
    {
        const bool branch_taken_0x112148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112148) {
            ctx->pc = 0x112158u;
            goto label_112158;
        }
    }
    ctx->pc = 0x112150u;
label_112150:
    // 0x112150: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x112150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_112154:
    // 0x112154: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x112154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_112158:
    // 0x112158: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x112158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_11215c:
    // 0x11215c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x11215cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_112160:
    // 0x112160: 0xc119b68  jal         func_466DA0
label_112164:
    if (ctx->pc == 0x112164u) {
        ctx->pc = 0x112168u;
        goto label_112168;
    }
    ctx->pc = 0x112160u;
    SET_GPR_U32(ctx, 31, 0x112168u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x112160u, 0x112168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112168u;
label_112168:
    // 0x112168: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x112168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11216c:
    // 0x11216c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_112170:
    if (ctx->pc == 0x112170u) {
        ctx->pc = 0x112174u;
        goto label_112174;
    }
    ctx->pc = 0x11216Cu;
    {
        const bool branch_taken_0x11216c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x11216c) {
            ctx->pc = 0x112180u;
            goto label_112180;
        }
    }
    ctx->pc = 0x112174u;
label_112174:
    // 0x112174: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x112174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112178:
    // 0x112178: 0x1000000e  b           . + 4 + (0xE << 2)
label_11217c:
    if (ctx->pc == 0x11217Cu) {
        ctx->pc = 0x112180u;
        goto label_112180;
    }
    ctx->pc = 0x112178u;
    {
        const bool branch_taken_0x112178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112178) {
            ctx->pc = 0x1121B4u;
            goto label_1121b4;
        }
    }
    ctx->pc = 0x112180u;
label_112180:
    // 0x112180: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x112180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112184:
    // 0x112184: 0xc0ba088  jal         func_2E8220
label_112188:
    if (ctx->pc == 0x112188u) {
        ctx->pc = 0x11218Cu;
        goto label_11218c;
    }
    ctx->pc = 0x112184u;
    SET_GPR_U32(ctx, 31, 0x11218Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x112184u, 0x11218Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11218Cu;
label_11218c:
    // 0x11218c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11218cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_112190:
    // 0x112190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_112194:
    // 0x112194: 0xc0ba088  jal         func_2E8220
label_112198:
    if (ctx->pc == 0x112198u) {
        ctx->pc = 0x11219Cu;
        goto label_11219c;
    }
    ctx->pc = 0x112194u;
    SET_GPR_U32(ctx, 31, 0x11219Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x112194u, 0x11219Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11219Cu;
label_11219c:
    // 0x11219c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_1121a0:
    if (ctx->pc == 0x1121A0u) {
        ctx->pc = 0x1121A4u;
        goto label_1121a4;
    }
    ctx->pc = 0x11219Cu;
    {
        const bool branch_taken_0x11219c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11219c) {
            ctx->pc = 0x112158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112158;
        }
    }
    ctx->pc = 0x1121A4u;
label_1121a4:
    // 0x1121a4: 0x200f809  jalr        $s0
label_1121a8:
    if (ctx->pc == 0x1121A8u) {
        ctx->pc = 0x1121ACu;
        goto label_1121ac;
    }
    ctx->pc = 0x1121A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1121ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1121A4u, 0x1121ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1121ACu;
label_1121ac:
    // 0x1121ac: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_1121b0:
    if (ctx->pc == 0x1121B0u) {
        ctx->pc = 0x1121B4u;
        goto label_1121b4;
    }
    ctx->pc = 0x1121ACu;
    {
        const bool branch_taken_0x1121ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1121ac) {
            ctx->pc = 0x112158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112158;
        }
    }
    ctx->pc = 0x1121B4u;
label_1121b4:
    // 0x1121b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1121b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1121b8:
    // 0x1121b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1121b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1121bc:
    // 0x1121bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1121bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1121c0:
    // 0x1121c0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1121c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1121c4:
    // 0x1121c4: 0x3e00008  jr          $ra
label_1121c8:
    if (ctx->pc == 0x1121C8u) {
        ctx->pc = 0x1121CCu;
        goto label_1121cc;
    }
    ctx->pc = 0x1121C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1121C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1121CCu;
label_1121cc:
    // 0x1121cc: 0x0  nop
    ctx->pc = 0x1121ccu;
    // NOP
    ctx->pc = 0x1121d0u;
}

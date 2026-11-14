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

// Function: sub_00257220
// Address: 0x257220 - 0x2572c0
void sub_00257220_0x257220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257220_0x257220");
#endif

    switch (ctx->pc) {
        case 0x257220u: goto label_257220;
        case 0x257224u: goto label_257224;
        case 0x257228u: goto label_257228;
        case 0x25722cu: goto label_25722c;
        case 0x257230u: goto label_257230;
        case 0x257234u: goto label_257234;
        case 0x257238u: goto label_257238;
        case 0x25723cu: goto label_25723c;
        case 0x257240u: goto label_257240;
        case 0x257244u: goto label_257244;
        case 0x257248u: goto label_257248;
        case 0x25724cu: goto label_25724c;
        case 0x257250u: goto label_257250;
        case 0x257254u: goto label_257254;
        case 0x257258u: goto label_257258;
        case 0x25725cu: goto label_25725c;
        case 0x257260u: goto label_257260;
        case 0x257264u: goto label_257264;
        case 0x257268u: goto label_257268;
        case 0x25726cu: goto label_25726c;
        case 0x257270u: goto label_257270;
        case 0x257274u: goto label_257274;
        case 0x257278u: goto label_257278;
        case 0x25727cu: goto label_25727c;
        case 0x257280u: goto label_257280;
        case 0x257284u: goto label_257284;
        case 0x257288u: goto label_257288;
        case 0x25728cu: goto label_25728c;
        case 0x257290u: goto label_257290;
        case 0x257294u: goto label_257294;
        case 0x257298u: goto label_257298;
        case 0x25729cu: goto label_25729c;
        case 0x2572a0u: goto label_2572a0;
        case 0x2572a4u: goto label_2572a4;
        case 0x2572a8u: goto label_2572a8;
        case 0x2572acu: goto label_2572ac;
        case 0x2572b0u: goto label_2572b0;
        case 0x2572b4u: goto label_2572b4;
        case 0x2572b8u: goto label_2572b8;
        case 0x2572bcu: goto label_2572bc;
        default: break;
    }

    ctx->pc = 0x257220u;

label_257220:
    // 0x257220: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x257220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_257224:
    // 0x257224: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x257224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_257228:
    // 0x257228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x257228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25722c:
    // 0x25722c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25722cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_257230:
    // 0x257230: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x257230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_257234:
    // 0x257234: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x257234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_257238:
    // 0x257238: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25723c:
    if (ctx->pc == 0x25723Cu) {
        ctx->pc = 0x257240u;
        goto label_257240;
    }
    ctx->pc = 0x257238u;
    {
        const bool branch_taken_0x257238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257238) {
            ctx->pc = 0x257248u;
            goto label_257248;
        }
    }
    ctx->pc = 0x257240u;
label_257240:
    // 0x257240: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_257244:
    // 0x257244: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x257244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_257248:
    // 0x257248: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x257248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_25724c:
    // 0x25724c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x25724cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_257250:
    // 0x257250: 0xc119b68  jal         func_466DA0
label_257254:
    if (ctx->pc == 0x257254u) {
        ctx->pc = 0x257258u;
        goto label_257258;
    }
    ctx->pc = 0x257250u;
    SET_GPR_U32(ctx, 31, 0x257258u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x257250u, 0x257258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257258u;
label_257258:
    // 0x257258: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x257258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25725c:
    // 0x25725c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_257260:
    if (ctx->pc == 0x257260u) {
        ctx->pc = 0x257264u;
        goto label_257264;
    }
    ctx->pc = 0x25725Cu;
    {
        const bool branch_taken_0x25725c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x25725c) {
            ctx->pc = 0x257270u;
            goto label_257270;
        }
    }
    ctx->pc = 0x257264u;
label_257264:
    // 0x257264: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x257264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_257268:
    // 0x257268: 0x1000000e  b           . + 4 + (0xE << 2)
label_25726c:
    if (ctx->pc == 0x25726Cu) {
        ctx->pc = 0x257270u;
        goto label_257270;
    }
    ctx->pc = 0x257268u;
    {
        const bool branch_taken_0x257268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257268) {
            ctx->pc = 0x2572A4u;
            goto label_2572a4;
        }
    }
    ctx->pc = 0x257270u;
label_257270:
    // 0x257270: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x257270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_257274:
    // 0x257274: 0xc0ba088  jal         func_2E8220
label_257278:
    if (ctx->pc == 0x257278u) {
        ctx->pc = 0x25727Cu;
        goto label_25727c;
    }
    ctx->pc = 0x257274u;
    SET_GPR_U32(ctx, 31, 0x25727Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x257274u, 0x25727Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25727Cu;
label_25727c:
    // 0x25727c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25727cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_257280:
    // 0x257280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x257280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_257284:
    // 0x257284: 0xc0ba088  jal         func_2E8220
label_257288:
    if (ctx->pc == 0x257288u) {
        ctx->pc = 0x25728Cu;
        goto label_25728c;
    }
    ctx->pc = 0x257284u;
    SET_GPR_U32(ctx, 31, 0x25728Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x257284u, 0x25728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25728Cu;
label_25728c:
    // 0x25728c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_257290:
    if (ctx->pc == 0x257290u) {
        ctx->pc = 0x257294u;
        goto label_257294;
    }
    ctx->pc = 0x25728Cu;
    {
        const bool branch_taken_0x25728c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25728c) {
            ctx->pc = 0x257248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257248;
        }
    }
    ctx->pc = 0x257294u;
label_257294:
    // 0x257294: 0x200f809  jalr        $s0
label_257298:
    if (ctx->pc == 0x257298u) {
        ctx->pc = 0x25729Cu;
        goto label_25729c;
    }
    ctx->pc = 0x257294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x25729Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257294u, 0x25729Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25729Cu;
label_25729c:
    // 0x25729c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_2572a0:
    if (ctx->pc == 0x2572A0u) {
        ctx->pc = 0x2572A4u;
        goto label_2572a4;
    }
    ctx->pc = 0x25729Cu;
    {
        const bool branch_taken_0x25729c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25729c) {
            ctx->pc = 0x257248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257248;
        }
    }
    ctx->pc = 0x2572A4u;
label_2572a4:
    // 0x2572a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2572a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2572a8:
    // 0x2572a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2572a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2572ac:
    // 0x2572ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2572acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2572b0:
    // 0x2572b0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2572b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2572b4:
    // 0x2572b4: 0x3e00008  jr          $ra
label_2572b8:
    if (ctx->pc == 0x2572B8u) {
        ctx->pc = 0x2572BCu;
        goto label_2572bc;
    }
    ctx->pc = 0x2572B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2572B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2572BCu;
label_2572bc:
    // 0x2572bc: 0x0  nop
    ctx->pc = 0x2572bcu;
    // NOP
    ctx->pc = 0x2572c0u;
}

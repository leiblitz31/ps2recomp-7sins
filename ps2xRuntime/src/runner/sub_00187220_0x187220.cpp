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

// Function: sub_00187220
// Address: 0x187220 - 0x1872d0
void sub_00187220_0x187220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187220_0x187220");
#endif

    switch (ctx->pc) {
        case 0x187220u: goto label_187220;
        case 0x187224u: goto label_187224;
        case 0x187228u: goto label_187228;
        case 0x18722cu: goto label_18722c;
        case 0x187230u: goto label_187230;
        case 0x187234u: goto label_187234;
        case 0x187238u: goto label_187238;
        case 0x18723cu: goto label_18723c;
        case 0x187240u: goto label_187240;
        case 0x187244u: goto label_187244;
        case 0x187248u: goto label_187248;
        case 0x18724cu: goto label_18724c;
        case 0x187250u: goto label_187250;
        case 0x187254u: goto label_187254;
        case 0x187258u: goto label_187258;
        case 0x18725cu: goto label_18725c;
        case 0x187260u: goto label_187260;
        case 0x187264u: goto label_187264;
        case 0x187268u: goto label_187268;
        case 0x18726cu: goto label_18726c;
        case 0x187270u: goto label_187270;
        case 0x187274u: goto label_187274;
        case 0x187278u: goto label_187278;
        case 0x18727cu: goto label_18727c;
        case 0x187280u: goto label_187280;
        case 0x187284u: goto label_187284;
        case 0x187288u: goto label_187288;
        case 0x18728cu: goto label_18728c;
        case 0x187290u: goto label_187290;
        case 0x187294u: goto label_187294;
        case 0x187298u: goto label_187298;
        case 0x18729cu: goto label_18729c;
        case 0x1872a0u: goto label_1872a0;
        case 0x1872a4u: goto label_1872a4;
        case 0x1872a8u: goto label_1872a8;
        case 0x1872acu: goto label_1872ac;
        case 0x1872b0u: goto label_1872b0;
        case 0x1872b4u: goto label_1872b4;
        case 0x1872b8u: goto label_1872b8;
        case 0x1872bcu: goto label_1872bc;
        case 0x1872c0u: goto label_1872c0;
        case 0x1872c4u: goto label_1872c4;
        case 0x1872c8u: goto label_1872c8;
        case 0x1872ccu: goto label_1872cc;
        default: break;
    }

    ctx->pc = 0x187220u;

label_187220:
    // 0x187220: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x187220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_187224:
    // 0x187224: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x187224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_187228:
    // 0x187228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x187228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18722c:
    // 0x18722c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18722cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_187230:
    // 0x187230: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x187230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_187234:
    // 0x187234: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x187234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_187238:
    // 0x187238: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_18723c:
    if (ctx->pc == 0x18723Cu) {
        ctx->pc = 0x187240u;
        goto label_187240;
    }
    ctx->pc = 0x187238u;
    {
        const bool branch_taken_0x187238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187238) {
            ctx->pc = 0x187248u;
            goto label_187248;
        }
    }
    ctx->pc = 0x187240u;
label_187240:
    // 0x187240: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187244:
    // 0x187244: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x187244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_187248:
    // 0x187248: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x187248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18724c:
    // 0x18724c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18724cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_187250:
    // 0x187250: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_187254:
    // 0x187254: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x187254u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_187258:
    // 0x187258: 0xc119b68  jal         func_466DA0
label_18725c:
    if (ctx->pc == 0x18725Cu) {
        ctx->pc = 0x187260u;
        goto label_187260;
    }
    ctx->pc = 0x187258u;
    SET_GPR_U32(ctx, 31, 0x187260u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x187258u, 0x187260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187260u;
label_187260:
    // 0x187260: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x187260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187264:
    // 0x187264: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_187268:
    if (ctx->pc == 0x187268u) {
        ctx->pc = 0x18726Cu;
        goto label_18726c;
    }
    ctx->pc = 0x187264u;
    {
        const bool branch_taken_0x187264 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x187264) {
            ctx->pc = 0x187278u;
            goto label_187278;
        }
    }
    ctx->pc = 0x18726Cu;
label_18726c:
    // 0x18726c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18726cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_187270:
    // 0x187270: 0x1000000e  b           . + 4 + (0xE << 2)
label_187274:
    if (ctx->pc == 0x187274u) {
        ctx->pc = 0x187278u;
        goto label_187278;
    }
    ctx->pc = 0x187270u;
    {
        const bool branch_taken_0x187270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187270) {
            ctx->pc = 0x1872ACu;
            goto label_1872ac;
        }
    }
    ctx->pc = 0x187278u;
label_187278:
    // 0x187278: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18727c:
    // 0x18727c: 0xc0ba088  jal         func_2E8220
label_187280:
    if (ctx->pc == 0x187280u) {
        ctx->pc = 0x187284u;
        goto label_187284;
    }
    ctx->pc = 0x18727Cu;
    SET_GPR_U32(ctx, 31, 0x187284u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x18727Cu, 0x187284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187284u;
label_187284:
    // 0x187284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x187284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187288:
    // 0x187288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18728c:
    // 0x18728c: 0xc0ba088  jal         func_2E8220
label_187290:
    if (ctx->pc == 0x187290u) {
        ctx->pc = 0x187294u;
        goto label_187294;
    }
    ctx->pc = 0x18728Cu;
    SET_GPR_U32(ctx, 31, 0x187294u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x18728Cu, 0x187294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187294u;
label_187294:
    // 0x187294: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_187298:
    if (ctx->pc == 0x187298u) {
        ctx->pc = 0x18729Cu;
        goto label_18729c;
    }
    ctx->pc = 0x187294u;
    {
        const bool branch_taken_0x187294 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x187294) {
            ctx->pc = 0x187248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187248;
        }
    }
    ctx->pc = 0x18729Cu;
label_18729c:
    // 0x18729c: 0x200f809  jalr        $s0
label_1872a0:
    if (ctx->pc == 0x1872A0u) {
        ctx->pc = 0x1872A4u;
        goto label_1872a4;
    }
    ctx->pc = 0x18729Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1872A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18729Cu, 0x1872A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1872A4u;
label_1872a4:
    // 0x1872a4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_1872a8:
    if (ctx->pc == 0x1872A8u) {
        ctx->pc = 0x1872ACu;
        goto label_1872ac;
    }
    ctx->pc = 0x1872A4u;
    {
        const bool branch_taken_0x1872a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1872a4) {
            ctx->pc = 0x187248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187248;
        }
    }
    ctx->pc = 0x1872ACu;
label_1872ac:
    // 0x1872ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1872acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1872b0:
    // 0x1872b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1872b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1872b4:
    // 0x1872b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1872b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1872b8:
    // 0x1872b8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1872b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1872bc:
    // 0x1872bc: 0x3e00008  jr          $ra
label_1872c0:
    if (ctx->pc == 0x1872C0u) {
        ctx->pc = 0x1872C4u;
        goto label_1872c4;
    }
    ctx->pc = 0x1872BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1872BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1872C4u;
label_1872c4:
    // 0x1872c4: 0x0  nop
    ctx->pc = 0x1872c4u;
    // NOP
label_1872c8:
    // 0x1872c8: 0x0  nop
    ctx->pc = 0x1872c8u;
    // NOP
label_1872cc:
    // 0x1872cc: 0x0  nop
    ctx->pc = 0x1872ccu;
    // NOP
    ctx->pc = 0x1872d0u;
}

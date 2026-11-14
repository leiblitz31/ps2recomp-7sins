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

// Function: sub_004901E0
// Address: 0x4901e0 - 0x490290
void sub_004901E0_0x4901e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004901E0_0x4901e0");
#endif

    switch (ctx->pc) {
        case 0x4901e0u: goto label_4901e0;
        case 0x4901e4u: goto label_4901e4;
        case 0x4901e8u: goto label_4901e8;
        case 0x4901ecu: goto label_4901ec;
        case 0x4901f0u: goto label_4901f0;
        case 0x4901f4u: goto label_4901f4;
        case 0x4901f8u: goto label_4901f8;
        case 0x4901fcu: goto label_4901fc;
        case 0x490200u: goto label_490200;
        case 0x490204u: goto label_490204;
        case 0x490208u: goto label_490208;
        case 0x49020cu: goto label_49020c;
        case 0x490210u: goto label_490210;
        case 0x490214u: goto label_490214;
        case 0x490218u: goto label_490218;
        case 0x49021cu: goto label_49021c;
        case 0x490220u: goto label_490220;
        case 0x490224u: goto label_490224;
        case 0x490228u: goto label_490228;
        case 0x49022cu: goto label_49022c;
        case 0x490230u: goto label_490230;
        case 0x490234u: goto label_490234;
        case 0x490238u: goto label_490238;
        case 0x49023cu: goto label_49023c;
        case 0x490240u: goto label_490240;
        case 0x490244u: goto label_490244;
        case 0x490248u: goto label_490248;
        case 0x49024cu: goto label_49024c;
        case 0x490250u: goto label_490250;
        case 0x490254u: goto label_490254;
        case 0x490258u: goto label_490258;
        case 0x49025cu: goto label_49025c;
        case 0x490260u: goto label_490260;
        case 0x490264u: goto label_490264;
        case 0x490268u: goto label_490268;
        case 0x49026cu: goto label_49026c;
        case 0x490270u: goto label_490270;
        case 0x490274u: goto label_490274;
        case 0x490278u: goto label_490278;
        case 0x49027cu: goto label_49027c;
        case 0x490280u: goto label_490280;
        case 0x490284u: goto label_490284;
        case 0x490288u: goto label_490288;
        case 0x49028cu: goto label_49028c;
        default: break;
    }

    ctx->pc = 0x4901e0u;

label_4901e0:
    // 0x4901e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4901e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4901e4:
    // 0x4901e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4901e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4901e8:
    // 0x4901e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4901e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4901ec:
    // 0x4901ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4901ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4901f0:
    // 0x4901f0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x4901f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_4901f4:
    // 0x4901f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4901f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4901f8:
    // 0x4901f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4901fc:
    if (ctx->pc == 0x4901FCu) {
        ctx->pc = 0x490200u;
        goto label_490200;
    }
    ctx->pc = 0x4901F8u;
    {
        const bool branch_taken_0x4901f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4901f8) {
            ctx->pc = 0x490208u;
            goto label_490208;
        }
    }
    ctx->pc = 0x490200u;
label_490200:
    // 0x490200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x490200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_490204:
    // 0x490204: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x490204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_490208:
    // 0x490208: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x490208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_49020c:
    // 0x49020c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x49020cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_490210:
    // 0x490210: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x490210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_490214:
    // 0x490214: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x490214u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_490218:
    // 0x490218: 0xc119b68  jal         func_466DA0
label_49021c:
    if (ctx->pc == 0x49021Cu) {
        ctx->pc = 0x490220u;
        goto label_490220;
    }
    ctx->pc = 0x490218u;
    SET_GPR_U32(ctx, 31, 0x490220u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x490218u, 0x490220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490220u;
label_490220:
    // 0x490220: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x490220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_490224:
    // 0x490224: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_490228:
    if (ctx->pc == 0x490228u) {
        ctx->pc = 0x49022Cu;
        goto label_49022c;
    }
    ctx->pc = 0x490224u;
    {
        const bool branch_taken_0x490224 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x490224) {
            ctx->pc = 0x490238u;
            goto label_490238;
        }
    }
    ctx->pc = 0x49022Cu;
label_49022c:
    // 0x49022c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x49022cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_490230:
    // 0x490230: 0x1000000e  b           . + 4 + (0xE << 2)
label_490234:
    if (ctx->pc == 0x490234u) {
        ctx->pc = 0x490238u;
        goto label_490238;
    }
    ctx->pc = 0x490230u;
    {
        const bool branch_taken_0x490230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490230) {
            ctx->pc = 0x49026Cu;
            goto label_49026c;
        }
    }
    ctx->pc = 0x490238u;
label_490238:
    // 0x490238: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x490238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49023c:
    // 0x49023c: 0xc0ba088  jal         func_2E8220
label_490240:
    if (ctx->pc == 0x490240u) {
        ctx->pc = 0x490244u;
        goto label_490244;
    }
    ctx->pc = 0x49023Cu;
    SET_GPR_U32(ctx, 31, 0x490244u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x49023Cu, 0x490244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490244u;
label_490244:
    // 0x490244: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x490244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_490248:
    // 0x490248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x490248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49024c:
    // 0x49024c: 0xc0ba088  jal         func_2E8220
label_490250:
    if (ctx->pc == 0x490250u) {
        ctx->pc = 0x490254u;
        goto label_490254;
    }
    ctx->pc = 0x49024Cu;
    SET_GPR_U32(ctx, 31, 0x490254u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x49024Cu, 0x490254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490254u;
label_490254:
    // 0x490254: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_490258:
    if (ctx->pc == 0x490258u) {
        ctx->pc = 0x49025Cu;
        goto label_49025c;
    }
    ctx->pc = 0x490254u;
    {
        const bool branch_taken_0x490254 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x490254) {
            ctx->pc = 0x490208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_490208;
        }
    }
    ctx->pc = 0x49025Cu;
label_49025c:
    // 0x49025c: 0x200f809  jalr        $s0
label_490260:
    if (ctx->pc == 0x490260u) {
        ctx->pc = 0x490264u;
        goto label_490264;
    }
    ctx->pc = 0x49025Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x490264u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49025Cu, 0x490264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x490264u;
label_490264:
    // 0x490264: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_490268:
    if (ctx->pc == 0x490268u) {
        ctx->pc = 0x49026Cu;
        goto label_49026c;
    }
    ctx->pc = 0x490264u;
    {
        const bool branch_taken_0x490264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490264) {
            ctx->pc = 0x490208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_490208;
        }
    }
    ctx->pc = 0x49026Cu;
label_49026c:
    // 0x49026c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49026cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_490270:
    // 0x490270: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x490270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_490274:
    // 0x490274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x490274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_490278:
    // 0x490278: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x490278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_49027c:
    // 0x49027c: 0x3e00008  jr          $ra
label_490280:
    if (ctx->pc == 0x490280u) {
        ctx->pc = 0x490284u;
        goto label_490284;
    }
    ctx->pc = 0x49027Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49027Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x490284u;
label_490284:
    // 0x490284: 0x0  nop
    ctx->pc = 0x490284u;
    // NOP
label_490288:
    // 0x490288: 0x0  nop
    ctx->pc = 0x490288u;
    // NOP
label_49028c:
    // 0x49028c: 0x0  nop
    ctx->pc = 0x49028cu;
    // NOP
    ctx->pc = 0x490290u;
}

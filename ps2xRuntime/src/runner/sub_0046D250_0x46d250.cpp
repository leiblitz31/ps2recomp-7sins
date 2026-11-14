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

// Function: sub_0046D250
// Address: 0x46d250 - 0x46d2f0
void sub_0046D250_0x46d250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046D250_0x46d250");
#endif

    switch (ctx->pc) {
        case 0x46d250u: goto label_46d250;
        case 0x46d254u: goto label_46d254;
        case 0x46d258u: goto label_46d258;
        case 0x46d25cu: goto label_46d25c;
        case 0x46d260u: goto label_46d260;
        case 0x46d264u: goto label_46d264;
        case 0x46d268u: goto label_46d268;
        case 0x46d26cu: goto label_46d26c;
        case 0x46d270u: goto label_46d270;
        case 0x46d274u: goto label_46d274;
        case 0x46d278u: goto label_46d278;
        case 0x46d27cu: goto label_46d27c;
        case 0x46d280u: goto label_46d280;
        case 0x46d284u: goto label_46d284;
        case 0x46d288u: goto label_46d288;
        case 0x46d28cu: goto label_46d28c;
        case 0x46d290u: goto label_46d290;
        case 0x46d294u: goto label_46d294;
        case 0x46d298u: goto label_46d298;
        case 0x46d29cu: goto label_46d29c;
        case 0x46d2a0u: goto label_46d2a0;
        case 0x46d2a4u: goto label_46d2a4;
        case 0x46d2a8u: goto label_46d2a8;
        case 0x46d2acu: goto label_46d2ac;
        case 0x46d2b0u: goto label_46d2b0;
        case 0x46d2b4u: goto label_46d2b4;
        case 0x46d2b8u: goto label_46d2b8;
        case 0x46d2bcu: goto label_46d2bc;
        case 0x46d2c0u: goto label_46d2c0;
        case 0x46d2c4u: goto label_46d2c4;
        case 0x46d2c8u: goto label_46d2c8;
        case 0x46d2ccu: goto label_46d2cc;
        case 0x46d2d0u: goto label_46d2d0;
        case 0x46d2d4u: goto label_46d2d4;
        case 0x46d2d8u: goto label_46d2d8;
        case 0x46d2dcu: goto label_46d2dc;
        case 0x46d2e0u: goto label_46d2e0;
        case 0x46d2e4u: goto label_46d2e4;
        case 0x46d2e8u: goto label_46d2e8;
        case 0x46d2ecu: goto label_46d2ec;
        default: break;
    }

    ctx->pc = 0x46d250u;

label_46d250:
    // 0x46d250: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x46d250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_46d254:
    // 0x46d254: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x46d254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_46d258:
    // 0x46d258: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46d258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_46d25c:
    // 0x46d25c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46d25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46d260:
    // 0x46d260: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x46d260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_46d264:
    // 0x46d264: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x46d264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_46d268:
    // 0x46d268: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_46d26c:
    if (ctx->pc == 0x46D26Cu) {
        ctx->pc = 0x46D270u;
        goto label_46d270;
    }
    ctx->pc = 0x46D268u;
    {
        const bool branch_taken_0x46d268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46d268) {
            ctx->pc = 0x46D278u;
            goto label_46d278;
        }
    }
    ctx->pc = 0x46D270u;
label_46d270:
    // 0x46d270: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46d270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46d274:
    // 0x46d274: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x46d274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_46d278:
    // 0x46d278: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x46d278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_46d27c:
    // 0x46d27c: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x46d27cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_46d280:
    // 0x46d280: 0xc119b68  jal         func_466DA0
label_46d284:
    if (ctx->pc == 0x46D284u) {
        ctx->pc = 0x46D288u;
        goto label_46d288;
    }
    ctx->pc = 0x46D280u;
    SET_GPR_U32(ctx, 31, 0x46D288u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x46D280u, 0x46D288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D288u;
label_46d288:
    // 0x46d288: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46d288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46d28c:
    // 0x46d28c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_46d290:
    if (ctx->pc == 0x46D290u) {
        ctx->pc = 0x46D294u;
        goto label_46d294;
    }
    ctx->pc = 0x46D28Cu;
    {
        const bool branch_taken_0x46d28c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d28c) {
            ctx->pc = 0x46D2A0u;
            goto label_46d2a0;
        }
    }
    ctx->pc = 0x46D294u;
label_46d294:
    // 0x46d294: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x46d294u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46d298:
    // 0x46d298: 0x1000000e  b           . + 4 + (0xE << 2)
label_46d29c:
    if (ctx->pc == 0x46D29Cu) {
        ctx->pc = 0x46D2A0u;
        goto label_46d2a0;
    }
    ctx->pc = 0x46D298u;
    {
        const bool branch_taken_0x46d298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d298) {
            ctx->pc = 0x46D2D4u;
            goto label_46d2d4;
        }
    }
    ctx->pc = 0x46D2A0u;
label_46d2a0:
    // 0x46d2a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x46d2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46d2a4:
    // 0x46d2a4: 0xc0ba088  jal         func_2E8220
label_46d2a8:
    if (ctx->pc == 0x46D2A8u) {
        ctx->pc = 0x46D2ACu;
        goto label_46d2ac;
    }
    ctx->pc = 0x46D2A4u;
    SET_GPR_U32(ctx, 31, 0x46D2ACu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x46D2A4u, 0x46D2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D2ACu;
label_46d2ac:
    // 0x46d2ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46d2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46d2b0:
    // 0x46d2b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46d2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46d2b4:
    // 0x46d2b4: 0xc0ba088  jal         func_2E8220
label_46d2b8:
    if (ctx->pc == 0x46D2B8u) {
        ctx->pc = 0x46D2BCu;
        goto label_46d2bc;
    }
    ctx->pc = 0x46D2B4u;
    SET_GPR_U32(ctx, 31, 0x46D2BCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x46D2B4u, 0x46D2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D2BCu;
label_46d2bc:
    // 0x46d2bc: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_46d2c0:
    if (ctx->pc == 0x46D2C0u) {
        ctx->pc = 0x46D2C4u;
        goto label_46d2c4;
    }
    ctx->pc = 0x46D2BCu;
    {
        const bool branch_taken_0x46d2bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d2bc) {
            ctx->pc = 0x46D278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46d278;
        }
    }
    ctx->pc = 0x46D2C4u;
label_46d2c4:
    // 0x46d2c4: 0x200f809  jalr        $s0
label_46d2c8:
    if (ctx->pc == 0x46D2C8u) {
        ctx->pc = 0x46D2CCu;
        goto label_46d2cc;
    }
    ctx->pc = 0x46D2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x46D2CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D2C4u, 0x46D2CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46D2CCu;
label_46d2cc:
    // 0x46d2cc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_46d2d0:
    if (ctx->pc == 0x46D2D0u) {
        ctx->pc = 0x46D2D4u;
        goto label_46d2d4;
    }
    ctx->pc = 0x46D2CCu;
    {
        const bool branch_taken_0x46d2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d2cc) {
            ctx->pc = 0x46D278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46d278;
        }
    }
    ctx->pc = 0x46D2D4u;
label_46d2d4:
    // 0x46d2d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x46d2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_46d2d8:
    // 0x46d2d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46d2d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46d2dc:
    // 0x46d2dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46d2dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_46d2e0:
    // 0x46d2e0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x46d2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_46d2e4:
    // 0x46d2e4: 0x3e00008  jr          $ra
label_46d2e8:
    if (ctx->pc == 0x46D2E8u) {
        ctx->pc = 0x46D2ECu;
        goto label_46d2ec;
    }
    ctx->pc = 0x46D2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46D2ECu;
label_46d2ec:
    // 0x46d2ec: 0x0  nop
    ctx->pc = 0x46d2ecu;
    // NOP
    ctx->pc = 0x46d2f0u;
}

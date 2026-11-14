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

// Function: sub_00282270
// Address: 0x282270 - 0x282310
void sub_00282270_0x282270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282270_0x282270");
#endif

    switch (ctx->pc) {
        case 0x282270u: goto label_282270;
        case 0x282274u: goto label_282274;
        case 0x282278u: goto label_282278;
        case 0x28227cu: goto label_28227c;
        case 0x282280u: goto label_282280;
        case 0x282284u: goto label_282284;
        case 0x282288u: goto label_282288;
        case 0x28228cu: goto label_28228c;
        case 0x282290u: goto label_282290;
        case 0x282294u: goto label_282294;
        case 0x282298u: goto label_282298;
        case 0x28229cu: goto label_28229c;
        case 0x2822a0u: goto label_2822a0;
        case 0x2822a4u: goto label_2822a4;
        case 0x2822a8u: goto label_2822a8;
        case 0x2822acu: goto label_2822ac;
        case 0x2822b0u: goto label_2822b0;
        case 0x2822b4u: goto label_2822b4;
        case 0x2822b8u: goto label_2822b8;
        case 0x2822bcu: goto label_2822bc;
        case 0x2822c0u: goto label_2822c0;
        case 0x2822c4u: goto label_2822c4;
        case 0x2822c8u: goto label_2822c8;
        case 0x2822ccu: goto label_2822cc;
        case 0x2822d0u: goto label_2822d0;
        case 0x2822d4u: goto label_2822d4;
        case 0x2822d8u: goto label_2822d8;
        case 0x2822dcu: goto label_2822dc;
        case 0x2822e0u: goto label_2822e0;
        case 0x2822e4u: goto label_2822e4;
        case 0x2822e8u: goto label_2822e8;
        case 0x2822ecu: goto label_2822ec;
        case 0x2822f0u: goto label_2822f0;
        case 0x2822f4u: goto label_2822f4;
        case 0x2822f8u: goto label_2822f8;
        case 0x2822fcu: goto label_2822fc;
        case 0x282300u: goto label_282300;
        case 0x282304u: goto label_282304;
        case 0x282308u: goto label_282308;
        case 0x28230cu: goto label_28230c;
        default: break;
    }

    ctx->pc = 0x282270u;

label_282270:
    // 0x282270: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x282270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_282274:
    // 0x282274: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x282274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_282278:
    // 0x282278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x282278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28227c:
    // 0x28227c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28227cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_282280:
    // 0x282280: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x282280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_282284:
    // 0x282284: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x282284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_282288:
    // 0x282288: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_28228c:
    if (ctx->pc == 0x28228Cu) {
        ctx->pc = 0x282290u;
        goto label_282290;
    }
    ctx->pc = 0x282288u;
    {
        const bool branch_taken_0x282288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282288) {
            ctx->pc = 0x282298u;
            goto label_282298;
        }
    }
    ctx->pc = 0x282290u;
label_282290:
    // 0x282290: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x282290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_282294:
    // 0x282294: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x282294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_282298:
    // 0x282298: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x282298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_28229c:
    // 0x28229c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x28229cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2822a0:
    // 0x2822a0: 0xc119b68  jal         func_466DA0
label_2822a4:
    if (ctx->pc == 0x2822A4u) {
        ctx->pc = 0x2822A8u;
        goto label_2822a8;
    }
    ctx->pc = 0x2822A0u;
    SET_GPR_U32(ctx, 31, 0x2822A8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2822A0u, 0x2822A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2822A8u;
label_2822a8:
    // 0x2822a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2822a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2822ac:
    // 0x2822ac: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2822b0:
    if (ctx->pc == 0x2822B0u) {
        ctx->pc = 0x2822B4u;
        goto label_2822b4;
    }
    ctx->pc = 0x2822ACu;
    {
        const bool branch_taken_0x2822ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2822ac) {
            ctx->pc = 0x2822C0u;
            goto label_2822c0;
        }
    }
    ctx->pc = 0x2822B4u;
label_2822b4:
    // 0x2822b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2822b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2822b8:
    // 0x2822b8: 0x1000000e  b           . + 4 + (0xE << 2)
label_2822bc:
    if (ctx->pc == 0x2822BCu) {
        ctx->pc = 0x2822C0u;
        goto label_2822c0;
    }
    ctx->pc = 0x2822B8u;
    {
        const bool branch_taken_0x2822b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2822b8) {
            ctx->pc = 0x2822F4u;
            goto label_2822f4;
        }
    }
    ctx->pc = 0x2822C0u;
label_2822c0:
    // 0x2822c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2822c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2822c4:
    // 0x2822c4: 0xc0ba088  jal         func_2E8220
label_2822c8:
    if (ctx->pc == 0x2822C8u) {
        ctx->pc = 0x2822CCu;
        goto label_2822cc;
    }
    ctx->pc = 0x2822C4u;
    SET_GPR_U32(ctx, 31, 0x2822CCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2822C4u, 0x2822CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2822CCu;
label_2822cc:
    // 0x2822cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2822ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2822d0:
    // 0x2822d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2822d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2822d4:
    // 0x2822d4: 0xc0ba088  jal         func_2E8220
label_2822d8:
    if (ctx->pc == 0x2822D8u) {
        ctx->pc = 0x2822DCu;
        goto label_2822dc;
    }
    ctx->pc = 0x2822D4u;
    SET_GPR_U32(ctx, 31, 0x2822DCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2822D4u, 0x2822DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2822DCu;
label_2822dc:
    // 0x2822dc: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_2822e0:
    if (ctx->pc == 0x2822E0u) {
        ctx->pc = 0x2822E4u;
        goto label_2822e4;
    }
    ctx->pc = 0x2822DCu;
    {
        const bool branch_taken_0x2822dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2822dc) {
            ctx->pc = 0x282298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282298;
        }
    }
    ctx->pc = 0x2822E4u;
label_2822e4:
    // 0x2822e4: 0x200f809  jalr        $s0
label_2822e8:
    if (ctx->pc == 0x2822E8u) {
        ctx->pc = 0x2822ECu;
        goto label_2822ec;
    }
    ctx->pc = 0x2822E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2822ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2822E4u, 0x2822ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2822ECu;
label_2822ec:
    // 0x2822ec: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_2822f0:
    if (ctx->pc == 0x2822F0u) {
        ctx->pc = 0x2822F4u;
        goto label_2822f4;
    }
    ctx->pc = 0x2822ECu;
    {
        const bool branch_taken_0x2822ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2822ec) {
            ctx->pc = 0x282298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282298;
        }
    }
    ctx->pc = 0x2822F4u;
label_2822f4:
    // 0x2822f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2822f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2822f8:
    // 0x2822f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2822f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2822fc:
    // 0x2822fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2822fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_282300:
    // 0x282300: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x282300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_282304:
    // 0x282304: 0x3e00008  jr          $ra
label_282308:
    if (ctx->pc == 0x282308u) {
        ctx->pc = 0x28230Cu;
        goto label_28230c;
    }
    ctx->pc = 0x282304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28230Cu;
label_28230c:
    // 0x28230c: 0x0  nop
    ctx->pc = 0x28230cu;
    // NOP
    ctx->pc = 0x282310u;
}

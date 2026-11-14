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

// Function: sub_00136240
// Address: 0x136240 - 0x1362f0
void sub_00136240_0x136240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136240_0x136240");
#endif

    switch (ctx->pc) {
        case 0x136240u: goto label_136240;
        case 0x136244u: goto label_136244;
        case 0x136248u: goto label_136248;
        case 0x13624cu: goto label_13624c;
        case 0x136250u: goto label_136250;
        case 0x136254u: goto label_136254;
        case 0x136258u: goto label_136258;
        case 0x13625cu: goto label_13625c;
        case 0x136260u: goto label_136260;
        case 0x136264u: goto label_136264;
        case 0x136268u: goto label_136268;
        case 0x13626cu: goto label_13626c;
        case 0x136270u: goto label_136270;
        case 0x136274u: goto label_136274;
        case 0x136278u: goto label_136278;
        case 0x13627cu: goto label_13627c;
        case 0x136280u: goto label_136280;
        case 0x136284u: goto label_136284;
        case 0x136288u: goto label_136288;
        case 0x13628cu: goto label_13628c;
        case 0x136290u: goto label_136290;
        case 0x136294u: goto label_136294;
        case 0x136298u: goto label_136298;
        case 0x13629cu: goto label_13629c;
        case 0x1362a0u: goto label_1362a0;
        case 0x1362a4u: goto label_1362a4;
        case 0x1362a8u: goto label_1362a8;
        case 0x1362acu: goto label_1362ac;
        case 0x1362b0u: goto label_1362b0;
        case 0x1362b4u: goto label_1362b4;
        case 0x1362b8u: goto label_1362b8;
        case 0x1362bcu: goto label_1362bc;
        case 0x1362c0u: goto label_1362c0;
        case 0x1362c4u: goto label_1362c4;
        case 0x1362c8u: goto label_1362c8;
        case 0x1362ccu: goto label_1362cc;
        case 0x1362d0u: goto label_1362d0;
        case 0x1362d4u: goto label_1362d4;
        case 0x1362d8u: goto label_1362d8;
        case 0x1362dcu: goto label_1362dc;
        case 0x1362e0u: goto label_1362e0;
        case 0x1362e4u: goto label_1362e4;
        case 0x1362e8u: goto label_1362e8;
        case 0x1362ecu: goto label_1362ec;
        default: break;
    }

    ctx->pc = 0x136240u;

label_136240:
    // 0x136240: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x136240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_136244:
    // 0x136244: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x136244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_136248:
    // 0x136248: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x136248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13624c:
    // 0x13624c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13624cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_136250:
    // 0x136250: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x136250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_136254:
    // 0x136254: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x136254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_136258:
    // 0x136258: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_13625c:
    if (ctx->pc == 0x13625Cu) {
        ctx->pc = 0x136260u;
        goto label_136260;
    }
    ctx->pc = 0x136258u;
    {
        const bool branch_taken_0x136258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136258) {
            ctx->pc = 0x136268u;
            goto label_136268;
        }
    }
    ctx->pc = 0x136260u;
label_136260:
    // 0x136260: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x136260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_136264:
    // 0x136264: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x136264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_136268:
    // 0x136268: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x136268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_13626c:
    // 0x13626c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x13626cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_136270:
    // 0x136270: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x136270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_136274:
    // 0x136274: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x136274u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_136278:
    // 0x136278: 0xc119b68  jal         func_466DA0
label_13627c:
    if (ctx->pc == 0x13627Cu) {
        ctx->pc = 0x136280u;
        goto label_136280;
    }
    ctx->pc = 0x136278u;
    SET_GPR_U32(ctx, 31, 0x136280u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x136278u, 0x136280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136280u;
label_136280:
    // 0x136280: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x136280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_136284:
    // 0x136284: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_136288:
    if (ctx->pc == 0x136288u) {
        ctx->pc = 0x13628Cu;
        goto label_13628c;
    }
    ctx->pc = 0x136284u;
    {
        const bool branch_taken_0x136284 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x136284) {
            ctx->pc = 0x136298u;
            goto label_136298;
        }
    }
    ctx->pc = 0x13628Cu;
label_13628c:
    // 0x13628c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13628cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_136290:
    // 0x136290: 0x1000000e  b           . + 4 + (0xE << 2)
label_136294:
    if (ctx->pc == 0x136294u) {
        ctx->pc = 0x136298u;
        goto label_136298;
    }
    ctx->pc = 0x136290u;
    {
        const bool branch_taken_0x136290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136290) {
            ctx->pc = 0x1362CCu;
            goto label_1362cc;
        }
    }
    ctx->pc = 0x136298u;
label_136298:
    // 0x136298: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x136298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13629c:
    // 0x13629c: 0xc0ba088  jal         func_2E8220
label_1362a0:
    if (ctx->pc == 0x1362A0u) {
        ctx->pc = 0x1362A4u;
        goto label_1362a4;
    }
    ctx->pc = 0x13629Cu;
    SET_GPR_U32(ctx, 31, 0x1362A4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x13629Cu, 0x1362A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1362A4u;
label_1362a4:
    // 0x1362a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1362a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1362a8:
    // 0x1362a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1362a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1362ac:
    // 0x1362ac: 0xc0ba088  jal         func_2E8220
label_1362b0:
    if (ctx->pc == 0x1362B0u) {
        ctx->pc = 0x1362B4u;
        goto label_1362b4;
    }
    ctx->pc = 0x1362ACu;
    SET_GPR_U32(ctx, 31, 0x1362B4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1362ACu, 0x1362B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1362B4u;
label_1362b4:
    // 0x1362b4: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_1362b8:
    if (ctx->pc == 0x1362B8u) {
        ctx->pc = 0x1362BCu;
        goto label_1362bc;
    }
    ctx->pc = 0x1362B4u;
    {
        const bool branch_taken_0x1362b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1362b4) {
            ctx->pc = 0x136268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136268;
        }
    }
    ctx->pc = 0x1362BCu;
label_1362bc:
    // 0x1362bc: 0x200f809  jalr        $s0
label_1362c0:
    if (ctx->pc == 0x1362C0u) {
        ctx->pc = 0x1362C4u;
        goto label_1362c4;
    }
    ctx->pc = 0x1362BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1362C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1362BCu, 0x1362C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1362C4u;
label_1362c4:
    // 0x1362c4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_1362c8:
    if (ctx->pc == 0x1362C8u) {
        ctx->pc = 0x1362CCu;
        goto label_1362cc;
    }
    ctx->pc = 0x1362C4u;
    {
        const bool branch_taken_0x1362c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1362c4) {
            ctx->pc = 0x136268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136268;
        }
    }
    ctx->pc = 0x1362CCu;
label_1362cc:
    // 0x1362cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1362ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1362d0:
    // 0x1362d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1362d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1362d4:
    // 0x1362d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1362d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1362d8:
    // 0x1362d8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1362d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1362dc:
    // 0x1362dc: 0x3e00008  jr          $ra
label_1362e0:
    if (ctx->pc == 0x1362E0u) {
        ctx->pc = 0x1362E4u;
        goto label_1362e4;
    }
    ctx->pc = 0x1362DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1362DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1362E4u;
label_1362e4:
    // 0x1362e4: 0x0  nop
    ctx->pc = 0x1362e4u;
    // NOP
label_1362e8:
    // 0x1362e8: 0x0  nop
    ctx->pc = 0x1362e8u;
    // NOP
label_1362ec:
    // 0x1362ec: 0x0  nop
    ctx->pc = 0x1362ecu;
    // NOP
    ctx->pc = 0x1362f0u;
}

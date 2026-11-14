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

// Function: sub_0023E1C0
// Address: 0x23e1c0 - 0x23e260
void sub_0023E1C0_0x23e1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E1C0_0x23e1c0");
#endif

    switch (ctx->pc) {
        case 0x23e1c0u: goto label_23e1c0;
        case 0x23e1c4u: goto label_23e1c4;
        case 0x23e1c8u: goto label_23e1c8;
        case 0x23e1ccu: goto label_23e1cc;
        case 0x23e1d0u: goto label_23e1d0;
        case 0x23e1d4u: goto label_23e1d4;
        case 0x23e1d8u: goto label_23e1d8;
        case 0x23e1dcu: goto label_23e1dc;
        case 0x23e1e0u: goto label_23e1e0;
        case 0x23e1e4u: goto label_23e1e4;
        case 0x23e1e8u: goto label_23e1e8;
        case 0x23e1ecu: goto label_23e1ec;
        case 0x23e1f0u: goto label_23e1f0;
        case 0x23e1f4u: goto label_23e1f4;
        case 0x23e1f8u: goto label_23e1f8;
        case 0x23e1fcu: goto label_23e1fc;
        case 0x23e200u: goto label_23e200;
        case 0x23e204u: goto label_23e204;
        case 0x23e208u: goto label_23e208;
        case 0x23e20cu: goto label_23e20c;
        case 0x23e210u: goto label_23e210;
        case 0x23e214u: goto label_23e214;
        case 0x23e218u: goto label_23e218;
        case 0x23e21cu: goto label_23e21c;
        case 0x23e220u: goto label_23e220;
        case 0x23e224u: goto label_23e224;
        case 0x23e228u: goto label_23e228;
        case 0x23e22cu: goto label_23e22c;
        case 0x23e230u: goto label_23e230;
        case 0x23e234u: goto label_23e234;
        case 0x23e238u: goto label_23e238;
        case 0x23e23cu: goto label_23e23c;
        case 0x23e240u: goto label_23e240;
        case 0x23e244u: goto label_23e244;
        case 0x23e248u: goto label_23e248;
        case 0x23e24cu: goto label_23e24c;
        case 0x23e250u: goto label_23e250;
        case 0x23e254u: goto label_23e254;
        case 0x23e258u: goto label_23e258;
        case 0x23e25cu: goto label_23e25c;
        default: break;
    }

    ctx->pc = 0x23e1c0u;

label_23e1c0:
    // 0x23e1c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23e1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_23e1c4:
    // 0x23e1c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23e1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_23e1c8:
    // 0x23e1c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23e1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23e1cc:
    // 0x23e1cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23e1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23e1d0:
    // 0x23e1d0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x23e1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_23e1d4:
    // 0x23e1d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_23e1d8:
    // 0x23e1d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23e1dc:
    if (ctx->pc == 0x23E1DCu) {
        ctx->pc = 0x23E1E0u;
        goto label_23e1e0;
    }
    ctx->pc = 0x23E1D8u;
    {
        const bool branch_taken_0x23e1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e1d8) {
            ctx->pc = 0x23E1E8u;
            goto label_23e1e8;
        }
    }
    ctx->pc = 0x23E1E0u;
label_23e1e0:
    // 0x23e1e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23e1e4:
    // 0x23e1e4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x23e1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_23e1e8:
    // 0x23e1e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_23e1ec:
    // 0x23e1ec: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x23e1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_23e1f0:
    // 0x23e1f0: 0xc119b68  jal         func_466DA0
label_23e1f4:
    if (ctx->pc == 0x23E1F4u) {
        ctx->pc = 0x23E1F8u;
        goto label_23e1f8;
    }
    ctx->pc = 0x23E1F0u;
    SET_GPR_U32(ctx, 31, 0x23E1F8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x23E1F0u, 0x23E1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E1F8u;
label_23e1f8:
    // 0x23e1f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23e1f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e1fc:
    // 0x23e1fc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_23e200:
    if (ctx->pc == 0x23E200u) {
        ctx->pc = 0x23E204u;
        goto label_23e204;
    }
    ctx->pc = 0x23E1FCu;
    {
        const bool branch_taken_0x23e1fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e1fc) {
            ctx->pc = 0x23E210u;
            goto label_23e210;
        }
    }
    ctx->pc = 0x23E204u;
label_23e204:
    // 0x23e204: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23e204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23e208:
    // 0x23e208: 0x1000000e  b           . + 4 + (0xE << 2)
label_23e20c:
    if (ctx->pc == 0x23E20Cu) {
        ctx->pc = 0x23E210u;
        goto label_23e210;
    }
    ctx->pc = 0x23E208u;
    {
        const bool branch_taken_0x23e208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e208) {
            ctx->pc = 0x23E244u;
            goto label_23e244;
        }
    }
    ctx->pc = 0x23E210u;
label_23e210:
    // 0x23e210: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23e210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e214:
    // 0x23e214: 0xc0ba088  jal         func_2E8220
label_23e218:
    if (ctx->pc == 0x23E218u) {
        ctx->pc = 0x23E21Cu;
        goto label_23e21c;
    }
    ctx->pc = 0x23E214u;
    SET_GPR_U32(ctx, 31, 0x23E21Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x23E214u, 0x23E21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E21Cu;
label_23e21c:
    // 0x23e21c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23e21cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e220:
    // 0x23e220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e224:
    // 0x23e224: 0xc0ba088  jal         func_2E8220
label_23e228:
    if (ctx->pc == 0x23E228u) {
        ctx->pc = 0x23E22Cu;
        goto label_23e22c;
    }
    ctx->pc = 0x23E224u;
    SET_GPR_U32(ctx, 31, 0x23E22Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x23E224u, 0x23E22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E22Cu;
label_23e22c:
    // 0x23e22c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_23e230:
    if (ctx->pc == 0x23E230u) {
        ctx->pc = 0x23E234u;
        goto label_23e234;
    }
    ctx->pc = 0x23E22Cu;
    {
        const bool branch_taken_0x23e22c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e22c) {
            ctx->pc = 0x23E1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e1e8;
        }
    }
    ctx->pc = 0x23E234u;
label_23e234:
    // 0x23e234: 0x200f809  jalr        $s0
label_23e238:
    if (ctx->pc == 0x23E238u) {
        ctx->pc = 0x23E23Cu;
        goto label_23e23c;
    }
    ctx->pc = 0x23E234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x23E23Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E234u, 0x23E23Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23E23Cu;
label_23e23c:
    // 0x23e23c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_23e240:
    if (ctx->pc == 0x23E240u) {
        ctx->pc = 0x23E244u;
        goto label_23e244;
    }
    ctx->pc = 0x23E23Cu;
    {
        const bool branch_taken_0x23e23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e23c) {
            ctx->pc = 0x23E1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e1e8;
        }
    }
    ctx->pc = 0x23E244u;
label_23e244:
    // 0x23e244: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23e244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23e248:
    // 0x23e248: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23e248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23e24c:
    // 0x23e24c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23e24cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23e250:
    // 0x23e250: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x23e250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_23e254:
    // 0x23e254: 0x3e00008  jr          $ra
label_23e258:
    if (ctx->pc == 0x23E258u) {
        ctx->pc = 0x23E25Cu;
        goto label_23e25c;
    }
    ctx->pc = 0x23E254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E25Cu;
label_23e25c:
    // 0x23e25c: 0x0  nop
    ctx->pc = 0x23e25cu;
    // NOP
    ctx->pc = 0x23e260u;
}

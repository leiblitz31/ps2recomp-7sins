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

// Function: sub_001321E0
// Address: 0x1321e0 - 0x132280
void sub_001321E0_0x1321e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001321E0_0x1321e0");
#endif

    switch (ctx->pc) {
        case 0x1321e0u: goto label_1321e0;
        case 0x1321e4u: goto label_1321e4;
        case 0x1321e8u: goto label_1321e8;
        case 0x1321ecu: goto label_1321ec;
        case 0x1321f0u: goto label_1321f0;
        case 0x1321f4u: goto label_1321f4;
        case 0x1321f8u: goto label_1321f8;
        case 0x1321fcu: goto label_1321fc;
        case 0x132200u: goto label_132200;
        case 0x132204u: goto label_132204;
        case 0x132208u: goto label_132208;
        case 0x13220cu: goto label_13220c;
        case 0x132210u: goto label_132210;
        case 0x132214u: goto label_132214;
        case 0x132218u: goto label_132218;
        case 0x13221cu: goto label_13221c;
        case 0x132220u: goto label_132220;
        case 0x132224u: goto label_132224;
        case 0x132228u: goto label_132228;
        case 0x13222cu: goto label_13222c;
        case 0x132230u: goto label_132230;
        case 0x132234u: goto label_132234;
        case 0x132238u: goto label_132238;
        case 0x13223cu: goto label_13223c;
        case 0x132240u: goto label_132240;
        case 0x132244u: goto label_132244;
        case 0x132248u: goto label_132248;
        case 0x13224cu: goto label_13224c;
        case 0x132250u: goto label_132250;
        case 0x132254u: goto label_132254;
        case 0x132258u: goto label_132258;
        case 0x13225cu: goto label_13225c;
        case 0x132260u: goto label_132260;
        case 0x132264u: goto label_132264;
        case 0x132268u: goto label_132268;
        case 0x13226cu: goto label_13226c;
        case 0x132270u: goto label_132270;
        case 0x132274u: goto label_132274;
        case 0x132278u: goto label_132278;
        case 0x13227cu: goto label_13227c;
        default: break;
    }

    ctx->pc = 0x1321e0u;

label_1321e0:
    // 0x1321e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1321e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1321e4:
    // 0x1321e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1321e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1321e8:
    // 0x1321e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1321e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1321ec:
    // 0x1321ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1321ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1321f0:
    // 0x1321f0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1321f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1321f4:
    // 0x1321f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1321f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1321f8:
    // 0x1321f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1321fc:
    if (ctx->pc == 0x1321FCu) {
        ctx->pc = 0x132200u;
        goto label_132200;
    }
    ctx->pc = 0x1321F8u;
    {
        const bool branch_taken_0x1321f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1321f8) {
            ctx->pc = 0x132208u;
            goto label_132208;
        }
    }
    ctx->pc = 0x132200u;
label_132200:
    // 0x132200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_132204:
    // 0x132204: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x132204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_132208:
    // 0x132208: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x132208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_13220c:
    // 0x13220c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x13220cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_132210:
    // 0x132210: 0xc119b68  jal         func_466DA0
label_132214:
    if (ctx->pc == 0x132214u) {
        ctx->pc = 0x132218u;
        goto label_132218;
    }
    ctx->pc = 0x132210u;
    SET_GPR_U32(ctx, 31, 0x132218u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x132210u, 0x132218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132218u;
label_132218:
    // 0x132218: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x132218u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13221c:
    // 0x13221c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_132220:
    if (ctx->pc == 0x132220u) {
        ctx->pc = 0x132224u;
        goto label_132224;
    }
    ctx->pc = 0x13221Cu;
    {
        const bool branch_taken_0x13221c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13221c) {
            ctx->pc = 0x132230u;
            goto label_132230;
        }
    }
    ctx->pc = 0x132224u;
label_132224:
    // 0x132224: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x132224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_132228:
    // 0x132228: 0x1000000e  b           . + 4 + (0xE << 2)
label_13222c:
    if (ctx->pc == 0x13222Cu) {
        ctx->pc = 0x132230u;
        goto label_132230;
    }
    ctx->pc = 0x132228u;
    {
        const bool branch_taken_0x132228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132228) {
            ctx->pc = 0x132264u;
            goto label_132264;
        }
    }
    ctx->pc = 0x132230u;
label_132230:
    // 0x132230: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x132230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132234:
    // 0x132234: 0xc0ba088  jal         func_2E8220
label_132238:
    if (ctx->pc == 0x132238u) {
        ctx->pc = 0x13223Cu;
        goto label_13223c;
    }
    ctx->pc = 0x132234u;
    SET_GPR_U32(ctx, 31, 0x13223Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x132234u, 0x13223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13223Cu;
label_13223c:
    // 0x13223c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13223cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132240:
    // 0x132240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132244:
    // 0x132244: 0xc0ba088  jal         func_2E8220
label_132248:
    if (ctx->pc == 0x132248u) {
        ctx->pc = 0x13224Cu;
        goto label_13224c;
    }
    ctx->pc = 0x132244u;
    SET_GPR_U32(ctx, 31, 0x13224Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x132244u, 0x13224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13224Cu;
label_13224c:
    // 0x13224c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_132250:
    if (ctx->pc == 0x132250u) {
        ctx->pc = 0x132254u;
        goto label_132254;
    }
    ctx->pc = 0x13224Cu;
    {
        const bool branch_taken_0x13224c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13224c) {
            ctx->pc = 0x132208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132208;
        }
    }
    ctx->pc = 0x132254u;
label_132254:
    // 0x132254: 0x200f809  jalr        $s0
label_132258:
    if (ctx->pc == 0x132258u) {
        ctx->pc = 0x13225Cu;
        goto label_13225c;
    }
    ctx->pc = 0x132254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x13225Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132254u, 0x13225Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13225Cu;
label_13225c:
    // 0x13225c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_132260:
    if (ctx->pc == 0x132260u) {
        ctx->pc = 0x132264u;
        goto label_132264;
    }
    ctx->pc = 0x13225Cu;
    {
        const bool branch_taken_0x13225c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13225c) {
            ctx->pc = 0x132208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132208;
        }
    }
    ctx->pc = 0x132264u;
label_132264:
    // 0x132264: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x132264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_132268:
    // 0x132268: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x132268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13226c:
    // 0x13226c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13226cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_132270:
    // 0x132270: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x132270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_132274:
    // 0x132274: 0x3e00008  jr          $ra
label_132278:
    if (ctx->pc == 0x132278u) {
        ctx->pc = 0x13227Cu;
        goto label_13227c;
    }
    ctx->pc = 0x132274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13227Cu;
label_13227c:
    // 0x13227c: 0x0  nop
    ctx->pc = 0x13227cu;
    // NOP
    ctx->pc = 0x132280u;
}

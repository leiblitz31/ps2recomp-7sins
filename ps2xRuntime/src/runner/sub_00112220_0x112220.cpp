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

// Function: sub_00112220
// Address: 0x112220 - 0x1122d0
void sub_00112220_0x112220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112220_0x112220");
#endif

    switch (ctx->pc) {
        case 0x112220u: goto label_112220;
        case 0x112224u: goto label_112224;
        case 0x112228u: goto label_112228;
        case 0x11222cu: goto label_11222c;
        case 0x112230u: goto label_112230;
        case 0x112234u: goto label_112234;
        case 0x112238u: goto label_112238;
        case 0x11223cu: goto label_11223c;
        case 0x112240u: goto label_112240;
        case 0x112244u: goto label_112244;
        case 0x112248u: goto label_112248;
        case 0x11224cu: goto label_11224c;
        case 0x112250u: goto label_112250;
        case 0x112254u: goto label_112254;
        case 0x112258u: goto label_112258;
        case 0x11225cu: goto label_11225c;
        case 0x112260u: goto label_112260;
        case 0x112264u: goto label_112264;
        case 0x112268u: goto label_112268;
        case 0x11226cu: goto label_11226c;
        case 0x112270u: goto label_112270;
        case 0x112274u: goto label_112274;
        case 0x112278u: goto label_112278;
        case 0x11227cu: goto label_11227c;
        case 0x112280u: goto label_112280;
        case 0x112284u: goto label_112284;
        case 0x112288u: goto label_112288;
        case 0x11228cu: goto label_11228c;
        case 0x112290u: goto label_112290;
        case 0x112294u: goto label_112294;
        case 0x112298u: goto label_112298;
        case 0x11229cu: goto label_11229c;
        case 0x1122a0u: goto label_1122a0;
        case 0x1122a4u: goto label_1122a4;
        case 0x1122a8u: goto label_1122a8;
        case 0x1122acu: goto label_1122ac;
        case 0x1122b0u: goto label_1122b0;
        case 0x1122b4u: goto label_1122b4;
        case 0x1122b8u: goto label_1122b8;
        case 0x1122bcu: goto label_1122bc;
        case 0x1122c0u: goto label_1122c0;
        case 0x1122c4u: goto label_1122c4;
        case 0x1122c8u: goto label_1122c8;
        case 0x1122ccu: goto label_1122cc;
        default: break;
    }

    ctx->pc = 0x112220u;

label_112220:
    // 0x112220: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x112220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_112224:
    // 0x112224: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x112224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_112228:
    // 0x112228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x112228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_11222c:
    // 0x11222c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11222cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_112230:
    // 0x112230: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x112230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_112234:
    // 0x112234: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x112234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_112238:
    // 0x112238: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_11223c:
    if (ctx->pc == 0x11223Cu) {
        ctx->pc = 0x112240u;
        goto label_112240;
    }
    ctx->pc = 0x112238u;
    {
        const bool branch_taken_0x112238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112238) {
            ctx->pc = 0x112248u;
            goto label_112248;
        }
    }
    ctx->pc = 0x112240u;
label_112240:
    // 0x112240: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x112240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_112244:
    // 0x112244: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x112244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_112248:
    // 0x112248: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x112248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_11224c:
    // 0x11224c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x11224cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_112250:
    // 0x112250: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_112254:
    // 0x112254: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x112254u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_112258:
    // 0x112258: 0xc119b68  jal         func_466DA0
label_11225c:
    if (ctx->pc == 0x11225Cu) {
        ctx->pc = 0x112260u;
        goto label_112260;
    }
    ctx->pc = 0x112258u;
    SET_GPR_U32(ctx, 31, 0x112260u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x112258u, 0x112260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112260u;
label_112260:
    // 0x112260: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x112260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_112264:
    // 0x112264: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_112268:
    if (ctx->pc == 0x112268u) {
        ctx->pc = 0x11226Cu;
        goto label_11226c;
    }
    ctx->pc = 0x112264u;
    {
        const bool branch_taken_0x112264 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x112264) {
            ctx->pc = 0x112278u;
            goto label_112278;
        }
    }
    ctx->pc = 0x11226Cu;
label_11226c:
    // 0x11226c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x11226cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112270:
    // 0x112270: 0x1000000e  b           . + 4 + (0xE << 2)
label_112274:
    if (ctx->pc == 0x112274u) {
        ctx->pc = 0x112278u;
        goto label_112278;
    }
    ctx->pc = 0x112270u;
    {
        const bool branch_taken_0x112270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112270) {
            ctx->pc = 0x1122ACu;
            goto label_1122ac;
        }
    }
    ctx->pc = 0x112278u;
label_112278:
    // 0x112278: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x112278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11227c:
    // 0x11227c: 0xc0ba088  jal         func_2E8220
label_112280:
    if (ctx->pc == 0x112280u) {
        ctx->pc = 0x112284u;
        goto label_112284;
    }
    ctx->pc = 0x11227Cu;
    SET_GPR_U32(ctx, 31, 0x112284u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x11227Cu, 0x112284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112284u;
label_112284:
    // 0x112284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x112284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_112288:
    // 0x112288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11228c:
    // 0x11228c: 0xc0ba088  jal         func_2E8220
label_112290:
    if (ctx->pc == 0x112290u) {
        ctx->pc = 0x112294u;
        goto label_112294;
    }
    ctx->pc = 0x11228Cu;
    SET_GPR_U32(ctx, 31, 0x112294u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x11228Cu, 0x112294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112294u;
label_112294:
    // 0x112294: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_112298:
    if (ctx->pc == 0x112298u) {
        ctx->pc = 0x11229Cu;
        goto label_11229c;
    }
    ctx->pc = 0x112294u;
    {
        const bool branch_taken_0x112294 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x112294) {
            ctx->pc = 0x112248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112248;
        }
    }
    ctx->pc = 0x11229Cu;
label_11229c:
    // 0x11229c: 0x200f809  jalr        $s0
label_1122a0:
    if (ctx->pc == 0x1122A0u) {
        ctx->pc = 0x1122A4u;
        goto label_1122a4;
    }
    ctx->pc = 0x11229Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1122A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11229Cu, 0x1122A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1122A4u;
label_1122a4:
    // 0x1122a4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_1122a8:
    if (ctx->pc == 0x1122A8u) {
        ctx->pc = 0x1122ACu;
        goto label_1122ac;
    }
    ctx->pc = 0x1122A4u;
    {
        const bool branch_taken_0x1122a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1122a4) {
            ctx->pc = 0x112248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112248;
        }
    }
    ctx->pc = 0x1122ACu;
label_1122ac:
    // 0x1122ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1122acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1122b0:
    // 0x1122b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1122b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1122b4:
    // 0x1122b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1122b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1122b8:
    // 0x1122b8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1122b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1122bc:
    // 0x1122bc: 0x3e00008  jr          $ra
label_1122c0:
    if (ctx->pc == 0x1122C0u) {
        ctx->pc = 0x1122C4u;
        goto label_1122c4;
    }
    ctx->pc = 0x1122BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1122BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1122C4u;
label_1122c4:
    // 0x1122c4: 0x0  nop
    ctx->pc = 0x1122c4u;
    // NOP
label_1122c8:
    // 0x1122c8: 0x0  nop
    ctx->pc = 0x1122c8u;
    // NOP
label_1122cc:
    // 0x1122cc: 0x0  nop
    ctx->pc = 0x1122ccu;
    // NOP
    ctx->pc = 0x1122d0u;
}

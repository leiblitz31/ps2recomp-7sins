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

// Function: sub_002330A0
// Address: 0x2330a0 - 0x233100
void sub_002330A0_0x2330a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002330A0_0x2330a0");
#endif

    switch (ctx->pc) {
        case 0x2330a0u: goto label_2330a0;
        case 0x2330a4u: goto label_2330a4;
        case 0x2330a8u: goto label_2330a8;
        case 0x2330acu: goto label_2330ac;
        case 0x2330b0u: goto label_2330b0;
        case 0x2330b4u: goto label_2330b4;
        case 0x2330b8u: goto label_2330b8;
        case 0x2330bcu: goto label_2330bc;
        case 0x2330c0u: goto label_2330c0;
        case 0x2330c4u: goto label_2330c4;
        case 0x2330c8u: goto label_2330c8;
        case 0x2330ccu: goto label_2330cc;
        case 0x2330d0u: goto label_2330d0;
        case 0x2330d4u: goto label_2330d4;
        case 0x2330d8u: goto label_2330d8;
        case 0x2330dcu: goto label_2330dc;
        case 0x2330e0u: goto label_2330e0;
        case 0x2330e4u: goto label_2330e4;
        case 0x2330e8u: goto label_2330e8;
        case 0x2330ecu: goto label_2330ec;
        case 0x2330f0u: goto label_2330f0;
        case 0x2330f4u: goto label_2330f4;
        case 0x2330f8u: goto label_2330f8;
        case 0x2330fcu: goto label_2330fc;
        default: break;
    }

    ctx->pc = 0x2330a0u;

label_2330a0:
    // 0x2330a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2330a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2330a4:
    // 0x2330a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2330a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2330a8:
    // 0x2330a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2330a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2330ac:
    // 0x2330ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2330acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_2330b0:
    // 0x2330b0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2330b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_2330b4:
    // 0x2330b4: 0x8f82bb88  lw          $v0, -0x4478($gp)
    ctx->pc = 0x2330b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949768)));
label_2330b8:
    // 0x2330b8: 0x1002000b  beq         $zero, $v0, . + 4 + (0xB << 2)
label_2330bc:
    if (ctx->pc == 0x2330BCu) {
        ctx->pc = 0x2330C0u;
        goto label_2330c0;
    }
    ctx->pc = 0x2330B8u;
    {
        const bool branch_taken_0x2330b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2330b8) {
            ctx->pc = 0x2330E8u;
            goto label_2330e8;
        }
    }
    ctx->pc = 0x2330C0u;
label_2330c0:
    // 0x2330c0: 0x8f84bb88  lw          $a0, -0x4478($gp)
    ctx->pc = 0x2330c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949768)));
label_2330c4:
    // 0x2330c4: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2330c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2330c8:
    // 0x2330c8: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x2330c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2330cc:
    // 0x2330cc: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x2330ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2330d0:
    // 0x2330d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2330d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2330d4:
    // 0x2330d4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2330d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2330d8:
    // 0x2330d8: 0x320f809  jalr        $t9
label_2330dc:
    if (ctx->pc == 0x2330DCu) {
        ctx->pc = 0x2330E0u;
        goto label_2330e0;
    }
    ctx->pc = 0x2330D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2330E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2330D8u, 0x2330E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2330E0u;
label_2330e0:
    // 0x2330e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2330e4:
    if (ctx->pc == 0x2330E4u) {
        ctx->pc = 0x2330E8u;
        goto label_2330e8;
    }
    ctx->pc = 0x2330E0u;
    {
        const bool branch_taken_0x2330e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2330e0) {
            ctx->pc = 0x2330ECu;
            goto label_2330ec;
        }
    }
    ctx->pc = 0x2330E8u;
label_2330e8:
    // 0x2330e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2330e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2330ec:
    // 0x2330ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2330ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2330f0:
    // 0x2330f0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2330f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2330f4:
    // 0x2330f4: 0x3e00008  jr          $ra
label_2330f8:
    if (ctx->pc == 0x2330F8u) {
        ctx->pc = 0x2330FCu;
        goto label_2330fc;
    }
    ctx->pc = 0x2330F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2330F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2330FCu;
label_2330fc:
    // 0x2330fc: 0x0  nop
    ctx->pc = 0x2330fcu;
    // NOP
    ctx->pc = 0x233100u;
}

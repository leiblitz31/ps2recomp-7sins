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

// Function: sub_002334A0
// Address: 0x2334a0 - 0x233530
void sub_002334A0_0x2334a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002334A0_0x2334a0");
#endif

    switch (ctx->pc) {
        case 0x2334a0u: goto label_2334a0;
        case 0x2334a4u: goto label_2334a4;
        case 0x2334a8u: goto label_2334a8;
        case 0x2334acu: goto label_2334ac;
        case 0x2334b0u: goto label_2334b0;
        case 0x2334b4u: goto label_2334b4;
        case 0x2334b8u: goto label_2334b8;
        case 0x2334bcu: goto label_2334bc;
        case 0x2334c0u: goto label_2334c0;
        case 0x2334c4u: goto label_2334c4;
        case 0x2334c8u: goto label_2334c8;
        case 0x2334ccu: goto label_2334cc;
        case 0x2334d0u: goto label_2334d0;
        case 0x2334d4u: goto label_2334d4;
        case 0x2334d8u: goto label_2334d8;
        case 0x2334dcu: goto label_2334dc;
        case 0x2334e0u: goto label_2334e0;
        case 0x2334e4u: goto label_2334e4;
        case 0x2334e8u: goto label_2334e8;
        case 0x2334ecu: goto label_2334ec;
        case 0x2334f0u: goto label_2334f0;
        case 0x2334f4u: goto label_2334f4;
        case 0x2334f8u: goto label_2334f8;
        case 0x2334fcu: goto label_2334fc;
        case 0x233500u: goto label_233500;
        case 0x233504u: goto label_233504;
        case 0x233508u: goto label_233508;
        case 0x23350cu: goto label_23350c;
        case 0x233510u: goto label_233510;
        case 0x233514u: goto label_233514;
        case 0x233518u: goto label_233518;
        case 0x23351cu: goto label_23351c;
        case 0x233520u: goto label_233520;
        case 0x233524u: goto label_233524;
        case 0x233528u: goto label_233528;
        case 0x23352cu: goto label_23352c;
        default: break;
    }

    ctx->pc = 0x2334a0u;

label_2334a0:
    // 0x2334a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2334a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2334a4:
    // 0x2334a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2334a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2334a8:
    // 0x2334a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2334a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2334ac:
    // 0x2334ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2334acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_2334b0:
    // 0x2334b0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2334b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_2334b4:
    // 0x2334b4: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x2334b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
label_2334b8:
    // 0x2334b8: 0x8f82bb8c  lw          $v0, -0x4474($gp)
    ctx->pc = 0x2334b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949772)));
label_2334bc:
    // 0x2334bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2334c0:
    if (ctx->pc == 0x2334C0u) {
        ctx->pc = 0x2334C4u;
        goto label_2334c4;
    }
    ctx->pc = 0x2334BCu;
    {
        const bool branch_taken_0x2334bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2334bc) {
            ctx->pc = 0x2334F0u;
            goto label_2334f0;
        }
    }
    ctx->pc = 0x2334C4u;
label_2334c4:
    // 0x2334c4: 0x8f84bb8c  lw          $a0, -0x4474($gp)
    ctx->pc = 0x2334c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949772)));
label_2334c8:
    // 0x2334c8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2334c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2334cc:
    // 0x2334cc: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x2334ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2334d0:
    // 0x2334d0: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x2334d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2334d4:
    // 0x2334d4: 0x8fa80040  lw          $t0, 0x40($sp)
    ctx->pc = 0x2334d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2334d8:
    // 0x2334d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2334d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2334dc:
    // 0x2334dc: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2334dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2334e0:
    // 0x2334e0: 0x320f809  jalr        $t9
label_2334e4:
    if (ctx->pc == 0x2334E4u) {
        ctx->pc = 0x2334E8u;
        goto label_2334e8;
    }
    ctx->pc = 0x2334E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2334E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2334E0u, 0x2334E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2334E8u;
label_2334e8:
    // 0x2334e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2334ec:
    if (ctx->pc == 0x2334ECu) {
        ctx->pc = 0x2334F0u;
        goto label_2334f0;
    }
    ctx->pc = 0x2334E8u;
    {
        const bool branch_taken_0x2334e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2334e8) {
            ctx->pc = 0x2334F4u;
            goto label_2334f4;
        }
    }
    ctx->pc = 0x2334F0u;
label_2334f0:
    // 0x2334f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2334f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2334f4:
    // 0x2334f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2334f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2334f8:
    // 0x2334f8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2334f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2334fc:
    // 0x2334fc: 0x3e00008  jr          $ra
label_233500:
    if (ctx->pc == 0x233500u) {
        ctx->pc = 0x233504u;
        goto label_233504;
    }
    ctx->pc = 0x2334FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2334FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233504u;
label_233504:
    // 0x233504: 0x0  nop
    ctx->pc = 0x233504u;
    // NOP
label_233508:
    // 0x233508: 0x0  nop
    ctx->pc = 0x233508u;
    // NOP
label_23350c:
    // 0x23350c: 0x0  nop
    ctx->pc = 0x23350cu;
    // NOP
label_233510:
    // 0x233510: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x233510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_233514:
    // 0x233514: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x233514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233518:
    // 0x233518: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x233518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_23351c:
    // 0x23351c: 0x3e00008  jr          $ra
label_233520:
    if (ctx->pc == 0x233520u) {
        ctx->pc = 0x233524u;
        goto label_233524;
    }
    ctx->pc = 0x23351Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23351Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233524u;
label_233524:
    // 0x233524: 0x0  nop
    ctx->pc = 0x233524u;
    // NOP
label_233528:
    // 0x233528: 0x0  nop
    ctx->pc = 0x233528u;
    // NOP
label_23352c:
    // 0x23352c: 0x0  nop
    ctx->pc = 0x23352cu;
    // NOP
    ctx->pc = 0x233530u;
}

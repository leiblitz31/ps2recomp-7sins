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

// Function: sub_00460630
// Address: 0x460630 - 0x4606b0
void sub_00460630_0x460630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00460630_0x460630");
#endif

    switch (ctx->pc) {
        case 0x46064cu: goto label_46064c;
        case 0x460660u: goto label_460660;
        default: break;
    }

    ctx->pc = 0x460630u;

    // 0x460630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x460630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x460634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x460634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x460638: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x460638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46063c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46063cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x460640: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x460640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x460644: 0xc1180d8  jal         func_460360
    ctx->pc = 0x460644u;
    SET_GPR_U32(ctx, 31, 0x46064Cu);
    ctx->pc = 0x460360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x460360u, 0x460644u, 0x46064Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46064Cu;
label_46064c:
    // 0x46064c: 0x8f82bfa8  lw          $v0, -0x4058($gp)
    ctx->pc = 0x46064cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950824)));
    // 0x460650: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x460650u;
    {
        const bool branch_taken_0x460650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460650) {
            ctx->pc = 0x46066Cu;
            goto label_46066c;
        }
    }
    ctx->pc = 0x460658u;
    // 0x460658: 0xc1180fc  jal         func_4603F0
    ctx->pc = 0x460658u;
    SET_GPR_U32(ctx, 31, 0x460660u);
    ctx->pc = 0x4603F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4603F0u, 0x460658u, 0x460660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460660u;
label_460660:
    // 0x460660: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x460660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x460664: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x460664u;
    {
        const bool branch_taken_0x460664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x460664) {
            ctx->pc = 0x46069Cu;
            goto label_46069c;
        }
    }
    ctx->pc = 0x46066Cu;
label_46066c:
    // 0x46066c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46066cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x460670: 0xaf82bfa8  sw          $v0, -0x4058($gp)
    ctx->pc = 0x460670u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950824), GPR_U32(ctx, 2));
    // 0x460674: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x460674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x460678: 0xaf82b18c  sw          $v0, -0x4E74($gp)
    ctx->pc = 0x460678u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947212), GPR_U32(ctx, 2));
    // 0x46067c: 0xaf80bfb0  sw          $zero, -0x4050($gp)
    ctx->pc = 0x46067cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950832), GPR_U32(ctx, 0));
    // 0x460680: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x460680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x460684: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x460684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x460688: 0xac434e00  sw          $v1, 0x4E00($v0)
    ctx->pc = 0x460688u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x624E00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x624E00u, _value); } while (0);
    // 0x46068c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x46068cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x460690: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x460690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x460694: 0xac434e04  sw          $v1, 0x4E04($v0)
    ctx->pc = 0x460694u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x624E04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x624E04u, _value); } while (0);
    // 0x460698: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x460698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46069c:
    // 0x46069c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46069cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4606a0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4606a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4606a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4606A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4606A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4606ACu;
    // 0x4606ac: 0x0  nop
    ctx->pc = 0x4606acu;
    // NOP
    ctx->pc = 0x4606b0u;
}

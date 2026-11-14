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

// Function: sub_00285650
// Address: 0x285650 - 0x2856b0
void sub_00285650_0x285650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285650_0x285650");
#endif

    switch (ctx->pc) {
        case 0x285674u: goto label_285674;
        case 0x28569cu: goto label_28569c;
        default: break;
    }

    ctx->pc = 0x285650u;

    // 0x285650: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x285650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x285654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x285654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x285658: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x285658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28565c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28565cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x285660: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x285660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x285664: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x285664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285668: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x285668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28566c: 0xc0a15d4  jal         func_285750
    ctx->pc = 0x28566Cu;
    SET_GPR_U32(ctx, 31, 0x285674u);
    ctx->pc = 0x285750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285750u, 0x28566Cu, 0x285674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285674u;
label_285674:
    // 0x285674: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x285674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285678: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x285678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x28567c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x28567cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285680: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x285680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285684: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x285684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x285688: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x285688u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28568c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x28568cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x285690: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x285690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285694: 0xc0a15ac  jal         func_2856B0
    ctx->pc = 0x285694u;
    SET_GPR_U32(ctx, 31, 0x28569Cu);
    ctx->pc = 0x2856B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2856B0u, 0x285694u, 0x28569Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28569Cu;
label_28569c:
    // 0x28569c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28569cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2856a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2856a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2856a4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2856a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2856a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2856A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2856A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2856B0u;
}

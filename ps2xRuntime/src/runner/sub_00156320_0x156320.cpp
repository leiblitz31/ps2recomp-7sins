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

// Function: sub_00156320
// Address: 0x156320 - 0x156380
void sub_00156320_0x156320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156320_0x156320");
#endif

    switch (ctx->pc) {
        case 0x156344u: goto label_156344;
        case 0x15636cu: goto label_15636c;
        default: break;
    }

    ctx->pc = 0x156320u;

    // 0x156320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x156320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x156324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156328: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x156328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15632c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x15632cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x156330: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x156330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x156334: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x156334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156338: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x156338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15633c: 0xc055908  jal         func_156420
    ctx->pc = 0x15633Cu;
    SET_GPR_U32(ctx, 31, 0x156344u);
    ctx->pc = 0x156420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156420u, 0x15633Cu, 0x156344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156344u;
label_156344:
    // 0x156344: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x156344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156348: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x156348u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x15634c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15634cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156350: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x156350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156354: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x156354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x156358: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x156358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15635c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x15635cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x156360: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x156360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156364: 0xc0558e0  jal         func_156380
    ctx->pc = 0x156364u;
    SET_GPR_U32(ctx, 31, 0x15636Cu);
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x156364u, 0x15636Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15636Cu;
label_15636c:
    // 0x15636c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15636cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156374: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x156374u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x156378: 0x3e00008  jr          $ra
    ctx->pc = 0x156378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156380u;
}

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

// Function: sub_00481AA0
// Address: 0x481aa0 - 0x481b30
void sub_00481AA0_0x481aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481AA0_0x481aa0");
#endif

    switch (ctx->pc) {
        case 0x481accu: goto label_481acc;
        case 0x481ad8u: goto label_481ad8;
        case 0x481aecu: goto label_481aec;
        case 0x481afcu: goto label_481afc;
        default: break;
    }

    ctx->pc = 0x481aa0u;

    // 0x481aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x481aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x481aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x481aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x481aa8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x481aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x481aac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x481aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481ab0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x481ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x481ab4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x481ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481ab8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x481ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x481abc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x481abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481ac0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x481ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x481ac4: 0xc1207f8  jal         func_481FE0
    ctx->pc = 0x481AC4u;
    SET_GPR_U32(ctx, 31, 0x481ACCu);
    ctx->pc = 0x481FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481FE0u, 0x481AC4u, 0x481ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481ACCu;
label_481acc:
    // 0x481acc: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x481accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x481ad0: 0xc1207f0  jal         func_481FC0
    ctx->pc = 0x481AD0u;
    SET_GPR_U32(ctx, 31, 0x481AD8u);
    ctx->pc = 0x481FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481FC0u, 0x481AD0u, 0x481AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481AD8u;
label_481ad8:
    // 0x481ad8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x481ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481adc: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x481adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x481ae0: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x481ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x481ae4: 0xc1207b0  jal         func_481EC0
    ctx->pc = 0x481AE4u;
    SET_GPR_U32(ctx, 31, 0x481AECu);
    ctx->pc = 0x481EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481EC0u, 0x481AE4u, 0x481AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481AECu;
label_481aec:
    // 0x481aec: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x481aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x481af0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x481af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x481af4: 0xc12079c  jal         func_481E70
    ctx->pc = 0x481AF4u;
    SET_GPR_U32(ctx, 31, 0x481AFCu);
    ctx->pc = 0x481E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481E70u, 0x481AF4u, 0x481AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481AFCu;
label_481afc:
    // 0x481afc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x481afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481b00: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x481b00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x481b04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x481b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481b08: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x481b08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x481b0c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x481b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481b10: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x481b10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x481b14: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x481b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x481b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x481b1c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x481b1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x481b20: 0x3e00008  jr          $ra
    ctx->pc = 0x481B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x481B28u;
    // 0x481b28: 0x0  nop
    ctx->pc = 0x481b28u;
    // NOP
    // 0x481b2c: 0x0  nop
    ctx->pc = 0x481b2cu;
    // NOP
    ctx->pc = 0x481b30u;
}

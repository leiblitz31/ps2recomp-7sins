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

// Function: sub_00278D70
// Address: 0x278d70 - 0x278df0
void sub_00278D70_0x278d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278D70_0x278d70");
#endif

    switch (ctx->pc) {
        case 0x278da4u: goto label_278da4;
        case 0x278db4u: goto label_278db4;
        case 0x278dd4u: goto label_278dd4;
        default: break;
    }

    ctx->pc = 0x278d70u;

    // 0x278d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x278d74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278d78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x278d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x278d7c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x278d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x278d80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278d84: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x278D84u;
    {
        const bool branch_taken_0x278d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x278d84) {
            ctx->pc = 0x278DD4u;
            goto label_278dd4;
        }
    }
    ctx->pc = 0x278D8Cu;
    // 0x278d8c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x278d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278d90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278d94: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x278d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278d98: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x278d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x278d9c: 0xc09e3a8  jal         func_278EA0
    ctx->pc = 0x278D9Cu;
    SET_GPR_U32(ctx, 31, 0x278DA4u);
    ctx->pc = 0x278EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278EA0u, 0x278D9Cu, 0x278DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278DA4u;
label_278da4:
    // 0x278da4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x278da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278da8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x278da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278dac: 0xc09e37c  jal         func_278DF0
    ctx->pc = 0x278DACu;
    SET_GPR_U32(ctx, 31, 0x278DB4u);
    ctx->pc = 0x278DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278DF0u, 0x278DACu, 0x278DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278DB4u;
label_278db4:
    // 0x278db4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x278db4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278db8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x278db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x278dbc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x278dbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x278dc0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x278DC0u;
    {
        const bool branch_taken_0x278dc0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x278dc0) {
            ctx->pc = 0x278DD4u;
            goto label_278dd4;
        }
    }
    ctx->pc = 0x278DC8u;
    // 0x278dc8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x278dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278dcc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x278DCCu;
    SET_GPR_U32(ctx, 31, 0x278DD4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x278DCCu, 0x278DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278DD4u;
label_278dd4:
    // 0x278dd4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278dd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278ddc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x278ddcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x278de0: 0x3e00008  jr          $ra
    ctx->pc = 0x278DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278DE8u;
    // 0x278de8: 0x0  nop
    ctx->pc = 0x278de8u;
    // NOP
    // 0x278dec: 0x0  nop
    ctx->pc = 0x278decu;
    // NOP
    ctx->pc = 0x278df0u;
}

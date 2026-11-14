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

// Function: sub_00299CC0
// Address: 0x299cc0 - 0x299d30
void sub_00299CC0_0x299cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299CC0_0x299cc0");
#endif

    switch (ctx->pc) {
        case 0x299cd8u: goto label_299cd8;
        case 0x299d10u: goto label_299d10;
        default: break;
    }

    ctx->pc = 0x299cc0u;

    // 0x299cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x299cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x299cc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x299cc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x299cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x299ccc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x299cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299cd0: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x299CD0u;
    SET_GPR_U32(ctx, 31, 0x299CD8u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x299CD0u, 0x299CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299CD8u;
label_299cd8:
    // 0x299cd8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x299cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x299cdc: 0x24636160  addiu       $v1, $v1, 0x6160
    ctx->pc = 0x299cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24928));
    // 0x299ce0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299ce4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x299ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x299ce8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299cec: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x299cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x299cf0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x299cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x299cf4: 0x24a59f50  addiu       $a1, $a1, -0x60B0
    ctx->pc = 0x299cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942544));
    // 0x299cf8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x299cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x299cfc: 0x24c69d30  addiu       $a2, $a2, -0x62D0
    ctx->pc = 0x299cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942000));
    // 0x299d00: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x299d00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x299d04: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x299d04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x299d08: 0xc0b9ff4  jal         func_2E7FD0
    ctx->pc = 0x299D08u;
    SET_GPR_U32(ctx, 31, 0x299D10u);
    ctx->pc = 0x2E7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7FD0u, 0x299D08u, 0x299D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299D10u;
label_299d10:
    // 0x299d10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299d14: 0xaf82bc24  sw          $v0, -0x43DC($gp)
    ctx->pc = 0x299d14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949924), GPR_U32(ctx, 2));
    // 0x299d18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299d1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299d20: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x299d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x299d24: 0x3e00008  jr          $ra
    ctx->pc = 0x299D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299D2Cu;
    // 0x299d2c: 0x0  nop
    ctx->pc = 0x299d2cu;
    // NOP
    ctx->pc = 0x299d30u;
}

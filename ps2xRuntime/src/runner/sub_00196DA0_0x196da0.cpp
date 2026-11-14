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

// Function: sub_00196DA0
// Address: 0x196da0 - 0x196f00
void sub_00196DA0_0x196da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196DA0_0x196da0");
#endif

    switch (ctx->pc) {
        case 0x196dc4u: goto label_196dc4;
        case 0x196de0u: goto label_196de0;
        case 0x196e00u: goto label_196e00;
        case 0x196e20u: goto label_196e20;
        case 0x196e40u: goto label_196e40;
        case 0x196e60u: goto label_196e60;
        case 0x196e80u: goto label_196e80;
        case 0x196ea0u: goto label_196ea0;
        case 0x196ec0u: goto label_196ec0;
        case 0x196ee0u: goto label_196ee0;
        default: break;
    }

    ctx->pc = 0x196da0u;

    // 0x196da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x196da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x196da4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x196da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x196da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x196da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x196dac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x196dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x196db0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x196db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196db4: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x196db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x196db8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x196db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x196dbc: 0xc065bc0  jal         func_196F00
    ctx->pc = 0x196DBCu;
    SET_GPR_U32(ctx, 31, 0x196DC4u);
    ctx->pc = 0x196F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196F00u, 0x196DBCu, 0x196DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196DC4u;
label_196dc4:
    // 0x196dc4: 0x3c10001a  lui         $s0, 0x1A
    ctx->pc = 0x196dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)26 << 16));
    // 0x196dc8: 0x2610a570  addiu       $s0, $s0, -0x5A90
    ctx->pc = 0x196dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944112));
    // 0x196dcc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x196dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196dd0: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x196dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x196dd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x196dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196dd8: 0xc0656f8  jal         func_195BE0
    ctx->pc = 0x196DD8u;
    SET_GPR_U32(ctx, 31, 0x196DE0u);
    ctx->pc = 0x195BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195BE0u, 0x196DD8u, 0x196DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196DE0u;
label_196de0:
    // 0x196de0: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x196de0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x196de4: 0x3c10001a  lui         $s0, 0x1A
    ctx->pc = 0x196de4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)26 << 16));
    // 0x196de8: 0x2610a710  addiu       $s0, $s0, -0x58F0
    ctx->pc = 0x196de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944528));
    // 0x196dec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x196decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196df0: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x196df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x196df4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x196df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196df8: 0xc0656f8  jal         func_195BE0
    ctx->pc = 0x196DF8u;
    SET_GPR_U32(ctx, 31, 0x196E00u);
    ctx->pc = 0x195BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195BE0u, 0x196DF8u, 0x196E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E00u;
label_196e00:
    // 0x196e00: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x196e00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x196e04: 0x3c10001a  lui         $s0, 0x1A
    ctx->pc = 0x196e04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)26 << 16));
    // 0x196e08: 0x2610a890  addiu       $s0, $s0, -0x5770
    ctx->pc = 0x196e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944912));
    // 0x196e0c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x196e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196e10: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x196e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x196e14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x196e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196e18: 0xc0656f8  jal         func_195BE0
    ctx->pc = 0x196E18u;
    SET_GPR_U32(ctx, 31, 0x196E20u);
    ctx->pc = 0x195BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195BE0u, 0x196E18u, 0x196E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E20u;
label_196e20:
    // 0x196e20: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x196e20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x196e24: 0x3c10001a  lui         $s0, 0x1A
    ctx->pc = 0x196e24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)26 << 16));
    // 0x196e28: 0x2610aa60  addiu       $s0, $s0, -0x55A0
    ctx->pc = 0x196e28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945376));
    // 0x196e2c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x196e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196e30: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x196e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x196e34: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x196e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x196e38: 0xc0656f8  jal         func_195BE0
    ctx->pc = 0x196E38u;
    SET_GPR_U32(ctx, 31, 0x196E40u);
    ctx->pc = 0x195BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195BE0u, 0x196E38u, 0x196E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E40u;
label_196e40:
    // 0x196e40: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x196e40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x196e44: 0x3c10001a  lui         $s0, 0x1A
    ctx->pc = 0x196e44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)26 << 16));
    // 0x196e48: 0x2610ac20  addiu       $s0, $s0, -0x53E0
    ctx->pc = 0x196e48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945824));
    // 0x196e4c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x196e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196e50: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x196e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x196e54: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x196e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196e58: 0xc0656f8  jal         func_195BE0
    ctx->pc = 0x196E58u;
    SET_GPR_U32(ctx, 31, 0x196E60u);
    ctx->pc = 0x195BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195BE0u, 0x196E58u, 0x196E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E60u;
label_196e60:
    // 0x196e60: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x196e60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x196e64: 0x3c10001a  lui         $s0, 0x1A
    ctx->pc = 0x196e64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)26 << 16));
    // 0x196e68: 0x2610ade0  addiu       $s0, $s0, -0x5220
    ctx->pc = 0x196e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946272));
    // 0x196e6c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x196e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196e70: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x196e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x196e74: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x196e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x196e78: 0xc0656f8  jal         func_195BE0
    ctx->pc = 0x196E78u;
    SET_GPR_U32(ctx, 31, 0x196E80u);
    ctx->pc = 0x195BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195BE0u, 0x196E78u, 0x196E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E80u;
label_196e80:
    // 0x196e80: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x196e80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x196e84: 0x3c10001a  lui         $s0, 0x1A
    ctx->pc = 0x196e84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)26 << 16));
    // 0x196e88: 0x2610afe0  addiu       $s0, $s0, -0x5020
    ctx->pc = 0x196e88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946784));
    // 0x196e8c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x196e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196e90: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x196e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x196e94: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x196e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x196e98: 0xc0656f8  jal         func_195BE0
    ctx->pc = 0x196E98u;
    SET_GPR_U32(ctx, 31, 0x196EA0u);
    ctx->pc = 0x195BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195BE0u, 0x196E98u, 0x196EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196EA0u;
label_196ea0:
    // 0x196ea0: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x196ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x196ea4: 0x3c10001a  lui         $s0, 0x1A
    ctx->pc = 0x196ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)26 << 16));
    // 0x196ea8: 0x2610b1e0  addiu       $s0, $s0, -0x4E20
    ctx->pc = 0x196ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947296));
    // 0x196eac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x196eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196eb0: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x196eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x196eb4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x196eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x196eb8: 0xc0656f8  jal         func_195BE0
    ctx->pc = 0x196EB8u;
    SET_GPR_U32(ctx, 31, 0x196EC0u);
    ctx->pc = 0x195BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195BE0u, 0x196EB8u, 0x196EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196EC0u;
label_196ec0:
    // 0x196ec0: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x196ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x196ec4: 0x3c10001a  lui         $s0, 0x1A
    ctx->pc = 0x196ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)26 << 16));
    // 0x196ec8: 0x2610b330  addiu       $s0, $s0, -0x4CD0
    ctx->pc = 0x196ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947632));
    // 0x196ecc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x196eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196ed0: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x196ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x196ed4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x196ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x196ed8: 0xc0656f8  jal         func_195BE0
    ctx->pc = 0x196ED8u;
    SET_GPR_U32(ctx, 31, 0x196EE0u);
    ctx->pc = 0x195BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195BE0u, 0x196ED8u, 0x196EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196EE0u;
label_196ee0:
    // 0x196ee0: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x196ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x196ee4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x196ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196ee8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196eec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x196eecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x196ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x196EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196EF8u;
    // 0x196ef8: 0x0  nop
    ctx->pc = 0x196ef8u;
    // NOP
    // 0x196efc: 0x0  nop
    ctx->pc = 0x196efcu;
    // NOP
    ctx->pc = 0x196f00u;
}

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

// Function: sub_001F6DA0
// Address: 0x1f6da0 - 0x1f6ef0
void sub_001F6DA0_0x1f6da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6DA0_0x1f6da0");
#endif

    switch (ctx->pc) {
        case 0x1f6decu: goto label_1f6dec;
        case 0x1f6e30u: goto label_1f6e30;
        case 0x1f6e60u: goto label_1f6e60;
        case 0x1f6e74u: goto label_1f6e74;
        case 0x1f6eacu: goto label_1f6eac;
        case 0x1f6ebcu: goto label_1f6ebc;
        case 0x1f6edcu: goto label_1f6edc;
        default: break;
    }

    ctx->pc = 0x1f6da0u;

    // 0x1f6da0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f6da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f6da4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f6da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f6da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f6da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f6dac: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1f6dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1f6db0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6db0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6db4: 0x0  nop
    ctx->pc = 0x1f6db4u;
    // NOP
    // 0x1f6db8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1f6db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1f6dbc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6dc0: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x1f6dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1f6dc4: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x1f6dc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f6dc8: 0x14200044  bnez        $at, . + 4 + (0x44 << 2)
    ctx->pc = 0x1F6DC8u;
    {
        const bool branch_taken_0x1f6dc8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6dc8) {
            ctx->pc = 0x1F6EDCu;
            goto label_1f6edc;
        }
    }
    ctx->pc = 0x1F6DD0u;
    // 0x1f6dd0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f6dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6dd4: 0xc44002f4  lwc1        $f0, 0x2F4($v0)
    ctx->pc = 0x1f6dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6dd8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1f6dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1f6ddc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6de0: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1f6de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6de4: 0xc064d10  jal         func_193440
    ctx->pc = 0x1F6DE4u;
    SET_GPR_U32(ctx, 31, 0x1F6DECu);
    ctx->pc = 0x193440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193440u, 0x1F6DE4u, 0x1F6DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6DECu;
label_1f6dec:
    // 0x1f6dec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f6decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6df0: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1f6df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1f6df4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1F6DF4u;
    {
        const bool branch_taken_0x1f6df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6df4) {
            ctx->pc = 0x1F6E68u;
            goto label_1f6e68;
        }
    }
    ctx->pc = 0x1F6DFCu;
    // 0x1f6dfc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f6dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6e00: 0x8c4200fc  lw          $v0, 0xFC($v0)
    ctx->pc = 0x1f6e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f6e04: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x1f6e04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1f6e08: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1F6E08u;
    {
        const bool branch_taken_0x1f6e08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6e08) {
            ctx->pc = 0x1F6E40u;
            goto label_1f6e40;
        }
    }
    ctx->pc = 0x1F6E10u;
    // 0x1f6e10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f6e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f6e14: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f6e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f6e18: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1f6e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1f6e1c: 0x278598e0  addiu       $a1, $gp, -0x6720
    ctx->pc = 0x1f6e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940896));
    // 0x1f6e20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f6e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6e24: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1f6e24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f6e28: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1F6E28u;
    SET_GPR_U32(ctx, 31, 0x1F6E30u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1F6E28u, 0x1F6E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6E30u;
label_1f6e30:
    // 0x1f6e30: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6e34: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x1f6e34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
    // 0x1f6e38: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F6E38u;
    {
        const bool branch_taken_0x1f6e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6e38) {
            ctx->pc = 0x1F6E68u;
            goto label_1f6e68;
        }
    }
    ctx->pc = 0x1F6E40u;
label_1f6e40:
    // 0x1f6e40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f6e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f6e44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f6e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f6e48: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1f6e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1f6e4c: 0x278598e8  addiu       $a1, $gp, -0x6718
    ctx->pc = 0x1f6e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940904));
    // 0x1f6e50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f6e50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6e54: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1f6e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f6e58: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1F6E58u;
    SET_GPR_U32(ctx, 31, 0x1F6E60u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1F6E58u, 0x1F6E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6E60u;
label_1f6e60:
    // 0x1f6e60: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6e64: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x1f6e64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_1f6e68:
    // 0x1f6e68: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6e6c: 0xc064d5c  jal         func_193570
    ctx->pc = 0x1F6E6Cu;
    SET_GPR_U32(ctx, 31, 0x1F6E74u);
    ctx->pc = 0x193570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193570u, 0x1F6E6Cu, 0x1F6E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6E74u;
label_1f6e74:
    // 0x1f6e74: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6e78: 0x8c6300fc  lw          $v1, 0xFC($v1)
    ctx->pc = 0x1f6e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x1f6e7c: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x1f6e7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1f6e80: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F6E80u;
    {
        const bool branch_taken_0x1f6e80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6e80) {
            ctx->pc = 0x1F6EDCu;
            goto label_1f6edc;
        }
    }
    ctx->pc = 0x1F6E88u;
    // 0x1f6e88: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f6e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6e8c: 0x8c4200fc  lw          $v0, 0xFC($v0)
    ctx->pc = 0x1f6e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f6e90: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x1f6e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f6e94: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f6e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6e98: 0x244402fc  addiu       $a0, $v0, 0x2FC
    ctx->pc = 0x1f6e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 764));
    // 0x1f6e9c: 0x278598f0  addiu       $a1, $gp, -0x6710
    ctx->pc = 0x1f6e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940912));
    // 0x1f6ea0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f6ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ea4: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x1F6EA4u;
    SET_GPR_U32(ctx, 31, 0x1F6EACu);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x1F6EA4u, 0x1F6EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6EACu;
label_1f6eac:
    // 0x1f6eac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f6eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6eb0: 0x244402fc  addiu       $a0, $v0, 0x2FC
    ctx->pc = 0x1f6eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 764));
    // 0x1f6eb4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1F6EB4u;
    SET_GPR_U32(ctx, 31, 0x1F6EBCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1F6EB4u, 0x1F6EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6EBCu;
label_1f6ebc:
    // 0x1f6ebc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f6ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1f6ec0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f6ec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f6ec4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1f6ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1f6ec8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f6ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ecc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f6eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ed0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1f6ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f6ed4: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1F6ED4u;
    SET_GPR_U32(ctx, 31, 0x1F6EDCu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1F6ED4u, 0x1F6EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6EDCu;
label_1f6edc:
    // 0x1f6edc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f6edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6ee0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f6ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6ee4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1f6ee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f6ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6EF0u;
}

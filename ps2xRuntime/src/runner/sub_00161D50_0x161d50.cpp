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

// Function: sub_00161D50
// Address: 0x161d50 - 0x161e90
void sub_00161D50_0x161d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161D50_0x161d50");
#endif

    ctx->pc = 0x161d50u;

    // 0x161d50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x161d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x161d54: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x161d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x161d58: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161d5c: 0x904200a0  lbu         $v0, 0xA0($v0)
    ctx->pc = 0x161d5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x161d60: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x161D60u;
    {
        const bool branch_taken_0x161d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161d60) {
            ctx->pc = 0x161D88u;
            goto label_161d88;
        }
    }
    ctx->pc = 0x161D68u;
    // 0x161d68: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x161d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161d6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161d70: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x161D70u;
    {
        const bool branch_taken_0x161d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x161d70) {
            ctx->pc = 0x161D88u;
            goto label_161d88;
        }
    }
    ctx->pc = 0x161D78u;
    // 0x161d78: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161d7c: 0x904200cc  lbu         $v0, 0xCC($v0)
    ctx->pc = 0x161d7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x161d80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161D80u;
    {
        const bool branch_taken_0x161d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161d80) {
            ctx->pc = 0x161D94u;
            goto label_161d94;
        }
    }
    ctx->pc = 0x161D88u;
label_161d88:
    // 0x161d88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161d8c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x161D8Cu;
    {
        const bool branch_taken_0x161d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161d8c) {
            ctx->pc = 0x161E78u;
            goto label_161e78;
        }
    }
    ctx->pc = 0x161D94u;
label_161d94:
    // 0x161d94: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161d98: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x161d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x161d9c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x161D9Cu;
    {
        const bool branch_taken_0x161d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161d9c) {
            ctx->pc = 0x161DC4u;
            goto label_161dc4;
        }
    }
    ctx->pc = 0x161DA4u;
    // 0x161da4: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161da8: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x161da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x161dac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x161dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x161db0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161DB0u;
    {
        const bool branch_taken_0x161db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x161db0) {
            ctx->pc = 0x161DC4u;
            goto label_161dc4;
        }
    }
    ctx->pc = 0x161DB8u;
    // 0x161db8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161dbc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x161DBCu;
    {
        const bool branch_taken_0x161dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161dbc) {
            ctx->pc = 0x161E78u;
            goto label_161e78;
        }
    }
    ctx->pc = 0x161DC4u;
label_161dc4:
    // 0x161dc4: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161dc8: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x161dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x161dcc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x161DCCu;
    {
        const bool branch_taken_0x161dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161dcc) {
            ctx->pc = 0x161E04u;
            goto label_161e04;
        }
    }
    ctx->pc = 0x161DD4u;
    // 0x161dd4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x161dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161dd8: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161ddc: 0xac4300c4  sw          $v1, 0xC4($v0)
    ctx->pc = 0x161ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 3));
    // 0x161de0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x161de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x161de4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161de8: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161dec: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x161decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x161df0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x161df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161df4: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161df8: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x161df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x161dfc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x161DFCu;
    {
        const bool branch_taken_0x161dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161dfc) {
            ctx->pc = 0x161E74u;
            goto label_161e74;
        }
    }
    ctx->pc = 0x161E04u;
label_161e04:
    // 0x161e04: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161e08: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x161e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x161e0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x161e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161e10: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x161E10u;
    {
        const bool branch_taken_0x161e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x161e10) {
            ctx->pc = 0x161E74u;
            goto label_161e74;
        }
    }
    ctx->pc = 0x161E18u;
    // 0x161e18: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161e1c: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x161e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x161e20: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x161e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x161e24: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x161E24u;
    {
        const bool branch_taken_0x161e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x161e24) {
            ctx->pc = 0x161E74u;
            goto label_161e74;
        }
    }
    ctx->pc = 0x161E2Cu;
    // 0x161e2c: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161e30: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x161e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x161e34: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x161e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x161e38: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x161E38u;
    {
        const bool branch_taken_0x161e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x161e38) {
            ctx->pc = 0x161E74u;
            goto label_161e74;
        }
    }
    ctx->pc = 0x161E40u;
    // 0x161e40: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x161e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x161e44: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161e48: 0xac4300c4  sw          $v1, 0xC4($v0)
    ctx->pc = 0x161e48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 3));
    // 0x161e4c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x161e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x161e50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161e50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161e54: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161e58: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x161e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x161e5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x161e5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161e60: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161e64: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x161e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x161e68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x161e68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161e6c: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161e70: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x161e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
label_161e74:
    // 0x161e74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161e78:
    // 0x161e78: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x161e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x161e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x161E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161E84u;
    // 0x161e84: 0x0  nop
    ctx->pc = 0x161e84u;
    // NOP
    // 0x161e88: 0x0  nop
    ctx->pc = 0x161e88u;
    // NOP
    // 0x161e8c: 0x0  nop
    ctx->pc = 0x161e8cu;
    // NOP
    ctx->pc = 0x161e90u;
}

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

// Function: sub_00161E90
// Address: 0x161e90 - 0x161fd0
void sub_00161E90_0x161e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161E90_0x161e90");
#endif

    ctx->pc = 0x161e90u;

    // 0x161e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x161e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x161e94: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x161e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x161e98: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161e9c: 0x904200a0  lbu         $v0, 0xA0($v0)
    ctx->pc = 0x161e9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x161ea0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x161EA0u;
    {
        const bool branch_taken_0x161ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161ea0) {
            ctx->pc = 0x161EC8u;
            goto label_161ec8;
        }
    }
    ctx->pc = 0x161EA8u;
    // 0x161ea8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x161ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161eac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161eb0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x161EB0u;
    {
        const bool branch_taken_0x161eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x161eb0) {
            ctx->pc = 0x161EC8u;
            goto label_161ec8;
        }
    }
    ctx->pc = 0x161EB8u;
    // 0x161eb8: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161ebc: 0x904200cc  lbu         $v0, 0xCC($v0)
    ctx->pc = 0x161ebcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x161ec0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161EC0u;
    {
        const bool branch_taken_0x161ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161ec0) {
            ctx->pc = 0x161ED4u;
            goto label_161ed4;
        }
    }
    ctx->pc = 0x161EC8u;
label_161ec8:
    // 0x161ec8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161ecc: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x161ECCu;
    {
        const bool branch_taken_0x161ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161ecc) {
            ctx->pc = 0x161FBCu;
            goto label_161fbc;
        }
    }
    ctx->pc = 0x161ED4u;
label_161ed4:
    // 0x161ed4: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161ed8: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x161ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x161edc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x161EDCu;
    {
        const bool branch_taken_0x161edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161edc) {
            ctx->pc = 0x161F04u;
            goto label_161f04;
        }
    }
    ctx->pc = 0x161EE4u;
    // 0x161ee4: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161ee8: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x161ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x161eec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x161eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x161ef0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161EF0u;
    {
        const bool branch_taken_0x161ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x161ef0) {
            ctx->pc = 0x161F04u;
            goto label_161f04;
        }
    }
    ctx->pc = 0x161EF8u;
    // 0x161ef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161efc: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x161EFCu;
    {
        const bool branch_taken_0x161efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161efc) {
            ctx->pc = 0x161FBCu;
            goto label_161fbc;
        }
    }
    ctx->pc = 0x161F04u;
label_161f04:
    // 0x161f04: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161f08: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x161f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x161f0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161f10: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x161F10u;
    {
        const bool branch_taken_0x161f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x161f10) {
            ctx->pc = 0x161F48u;
            goto label_161f48;
        }
    }
    ctx->pc = 0x161F18u;
    // 0x161f18: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x161f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x161f1c: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161f20: 0xac4300c4  sw          $v1, 0xC4($v0)
    ctx->pc = 0x161f20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 3));
    // 0x161f24: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x161f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x161f28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161f28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161f2c: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161f30: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x161f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x161f34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x161f34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161f38: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161f3c: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x161f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x161f40: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x161F40u;
    {
        const bool branch_taken_0x161f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161f40) {
            ctx->pc = 0x161FB8u;
            goto label_161fb8;
        }
    }
    ctx->pc = 0x161F48u;
label_161f48:
    // 0x161f48: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161f4c: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x161f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x161f50: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x161f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x161f54: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x161F54u;
    {
        const bool branch_taken_0x161f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x161f54) {
            ctx->pc = 0x161FB8u;
            goto label_161fb8;
        }
    }
    ctx->pc = 0x161F5Cu;
    // 0x161f5c: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161f60: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x161f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x161f64: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x161f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x161f68: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x161F68u;
    {
        const bool branch_taken_0x161f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x161f68) {
            ctx->pc = 0x161FB8u;
            goto label_161fb8;
        }
    }
    ctx->pc = 0x161F70u;
    // 0x161f70: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161f74: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x161f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x161f78: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x161f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x161f7c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x161F7Cu;
    {
        const bool branch_taken_0x161f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x161f7c) {
            ctx->pc = 0x161FB8u;
            goto label_161fb8;
        }
    }
    ctx->pc = 0x161F84u;
    // 0x161f84: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x161f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x161f88: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161f8c: 0xac4300c4  sw          $v1, 0xC4($v0)
    ctx->pc = 0x161f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 3));
    // 0x161f90: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x161f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x161f94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161f98: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161f9c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x161f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x161fa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x161fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161fa4: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161fa8: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x161fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x161fac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x161facu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161fb0: 0x8f82baac  lw          $v0, -0x4554($gp)
    ctx->pc = 0x161fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x161fb4: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x161fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
label_161fb8:
    // 0x161fb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161fbc:
    // 0x161fbc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x161fbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x161fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x161FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161FC8u;
    // 0x161fc8: 0x0  nop
    ctx->pc = 0x161fc8u;
    // NOP
    // 0x161fcc: 0x0  nop
    ctx->pc = 0x161fccu;
    // NOP
    ctx->pc = 0x161fd0u;
}

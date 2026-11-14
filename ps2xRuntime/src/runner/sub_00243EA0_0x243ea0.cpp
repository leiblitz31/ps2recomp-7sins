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

// Function: sub_00243EA0
// Address: 0x243ea0 - 0x243f80
void sub_00243EA0_0x243ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243EA0_0x243ea0");
#endif

    switch (ctx->pc) {
        case 0x243f10u: goto label_243f10;
        case 0x243f68u: goto label_243f68;
        default: break;
    }

    ctx->pc = 0x243ea0u;

    // 0x243ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x243ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x243ea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243ea8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x243ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x243eac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x243eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x243eb0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x243eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243eb4: 0x90630034  lbu         $v1, 0x34($v1)
    ctx->pc = 0x243eb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x243eb8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x243eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x243ebc: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x243EBCu;
    {
        const bool branch_taken_0x243ebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x243ebc) {
            ctx->pc = 0x243F18u;
            goto label_243f18;
        }
    }
    ctx->pc = 0x243EC4u;
    // 0x243ec4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x243ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243ec8: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x243ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x243ecc: 0x10030026  beq         $zero, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x243ECCu;
    {
        const bool branch_taken_0x243ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x243ecc) {
            ctx->pc = 0x243F68u;
            goto label_243f68;
        }
    }
    ctx->pc = 0x243ED4u;
    // 0x243ed4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x243ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243ed8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x243ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243edc: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x243edcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x243ee0: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x243ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x243ee4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x243ee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x243ee8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x243ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243eec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243ef0: 0x0  nop
    ctx->pc = 0x243ef0u;
    // NOP
    // 0x243ef4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x243ef4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x243ef8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x243ef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x243efc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x243efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243f00: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x243f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x243f04: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x243f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243f08: 0xc091050  jal         func_244140
    ctx->pc = 0x243F08u;
    SET_GPR_U32(ctx, 31, 0x243F10u);
    ctx->pc = 0x244140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244140u, 0x243F08u, 0x243F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243F10u;
label_243f10:
    // 0x243f10: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x243F10u;
    {
        const bool branch_taken_0x243f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243f10) {
            ctx->pc = 0x243F68u;
            goto label_243f68;
        }
    }
    ctx->pc = 0x243F18u;
label_243f18:
    // 0x243f18: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x243f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243f1c: 0x90630035  lbu         $v1, 0x35($v1)
    ctx->pc = 0x243f1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 53)));
    // 0x243f20: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x243f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x243f24: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x243F24u;
    {
        const bool branch_taken_0x243f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x243f24) {
            ctx->pc = 0x243F68u;
            goto label_243f68;
        }
    }
    ctx->pc = 0x243F2Cu;
    // 0x243f2c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x243f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243f30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x243f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243f34: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x243f34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x243f38: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x243f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x243f3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x243f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x243f40: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x243f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243f44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243f48: 0x0  nop
    ctx->pc = 0x243f48u;
    // NOP
    // 0x243f4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x243f4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x243f50: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x243f50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x243f54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x243f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243f58: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x243f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x243f5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x243f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243f60: 0xc091050  jal         func_244140
    ctx->pc = 0x243F60u;
    SET_GPR_U32(ctx, 31, 0x243F68u);
    ctx->pc = 0x244140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244140u, 0x243F60u, 0x243F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243F68u;
label_243f68:
    // 0x243f68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243f6c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x243f6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x243f70: 0x3e00008  jr          $ra
    ctx->pc = 0x243F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243F78u;
    // 0x243f78: 0x0  nop
    ctx->pc = 0x243f78u;
    // NOP
    // 0x243f7c: 0x0  nop
    ctx->pc = 0x243f7cu;
    // NOP
    ctx->pc = 0x243f80u;
}

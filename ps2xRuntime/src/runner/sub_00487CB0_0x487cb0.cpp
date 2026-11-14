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

// Function: sub_00487CB0
// Address: 0x487cb0 - 0x487de0
void sub_00487CB0_0x487cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487CB0_0x487cb0");
#endif

    switch (ctx->pc) {
        case 0x487cd4u: goto label_487cd4;
        case 0x487d00u: goto label_487d00;
        case 0x487d10u: goto label_487d10;
        case 0x487d24u: goto label_487d24;
        case 0x487dc0u: goto label_487dc0;
        case 0x487dd0u: goto label_487dd0;
        default: break;
    }

    ctx->pc = 0x487cb0u;

    // 0x487cb0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x487cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x487cb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x487cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x487cb8: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x487cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x487cbc: 0xafa600f0  sw          $a2, 0xF0($sp)
    ctx->pc = 0x487cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 6));
    // 0x487cc0: 0xa3a70100  sb          $a3, 0x100($sp)
    ctx->pc = 0x487cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 7));
    // 0x487cc4: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x487cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x487cc8: 0x24a54030  addiu       $a1, $a1, 0x4030
    ctx->pc = 0x487cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16432));
    // 0x487ccc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x487cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x487cd0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x487cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_487cd4:
    // 0x487cd4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x487cd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x487cd8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x487cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x487cdc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x487cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x487ce0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x487ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x487ce4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x487ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x487ce8: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x487CE8u;
    {
        const bool branch_taken_0x487ce8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x487ce8) {
            ctx->pc = 0x487CD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_487cd4;
        }
    }
    ctx->pc = 0x487CF0u;
    // 0x487cf0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x487cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x487cf4: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x487cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x487cf8: 0xc063f94  jal         func_18FE50
    ctx->pc = 0x487CF8u;
    SET_GPR_U32(ctx, 31, 0x487D00u);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x487CF8u, 0x487D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487D00u;
label_487d00:
    // 0x487d00: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x487d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x487d04: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x487d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x487d08: 0xc063f94  jal         func_18FE50
    ctx->pc = 0x487D08u;
    SET_GPR_U32(ctx, 31, 0x487D10u);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x487D08u, 0x487D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487D10u;
label_487d10:
    // 0x487d10: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x487d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x487d14: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x487d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x487d18: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x487d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x487d1c: 0xc103dd4  jal         func_40F750
    ctx->pc = 0x487D1Cu;
    SET_GPR_U32(ctx, 31, 0x487D24u);
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x487D1Cu, 0x487D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487D24u;
label_487d24:
    // 0x487d24: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x487d24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x487d28: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x487D28u;
    {
        const bool branch_taken_0x487d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x487d28) {
            ctx->pc = 0x487D74u;
            goto label_487d74;
        }
    }
    ctx->pc = 0x487D30u;
    // 0x487d30: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x487d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x487d34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x487d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x487d38: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x487d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x487d3c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x487d3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x487d40: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x487d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x487d44: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x487d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x487d48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x487d48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x487d4c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x487d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x487d50: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x487d50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x487d54: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x487d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x487d58: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x487d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x487d5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x487d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x487d60: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x487d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x487d64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x487d64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x487d68: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x487d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x487d6c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x487D6Cu;
    {
        const bool branch_taken_0x487d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x487d6c) {
            ctx->pc = 0x487DB0u;
            goto label_487db0;
        }
    }
    ctx->pc = 0x487D74u;
label_487d74:
    // 0x487d74: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x487d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x487d78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x487d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x487d7c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x487d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x487d80: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x487d80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x487d84: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x487d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x487d88: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x487d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x487d8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x487d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x487d90: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x487d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x487d94: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x487d94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x487d98: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x487d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x487d9c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x487d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x487da0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x487da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x487da4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x487da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x487da8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x487da8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x487dac: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x487dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_487db0:
    // 0x487db0: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x487db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x487db4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x487db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x487db8: 0xc063f94  jal         func_18FE50
    ctx->pc = 0x487DB8u;
    SET_GPR_U32(ctx, 31, 0x487DC0u);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x487DB8u, 0x487DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487DC0u;
label_487dc0:
    // 0x487dc0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x487dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x487dc4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x487dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x487dc8: 0xc063f94  jal         func_18FE50
    ctx->pc = 0x487DC8u;
    SET_GPR_U32(ctx, 31, 0x487DD0u);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x487DC8u, 0x487DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487DD0u;
label_487dd0:
    // 0x487dd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x487dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x487dd4: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x487dd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x487dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x487DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x487DE0u;
}

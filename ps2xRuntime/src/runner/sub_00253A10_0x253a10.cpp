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

// Function: sub_00253A10
// Address: 0x253a10 - 0x253b30
void sub_00253A10_0x253a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253A10_0x253a10");
#endif

    ctx->pc = 0x253a10u;

    // 0x253a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x253a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x253a14: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x253a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x253a18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x253a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253a1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x253a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253a20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x253a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x253a24: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x253a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x253a28: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x253A28u;
    {
        const bool branch_taken_0x253a28 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x253a28) {
            ctx->pc = 0x253A3Cu;
            goto label_253a3c;
        }
    }
    ctx->pc = 0x253A30u;
    // 0x253a30: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x253A30u;
    {
        const bool branch_taken_0x253a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253a30) {
            ctx->pc = 0x253A3Cu;
            goto label_253a3c;
        }
    }
    ctx->pc = 0x253A38u;
    // 0x253a38: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x253a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_253a3c:
    // 0x253a3c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x253A3Cu;
    {
        const bool branch_taken_0x253a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253a3c) {
            ctx->pc = 0x253AB8u;
            goto label_253ab8;
        }
    }
    ctx->pc = 0x253A44u;
    // 0x253a44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x253a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253a48: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x253a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x253a4c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x253A4Cu;
    {
        const bool branch_taken_0x253a4c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x253a4c) {
            ctx->pc = 0x253A68u;
            goto label_253a68;
        }
    }
    ctx->pc = 0x253A54u;
    // 0x253a54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253a54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253a58: 0x0  nop
    ctx->pc = 0x253a58u;
    // NOP
    // 0x253a5c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x253a5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x253a60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x253A60u;
    {
        const bool branch_taken_0x253a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253a60) {
            ctx->pc = 0x253A84u;
            goto label_253a84;
        }
    }
    ctx->pc = 0x253A68u;
label_253a68:
    // 0x253a68: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x253a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x253a6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x253a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x253a70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x253a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x253a74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x253a74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253a78: 0x0  nop
    ctx->pc = 0x253a78u;
    // NOP
    // 0x253a7c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x253a7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x253a80: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x253a80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_253a84:
    // 0x253a84: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x253a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x253a88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253a8c: 0x0  nop
    ctx->pc = 0x253a8cu;
    // NOP
    // 0x253a90: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x253a90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x253a94: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x253a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x253a98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253a9c: 0x0  nop
    ctx->pc = 0x253a9cu;
    // NOP
    // 0x253aa0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x253aa0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x253aa4: 0x0  nop
    ctx->pc = 0x253aa4u;
    // NOP
    // 0x253aa8: 0x0  nop
    ctx->pc = 0x253aa8u;
    // NOP
    // 0x253aac: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x253aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x253ab0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x253AB0u;
    {
        const bool branch_taken_0x253ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253ab0) {
            ctx->pc = 0x253B1Cu;
            goto label_253b1c;
        }
    }
    ctx->pc = 0x253AB8u;
label_253ab8:
    // 0x253ab8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x253ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253abc: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x253abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x253ac0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x253AC0u;
    {
        const bool branch_taken_0x253ac0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x253ac0) {
            ctx->pc = 0x253ADCu;
            goto label_253adc;
        }
    }
    ctx->pc = 0x253AC8u;
    // 0x253ac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253acc: 0x0  nop
    ctx->pc = 0x253accu;
    // NOP
    // 0x253ad0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x253ad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x253ad4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x253AD4u;
    {
        const bool branch_taken_0x253ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253ad4) {
            ctx->pc = 0x253AF8u;
            goto label_253af8;
        }
    }
    ctx->pc = 0x253ADCu;
label_253adc:
    // 0x253adc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x253adcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x253ae0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x253ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x253ae4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x253ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x253ae8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x253ae8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253aec: 0x0  nop
    ctx->pc = 0x253aecu;
    // NOP
    // 0x253af0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x253af0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x253af4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x253af4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_253af8:
    // 0x253af8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x253af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x253afc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253afcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253b00: 0x0  nop
    ctx->pc = 0x253b00u;
    // NOP
    // 0x253b04: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x253b04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x253b08: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x253b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x253b0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253b10: 0x0  nop
    ctx->pc = 0x253b10u;
    // NOP
    // 0x253b14: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x253b14u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x253b18: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x253b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_253b1c:
    // 0x253b1c: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x253b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253b20: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x253b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x253b24: 0x3e00008  jr          $ra
    ctx->pc = 0x253B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253B2Cu;
    // 0x253b2c: 0x0  nop
    ctx->pc = 0x253b2cu;
    // NOP
    ctx->pc = 0x253b30u;
}

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

// Function: sub_00253B30
// Address: 0x253b30 - 0x253c50
void sub_00253B30_0x253b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253B30_0x253b30");
#endif

    ctx->pc = 0x253b30u;

    // 0x253b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x253b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x253b34: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x253b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x253b38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x253b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253b3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x253b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253b40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x253b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x253b44: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x253b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x253b48: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x253B48u;
    {
        const bool branch_taken_0x253b48 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x253b48) {
            ctx->pc = 0x253B5Cu;
            goto label_253b5c;
        }
    }
    ctx->pc = 0x253B50u;
    // 0x253b50: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x253B50u;
    {
        const bool branch_taken_0x253b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253b50) {
            ctx->pc = 0x253B5Cu;
            goto label_253b5c;
        }
    }
    ctx->pc = 0x253B58u;
    // 0x253b58: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x253b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_253b5c:
    // 0x253b5c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x253B5Cu;
    {
        const bool branch_taken_0x253b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253b5c) {
            ctx->pc = 0x253BD8u;
            goto label_253bd8;
        }
    }
    ctx->pc = 0x253B64u;
    // 0x253b64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x253b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253b68: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x253b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x253b6c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x253B6Cu;
    {
        const bool branch_taken_0x253b6c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x253b6c) {
            ctx->pc = 0x253B88u;
            goto label_253b88;
        }
    }
    ctx->pc = 0x253B74u;
    // 0x253b74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253b78: 0x0  nop
    ctx->pc = 0x253b78u;
    // NOP
    // 0x253b7c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x253b7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x253b80: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x253B80u;
    {
        const bool branch_taken_0x253b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253b80) {
            ctx->pc = 0x253BA4u;
            goto label_253ba4;
        }
    }
    ctx->pc = 0x253B88u;
label_253b88:
    // 0x253b88: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x253b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x253b8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x253b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x253b90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x253b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x253b94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x253b94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253b98: 0x0  nop
    ctx->pc = 0x253b98u;
    // NOP
    // 0x253b9c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x253b9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x253ba0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x253ba0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_253ba4:
    // 0x253ba4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x253ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x253ba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253bac: 0x0  nop
    ctx->pc = 0x253bacu;
    // NOP
    // 0x253bb0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x253bb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x253bb4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x253bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x253bb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253bbc: 0x0  nop
    ctx->pc = 0x253bbcu;
    // NOP
    // 0x253bc0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x253bc0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x253bc4: 0x0  nop
    ctx->pc = 0x253bc4u;
    // NOP
    // 0x253bc8: 0x0  nop
    ctx->pc = 0x253bc8u;
    // NOP
    // 0x253bcc: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x253bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x253bd0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x253BD0u;
    {
        const bool branch_taken_0x253bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253bd0) {
            ctx->pc = 0x253C3Cu;
            goto label_253c3c;
        }
    }
    ctx->pc = 0x253BD8u;
label_253bd8:
    // 0x253bd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x253bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253bdc: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x253bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x253be0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x253BE0u;
    {
        const bool branch_taken_0x253be0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x253be0) {
            ctx->pc = 0x253BFCu;
            goto label_253bfc;
        }
    }
    ctx->pc = 0x253BE8u;
    // 0x253be8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253bec: 0x0  nop
    ctx->pc = 0x253becu;
    // NOP
    // 0x253bf0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x253bf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x253bf4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x253BF4u;
    {
        const bool branch_taken_0x253bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253bf4) {
            ctx->pc = 0x253C18u;
            goto label_253c18;
        }
    }
    ctx->pc = 0x253BFCu;
label_253bfc:
    // 0x253bfc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x253bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x253c00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x253c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x253c04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x253c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x253c08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x253c08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253c0c: 0x0  nop
    ctx->pc = 0x253c0cu;
    // NOP
    // 0x253c10: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x253c10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x253c14: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x253c14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_253c18:
    // 0x253c18: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x253c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x253c1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253c20: 0x0  nop
    ctx->pc = 0x253c20u;
    // NOP
    // 0x253c24: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x253c24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x253c28: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x253c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x253c2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253c30: 0x0  nop
    ctx->pc = 0x253c30u;
    // NOP
    // 0x253c34: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x253c34u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x253c38: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x253c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_253c3c:
    // 0x253c3c: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x253c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253c40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x253c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x253c44: 0x3e00008  jr          $ra
    ctx->pc = 0x253C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253C4Cu;
    // 0x253c4c: 0x0  nop
    ctx->pc = 0x253c4cu;
    // NOP
    ctx->pc = 0x253c50u;
}

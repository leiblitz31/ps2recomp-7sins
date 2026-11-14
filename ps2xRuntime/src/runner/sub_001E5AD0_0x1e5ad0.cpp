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

// Function: sub_001E5AD0
// Address: 0x1e5ad0 - 0x1e5c70
void sub_001E5AD0_0x1e5ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5AD0_0x1e5ad0");
#endif

    switch (ctx->pc) {
        case 0x1e5b30u: goto label_1e5b30;
        case 0x1e5b60u: goto label_1e5b60;
        case 0x1e5b6cu: goto label_1e5b6c;
        case 0x1e5b9cu: goto label_1e5b9c;
        case 0x1e5c18u: goto label_1e5c18;
        case 0x1e5c2cu: goto label_1e5c2c;
        case 0x1e5c40u: goto label_1e5c40;
        case 0x1e5c50u: goto label_1e5c50;
        default: break;
    }

    ctx->pc = 0x1e5ad0u;

    // 0x1e5ad0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e5ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e5ad4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e5ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e5ad8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e5ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e5adc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e5adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e5ae0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1e5ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1e5ae4: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1e5ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x1e5ae8: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x1e5ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x1e5aec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e5aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e5af0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5AF0u;
    {
        const bool branch_taken_0x1e5af0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e5af0) {
            ctx->pc = 0x1E5B04u;
            goto label_1e5b04;
        }
    }
    ctx->pc = 0x1E5AF8u;
    // 0x1e5af8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e5af8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5afc: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1E5AFCu;
    {
        const bool branch_taken_0x1e5afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5afc) {
            ctx->pc = 0x1E5C58u;
            goto label_1e5c58;
        }
    }
    ctx->pc = 0x1E5B04u;
label_1e5b04:
    // 0x1e5b04: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e5b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e5b08: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5B08u;
    {
        const bool branch_taken_0x1e5b08 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e5b08) {
            ctx->pc = 0x1E5B1Cu;
            goto label_1e5b1c;
        }
    }
    ctx->pc = 0x1E5B10u;
    // 0x1e5b10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e5b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5b14: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1E5B14u;
    {
        const bool branch_taken_0x1e5b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5b14) {
            ctx->pc = 0x1E5C58u;
            goto label_1e5c58;
        }
    }
    ctx->pc = 0x1E5B1Cu;
label_1e5b1c:
    // 0x1e5b1c: 0x8fb10050  lw          $s1, 0x50($sp)
    ctx->pc = 0x1e5b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e5b20: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e5b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e5b24: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e5b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e5b28: 0xc077f1c  jal         func_1DFC70
    ctx->pc = 0x1E5B28u;
    SET_GPR_U32(ctx, 31, 0x1E5B30u);
    ctx->pc = 0x1DFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC70u, 0x1E5B28u, 0x1E5B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5B30u;
label_1e5b30:
    // 0x1e5b30: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1e5b30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e5b34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5B34u;
    {
        const bool branch_taken_0x1e5b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5b34) {
            ctx->pc = 0x1E5B48u;
            goto label_1e5b48;
        }
    }
    ctx->pc = 0x1E5B3Cu;
    // 0x1e5b3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e5b3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5b40: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1E5B40u;
    {
        const bool branch_taken_0x1e5b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5b40) {
            ctx->pc = 0x1E5C58u;
            goto label_1e5c58;
        }
    }
    ctx->pc = 0x1E5B48u;
label_1e5b48:
    // 0x1e5b48: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x1e5b48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e5b4c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e5b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e5b50: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e5b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e5b54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e5b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5b58: 0xc077fa0  jal         func_1DFE80
    ctx->pc = 0x1E5B58u;
    SET_GPR_U32(ctx, 31, 0x1E5B60u);
    ctx->pc = 0x1DFE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFE80u, 0x1E5B58u, 0x1E5B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5B60u;
label_1e5b60:
    // 0x1e5b60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e5b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5b64: 0xc077f2c  jal         func_1DFCB0
    ctx->pc = 0x1E5B64u;
    SET_GPR_U32(ctx, 31, 0x1E5B6Cu);
    ctx->pc = 0x1DFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCB0u, 0x1E5B64u, 0x1E5B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5B6Cu;
label_1e5b6c:
    // 0x1e5b6c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1e5b6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e5b70: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5B70u;
    {
        const bool branch_taken_0x1e5b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5b70) {
            ctx->pc = 0x1E5B84u;
            goto label_1e5b84;
        }
    }
    ctx->pc = 0x1E5B78u;
    // 0x1e5b78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e5b78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5b7c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1E5B7Cu;
    {
        const bool branch_taken_0x1e5b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5b7c) {
            ctx->pc = 0x1E5C58u;
            goto label_1e5c58;
        }
    }
    ctx->pc = 0x1E5B84u;
label_1e5b84:
    // 0x1e5b84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e5b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5b88: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1e5b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e5b8c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1e5b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e5b90: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x1e5b90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e5b94: 0xc079a38  jal         func_1E68E0
    ctx->pc = 0x1E5B94u;
    SET_GPR_U32(ctx, 31, 0x1E5B9Cu);
    ctx->pc = 0x1E68E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E68E0u, 0x1E5B94u, 0x1E5B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5B9Cu;
label_1e5b9c:
    // 0x1e5b9c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E5B9Cu;
    {
        const bool branch_taken_0x1e5b9c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e5b9c) {
            ctx->pc = 0x1E5BB8u;
            goto label_1e5bb8;
        }
    }
    ctx->pc = 0x1E5BA4u;
    // 0x1e5ba4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5ba8: 0x0  nop
    ctx->pc = 0x1e5ba8u;
    // NOP
    // 0x1e5bac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e5bacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e5bb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E5BB0u;
    {
        const bool branch_taken_0x1e5bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5bb0) {
            ctx->pc = 0x1E5BD4u;
            goto label_1e5bd4;
        }
    }
    ctx->pc = 0x1E5BB8u;
label_1e5bb8:
    // 0x1e5bb8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e5bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1e5bbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e5bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e5bc0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e5bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e5bc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e5bc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5bc8: 0x0  nop
    ctx->pc = 0x1e5bc8u;
    // NOP
    // 0x1e5bcc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e5bccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e5bd0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1e5bd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1e5bd4:
    // 0x1e5bd4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1e5bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1e5bd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5bdc: 0x0  nop
    ctx->pc = 0x1e5bdcu;
    // NOP
    // 0x1e5be0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e5be0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e5be4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1e5be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1e5be8: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1e5be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5bec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e5becu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5bf0: 0x0  nop
    ctx->pc = 0x1e5bf0u;
    // NOP
    // 0x1e5bf4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e5bf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e5bf8: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1E5BF8u;
    {
        const bool branch_taken_0x1e5bf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e5bf8) {
            ctx->pc = 0x1E5C54u;
            goto label_1e5c54;
        }
    }
    ctx->pc = 0x1E5C00u;
    // 0x1e5c00: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1e5c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e5c04: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1e5c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e5c08: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x1e5c08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e5c0c: 0x240700fe  addiu       $a3, $zero, 0xFE
    ctx->pc = 0x1e5c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x1e5c10: 0xc079994  jal         func_1E6650
    ctx->pc = 0x1E5C10u;
    SET_GPR_U32(ctx, 31, 0x1E5C18u);
    ctx->pc = 0x1E6650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6650u, 0x1E5C10u, 0x1E5C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5C18u;
label_1e5c18:
    // 0x1e5c18: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e5c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e5c1c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1e5c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e5c20: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e5c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e5c24: 0xc077fa0  jal         func_1DFE80
    ctx->pc = 0x1E5C24u;
    SET_GPR_U32(ctx, 31, 0x1E5C2Cu);
    ctx->pc = 0x1DFE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFE80u, 0x1E5C24u, 0x1E5C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5C2Cu;
label_1e5c2c:
    // 0x1e5c2c: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x1e5c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e5c30: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e5c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e5c34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e5c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5c38: 0xc078840  jal         func_1E2100
    ctx->pc = 0x1E5C38u;
    SET_GPR_U32(ctx, 31, 0x1E5C40u);
    ctx->pc = 0x1E2100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2100u, 0x1E5C38u, 0x1E5C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5C40u;
label_1e5c40:
    // 0x1e5c40: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e5c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e5c44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e5c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5c48: 0xc078820  jal         func_1E2080
    ctx->pc = 0x1E5C48u;
    SET_GPR_U32(ctx, 31, 0x1E5C50u);
    ctx->pc = 0x1E2080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2080u, 0x1E5C48u, 0x1E5C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5C50u;
label_1e5c50:
    // 0x1e5c50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e5c50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e5c54:
    // 0x1e5c54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e5c54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e5c58:
    // 0x1e5c58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e5c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5c5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5c5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5c60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5c64: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e5c64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e5c68: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5C70u;
}

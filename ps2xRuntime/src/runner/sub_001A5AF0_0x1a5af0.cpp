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

// Function: sub_001A5AF0
// Address: 0x1a5af0 - 0x1a5ee0
void sub_001A5AF0_0x1a5af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5AF0_0x1a5af0");
#endif

    switch (ctx->pc) {
        case 0x1a5b14u: goto label_1a5b14;
        case 0x1a5b1cu: goto label_1a5b1c;
        case 0x1a5bacu: goto label_1a5bac;
        case 0x1a5bc0u: goto label_1a5bc0;
        case 0x1a5bccu: goto label_1a5bcc;
        case 0x1a5bfcu: goto label_1a5bfc;
        case 0x1a5c34u: goto label_1a5c34;
        case 0x1a5c6cu: goto label_1a5c6c;
        case 0x1a5d78u: goto label_1a5d78;
        case 0x1a5d84u: goto label_1a5d84;
        case 0x1a5db4u: goto label_1a5db4;
        case 0x1a5e44u: goto label_1a5e44;
        case 0x1a5e74u: goto label_1a5e74;
        case 0x1a5e94u: goto label_1a5e94;
        case 0x1a5eb4u: goto label_1a5eb4;
        case 0x1a5ec0u: goto label_1a5ec0;
        default: break;
    }

    ctx->pc = 0x1a5af0u;

    // 0x1a5af0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a5af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a5af4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a5af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a5af8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a5af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a5afc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a5afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a5b00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a5b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a5b04: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1a5b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1a5b08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a5b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5b0c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1A5B0Cu;
    {
        const bool branch_taken_0x1a5b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5b0c) {
            ctx->pc = 0x1A5C58u;
            goto label_1a5c58;
        }
    }
    ctx->pc = 0x1A5B14u;
label_1a5b14:
    // 0x1a5b14: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1A5B14u;
    SET_GPR_U32(ctx, 31, 0x1A5B1Cu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1A5B14u, 0x1A5B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5B1Cu;
label_1a5b1c:
    // 0x1a5b1c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5B1Cu;
    {
        const bool branch_taken_0x1a5b1c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a5b1c) {
            ctx->pc = 0x1A5B38u;
            goto label_1a5b38;
        }
    }
    ctx->pc = 0x1A5B24u;
    // 0x1a5b24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5b28: 0x0  nop
    ctx->pc = 0x1a5b28u;
    // NOP
    // 0x1a5b2c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a5b2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a5b30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5B30u;
    {
        const bool branch_taken_0x1a5b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5b30) {
            ctx->pc = 0x1A5B54u;
            goto label_1a5b54;
        }
    }
    ctx->pc = 0x1A5B38u;
label_1a5b38:
    // 0x1a5b38: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1a5b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1a5b3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a5b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a5b40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a5b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a5b44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a5b44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5b48: 0x0  nop
    ctx->pc = 0x1a5b48u;
    // NOP
    // 0x1a5b4c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a5b4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a5b50: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a5b50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a5b54:
    // 0x1a5b54: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1a5b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1a5b58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5b5c: 0x0  nop
    ctx->pc = 0x1a5b5cu;
    // NOP
    // 0x1a5b60: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x1a5b60u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a5b64: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5b68: 0xc44100d8  lwc1        $f1, 0xD8($v0)
    ctx->pc = 0x1a5b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5b6c: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x1a5b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
    // 0x1a5b70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5b74: 0x0  nop
    ctx->pc = 0x1a5b74u;
    // NOP
    // 0x1a5b78: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1a5b78u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a5b7c: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x1a5b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x1a5b80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a5b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a5b84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a5b84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5b88: 0x0  nop
    ctx->pc = 0x1a5b88u;
    // NOP
    // 0x1a5b8c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a5b8cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1a5b90: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1a5b90u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1a5b94: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1a5b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1a5b98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a5b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5b9c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1a5b9cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a5ba0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a5ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5ba4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1A5BA4u;
    {
        const bool branch_taken_0x1a5ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5ba4) {
            ctx->pc = 0x1A5C24u;
            goto label_1a5c24;
        }
    }
    ctx->pc = 0x1A5BACu;
label_1a5bac:
    // 0x1a5bac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a5bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5bb0: 0x24440134  addiu       $a0, $v0, 0x134
    ctx->pc = 0x1a5bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
    // 0x1a5bb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a5bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5bb8: 0xc068c6c  jal         func_1A31B0
    ctx->pc = 0x1A5BB8u;
    SET_GPR_U32(ctx, 31, 0x1A5BC0u);
    ctx->pc = 0x1A31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A31B0u, 0x1A5BB8u, 0x1A5BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5BC0u;
label_1a5bc0:
    // 0x1a5bc0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a5bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5bc4: 0xc069bc0  jal         func_1A6F00
    ctx->pc = 0x1A5BC4u;
    SET_GPR_U32(ctx, 31, 0x1A5BCCu);
    ctx->pc = 0x1A6F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6F00u, 0x1A5BC4u, 0x1A5BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5BCCu;
label_1a5bcc:
    // 0x1a5bcc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1a5bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1a5bd0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a5bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1a5bd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a5bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a5bd8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1a5bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5bdc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1a5bdcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a5be0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x1A5BE0u;
    {
        const bool branch_taken_0x1a5be0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a5be0) {
            ctx->pc = 0x1A5C20u;
            goto label_1a5c20;
        }
    }
    ctx->pc = 0x1A5BE8u;
    // 0x1a5be8: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x1a5be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5bec: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1a5becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5bf0: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1a5bf0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a5bf4: 0xc0c3926  jal         func_30E498
    ctx->pc = 0x1A5BF4u;
    SET_GPR_U32(ctx, 31, 0x1A5BFCu);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x1A5BF4u, 0x1A5BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5BFCu;
label_1a5bfc:
    // 0x1a5bfc: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x1a5bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x1a5c00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a5c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a5c04: 0x0  nop
    ctx->pc = 0x1a5c04u;
    // NOP
    // 0x1a5c08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a5c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a5c0c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5C0Cu;
    {
        const bool branch_taken_0x1a5c0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a5c0c) {
            ctx->pc = 0x1A5C20u;
            goto label_1a5c20;
        }
    }
    ctx->pc = 0x1A5C14u;
    // 0x1a5c14: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a5c14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5c18: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A5C18u;
    {
        const bool branch_taken_0x1a5c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c18) {
            ctx->pc = 0x1A5C40u;
            goto label_1a5c40;
        }
    }
    ctx->pc = 0x1A5C20u;
label_1a5c20:
    // 0x1a5c20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a5c20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a5c24:
    // 0x1a5c24: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a5c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5c28: 0x24440134  addiu       $a0, $v0, 0x134
    ctx->pc = 0x1a5c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
    // 0x1a5c2c: 0xc068c84  jal         func_1A3210
    ctx->pc = 0x1A5C2Cu;
    SET_GPR_U32(ctx, 31, 0x1A5C34u);
    ctx->pc = 0x1A3210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3210u, 0x1A5C2Cu, 0x1A5C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5C34u;
label_1a5c34:
    // 0x1a5c34: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1a5c34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a5c38: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1A5C38u;
    {
        const bool branch_taken_0x1a5c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c38) {
            ctx->pc = 0x1A5BACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5bac;
        }
    }
    ctx->pc = 0x1A5C40u;
label_1a5c40:
    // 0x1a5c40: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5C40u;
    {
        const bool branch_taken_0x1a5c40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c40) {
            ctx->pc = 0x1A5C54u;
            goto label_1a5c54;
        }
    }
    ctx->pc = 0x1A5C48u;
    // 0x1a5c48: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1a5c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5c4c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1A5C4Cu;
    {
        const bool branch_taken_0x1a5c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c4c) {
            ctx->pc = 0x1A5CE4u;
            goto label_1a5ce4;
        }
    }
    ctx->pc = 0x1A5C54u;
label_1a5c54:
    // 0x1a5c54: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a5c54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a5c58:
    // 0x1a5c58: 0x2e220064  sltiu       $v0, $s1, 0x64
    ctx->pc = 0x1a5c58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x1a5c5c: 0x1440ffad  bnez        $v0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x1A5C5Cu;
    {
        const bool branch_taken_0x1a5c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c5c) {
            ctx->pc = 0x1A5B14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5b14;
        }
    }
    ctx->pc = 0x1A5C64u;
    // 0x1a5c64: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1A5C64u;
    SET_GPR_U32(ctx, 31, 0x1A5C6Cu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1A5C64u, 0x1A5C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5C6Cu;
label_1a5c6c:
    // 0x1a5c6c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5C6Cu;
    {
        const bool branch_taken_0x1a5c6c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a5c6c) {
            ctx->pc = 0x1A5C88u;
            goto label_1a5c88;
        }
    }
    ctx->pc = 0x1A5C74u;
    // 0x1a5c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5c78: 0x0  nop
    ctx->pc = 0x1a5c78u;
    // NOP
    // 0x1a5c7c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a5c7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a5c80: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5C80u;
    {
        const bool branch_taken_0x1a5c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c80) {
            ctx->pc = 0x1A5CA4u;
            goto label_1a5ca4;
        }
    }
    ctx->pc = 0x1A5C88u;
label_1a5c88:
    // 0x1a5c88: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1a5c88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1a5c8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a5c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a5c90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a5c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a5c94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a5c94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5c98: 0x0  nop
    ctx->pc = 0x1a5c98u;
    // NOP
    // 0x1a5c9c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a5c9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a5ca0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a5ca0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a5ca4:
    // 0x1a5ca4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1a5ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1a5ca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5cac: 0x0  nop
    ctx->pc = 0x1a5cacu;
    // NOP
    // 0x1a5cb0: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x1a5cb0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a5cb4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a5cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5cb8: 0xc44100d8  lwc1        $f1, 0xD8($v0)
    ctx->pc = 0x1a5cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5cbc: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x1a5cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
    // 0x1a5cc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5cc4: 0x0  nop
    ctx->pc = 0x1a5cc4u;
    // NOP
    // 0x1a5cc8: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1a5cc8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a5ccc: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x1a5cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x1a5cd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a5cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a5cd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a5cd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5cd8: 0x0  nop
    ctx->pc = 0x1a5cd8u;
    // NOP
    // 0x1a5cdc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a5cdcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1a5ce0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1a5ce0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1a5ce4:
    // 0x1a5ce4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a5ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5ce8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a5ce8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5cec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a5cecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5cf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a5cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5cf4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1a5cf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a5cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5D00u;
    // 0x1a5d00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a5d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a5d04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a5d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a5d08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a5d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a5d0c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1a5d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1a5d10: 0xa3a50040  sb          $a1, 0x40($sp)
    ctx->pc = 0x1a5d10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a5d14: 0x93a30040  lbu         $v1, 0x40($sp)
    ctx->pc = 0x1a5d14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a5d18: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5D18u;
    {
        const bool branch_taken_0x1a5d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5d18) {
            ctx->pc = 0x1A5D3Cu;
            goto label_1a5d3c;
        }
    }
    ctx->pc = 0x1A5D20u;
    // 0x1a5d20: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1a5d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5d24: 0xc46100e8  lwc1        $f1, 0xE8($v1)
    ctx->pc = 0x1a5d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5d28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a5d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5d2c: 0x0  nop
    ctx->pc = 0x1a5d2cu;
    // NOP
    // 0x1a5d30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a5d30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a5d34: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5D34u;
    {
        const bool branch_taken_0x1a5d34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a5d34) {
            ctx->pc = 0x1A5D44u;
            goto label_1a5d44;
        }
    }
    ctx->pc = 0x1A5D3Cu;
label_1a5d3c:
    // 0x1a5d3c: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1A5D3Cu;
    {
        const bool branch_taken_0x1a5d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5d3c) {
            ctx->pc = 0x1A5ECCu;
            goto label_1a5ecc;
        }
    }
    ctx->pc = 0x1A5D44u;
label_1a5d44:
    // 0x1a5d44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a5d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a5d48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5d48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5d4c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a5d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5d50: 0xe440010c  swc1        $f0, 0x10C($v0)
    ctx->pc = 0x1a5d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 268), bits); }
    // 0x1a5d54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a5d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a5d58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a5d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a5d5c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1a5d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1a5d60: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a5d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a5d64: 0x24a56770  addiu       $a1, $a1, 0x6770
    ctx->pc = 0x1a5d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26480));
    // 0x1a5d68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a5d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d6c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1a5d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a5d70: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1A5D70u;
    SET_GPR_U32(ctx, 31, 0x1A5D78u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1A5D70u, 0x1A5D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5D78u;
label_1a5d78:
    // 0x1a5d78: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1a5d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5d7c: 0xc06962c  jal         func_1A58B0
    ctx->pc = 0x1A5D7Cu;
    SET_GPR_U32(ctx, 31, 0x1A5D84u);
    ctx->pc = 0x1A58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A58B0u, 0x1A5D7Cu, 0x1A5D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5D84u;
label_1a5d84:
    // 0x1a5d84: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A5D84u;
    {
        const bool branch_taken_0x1a5d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5d84) {
            ctx->pc = 0x1A5DBCu;
            goto label_1a5dbc;
        }
    }
    ctx->pc = 0x1A5D8Cu;
    // 0x1a5d8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a5d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a5d90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5d94: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a5d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5d98: 0xe44000e8  swc1        $f0, 0xE8($v0)
    ctx->pc = 0x1a5d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
    // 0x1a5d9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a5d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a5da0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a5da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a5da4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1a5da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5da8: 0x2405008c  addiu       $a1, $zero, 0x8C
    ctx->pc = 0x1a5da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x1a5dac: 0xc064df0  jal         func_1937C0
    ctx->pc = 0x1A5DACu;
    SET_GPR_U32(ctx, 31, 0x1A5DB4u);
    ctx->pc = 0x1937C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937C0u, 0x1A5DACu, 0x1A5DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5DB4u;
label_1a5db4:
    // 0x1a5db4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1A5DB4u;
    {
        const bool branch_taken_0x1a5db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5db4) {
            ctx->pc = 0x1A5ECCu;
            goto label_1a5ecc;
        }
    }
    ctx->pc = 0x1A5DBCu;
label_1a5dbc:
    // 0x1a5dbc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a5dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5dc0: 0xc44000ec  lwc1        $f0, 0xEC($v0)
    ctx->pc = 0x1a5dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5dc4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1a5dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1a5dc8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a5dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5dcc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a5dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5dd0: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x1a5dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5dd4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1a5dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1a5dd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5ddc: 0x0  nop
    ctx->pc = 0x1a5ddcu;
    // NOP
    // 0x1a5de0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a5de0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a5de4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1A5DE4u;
    {
        const bool branch_taken_0x1a5de4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a5de4) {
            ctx->pc = 0x1A5E1Cu;
            goto label_1a5e1c;
        }
    }
    ctx->pc = 0x1A5DECu;
    // 0x1a5dec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a5decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5df0: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x1a5df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5df4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1a5df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5df8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a5df8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a5dfc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1a5dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1a5e00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5e04: 0x0  nop
    ctx->pc = 0x1a5e04u;
    // NOP
    // 0x1a5e08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a5e08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a5e0c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5E0Cu;
    {
        const bool branch_taken_0x1a5e0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a5e0c) {
            ctx->pc = 0x1A5E1Cu;
            goto label_1a5e1c;
        }
    }
    ctx->pc = 0x1A5E14u;
    // 0x1a5e14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a5e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5e18: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1a5e18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1a5e1c:
    // 0x1a5e1c: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x1a5e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5e20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a5e20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5e24: 0x0  nop
    ctx->pc = 0x1a5e24u;
    // NOP
    // 0x1a5e28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a5e28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a5e2c: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x1A5E2Cu;
    {
        const bool branch_taken_0x1a5e2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a5e2c) {
            ctx->pc = 0x1A5E7Cu;
            goto label_1a5e7c;
        }
    }
    ctx->pc = 0x1A5E34u;
    // 0x1a5e34: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1a5e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5e38: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1a5e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a5e3c: 0xc064d10  jal         func_193440
    ctx->pc = 0x1A5E3Cu;
    SET_GPR_U32(ctx, 31, 0x1A5E44u);
    ctx->pc = 0x193440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193440u, 0x1A5E3Cu, 0x1A5E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E44u;
label_1a5e44:
    // 0x1a5e44: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a5e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5e48: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1a5e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1a5e4c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A5E4Cu;
    {
        const bool branch_taken_0x1a5e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5e4c) {
            ctx->pc = 0x1A5E7Cu;
            goto label_1a5e7c;
        }
    }
    ctx->pc = 0x1A5E54u;
    // 0x1a5e54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a5e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a5e58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a5e58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a5e5c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1a5e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1a5e60: 0x27859398  addiu       $a1, $gp, -0x6C68
    ctx->pc = 0x1a5e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939544));
    // 0x1a5e64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a5e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5e68: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1a5e68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a5e6c: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1A5E6Cu;
    SET_GPR_U32(ctx, 31, 0x1A5E74u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1A5E6Cu, 0x1A5E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E74u;
label_1a5e74:
    // 0x1a5e74: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1a5e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5e78: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x1a5e78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_1a5e7c:
    // 0x1a5e7c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A5E7Cu;
    {
        const bool branch_taken_0x1a5e7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5e7c) {
            ctx->pc = 0x1A5EB4u;
            goto label_1a5eb4;
        }
    }
    ctx->pc = 0x1A5E84u;
    // 0x1a5e84: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1a5e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5e88: 0x278593a0  addiu       $a1, $gp, -0x6C60
    ctx->pc = 0x1a5e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939552));
    // 0x1a5e8c: 0xc064d48  jal         func_193520
    ctx->pc = 0x1A5E8Cu;
    SET_GPR_U32(ctx, 31, 0x1A5E94u);
    ctx->pc = 0x193520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193520u, 0x1A5E8Cu, 0x1A5E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E94u;
label_1a5e94:
    // 0x1a5e94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a5e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a5e98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a5e98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a5e9c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1a5e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1a5ea0: 0x278593a8  addiu       $a1, $gp, -0x6C58
    ctx->pc = 0x1a5ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939560));
    // 0x1a5ea4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a5ea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5ea8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1a5ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a5eac: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1A5EACu;
    SET_GPR_U32(ctx, 31, 0x1A5EB4u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1A5EACu, 0x1A5EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5EB4u;
label_1a5eb4:
    // 0x1a5eb4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1a5eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5eb8: 0xc069978  jal         func_1A65E0
    ctx->pc = 0x1A5EB8u;
    SET_GPR_U32(ctx, 31, 0x1A5EC0u);
    ctx->pc = 0x1A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A65E0u, 0x1A5EB8u, 0x1A5EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5EC0u;
label_1a5ec0:
    // 0x1a5ec0: 0xc78082d4  lwc1        $f0, -0x7D2C($gp)
    ctx->pc = 0x1a5ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5ec4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1a5ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5ec8: 0xe4600140  swc1        $f0, 0x140($v1)
    ctx->pc = 0x1a5ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 320), bits); }
label_1a5ecc:
    // 0x1a5ecc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a5eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5ed0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a5ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5ed4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1a5ed4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a5ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5EE0u;
}

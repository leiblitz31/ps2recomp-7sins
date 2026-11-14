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

// Function: sub_001C2C00
// Address: 0x1c2c00 - 0x1c2f10
void sub_001C2C00_0x1c2c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2C00_0x1c2c00");
#endif

    switch (ctx->pc) {
        case 0x1c2c4cu: goto label_1c2c4c;
        case 0x1c2c9cu: goto label_1c2c9c;
        case 0x1c2d30u: goto label_1c2d30;
        case 0x1c2d48u: goto label_1c2d48;
        case 0x1c2d60u: goto label_1c2d60;
        case 0x1c2d68u: goto label_1c2d68;
        case 0x1c2e00u: goto label_1c2e00;
        case 0x1c2e98u: goto label_1c2e98;
        default: break;
    }

    ctx->pc = 0x1c2c00u;

    // 0x1c2c00: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1c2c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1c2c04: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1c2c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1c2c08: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1c2c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1c2c0c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1c2c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1c2c10: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1c2c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1c2c14: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c2c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c2c18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c2c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c2c1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c2c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c2c20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c2c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c2c24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c2c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c2c28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c2c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c2c2c: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x1c2c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x1c2c30: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x1c2c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x1c2c34: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x1c2c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x1c2c38: 0xa3a000af  sb          $zero, 0xAF($sp)
    ctx->pc = 0x1c2c38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c2c3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c2c3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2c40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c2c40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2c44: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x1C2C44u;
    {
        const bool branch_taken_0x1c2c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2c44) {
            ctx->pc = 0x1C2EC4u;
            goto label_1c2ec4;
        }
    }
    ctx->pc = 0x1C2C4Cu;
label_1c2c4c:
    // 0x1c2c4c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1c2c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c2c50: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c2c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c2c54: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c2c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c2c58: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c2c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c2c5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c2c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c2c60: 0x24500100  addiu       $s0, $v0, 0x100
    ctx->pc = 0x1c2c60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x1c2c64: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1c2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1c2c68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c2c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c2c6c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1c2c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2c70: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c2c70u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2c74: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2C74u;
    {
        const bool branch_taken_0x1c2c74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c2c74) {
            ctx->pc = 0x1C2C8Cu;
            goto label_1c2c8c;
        }
    }
    ctx->pc = 0x1C2C7Cu;
    // 0x1c2c7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2c80: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1c2c80u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c2c84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2C84u;
    {
        const bool branch_taken_0x1c2c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2c84) {
            ctx->pc = 0x1C2C90u;
            goto label_1c2c90;
        }
    }
    ctx->pc = 0x1C2C8Cu;
label_1c2c8c:
    // 0x1c2c8c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c2c8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2c90:
    // 0x1c2c90: 0x32be00ff  andi        $fp, $s5, 0xFF
    ctx->pc = 0x1c2c90u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x1c2c94: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1C2C94u;
    SET_GPR_U32(ctx, 31, 0x1C2C9Cu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1C2C94u, 0x1C2C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C9Cu;
label_1c2c9c:
    // 0x1c2c9c: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1c2c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1c2ca0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c2ca0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c2ca4: 0x1810  mfhi        $v1
    ctx->pc = 0x1c2ca4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c2ca8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2CA8u;
    {
        const bool branch_taken_0x1c2ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2ca8) {
            ctx->pc = 0x1C2CC0u;
            goto label_1c2cc0;
        }
    }
    ctx->pc = 0x1C2CB0u;
    // 0x1c2cb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c2cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2cb4: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x1c2cb4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c2cb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2CB8u;
    {
        const bool branch_taken_0x1c2cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2cb8) {
            ctx->pc = 0x1C2CC4u;
            goto label_1c2cc4;
        }
    }
    ctx->pc = 0x1C2CC0u;
label_1c2cc0:
    // 0x1c2cc0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c2cc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2cc4:
    // 0x1c2cc4: 0x329700ff  andi        $s7, $s4, 0xFF
    ctx->pc = 0x1c2cc4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1c2cc8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1c2cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c2ccc: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1c2cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2cd0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1c2cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c2cd4: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x1c2cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2cd8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1c2cd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c2cdc: 0xc78082c4  lwc1        $f0, -0x7D3C($gp)
    ctx->pc = 0x1c2cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2ce0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c2ce0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2ce4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2CE4u;
    {
        const bool branch_taken_0x1c2ce4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c2ce4) {
            ctx->pc = 0x1C2CFCu;
            goto label_1c2cfc;
        }
    }
    ctx->pc = 0x1C2CECu;
    // 0x1c2cec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c2cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2cf0: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x1c2cf0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c2cf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2CF4u;
    {
        const bool branch_taken_0x1c2cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2cf4) {
            ctx->pc = 0x1C2D00u;
            goto label_1c2d00;
        }
    }
    ctx->pc = 0x1C2CFCu;
label_1c2cfc:
    // 0x1c2cfc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c2cfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2d00:
    // 0x1c2d00: 0x327600ff  andi        $s6, $s3, 0xFF
    ctx->pc = 0x1c2d00u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x1c2d04: 0x13c0006e  beqz        $fp, . + 4 + (0x6E << 2)
    ctx->pc = 0x1C2D04u;
    {
        const bool branch_taken_0x1c2d04 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2d04) {
            ctx->pc = 0x1C2EC0u;
            goto label_1c2ec0;
        }
    }
    ctx->pc = 0x1C2D0Cu;
    // 0x1c2d0c: 0x12c0006c  beqz        $s6, . + 4 + (0x6C << 2)
    ctx->pc = 0x1C2D0Cu;
    {
        const bool branch_taken_0x1c2d0c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2d0c) {
            ctx->pc = 0x1C2EC0u;
            goto label_1c2ec0;
        }
    }
    ctx->pc = 0x1C2D14u;
    // 0x1c2d14: 0x12e00069  beqz        $s7, . + 4 + (0x69 << 2)
    ctx->pc = 0x1C2D14u;
    {
        const bool branch_taken_0x1c2d14 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2d14) {
            ctx->pc = 0x1C2EBCu;
            goto label_1c2ebc;
        }
    }
    ctx->pc = 0x1C2D1Cu;
    // 0x1c2d1c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c2d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c2d20: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1c2d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2d24: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1c2d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1c2d28: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1C2D28u;
    SET_GPR_U32(ctx, 31, 0x1C2D30u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1C2D28u, 0x1C2D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D30u;
label_1c2d30:
    // 0x1c2d30: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1c2d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c2d34: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x1c2d34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1c2d38: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c2d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c2d3c: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1c2d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1c2d40: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1C2D40u;
    SET_GPR_U32(ctx, 31, 0x1C2D48u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1C2D40u, 0x1C2D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D48u;
label_1c2d48:
    // 0x1c2d48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c2d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2d4c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1c2d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1c2d50: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x1c2d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1c2d54: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1c2d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c2d58: 0xc05db24  jal         func_176C90
    ctx->pc = 0x1C2D58u;
    SET_GPR_U32(ctx, 31, 0x1C2D60u);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x1C2D58u, 0x1C2D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D60u;
label_1c2d60:
    // 0x1c2d60: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1C2D60u;
    SET_GPR_U32(ctx, 31, 0x1C2D68u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1C2D60u, 0x1C2D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D68u;
label_1c2d68:
    // 0x1c2d68: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1c2d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c2d6c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1c2d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2d70: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c2d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c2d74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c2d74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2d78: 0x0  nop
    ctx->pc = 0x1c2d78u;
    // NOP
    // 0x1c2d7c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c2d7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2d80: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2D80u;
    {
        const bool branch_taken_0x1c2d80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c2d80) {
            ctx->pc = 0x1C2D98u;
            goto label_1c2d98;
        }
    }
    ctx->pc = 0x1C2D88u;
    // 0x1c2d88: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c2d88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c2d8c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1c2d8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c2d90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2D90u;
    {
        const bool branch_taken_0x1c2d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2d90) {
            ctx->pc = 0x1C2DACu;
            goto label_1c2dac;
        }
    }
    ctx->pc = 0x1C2D98u;
label_1c2d98:
    // 0x1c2d98: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1c2d98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c2d9c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c2d9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c2da0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1c2da0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c2da4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1c2da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1c2da8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c2da8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c2dac:
    // 0x1c2dac: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1c2dacu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c2db0: 0x1010  mfhi        $v0
    ctx->pc = 0x1c2db0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c2db4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2DB4u;
    {
        const bool branch_taken_0x1c2db4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c2db4) {
            ctx->pc = 0x1C2DD0u;
            goto label_1c2dd0;
        }
    }
    ctx->pc = 0x1C2DBCu;
    // 0x1c2dbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c2dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2dc0: 0x0  nop
    ctx->pc = 0x1c2dc0u;
    // NOP
    // 0x1c2dc4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c2dc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c2dc8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2DC8u;
    {
        const bool branch_taken_0x1c2dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2dc8) {
            ctx->pc = 0x1C2DECu;
            goto label_1c2dec;
        }
    }
    ctx->pc = 0x1C2DD0u;
label_1c2dd0:
    // 0x1c2dd0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1c2dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1c2dd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c2dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c2dd8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c2dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c2ddc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c2ddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2de0: 0x0  nop
    ctx->pc = 0x1c2de0u;
    // NOP
    // 0x1c2de4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c2de4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c2de8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c2de8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1c2dec:
    // 0x1c2dec: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1c2decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2df0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c2df0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c2df4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1c2df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1c2df8: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1C2DF8u;
    SET_GPR_U32(ctx, 31, 0x1C2E00u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1C2DF8u, 0x1C2E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2E00u;
label_1c2e00:
    // 0x1c2e00: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1c2e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c2e04: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1c2e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2e08: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c2e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c2e0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c2e0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2e10: 0x0  nop
    ctx->pc = 0x1c2e10u;
    // NOP
    // 0x1c2e14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c2e14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2e18: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2E18u;
    {
        const bool branch_taken_0x1c2e18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c2e18) {
            ctx->pc = 0x1C2E30u;
            goto label_1c2e30;
        }
    }
    ctx->pc = 0x1C2E20u;
    // 0x1c2e20: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c2e20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c2e24: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1c2e24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c2e28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2E28u;
    {
        const bool branch_taken_0x1c2e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2e28) {
            ctx->pc = 0x1C2E44u;
            goto label_1c2e44;
        }
    }
    ctx->pc = 0x1C2E30u;
label_1c2e30:
    // 0x1c2e30: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1c2e30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c2e34: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c2e34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c2e38: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1c2e38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c2e3c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1c2e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1c2e40: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c2e40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c2e44:
    // 0x1c2e44: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1c2e44u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c2e48: 0x1010  mfhi        $v0
    ctx->pc = 0x1c2e48u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c2e4c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2E4Cu;
    {
        const bool branch_taken_0x1c2e4c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c2e4c) {
            ctx->pc = 0x1C2E68u;
            goto label_1c2e68;
        }
    }
    ctx->pc = 0x1C2E54u;
    // 0x1c2e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c2e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2e58: 0x0  nop
    ctx->pc = 0x1c2e58u;
    // NOP
    // 0x1c2e5c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c2e5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c2e60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2E60u;
    {
        const bool branch_taken_0x1c2e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2e60) {
            ctx->pc = 0x1C2E84u;
            goto label_1c2e84;
        }
    }
    ctx->pc = 0x1C2E68u;
label_1c2e68:
    // 0x1c2e68: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1c2e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1c2e6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c2e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c2e70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c2e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c2e74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c2e74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2e78: 0x0  nop
    ctx->pc = 0x1c2e78u;
    // NOP
    // 0x1c2e7c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c2e7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c2e80: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c2e80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1c2e84:
    // 0x1c2e84: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1c2e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2e88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c2e88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c2e8c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1c2e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1c2e90: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1C2E90u;
    SET_GPR_U32(ctx, 31, 0x1C2E98u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1C2E90u, 0x1C2E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2E98u;
label_1c2e98:
    // 0x1c2e98: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1c2e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c2e9c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c2e9cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c2ea0: 0x1810  mfhi        $v1
    ctx->pc = 0x1c2ea0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c2ea4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1c2ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c2ea8: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x1c2ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x1c2eac: 0x246370d0  addiu       $v1, $v1, 0x70D0
    ctx->pc = 0x1c2eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28880));
    // 0x1c2eb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c2eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c2eb4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c2eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c2eb8: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1c2eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_1c2ebc:
    // 0x1c2ebc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c2ebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c2ec0:
    // 0x1c2ec0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c2ec0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c2ec4:
    // 0x1c2ec4: 0x2e410004  sltiu       $at, $s2, 0x4
    ctx->pc = 0x1c2ec4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c2ec8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2EC8u;
    {
        const bool branch_taken_0x1c2ec8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2ec8) {
            ctx->pc = 0x1C2EDCu;
            goto label_1c2edc;
        }
    }
    ctx->pc = 0x1C2ED0u;
    // 0x1c2ed0: 0x2e230064  sltiu       $v1, $s1, 0x64
    ctx->pc = 0x1c2ed0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x1c2ed4: 0x1460ff5d  bnez        $v1, . + 4 + (-0xA3 << 2)
    ctx->pc = 0x1C2ED4u;
    {
        const bool branch_taken_0x1c2ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2ed4) {
            ctx->pc = 0x1C2C4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2c4c;
        }
    }
    ctx->pc = 0x1C2EDCu;
label_1c2edc:
    // 0x1c2edc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c2edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c2ee0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1c2ee0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c2ee4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1c2ee4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c2ee8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1c2ee8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c2eec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c2eecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2ef0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c2ef0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2ef4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c2ef4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2ef8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c2ef8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2efc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c2efcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2f00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c2f00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2f04: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1c2f04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1c2f08: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2F10u;
}

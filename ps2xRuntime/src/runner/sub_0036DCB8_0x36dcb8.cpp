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

// Function: sub_0036DCB8
// Address: 0x36dcb8 - 0x36dea8
void sub_0036DCB8_0x36dcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DCB8_0x36dcb8");
#endif

    switch (ctx->pc) {
        case 0x36dce0u: goto label_36dce0;
        default: break;
    }

    ctx->pc = 0x36dcb8u;

    // 0x36dcb8: 0x8c890004  lw          $t1, 0x4($a0)
    ctx->pc = 0x36dcb8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36dcbc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36dcbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36dcc0: 0x8d0b0020  lw          $t3, 0x20($t0)
    ctx->pc = 0x36dcc0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x36dcc4: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x36dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x36dcc8: 0x8d0a0008  lw          $t2, 0x8($t0)
    ctx->pc = 0x36dcc8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x36dccc: 0x8d03001c  lw          $v1, 0x1C($t0)
    ctx->pc = 0x36dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x36dcd0: 0x18e00072  blez        $a3, . + 4 + (0x72 << 2)
    ctx->pc = 0x36DCD0u;
    {
        const bool branch_taken_0x36dcd0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x36DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DCD0u;
        // 0x36dcd4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36dcd0) {
            ctx->pc = 0x36DE9Cu;
            goto label_36de9c;
        }
    }
    ctx->pc = 0x36DCD8u;
    // 0x36dcd8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x36dcd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x36dcdc: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x36dcdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_36dce0:
    // 0x36dce0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x36dce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36dce4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x36dce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x36dce8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x36dce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36dcec: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x36dcecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x36dcf0: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x36dcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36dcf4: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x36dcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x36dcf8: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x36dcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x36dcfc: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x36dcfcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x36dd00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x36dd00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x36dd04: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x36dd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x36dd08: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x36dd08u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x36dd0c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x36dd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36dd10: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x36dd10u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x36dd14: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x36dd14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36dd18: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x36dd18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x36dd1c: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x36dd1cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x36dd20: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x36dd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36dd24: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x36dd24u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x36dd28: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x36dd28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x36dd2c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x36dd2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36dd30: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x36dd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36dd34: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x36dd34u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x36dd38: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x36dd38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36dd3c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x36dd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36dd40: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x36dd40u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x36dd44: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x36dd44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36dd48: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x36dd48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x36dd4c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x36dd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36dd50: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x36dd50u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x36dd54: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x36dd54u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36dd58: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x36dd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36dd5c: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x36dd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x36dd60: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x36dd60u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x36dd64: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x36dd64u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x36dd68: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x36dd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36dd6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36dd6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36dd70: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36dd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36dd74: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x36dd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36dd78: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x36dd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36dd7c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x36dd7cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x36dd80: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x36dd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36dd84: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x36dd84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x36dd88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36dd88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36dd8c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x36dd8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36dd90: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x36dd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36dd94: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x36dd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36dd98: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x36dd98u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x36dd9c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x36dd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36dda0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x36dda0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x36dda4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36dda4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36dda8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x36dda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36ddac: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x36ddacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x36ddb0: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x36ddb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ddb4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x36ddb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ddb8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x36ddb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ddbc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x36ddbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x36ddc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36ddc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36ddc4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36ddc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36ddc8: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x36ddc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ddcc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x36ddccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ddd0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x36ddd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ddd4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x36ddd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x36ddd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36ddd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36dddc: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x36dddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36dde0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x36dde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36dde4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x36dde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36dde8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x36dde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ddec: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x36ddecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x36ddf0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36ddf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36ddf4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x36ddf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36ddf8: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x36ddf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x36ddfc: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x36ddfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36de00: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x36de00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36de04: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x36de04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36de08: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x36de08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x36de0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36de0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36de10: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36de10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36de14: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x36de14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36de18: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x36de18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36de1c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x36de1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36de20: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x36de20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x36de24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36de24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36de28: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x36de28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36de2c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x36de2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36de30: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x36de30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36de34: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x36de34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36de38: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x36de38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x36de3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36de3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36de40: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x36de40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36de44: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x36de44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x36de48: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x36de48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36de4c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x36de4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36de50: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x36de50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36de54: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x36de54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x36de58: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36de58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36de5c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x36de5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36de60: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x36de60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36de64: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x36de64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36de68: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x36de68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36de6c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x36de6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x36de70: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36de70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36de74: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x36de74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36de78: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x36de78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36de7c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x36de7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36de80: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x36de80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36de84: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x36de84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x36de88: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x36de88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x36de8c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36de8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36de90: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x36de90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36de94: 0x14e0ff92  bnez        $a3, . + 4 + (-0x6E << 2)
    ctx->pc = 0x36DE94u;
    {
        const bool branch_taken_0x36de94 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x36DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DE94u;
        // 0x36de98: 0x892021  addu        $a0, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36de94) {
            ctx->pc = 0x36DCE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36dce0;
        }
    }
    ctx->pc = 0x36DE9Cu;
label_36de9c:
    // 0x36de9c: 0x3e00008  jr          $ra
    ctx->pc = 0x36DE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DE9Cu;
        // 0x36dea0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DEA4u;
    // 0x36dea4: 0x0  nop
    ctx->pc = 0x36dea4u;
    // NOP
    ctx->pc = 0x36dea8u;
}

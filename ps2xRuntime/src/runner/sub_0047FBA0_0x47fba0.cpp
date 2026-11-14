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

// Function: sub_0047FBA0
// Address: 0x47fba0 - 0x47fde0
void sub_0047FBA0_0x47fba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047FBA0_0x47fba0");
#endif

    ctx->pc = 0x47fba0u;

    // 0x47fba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47fba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x47fba4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47fba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47fba8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x47fba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x47fbac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x47fbacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47fbb0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x47fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47fbb4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x47fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47fbb8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x47fbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47fbbc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x47fbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47fbc0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47fbc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47fbc4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x47fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x47fbc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47fbc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47fbcc: 0x0  nop
    ctx->pc = 0x47fbccu;
    // NOP
    // 0x47fbd0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x47fbd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x47fbd4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x47fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x47fbd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47fbd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47fbdc: 0x0  nop
    ctx->pc = 0x47fbdcu;
    // NOP
    // 0x47fbe0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x47fbe0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47fbe4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x47FBE4u;
    {
        const bool branch_taken_0x47fbe4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x47fbe4) {
            ctx->pc = 0x47FBFCu;
            goto label_47fbfc;
        }
    }
    ctx->pc = 0x47FBECu;
    // 0x47fbec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47fbecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x47fbf0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x47fbf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x47fbf4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x47FBF4u;
    {
        const bool branch_taken_0x47fbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47fbf4) {
            ctx->pc = 0x47FC10u;
            goto label_47fc10;
        }
    }
    ctx->pc = 0x47FBFCu;
label_47fbfc:
    // 0x47fbfc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x47fbfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x47fc00: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47fc00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x47fc04: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x47fc04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x47fc08: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x47fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x47fc0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x47fc0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_47fc10:
    // 0x47fc10: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x47fc10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x47fc14: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x47fc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47fc18: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x47fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47fc1c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x47fc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47fc20: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x47fc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47fc24: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47fc24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47fc28: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x47fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x47fc2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47fc2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47fc30: 0x0  nop
    ctx->pc = 0x47fc30u;
    // NOP
    // 0x47fc34: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x47fc34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x47fc38: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x47fc38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x47fc3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47fc3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47fc40: 0x0  nop
    ctx->pc = 0x47fc40u;
    // NOP
    // 0x47fc44: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x47fc44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47fc48: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x47FC48u;
    {
        const bool branch_taken_0x47fc48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x47fc48) {
            ctx->pc = 0x47FC60u;
            goto label_47fc60;
        }
    }
    ctx->pc = 0x47FC50u;
    // 0x47fc50: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47fc50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x47fc54: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x47fc54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x47fc58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x47FC58u;
    {
        const bool branch_taken_0x47fc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47fc58) {
            ctx->pc = 0x47FC74u;
            goto label_47fc74;
        }
    }
    ctx->pc = 0x47FC60u;
label_47fc60:
    // 0x47fc60: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x47fc60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x47fc64: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47fc64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x47fc68: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x47fc68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x47fc6c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x47fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x47fc70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x47fc70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_47fc74:
    // 0x47fc74: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x47fc74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x47fc78: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x47fc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47fc7c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x47fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47fc80: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x47fc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47fc84: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x47fc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47fc88: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47fc88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47fc8c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x47fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x47fc90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47fc90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47fc94: 0x0  nop
    ctx->pc = 0x47fc94u;
    // NOP
    // 0x47fc98: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x47fc98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x47fc9c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x47fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x47fca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47fca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47fca4: 0x0  nop
    ctx->pc = 0x47fca4u;
    // NOP
    // 0x47fca8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x47fca8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47fcac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x47FCACu;
    {
        const bool branch_taken_0x47fcac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x47fcac) {
            ctx->pc = 0x47FCC4u;
            goto label_47fcc4;
        }
    }
    ctx->pc = 0x47FCB4u;
    // 0x47fcb4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47fcb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x47fcb8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x47fcb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x47fcbc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x47FCBCu;
    {
        const bool branch_taken_0x47fcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47fcbc) {
            ctx->pc = 0x47FCD8u;
            goto label_47fcd8;
        }
    }
    ctx->pc = 0x47FCC4u;
label_47fcc4:
    // 0x47fcc4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x47fcc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x47fcc8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47fcc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x47fccc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x47fcccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x47fcd0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x47fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x47fcd4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x47fcd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_47fcd8:
    // 0x47fcd8: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x47fcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x47fcdc: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x47fcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x47fce0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x47fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x47fce4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x47fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x47fce8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x47fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x47fcec: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x47fcecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x47fcf0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x47FCF0u;
    {
        const bool branch_taken_0x47fcf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x47fcf0) {
            ctx->pc = 0x47FCFCu;
            goto label_47fcfc;
        }
    }
    ctx->pc = 0x47FCF8u;
    // 0x47fcf8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x47fcf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47fcfc:
    // 0x47fcfc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x47fcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x47fd00: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x47fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x47fd04: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x47fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x47fd08: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x47fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x47fd0c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x47fd0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x47fd10: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x47FD10u;
    {
        const bool branch_taken_0x47fd10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x47fd10) {
            ctx->pc = 0x47FD1Cu;
            goto label_47fd1c;
        }
    }
    ctx->pc = 0x47FD18u;
    // 0x47fd18: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x47fd18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47fd1c:
    // 0x47fd1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x47fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x47fd20: 0x1202001c  beq         $s0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x47FD20u;
    {
        const bool branch_taken_0x47fd20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x47fd20) {
            ctx->pc = 0x47FD94u;
            goto label_47fd94;
        }
    }
    ctx->pc = 0x47FD28u;
    // 0x47fd28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47fd2c: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x47FD2Cu;
    {
        const bool branch_taken_0x47fd2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x47fd2c) {
            ctx->pc = 0x47FD6Cu;
            goto label_47fd6c;
        }
    }
    ctx->pc = 0x47FD34u;
    // 0x47fd34: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x47FD34u;
    {
        const bool branch_taken_0x47fd34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x47fd34) {
            ctx->pc = 0x47FD44u;
            goto label_47fd44;
        }
    }
    ctx->pc = 0x47FD3Cu;
    // 0x47fd3c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x47FD3Cu;
    {
        const bool branch_taken_0x47fd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47fd3c) {
            ctx->pc = 0x47FDB4u;
            goto label_47fdb4;
        }
    }
    ctx->pc = 0x47FD44u;
label_47fd44:
    // 0x47fd44: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x47fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47fd48: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x47fd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47fd4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47fd4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47fd50: 0x0  nop
    ctx->pc = 0x47fd50u;
    // NOP
    // 0x47fd54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x47fd54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47fd58: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x47FD58u;
    {
        const bool branch_taken_0x47fd58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x47fd58) {
            ctx->pc = 0x47FDB4u;
            goto label_47fdb4;
        }
    }
    ctx->pc = 0x47FD60u;
    // 0x47fd60: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x47fd60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x47fd64: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x47FD64u;
    {
        const bool branch_taken_0x47fd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47fd64) {
            ctx->pc = 0x47FDB4u;
            goto label_47fdb4;
        }
    }
    ctx->pc = 0x47FD6Cu;
label_47fd6c:
    // 0x47fd6c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x47fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47fd70: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x47fd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47fd74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47fd74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47fd78: 0x0  nop
    ctx->pc = 0x47fd78u;
    // NOP
    // 0x47fd7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x47fd7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47fd80: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x47FD80u;
    {
        const bool branch_taken_0x47fd80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x47fd80) {
            ctx->pc = 0x47FDB4u;
            goto label_47fdb4;
        }
    }
    ctx->pc = 0x47FD88u;
    // 0x47fd88: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x47fd88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x47fd8c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x47FD8Cu;
    {
        const bool branch_taken_0x47fd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47fd8c) {
            ctx->pc = 0x47FDB4u;
            goto label_47fdb4;
        }
    }
    ctx->pc = 0x47FD94u;
label_47fd94:
    // 0x47fd94: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x47fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47fd98: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x47fd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47fd9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47fd9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47fda0: 0x0  nop
    ctx->pc = 0x47fda0u;
    // NOP
    // 0x47fda4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x47fda4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47fda8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x47FDA8u;
    {
        const bool branch_taken_0x47fda8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x47fda8) {
            ctx->pc = 0x47FDB4u;
            goto label_47fdb4;
        }
    }
    ctx->pc = 0x47FDB0u;
    // 0x47fdb0: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x47fdb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_47fdb4:
    // 0x47fdb4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x47fdb4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47fdb8: 0x0  nop
    ctx->pc = 0x47fdb8u;
    // NOP
    // 0x47fdbc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x47fdbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x47fdc0: 0xc78081c4  lwc1        $f0, -0x7E3C($gp)
    ctx->pc = 0x47fdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47fdc4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x47fdc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x47fdc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47fdc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47fdcc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x47fdccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x47fdd0: 0x3e00008  jr          $ra
    ctx->pc = 0x47FDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47FDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47FDD8u;
    // 0x47fdd8: 0x0  nop
    ctx->pc = 0x47fdd8u;
    // NOP
    // 0x47fddc: 0x0  nop
    ctx->pc = 0x47fddcu;
    // NOP
    ctx->pc = 0x47fde0u;
}

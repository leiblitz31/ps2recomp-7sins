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

// Function: sub_003C7220
// Address: 0x3c7220 - 0x3c75e0
void sub_003C7220_0x3c7220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7220_0x3c7220");
#endif

    switch (ctx->pc) {
        case 0x3c72f0u: goto label_3c72f0;
        case 0x3c7480u: goto label_3c7480;
        default: break;
    }

    ctx->pc = 0x3c7220u;

    // 0x3c7220: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x3c7220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c7224: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x3c7224u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x3c7228: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3c7228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3c722c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x3c722cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x3c7230: 0x24c7e230  addiu       $a3, $a2, -0x1DD0
    ctx->pc = 0x3c7230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959664));
    // 0x3c7234: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7234u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c7238: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3c7238u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3c723c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x3c723cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7240: 0xc4e70004  lwc1        $f7, 0x4($a3)
    ctx->pc = 0x3c7240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3c7244: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x3c7244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x3c7248: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3c7248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c724c: 0xc4e5000c  lwc1        $f5, 0xC($a3)
    ctx->pc = 0x3c724cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c7250: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x3c7250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x3c7254: 0x8ccbe230  lw          $t3, -0x1DD0($a2)
    ctx->pc = 0x3c7254u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294959664)));
    // 0x3c7258: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c7258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c725c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c725cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3c7260: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3c7260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c7264: 0x460c0841  sub.s       $f1, $f1, $f12
    ctx->pc = 0x3c7264u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x3c7268: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x3c7268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x3c726c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x3c726cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3c7270: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x3c7270u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x3c7274: 0x8cec0008  lw          $t4, 0x8($a3)
    ctx->pc = 0x3c7274u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x3c7278: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x3c7278u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x3c727c: 0xc0782d  daddu       $t7, $a2, $zero
    ctx->pc = 0x3c727cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7280: 0x460c2100  add.s       $f4, $f4, $f12
    ctx->pc = 0x3c7280u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[12]);
    // 0x3c7284: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x3c7284u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3c7288: 0x46060982  mul.s       $f6, $f1, $f6
    ctx->pc = 0x3c7288u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x3c728c: 0x46004001  sub.s       $f0, $f8, $f0
    ctx->pc = 0x3c728cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x3c7290: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x3c7290u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x3c7294: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x3c7294u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3c7298: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x3c7298u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x3c729c: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x3c729cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x3c72a0: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x3c72a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3c72a4: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x3c72a4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x3c72a8: 0x46003824  .word       0x46003824                   # cvt.w.s     $f0, $f7 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c72a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[7]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c72ac: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3c72acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3c72b0: 0x46002824  .word       0x46002824                   # cvt.w.s     $f0, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c72b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c72b4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3c72b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3c72b8: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x3c72b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x3c72bc: 0xacc2e230  sw          $v0, -0x1DD0($a2)
    ctx->pc = 0x3c72bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294959664), GPR_U32(ctx, 2));
    // 0x3c72c0: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x3c72c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x3c72c4: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x3c72c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x3c72c8: 0x46003024  .word       0x46003024                   # cvt.w.s     $f0, $f6 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c72c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[6]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c72cc: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x3c72ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x3c72d0: 0x10a000c0  beqz        $a1, . + 4 + (0xC0 << 2)
    ctx->pc = 0x3C72D0u;
    {
        const bool branch_taken_0x3c72d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C72D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C72D0u;
        // 0x3c72d4: 0x24aaffff  addiu       $t2, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c72d0) {
            ctx->pc = 0x3C75D4u;
            goto label_3c75d4;
        }
    }
    ctx->pc = 0x3C72D8u;
    // 0x3c72d8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3c72d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c72dc: 0x46004086  mov.s       $f2, $f8
    ctx->pc = 0x3c72dcu;
    ctx->f[2] = FPU_MOV_S(ctx->f[8]);
    // 0x3c72e0: 0x1e0682d  daddu       $t5, $t7, $zero
    ctx->pc = 0x3c72e0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c72e4: 0x3419ffff  ori         $t9, $zero, 0xFFFF
    ctx->pc = 0x3c72e4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3c72e8: 0x2418ffff  addiu       $t8, $zero, -0x1
    ctx->pc = 0x3c72e8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c72ec: 0x0  nop
    ctx->pc = 0x3c72ecu;
    // NOP
label_3c72f0:
    // 0x3c72f0: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C72F0u;
    {
        const bool branch_taken_0x3c72f0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C72F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C72F0u;
        // 0x3c72f4: 0x8da5e230  lw          $a1, -0x1DD0($t5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294959664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c72f0) {
            ctx->pc = 0x3C7314u;
            goto label_3c7314;
        }
    }
    ctx->pc = 0x3C72F8u;
    // 0x3c72f8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3c72f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3c72fc: 0x46026301  sub.s       $f12, $f12, $f2
    ctx->pc = 0x3c72fcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x3c7300: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x3c7300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x3c7304: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x3c7304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3c7308: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3c7308u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3c730c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3C730Cu;
    {
        const bool branch_taken_0x3c730c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C730Cu;
        // 0x3c7310: 0x31843  sra         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c730c) {
            ctx->pc = 0x3C7340u;
            goto label_3c7340;
        }
    }
    ctx->pc = 0x3C7314u;
label_3c7314:
    // 0x3c7314: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x3c7314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7318: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3c7318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3c731c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x3c731cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3c7320: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3c7320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7324: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c7324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3c7328: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x3c7328u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x3c732c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x3c732cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x3c7330: 0x460008e4  .word       0x460008E4                   # cvt.w.s     $f3, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7330u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x3c7334: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x3c7334u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3c7338: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7338u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c733c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3c733cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3c7340:
    // 0x3c7340: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3c7340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3c7344: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3c7344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3c7348: 0xade2e230  sw          $v0, -0x1DD0($t7)
    ctx->pc = 0x3c7348u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294959664), GPR_U32(ctx, 2));
    // 0x3c734c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x3c734cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x3c7350: 0x25a8e230  addiu       $t0, $t5, -0x1DD0
    ctx->pc = 0x3c7350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 4294959664));
    // 0x3c7354: 0x8da7e230  lw          $a3, -0x1DD0($t5)
    ctx->pc = 0x3c7354u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294959664)));
    // 0x3c7358: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x3c7358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3c735c: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x3c735cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7360: 0x167282a  slt         $a1, $t3, $a3
    ctx->pc = 0x3c7360u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3c7364: 0x4c202a  slt         $a0, $v0, $t4
    ctx->pc = 0x3c7364u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x3c7368: 0xe5180a  movz        $v1, $a3, $a1
    ctx->pc = 0x3c7368u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x3c736c: 0x184100b  movn        $v0, $t4, $a0
    ctx->pc = 0x3c736cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 12));
    // 0x3c7370: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x3c7370u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x3c7374: 0x591021  addu        $v0, $v0, $t9
    ctx->pc = 0x3c7374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x3c7378: 0x24c03  sra         $t1, $v0, 16
    ctx->pc = 0x3c7378u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 16));
    // 0x3c737c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C737Cu;
    {
        const bool branch_taken_0x3c737c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C737Cu;
        // 0x3c7380: 0x1234823  subu        $t1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c737c) {
            ctx->pc = 0x3C7390u;
            goto label_3c7390;
        }
    }
    ctx->pc = 0x3C7384u;
    // 0x3c7384: 0x8d030034  lw          $v1, 0x34($t0)
    ctx->pc = 0x3c7384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x3c7388: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C7388u;
    {
        const bool branch_taken_0x3c7388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7388u;
        // 0x3c738c: 0xb1403  sra         $v0, $t3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7388) {
            ctx->pc = 0x3C7398u;
            goto label_3c7398;
        }
    }
    ctx->pc = 0x3C7390u;
label_3c7390:
    // 0x3c7390: 0x8d030034  lw          $v1, 0x34($t0)
    ctx->pc = 0x3c7390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x3c7394: 0x71403  sra         $v0, $a3, 16
    ctx->pc = 0x3c7394u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 16));
label_3c7398:
    // 0x3c7398: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3c7398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3c739c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c739cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c73a0: 0xaf83bda4  sw          $v1, -0x425C($gp)
    ctx->pc = 0x3c73a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950308), GPR_U32(ctx, 3));
    // 0x3c73a4: 0x19200075  blez        $t1, . + 4 + (0x75 << 2)
    ctx->pc = 0x3C73A4u;
    {
        const bool branch_taken_0x3c73a4 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3C73A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C73A4u;
        // 0x3c73a8: 0x254effff  addiu       $t6, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c73a4) {
            ctx->pc = 0x3C757Cu;
            goto label_3c757c;
        }
    }
    ctx->pc = 0x3C73ACu;
    // 0x3c73ac: 0x91023  negu        $v0, $t1
    ctx->pc = 0x3c73acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x3c73b0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3c73b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3c73b4: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x3C73B4u;
    {
        const bool branch_taken_0x3c73b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C73B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C73B4u;
        // 0x3c73b8: 0x8f85bd9c  lw          $a1, -0x4264($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c73b4) {
            ctx->pc = 0x3C7484u;
            goto label_3c7484;
        }
    }
    ctx->pc = 0x3C73BCu;
    // 0x3c73bc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3c73bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3c73c0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3C73C0u;
    {
        const bool branch_taken_0x3c73c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C73C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C73C0u;
        // 0x3c73c4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c73c0) {
            ctx->pc = 0x3C7454u;
            goto label_3c7454;
        }
    }
    ctx->pc = 0x3C73C8u;
    // 0x3c73c8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3C73C8u;
    {
        const bool branch_taken_0x3c73c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C73CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C73C8u;
        // 0x3c73cc: 0x8f84bda4  lw          $a0, -0x425C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c73c8) {
            ctx->pc = 0x3C7410u;
            goto label_3c7410;
        }
    }
    ctx->pc = 0x3C73D0u;
    // 0x3c73d0: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x3c73d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x3c73d4: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x3c73d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3c73d8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3c73d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3c73dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C73DCu;
    {
        const bool branch_taken_0x3c73dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C73E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C73DCu;
        // 0x3c73e0: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c73dc) {
            ctx->pc = 0x3C73F4u;
            goto label_3c73f4;
        }
    }
    ctx->pc = 0x3C73E4u;
    // 0x3c73e4: 0x88a20003  lwl         $v0, 0x3($a1)
    ctx->pc = 0x3c73e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x3c73e8: 0x98a20000  lwr         $v0, 0x0($a1)
    ctx->pc = 0x3c73e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x3c73ec: 0xa8820003  swl         $v0, 0x3($a0)
    ctx->pc = 0x3c73ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3c73f0: 0xb8820000  swr         $v0, 0x0($a0)
    ctx->pc = 0x3c73f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3c73f4:
    // 0x3c73f4: 0x8f82bd9c  lw          $v0, -0x4264($gp)
    ctx->pc = 0x3c73f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950300)));
    // 0x3c73f8: 0x8f83bda4  lw          $v1, -0x425C($gp)
    ctx->pc = 0x3c73f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950308)));
    // 0x3c73fc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3c73fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3c7400: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3c7400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3c7404: 0xaf82bd9c  sw          $v0, -0x4264($gp)
    ctx->pc = 0x3c7404u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950300), GPR_U32(ctx, 2));
    // 0x3c7408: 0xaf83bda4  sw          $v1, -0x425C($gp)
    ctx->pc = 0x3c7408u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950308), GPR_U32(ctx, 3));
    // 0x3c740c: 0x8f85bd9c  lw          $a1, -0x4264($gp)
    ctx->pc = 0x3c740cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950300)));
label_3c7410:
    // 0x3c7410: 0x8f84bda4  lw          $a0, -0x425C($gp)
    ctx->pc = 0x3c7410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950308)));
    // 0x3c7414: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x3c7414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x3c7418: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x3c7418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3c741c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3c741cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3c7420: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C7420u;
    {
        const bool branch_taken_0x3c7420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7420u;
        // 0x3c7424: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7420) {
            ctx->pc = 0x3C7438u;
            goto label_3c7438;
        }
    }
    ctx->pc = 0x3C7428u;
    // 0x3c7428: 0x88a20003  lwl         $v0, 0x3($a1)
    ctx->pc = 0x3c7428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x3c742c: 0x98a20000  lwr         $v0, 0x0($a1)
    ctx->pc = 0x3c742cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x3c7430: 0xa8820003  swl         $v0, 0x3($a0)
    ctx->pc = 0x3c7430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3c7434: 0xb8820000  swr         $v0, 0x0($a0)
    ctx->pc = 0x3c7434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3c7438:
    // 0x3c7438: 0x8f82bd9c  lw          $v0, -0x4264($gp)
    ctx->pc = 0x3c7438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950300)));
    // 0x3c743c: 0x8f83bda4  lw          $v1, -0x425C($gp)
    ctx->pc = 0x3c743cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950308)));
    // 0x3c7440: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3c7440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3c7444: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3c7444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3c7448: 0xaf82bd9c  sw          $v0, -0x4264($gp)
    ctx->pc = 0x3c7448u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950300), GPR_U32(ctx, 2));
    // 0x3c744c: 0xaf83bda4  sw          $v1, -0x425C($gp)
    ctx->pc = 0x3c744cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950308), GPR_U32(ctx, 3));
    // 0x3c7450: 0x8f85bd9c  lw          $a1, -0x4264($gp)
    ctx->pc = 0x3c7450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950300)));
label_3c7454:
    // 0x3c7454: 0x8f84bda4  lw          $a0, -0x425C($gp)
    ctx->pc = 0x3c7454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950308)));
    // 0x3c7458: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x3c7458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x3c745c: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x3c745cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3c7460: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3c7460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3c7464: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x3C7464u;
    {
        const bool branch_taken_0x3c7464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7464u;
        // 0x3c7468: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7464) {
            ctx->pc = 0x3C7560u;
            goto label_3c7560;
        }
    }
    ctx->pc = 0x3C746Cu;
    // 0x3c746c: 0x88a20003  lwl         $v0, 0x3($a1)
    ctx->pc = 0x3c746cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x3c7470: 0x98a20000  lwr         $v0, 0x0($a1)
    ctx->pc = 0x3c7470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x3c7474: 0xa8820003  swl         $v0, 0x3($a0)
    ctx->pc = 0x3c7474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3c7478: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x3C7478u;
    {
        const bool branch_taken_0x3c7478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7478u;
        // 0x3c747c: 0xb8820000  swr         $v0, 0x0($a0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7478) {
            ctx->pc = 0x3C7560u;
            goto label_3c7560;
        }
    }
    ctx->pc = 0x3C7480u;
label_3c7480:
    // 0x3c7480: 0x8f85bd9c  lw          $a1, -0x4264($gp)
    ctx->pc = 0x3c7480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950300)));
label_3c7484:
    // 0x3c7484: 0x8f84bda4  lw          $a0, -0x425C($gp)
    ctx->pc = 0x3c7484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950308)));
    // 0x3c7488: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x3c7488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x3c748c: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x3c748cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3c7490: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3c7490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3c7494: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C7494u;
    {
        const bool branch_taken_0x3c7494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7494u;
        // 0x3c7498: 0x8f88bd9c  lw          $t0, -0x4264($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7494) {
            ctx->pc = 0x3C74B0u;
            goto label_3c74b0;
        }
    }
    ctx->pc = 0x3C749Cu;
    // 0x3c749c: 0x88a20003  lwl         $v0, 0x3($a1)
    ctx->pc = 0x3c749cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x3c74a0: 0x98a20000  lwr         $v0, 0x0($a1)
    ctx->pc = 0x3c74a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x3c74a4: 0xa8820003  swl         $v0, 0x3($a0)
    ctx->pc = 0x3c74a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3c74a8: 0xb8820000  swr         $v0, 0x0($a0)
    ctx->pc = 0x3c74a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3c74ac: 0x8f88bd9c  lw          $t0, -0x4264($gp)
    ctx->pc = 0x3c74acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950300)));
label_3c74b0:
    // 0x3c74b0: 0x8f87bda4  lw          $a3, -0x425C($gp)
    ctx->pc = 0x3c74b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950308)));
    // 0x3c74b4: 0x25040004  addiu       $a0, $t0, 0x4
    ctx->pc = 0x3c74b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3c74b8: 0x24e50004  addiu       $a1, $a3, 0x4
    ctx->pc = 0x3c74b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x3c74bc: 0xaf84bd9c  sw          $a0, -0x4264($gp)
    ctx->pc = 0x3c74bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950300), GPR_U32(ctx, 4));
    // 0x3c74c0: 0xaf85bda4  sw          $a1, -0x425C($gp)
    ctx->pc = 0x3c74c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950308), GPR_U32(ctx, 5));
    // 0x3c74c4: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x3c74c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3c74c8: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x3c74c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x3c74cc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3c74ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3c74d0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C74D0u;
    {
        const bool branch_taken_0x3c74d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c74d0) {
            ctx->pc = 0x3C74D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C74D0u;
            // 0x3c74d4: 0x8f88bd9c  lw          $t0, -0x4264($gp) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C74ECu;
            goto label_3c74ec;
        }
    }
    ctx->pc = 0x3C74D8u;
    // 0x3c74d8: 0x89020007  lwl         $v0, 0x7($t0)
    ctx->pc = 0x3c74d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x3c74dc: 0x99020004  lwr         $v0, 0x4($t0)
    ctx->pc = 0x3c74dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x3c74e0: 0xa8e20007  swl         $v0, 0x7($a3)
    ctx->pc = 0x3c74e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3c74e4: 0xb8e20004  swr         $v0, 0x4($a3)
    ctx->pc = 0x3c74e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3c74e8: 0x8f88bd9c  lw          $t0, -0x4264($gp)
    ctx->pc = 0x3c74e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950300)));
label_3c74ec:
    // 0x3c74ec: 0x8f87bda4  lw          $a3, -0x425C($gp)
    ctx->pc = 0x3c74ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950308)));
    // 0x3c74f0: 0x25040004  addiu       $a0, $t0, 0x4
    ctx->pc = 0x3c74f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3c74f4: 0x24e50004  addiu       $a1, $a3, 0x4
    ctx->pc = 0x3c74f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x3c74f8: 0xaf84bd9c  sw          $a0, -0x4264($gp)
    ctx->pc = 0x3c74f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950300), GPR_U32(ctx, 4));
    // 0x3c74fc: 0xaf85bda4  sw          $a1, -0x425C($gp)
    ctx->pc = 0x3c74fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950308), GPR_U32(ctx, 5));
    // 0x3c7500: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x3c7500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3c7504: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x3c7504u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x3c7508: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3c7508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3c750c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C750Cu;
    {
        const bool branch_taken_0x3c750c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c750c) {
            ctx->pc = 0x3C7510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C750Cu;
            // 0x3c7510: 0x8f88bd9c  lw          $t0, -0x4264($gp) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7528u;
            goto label_3c7528;
        }
    }
    ctx->pc = 0x3C7514u;
    // 0x3c7514: 0x89020007  lwl         $v0, 0x7($t0)
    ctx->pc = 0x3c7514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x3c7518: 0x99020004  lwr         $v0, 0x4($t0)
    ctx->pc = 0x3c7518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x3c751c: 0xa8e20007  swl         $v0, 0x7($a3)
    ctx->pc = 0x3c751cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3c7520: 0xb8e20004  swr         $v0, 0x4($a3)
    ctx->pc = 0x3c7520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3c7524: 0x8f88bd9c  lw          $t0, -0x4264($gp)
    ctx->pc = 0x3c7524u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950300)));
label_3c7528:
    // 0x3c7528: 0x8f87bda4  lw          $a3, -0x425C($gp)
    ctx->pc = 0x3c7528u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950308)));
    // 0x3c752c: 0x25040004  addiu       $a0, $t0, 0x4
    ctx->pc = 0x3c752cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3c7530: 0x24e50004  addiu       $a1, $a3, 0x4
    ctx->pc = 0x3c7530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x3c7534: 0xaf84bd9c  sw          $a0, -0x4264($gp)
    ctx->pc = 0x3c7534u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950300), GPR_U32(ctx, 4));
    // 0x3c7538: 0xaf85bda4  sw          $a1, -0x425C($gp)
    ctx->pc = 0x3c7538u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950308), GPR_U32(ctx, 5));
    // 0x3c753c: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x3c753cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3c7540: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x3c7540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x3c7544: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3c7544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3c7548: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C7548u;
    {
        const bool branch_taken_0x3c7548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7548u;
        // 0x3c754c: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7548) {
            ctx->pc = 0x3C7560u;
            goto label_3c7560;
        }
    }
    ctx->pc = 0x3C7550u;
    // 0x3c7550: 0x89020007  lwl         $v0, 0x7($t0)
    ctx->pc = 0x3c7550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x3c7554: 0x99020004  lwr         $v0, 0x4($t0)
    ctx->pc = 0x3c7554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x3c7558: 0xa8e20007  swl         $v0, 0x7($a3)
    ctx->pc = 0x3c7558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3c755c: 0xb8e20004  swr         $v0, 0x4($a3)
    ctx->pc = 0x3c755cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3c7560:
    // 0x3c7560: 0x8f82bd9c  lw          $v0, -0x4264($gp)
    ctx->pc = 0x3c7560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950300)));
    // 0x3c7564: 0x8f83bda4  lw          $v1, -0x425C($gp)
    ctx->pc = 0x3c7564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950308)));
    // 0x3c7568: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3c7568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3c756c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3c756cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3c7570: 0xaf82bd9c  sw          $v0, -0x4264($gp)
    ctx->pc = 0x3c7570u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950300), GPR_U32(ctx, 2));
    // 0x3c7574: 0x1d20ffc2  bgtz        $t1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x3C7574u;
    {
        const bool branch_taken_0x3c7574 = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x3C7578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7574u;
        // 0x3c7578: 0xaf83bda4  sw          $v1, -0x425C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7574) {
            ctx->pc = 0x3C7480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c7480;
        }
    }
    ctx->pc = 0x3C757Cu;
label_3c757c:
    // 0x3c757c: 0x11400013  beqz        $t2, . + 4 + (0x13 << 2)
    ctx->pc = 0x3C757Cu;
    {
        const bool branch_taken_0x3c757c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C757Cu;
        // 0x3c7580: 0x1c0502d  daddu       $t2, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c757c) {
            ctx->pc = 0x3C75CCu;
            goto label_3c75cc;
        }
    }
    ctx->pc = 0x3C7584u;
    // 0x3c7584: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3c7584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3c7588: 0x46026301  sub.s       $f12, $f12, $f2
    ctx->pc = 0x3c7588u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x3c758c: 0x8dabe230  lw          $t3, -0x1DD0($t5)
    ctx->pc = 0x3c758cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294959664)));
    // 0x3c7590: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x3c7590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x3c7594: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x3c7594u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x3c7598: 0x8ccc0008  lw          $t4, 0x8($a2)
    ctx->pc = 0x3c7598u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3c759c: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x3c759cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x3c75a0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3c75a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3c75a4: 0xada3e230  sw          $v1, -0x1DD0($t5)
    ctx->pc = 0x3c75a4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294959664), GPR_U32(ctx, 3));
    // 0x3c75a8: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3c75a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3c75ac: 0x8f84bda0  lw          $a0, -0x4260($gp)
    ctx->pc = 0x3c75acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950304)));
    // 0x3c75b0: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3c75b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3c75b4: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x3c75b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x3c75b8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3c75b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3c75bc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3c75bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3c75c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3c75c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3c75c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c75c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c75c8: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x3c75c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
label_3c75cc:
    // 0x3c75cc: 0x1558ff48  bne         $t2, $t8, . + 4 + (-0xB8 << 2)
    ctx->pc = 0x3C75CCu;
    {
        const bool branch_taken_0x3c75cc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 24));
        if (branch_taken_0x3c75cc) {
            ctx->pc = 0x3C72F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c72f0;
        }
    }
    ctx->pc = 0x3C75D4u;
label_3c75d4:
    // 0x3c75d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3C75D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C75D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C75DCu;
    // 0x3c75dc: 0x0  nop
    ctx->pc = 0x3c75dcu;
    // NOP
    ctx->pc = 0x3c75e0u;
}

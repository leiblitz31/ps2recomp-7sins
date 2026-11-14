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

// Function: sub_004A1D60
// Address: 0x4a1d60 - 0x4a2380
void sub_004A1D60_0x4a1d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A1D60_0x4a1d60");
#endif

    switch (ctx->pc) {
        case 0x4a1fb0u: goto label_4a1fb0;
        case 0x4a2158u: goto label_4a2158;
        case 0x4a21a0u: goto label_4a21a0;
        case 0x4a2210u: goto label_4a2210;
        case 0x4a2258u: goto label_4a2258;
        case 0x4a22c8u: goto label_4a22c8;
        case 0x4a2310u: goto label_4a2310;
        case 0x4a2354u: goto label_4a2354;
        default: break;
    }

    ctx->pc = 0x4a1d60u;

label_4a1d60:
    // 0x4a1d60: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4a1d60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1d64: 0x90c2000c  lbu         $v0, 0xC($a2)
    ctx->pc = 0x4a1d64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4a1d68: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x4a1d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x4a1d6c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x4a1d6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1d70: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A1D70u;
    {
        const bool branch_taken_0x4a1d70 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4A1D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1D70u;
        // 0x4a1d74: 0x238c2  srl         $a3, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1d70) {
            ctx->pc = 0x4A1D88u;
            goto label_4a1d88;
        }
    }
    ctx->pc = 0x4A1D78u;
    // 0x4a1d78: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x4a1d78u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4a1d7c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x4a1d7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x4a1d80: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4A1D80u;
    {
        const bool branch_taken_0x4a1d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1D80u;
        // 0x4a1d84: 0x9103000c  lbu         $v1, 0xC($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1d80) {
            ctx->pc = 0x4A1DA8u;
            goto label_4a1da8;
        }
    }
    ctx->pc = 0x4A1D88u;
label_4a1d88:
    // 0x4a1d88: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x4a1d88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x4a1d8c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4a1d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4a1d90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a1d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a1d94: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x4a1d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4a1d98: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x4a1d98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x4a1d9c: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x4a1d9cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x4a1da0: 0x90c2000c  lbu         $v0, 0xC($a2)
    ctx->pc = 0x4a1da0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4a1da4: 0x9103000c  lbu         $v1, 0xC($t0)
    ctx->pc = 0x4a1da4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 12)));
label_4a1da8:
    // 0x4a1da8: 0x90c4000d  lbu         $a0, 0xD($a2)
    ctx->pc = 0x4a1da8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 13)));
    // 0x4a1dac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4a1dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a1db0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4a1db0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4a1db4: 0x9105000d  lbu         $a1, 0xD($t0)
    ctx->pc = 0x4a1db4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 13)));
    // 0x4a1db8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4a1db8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4a1dbc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x4a1dbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x4a1dc0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4a1dc0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a1dc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a1dc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a1dc8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4a1dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a1dcc: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x4a1dccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a1dd0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4a1dd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4a1dd4: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x4a1dd4u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x4a1dd8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x4a1dd8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x4a1ddc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A1DDCu;
    {
        const bool branch_taken_0x4a1ddc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A1DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1DDCu;
        // 0x4a1de0: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1ddc) {
            ctx->pc = 0x4A1DF4u;
            goto label_4a1df4;
        }
    }
    ctx->pc = 0x4A1DE4u;
    // 0x4a1de4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4a1de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a1de8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4a1de8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4a1dec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4A1DECu;
    {
        const bool branch_taken_0x4a1dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1DECu;
        // 0x4a1df0: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1dec) {
            ctx->pc = 0x4A1E10u;
            goto label_4a1e10;
        }
    }
    ctx->pc = 0x4A1DF4u;
label_4a1df4:
    // 0x4a1df4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x4a1df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x4a1df8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a1df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a1dfc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a1dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a1e00: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4a1e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a1e04: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4a1e04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4a1e08: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x4a1e08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x4a1e0c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4a1e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4a1e10:
    // 0x4a1e10: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A1E10u;
    {
        const bool branch_taken_0x4a1e10 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A1E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1E10u;
        // 0x4a1e14: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1e10) {
            ctx->pc = 0x4A1E28u;
            goto label_4a1e28;
        }
    }
    ctx->pc = 0x4A1E18u;
    // 0x4a1e18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a1e18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a1e1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a1e1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a1e20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4A1E20u;
    {
        const bool branch_taken_0x4a1e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a1e20) {
            ctx->pc = 0x4A1E3Cu;
            goto label_4a1e3c;
        }
    }
    ctx->pc = 0x4A1E28u;
label_4a1e28:
    // 0x4a1e28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a1e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a1e2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a1e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a1e30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a1e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a1e34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a1e34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a1e38: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4a1e38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4a1e3c:
    // 0x4a1e3c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x4a1e3cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x4a1e40: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x4a1e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4a1e44: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4a1e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1e48: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x4a1e48u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x4a1e4c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4a1e4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4a1e50: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x4a1e50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x4a1e54: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a1e54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4a1e58: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x4a1e58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a1e5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a1e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a1e60: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4a1e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4a1e64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a1e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a1e68: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A1E68u;
    {
        const bool branch_taken_0x4a1e68 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A1E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1E68u;
        // 0x4a1e6c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1e68) {
            ctx->pc = 0x4A1E80u;
            goto label_4a1e80;
        }
    }
    ctx->pc = 0x4A1E70u;
    // 0x4a1e70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a1e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a1e74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a1e74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a1e78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4A1E78u;
    {
        const bool branch_taken_0x4a1e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a1e78) {
            ctx->pc = 0x4A1E94u;
            goto label_4a1e94;
        }
    }
    ctx->pc = 0x4A1E80u;
label_4a1e80:
    // 0x4a1e80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a1e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a1e84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a1e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a1e88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a1e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a1e8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a1e8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a1e90: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4a1e90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4a1e94:
    // 0x4a1e94: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a1e94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4a1e98: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x4a1e98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a1e9c: 0x0  nop
    ctx->pc = 0x4a1e9cu;
    // NOP
    // 0x4a1ea0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A1EA0u;
    {
        const bool branch_taken_0x4a1ea0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A1EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1EA0u;
        // 0x4a1ea4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1ea0) {
            ctx->pc = 0x4A1EB8u;
            goto label_4a1eb8;
        }
    }
    ctx->pc = 0x4A1EA8u;
    // 0x4a1ea8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4a1ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a1eac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4a1eacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4a1eb0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4A1EB0u;
    {
        const bool branch_taken_0x4a1eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1EB0u;
        // 0x4a1eb4: 0x8d020008  lw          $v0, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1eb0) {
            ctx->pc = 0x4A1ED0u;
            goto label_4a1ed0;
        }
    }
    ctx->pc = 0x4A1EB8u;
label_4a1eb8:
    // 0x4a1eb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a1eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a1ebc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a1ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a1ec0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4a1ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a1ec4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4a1ec4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4a1ec8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4a1ec8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x4a1ecc: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x4a1eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_4a1ed0:
    // 0x4a1ed0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A1ED0u;
    {
        const bool branch_taken_0x4a1ed0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A1ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1ED0u;
        // 0x4a1ed4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1ed0) {
            ctx->pc = 0x4A1EE8u;
            goto label_4a1ee8;
        }
    }
    ctx->pc = 0x4A1ED8u;
    // 0x4a1ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a1ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a1edc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a1edcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a1ee0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4A1EE0u;
    {
        const bool branch_taken_0x4a1ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a1ee0) {
            ctx->pc = 0x4A1EFCu;
            goto label_4a1efc;
        }
    }
    ctx->pc = 0x4A1EE8u;
label_4a1ee8:
    // 0x4a1ee8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a1ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a1eec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a1eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a1ef0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a1ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a1ef4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a1ef4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a1ef8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4a1ef8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4a1efc:
    // 0x4a1efc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x4a1efcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x4a1f00: 0x5200005  bltz        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A1F00u;
    {
        const bool branch_taken_0x4a1f00 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x4A1F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1F00u;
        // 0x4a1f04: 0x91842  srl         $v1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1f00) {
            ctx->pc = 0x4A1F18u;
            goto label_4a1f18;
        }
    }
    ctx->pc = 0x4A1F08u;
    // 0x4a1f08: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x4a1f08u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a1f0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a1f0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a1f10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4A1F10u;
    {
        const bool branch_taken_0x4a1f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1F10u;
        // 0x4a1f14: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1f10) {
            ctx->pc = 0x4A1F30u;
            goto label_4a1f30;
        }
    }
    ctx->pc = 0x4A1F18u;
label_4a1f18:
    // 0x4a1f18: 0x31220001  andi        $v0, $t1, 0x1
    ctx->pc = 0x4a1f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x4a1f1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a1f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a1f20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a1f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a1f24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a1f24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a1f28: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4a1f28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x4a1f2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4a1f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4a1f30:
    // 0x4a1f30: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a1f30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4a1f34: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x4a1f34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4a1f38: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x4a1f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4a1f3c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A1F3Cu;
    {
        const bool branch_taken_0x4a1f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1F3Cu;
        // 0x4a1f40: 0x71042  srl         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1f3c) {
            ctx->pc = 0x4A1F5Cu;
            goto label_4a1f5c;
        }
    }
    ctx->pc = 0x4A1F44u;
    // 0x4a1f44: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A1F44u;
    {
        const bool branch_taken_0x4a1f44 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a1f44) {
            ctx->pc = 0x4A1F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A1F44u;
            // 0x4a1f48: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A1F4Cu;
            goto label_4a1f4c;
        }
    }
    ctx->pc = 0x4A1F4Cu;
label_4a1f4c:
    // 0x4a1f4c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4a1f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a1f50: 0x47001b  divu        $zero, $v0, $a3
    ctx->pc = 0x4a1f50u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4a1f54: 0x1012  mflo        $v0
    ctx->pc = 0x4a1f54u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4a1f58: 0x471818  mult        $v1, $v0, $a3
    ctx->pc = 0x4a1f58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4a1f5c:
    // 0x4a1f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A1F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1F5Cu;
        // 0x4a1f60: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A1F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A1F64u;
    // 0x4a1f64: 0x0  nop
    ctx->pc = 0x4a1f64u;
    // NOP
    // 0x4a1f68: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4a1f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4a1f6c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4a1f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x4a1f70: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4a1f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x4a1f74: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4a1f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1f78: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4a1f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x4a1f7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4a1f7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1f80: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x4a1f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x4a1f84: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4a1f84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1f88: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x4a1f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x4a1f8c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x4a1f8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1f90: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4a1f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x4a1f94: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x4a1f94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1f98: 0x129a80b  movn        $s5, $t1, $t1
    ctx->pc = 0x4a1f98u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 9));
    // 0x4a1f9c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4a1f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1fa0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a1fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a1fa4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4a1fa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1fa8: 0xc128758  jal         func_4A1D60
    ctx->pc = 0x4A1FA8u;
    SET_GPR_U32(ctx, 31, 0x4A1FB0u);
    ctx->pc = 0x4A1FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1FA8u;
    // 0x4a1fac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1D60u;
    goto label_4a1d60;
    ctx->pc = 0x4A1FB0u;
label_4a1fb0:
    // 0x4a1fb0: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x4a1fb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x4a1fb4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4a1fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4a1fb8: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x4a1fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4a1fbc: 0x9282000c  lbu         $v0, 0xC($s4)
    ctx->pc = 0x4a1fbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x4a1fc0: 0x903023  subu        $a2, $a0, $s0
    ctx->pc = 0x4a1fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x4a1fc4: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A1FC4u;
    {
        const bool branch_taken_0x4a1fc4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4A1FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1FC4u;
        // 0x4a1fc8: 0x238c2  srl         $a3, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1fc4) {
            ctx->pc = 0x4A1FDCu;
            goto label_4a1fdc;
        }
    }
    ctx->pc = 0x4A1FCCu;
    // 0x4a1fcc: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x4a1fccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4a1fd0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x4a1fd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x4a1fd4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4A1FD4u;
    {
        const bool branch_taken_0x4a1fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1FD4u;
        // 0x4a1fd8: 0x9263000c  lbu         $v1, 0xC($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1fd4) {
            ctx->pc = 0x4A1FFCu;
            goto label_4a1ffc;
        }
    }
    ctx->pc = 0x4A1FDCu;
label_4a1fdc:
    // 0x4a1fdc: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x4a1fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x4a1fe0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4a1fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4a1fe4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a1fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a1fe8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x4a1fe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4a1fec: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x4a1fecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x4a1ff0: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x4a1ff0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x4a1ff4: 0x9282000c  lbu         $v0, 0xC($s4)
    ctx->pc = 0x4a1ff4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x4a1ff8: 0x9263000c  lbu         $v1, 0xC($s3)
    ctx->pc = 0x4a1ff8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
label_4a1ffc:
    // 0x4a1ffc: 0x9284000d  lbu         $a0, 0xD($s4)
    ctx->pc = 0x4a1ffcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x4a2000: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4a2000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a2004: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4a2004u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4a2008: 0x9265000d  lbu         $a1, 0xD($s3)
    ctx->pc = 0x4a2008u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
    // 0x4a200c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4a200cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4a2010: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x4a2010u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x4a2014: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4a2014u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2018: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a2018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a201c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4a201cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4a2020: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x4a2020u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a2024: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4a2024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4a2028: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x4a2028u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x4a202c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x4a202cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x4a2030: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A2030u;
    {
        const bool branch_taken_0x4a2030 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A2034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2030u;
        // 0x4a2034: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2030) {
            ctx->pc = 0x4A2048u;
            goto label_4a2048;
        }
    }
    ctx->pc = 0x4A2038u;
    // 0x4a2038: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4a2038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a203c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4a203cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4a2040: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4A2040u;
    {
        const bool branch_taken_0x4a2040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2040u;
        // 0x4a2044: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2040) {
            ctx->pc = 0x4A2064u;
            goto label_4a2064;
        }
    }
    ctx->pc = 0x4A2048u;
label_4a2048:
    // 0x4a2048: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x4a2048u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x4a204c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a204cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a2050: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a2050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a2054: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4a2054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a2058: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4a2058u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4a205c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x4a205cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x4a2060: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4a2060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a2064:
    // 0x4a2064: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A2064u;
    {
        const bool branch_taken_0x4a2064 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A2068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2064u;
        // 0x4a2068: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2064) {
            ctx->pc = 0x4A207Cu;
            goto label_4a207c;
        }
    }
    ctx->pc = 0x4A206Cu;
    // 0x4a206c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a206cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2070: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a2070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a2074: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4A2074u;
    {
        const bool branch_taken_0x4a2074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2074) {
            ctx->pc = 0x4A2090u;
            goto label_4a2090;
        }
    }
    ctx->pc = 0x4A207Cu;
label_4a207c:
    // 0x4a207c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a207cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a2080: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a2080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a2084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a2084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2088: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a2088u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a208c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4a208cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4a2090:
    // 0x4a2090: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x4a2090u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x4a2094: 0x71823  negu        $v1, $a3
    ctx->pc = 0x4a2094u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x4a2098: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4a2098u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4a209c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x4a209cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x4a20a0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a20a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4a20a4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x4a20a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a20a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a20a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a20ac: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4a20acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4a20b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a20b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a20b4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A20B4u;
    {
        const bool branch_taken_0x4a20b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A20B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A20B4u;
        // 0x4a20b8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a20b4) {
            ctx->pc = 0x4A20CCu;
            goto label_4a20cc;
        }
    }
    ctx->pc = 0x4A20BCu;
    // 0x4a20bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a20bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a20c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a20c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a20c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4A20C4u;
    {
        const bool branch_taken_0x4a20c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A20C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A20C4u;
        // 0x4a20c8: 0x9262000c  lbu         $v0, 0xC($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a20c4) {
            ctx->pc = 0x4A20E4u;
            goto label_4a20e4;
        }
    }
    ctx->pc = 0x4A20CCu;
label_4a20cc:
    // 0x4a20cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a20ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a20d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a20d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a20d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a20d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a20d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a20d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a20dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4a20dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x4a20e0: 0x9262000c  lbu         $v0, 0xC($s3)
    ctx->pc = 0x4a20e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
label_4a20e4:
    // 0x4a20e4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a20e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4a20e8: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x4a20e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x4a20ec: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x4a20ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4a20f0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4a20f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a20f4: 0x518c2  srl         $v1, $a1, 3
    ctx->pc = 0x4a20f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x4a20f8: 0xc3001b  divu        $zero, $a2, $v1
    ctx->pc = 0x4a20f8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x4a20fc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A20FCu;
    {
        const bool branch_taken_0x4a20fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a20fc) {
            ctx->pc = 0x4A2100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A20FCu;
            // 0x4a2100: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A2104u;
            goto label_4a2104;
        }
    }
    ctx->pc = 0x4A2104u;
label_4a2104:
    // 0x4a2104: 0x4812  mflo        $t1
    ctx->pc = 0x4a2104u;
    SET_GPR_U64(ctx, 9, ctx->lo);
    // 0x4a2108: 0x12200093  beqz        $s1, . + 4 + (0x93 << 2)
    ctx->pc = 0x4A2108u;
    {
        const bool branch_taken_0x4a2108 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2108u;
        // 0x4a210c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2108) {
            ctx->pc = 0x4A2358u;
            goto label_4a2358;
        }
    }
    ctx->pc = 0x4A2110u;
    // 0x4a2110: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4a2110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4a2114: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x4a2114u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4a2118: 0x1220008e  beqz        $s1, . + 4 + (0x8E << 2)
    ctx->pc = 0x4A2118u;
    {
        const bool branch_taken_0x4a2118 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2118u;
        // 0x4a211c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2118) {
            ctx->pc = 0x4A2354u;
            goto label_4a2354;
        }
    }
    ctx->pc = 0x4A2120u;
    // 0x4a2120: 0x9262000d  lbu         $v0, 0xD($s3)
    ctx->pc = 0x4a2120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
    // 0x4a2124: 0x1443002a  bne         $v0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x4A2124u;
    {
        const bool branch_taken_0x4a2124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4A2128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2124u;
        // 0x4a2128: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2124) {
            ctx->pc = 0x4A21D0u;
            goto label_4a21d0;
        }
    }
    ctx->pc = 0x4A212Cu;
    // 0x4a212c: 0x9283000d  lbu         $v1, 0xD($s4)
    ctx->pc = 0x4a212cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x4a2130: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4a2130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a2134: 0x54620028  bnel        $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x4A2134u;
    {
        const bool branch_taken_0x4a2134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a2134) {
            ctx->pc = 0x4A2138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A2134u;
            // 0x4a2138: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A21D8u;
            goto label_4a21d8;
        }
    }
    ctx->pc = 0x4A213Cu;
    // 0x4a213c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4a213cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4a2140: 0x14a20013  bne         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4A2140u;
    {
        const bool branch_taken_0x4a2140 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A2144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2140u;
        // 0x4a2144: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2140) {
            ctx->pc = 0x4A2190u;
            goto label_4a2190;
        }
    }
    ctx->pc = 0x4A2148u;
    // 0x4a2148: 0x11200082  beqz        $t1, . + 4 + (0x82 << 2)
    ctx->pc = 0x4A2148u;
    {
        const bool branch_taken_0x4a2148 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2148u;
        // 0x4a214c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2148) {
            ctx->pc = 0x4A2354u;
            goto label_4a2354;
        }
    }
    ctx->pc = 0x4A2150u;
    // 0x4a2150: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a2150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2154: 0x0  nop
    ctx->pc = 0x4a2154u;
    // NOP
label_4a2158:
    // 0x4a2158: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x4a2158u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a215c: 0x2261021  addu        $v0, $s1, $a2
    ctx->pc = 0x4a215cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x4a2160: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4a2160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4a2164: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4a2164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4a2168: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x4a2168u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4a216c: 0x2262021  addu        $a0, $s1, $a2
    ctx->pc = 0x4a216cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x4a2170: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4a2170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4a2174: 0xe9182b  sltu        $v1, $a3, $t1
    ctx->pc = 0x4a2174u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4a2178: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4a2178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a217c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4a217cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4a2180: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x4A2180u;
    {
        const bool branch_taken_0x4a2180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2180u;
        // 0x4a2184: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2180) {
            ctx->pc = 0x4A2158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a2158;
        }
    }
    ctx->pc = 0x4A2188u;
    // 0x4a2188: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x4A2188u;
    {
        const bool branch_taken_0x4a2188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2188u;
        // 0x4a218c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2188) {
            ctx->pc = 0x4A2358u;
            goto label_4a2358;
        }
    }
    ctx->pc = 0x4A2190u;
label_4a2190:
    // 0x4a2190: 0x11200070  beqz        $t1, . + 4 + (0x70 << 2)
    ctx->pc = 0x4A2190u;
    {
        const bool branch_taken_0x4a2190 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2190u;
        // 0x4a2194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2190) {
            ctx->pc = 0x4A2354u;
            goto label_4a2354;
        }
    }
    ctx->pc = 0x4A2198u;
    // 0x4a2198: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a2198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a219c: 0x0  nop
    ctx->pc = 0x4a219cu;
    // NOP
label_4a21a0:
    // 0x4a21a0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a21a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a21a4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4a21a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4a21a8: 0xc9182b  sltu        $v1, $a2, $t1
    ctx->pc = 0x4a21a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4a21ac: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4a21acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a21b0: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x4a21b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x4a21b4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a21b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a21b8: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4a21b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4a21bc: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4a21bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a21c0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4A21C0u;
    {
        const bool branch_taken_0x4a21c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A21C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A21C0u;
        // 0x4a21c4: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a21c0) {
            ctx->pc = 0x4A21A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a21a0;
        }
    }
    ctx->pc = 0x4A21C8u;
    // 0x4a21c8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x4A21C8u;
    {
        const bool branch_taken_0x4a21c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A21CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A21C8u;
        // 0x4a21cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a21c8) {
            ctx->pc = 0x4A2358u;
            goto label_4a2358;
        }
    }
    ctx->pc = 0x4A21D0u;
label_4a21d0:
    // 0x4a21d0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x4a21d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x4a21d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4a21d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4a21d8:
    // 0x4a21d8: 0x1462005c  bne         $v1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x4A21D8u;
    {
        const bool branch_taken_0x4a21d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A21DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A21D8u;
        // 0x4a21dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a21d8) {
            ctx->pc = 0x4A234Cu;
            goto label_4a234c;
        }
    }
    ctx->pc = 0x4A21E0u;
    // 0x4a21e0: 0x9283000d  lbu         $v1, 0xD($s4)
    ctx->pc = 0x4a21e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x4a21e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a21e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a21e8: 0x14620058  bne         $v1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x4A21E8u;
    {
        const bool branch_taken_0x4a21e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A21ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A21E8u;
        // 0x4a21ec: 0x30e300ff  andi        $v1, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a21e8) {
            ctx->pc = 0x4A234Cu;
            goto label_4a234c;
        }
    }
    ctx->pc = 0x4A21F0u;
    // 0x4a21f0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4a21f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4a21f4: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x4A21F4u;
    {
        const bool branch_taken_0x4a21f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A21F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A21F4u;
        // 0x4a21f8: 0x92620018  lbu         $v0, 0x18($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a21f4) {
            ctx->pc = 0x4A22A8u;
            goto label_4a22a8;
        }
    }
    ctx->pc = 0x4A21FCu;
    // 0x4a21fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a21fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a2200: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4A2200u;
    {
        const bool branch_taken_0x4a2200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2200u;
        // 0x4a2204: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2200) {
            ctx->pc = 0x4A224Cu;
            goto label_4a224c;
        }
    }
    ctx->pc = 0x4A2208u;
    // 0x4a2208: 0x11200052  beqz        $t1, . + 4 + (0x52 << 2)
    ctx->pc = 0x4A2208u;
    {
        const bool branch_taken_0x4a2208 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2208u;
        // 0x4a220c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2208) {
            ctx->pc = 0x4A2354u;
            goto label_4a2354;
        }
    }
    ctx->pc = 0x4A2210u;
label_4a2210:
    // 0x4a2210: 0x2461021  addu        $v0, $s2, $a2
    ctx->pc = 0x4a2210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x4a2214: 0x2272821  addu        $a1, $s1, $a3
    ctx->pc = 0x4a2214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x4a2218: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4a2218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4a221c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x4a221cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a2220: 0x2461821  addu        $v1, $s2, $a2
    ctx->pc = 0x4a2220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x4a2224: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4a2224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4a2228: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4a2228u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a222c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4a222cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4a2230: 0xc9182b  sltu        $v1, $a2, $t1
    ctx->pc = 0x4a2230u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4a2234: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a2234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a2238: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x4a2238u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x4a223c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x4A223Cu;
    {
        const bool branch_taken_0x4a223c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A223Cu;
        // 0x4a2240: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a223c) {
            ctx->pc = 0x4A2210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a2210;
        }
    }
    ctx->pc = 0x4A2244u;
    // 0x4a2244: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x4A2244u;
    {
        const bool branch_taken_0x4a2244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2244u;
        // 0x4a2248: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2244) {
            ctx->pc = 0x4A2358u;
            goto label_4a2358;
        }
    }
    ctx->pc = 0x4A224Cu;
label_4a224c:
    // 0x4a224c: 0x11200041  beqz        $t1, . + 4 + (0x41 << 2)
    ctx->pc = 0x4A224Cu;
    {
        const bool branch_taken_0x4a224c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A224Cu;
        // 0x4a2250: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a224c) {
            ctx->pc = 0x4A2354u;
            goto label_4a2354;
        }
    }
    ctx->pc = 0x4A2254u;
    // 0x4a2254: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4a2254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a2258:
    // 0x4a2258: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x4a2258u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a225c: 0x2282821  addu        $a1, $s1, $t0
    ctx->pc = 0x4a225cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x4a2260: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4a2260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4a2264: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x4a2264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x4a2268: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x4a2268u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a226c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4a226cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4a2270: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4a2270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4a2274: 0xe9202b  sltu        $a0, $a3, $t1
    ctx->pc = 0x4a2274u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4a2278: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x4a2278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x4a227c: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x4a227cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x4a2280: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a2280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a2284: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a2284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a2288: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x4a2288u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4a228c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a228cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a2290: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a2290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a2294: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4a2294u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4a2298: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x4A2298u;
    {
        const bool branch_taken_0x4a2298 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2298u;
        // 0x4a229c: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2298) {
            ctx->pc = 0x4A2258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a2258;
        }
    }
    ctx->pc = 0x4A22A0u;
    // 0x4a22a0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x4A22A0u;
    {
        const bool branch_taken_0x4a22a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A22A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A22A0u;
        // 0x4a22a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a22a0) {
            ctx->pc = 0x4A2358u;
            goto label_4a2358;
        }
    }
    ctx->pc = 0x4A22A8u;
label_4a22a8:
    // 0x4a22a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a22a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a22ac: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4A22ACu;
    {
        const bool branch_taken_0x4a22ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a22ac) {
            ctx->pc = 0x4A22FCu;
            goto label_4a22fc;
        }
    }
    ctx->pc = 0x4A22B4u;
    // 0x4a22b4: 0x11200027  beqz        $t1, . + 4 + (0x27 << 2)
    ctx->pc = 0x4A22B4u;
    {
        const bool branch_taken_0x4a22b4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A22B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A22B4u;
        // 0x4a22b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a22b4) {
            ctx->pc = 0x4A2354u;
            goto label_4a2354;
        }
    }
    ctx->pc = 0x4A22BCu;
    // 0x4a22bc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x4a22bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a22c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a22c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a22c4: 0x0  nop
    ctx->pc = 0x4a22c4u;
    // NOP
label_4a22c8:
    // 0x4a22c8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a22c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a22cc: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x4a22ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x4a22d0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4a22d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4a22d4: 0xc9202b  sltu        $a0, $a2, $t1
    ctx->pc = 0x4a22d4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4a22d8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4a22d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a22dc: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4a22dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4a22e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a22e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a22e4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x4a22e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x4a22e8: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4a22e8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a22ec: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x4A22ECu;
    {
        const bool branch_taken_0x4a22ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A22F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A22ECu;
        // 0x4a22f0: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a22ec) {
            ctx->pc = 0x4A22C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a22c8;
        }
    }
    ctx->pc = 0x4A22F4u;
    // 0x4a22f4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4A22F4u;
    {
        const bool branch_taken_0x4a22f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A22F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A22F4u;
        // 0x4a22f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a22f4) {
            ctx->pc = 0x4A2358u;
            goto label_4a2358;
        }
    }
    ctx->pc = 0x4A22FCu;
label_4a22fc:
    // 0x4a22fc: 0x11200015  beqz        $t1, . + 4 + (0x15 << 2)
    ctx->pc = 0x4A22FCu;
    {
        const bool branch_taken_0x4a22fc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A22FCu;
        // 0x4a2300: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a22fc) {
            ctx->pc = 0x4A2354u;
            goto label_4a2354;
        }
    }
    ctx->pc = 0x4A2304u;
    // 0x4a2304: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x4a2304u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2308: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4a2308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a230c: 0x0  nop
    ctx->pc = 0x4a230cu;
    // NOP
label_4a2310:
    // 0x4a2310: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4a2310u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a2314: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x4a2314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x4a2318: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x4a2318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x4a231c: 0xe9282b  sltu        $a1, $a3, $t1
    ctx->pc = 0x4a231cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4a2320: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x4a2320u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a2324: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x4a2324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x4a2328: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4a2328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4a232c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x4a232cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x4a2330: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a2330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a2334: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x4a2334u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x4a2338: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x4a2338u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a233c: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x4A233Cu;
    {
        const bool branch_taken_0x4a233c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A233Cu;
        // 0x4a2340: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a233c) {
            ctx->pc = 0x4A2310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a2310;
        }
    }
    ctx->pc = 0x4A2344u;
    // 0x4a2344: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A2344u;
    {
        const bool branch_taken_0x4a2344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2344u;
        // 0x4a2348: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2344) {
            ctx->pc = 0x4A2358u;
            goto label_4a2358;
        }
    }
    ctx->pc = 0x4A234Cu;
label_4a234c:
    // 0x4a234c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x4A234Cu;
    SET_GPR_U32(ctx, 31, 0x4A2354u);
    ctx->pc = 0x4A2350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A234Cu;
    // 0x4a2350: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x4A234Cu, 0x4A2354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2354u;
label_4a2354:
    // 0x4a2354: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a2354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a2358:
    // 0x4a2358: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4a2358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a235c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4a235cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a2360: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4a2360u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a2364: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4a2364u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a2368: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4a2368u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a236c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x4a236cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a2370: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a2370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a2374: 0x3e00008  jr          $ra
    ctx->pc = 0x4A2374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A2378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2374u;
        // 0x4a2378: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A2374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A237Cu;
    // 0x4a237c: 0x0  nop
    ctx->pc = 0x4a237cu;
    // NOP
    ctx->pc = 0x4a2380u;
}

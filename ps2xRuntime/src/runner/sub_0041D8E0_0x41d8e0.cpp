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

// Function: sub_0041D8E0
// Address: 0x41d8e0 - 0x41dbe0
void sub_0041D8E0_0x41d8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D8E0_0x41d8e0");
#endif

    switch (ctx->pc) {
        case 0x41da48u: goto label_41da48;
        default: break;
    }

    ctx->pc = 0x41d8e0u;

    // 0x41d8e0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x41d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x41d8e4: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x41d8e4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x41d8e8: 0xc51823  subu        $v1, $a2, $a1
    ctx->pc = 0x41d8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x41d8ec: 0x54c03  sra         $t1, $a1, 16
    ctx->pc = 0x41d8ecu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 5), 16));
    // 0x41d8f0: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x41d8f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x41d8f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x41d8f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x41d8f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x41d8f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x41d8fc: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x41d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x41d900: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x41d900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x41d904: 0x3c013780  lui         $at, 0x3780
    ctx->pc = 0x41d904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14208 << 16));
    // 0x41d908: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x41d908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x41d90c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41d90cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41d910: 0x65403  sra         $t2, $a2, 16
    ctx->pc = 0x41d910u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 6), 16));
    // 0x41d914: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x41d914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x41d918: 0x46060202  mul.s       $f8, $f0, $f6
    ctx->pc = 0x41d918u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x41d91c: 0x152a0020  bne         $t1, $t2, . + 4 + (0x20 << 2)
    ctx->pc = 0x41D91Cu;
    {
        const bool branch_taken_0x41d91c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 10));
        ctx->pc = 0x41D920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D91Cu;
        // 0x41d920: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d91c) {
            ctx->pc = 0x41D9A0u;
            goto label_41d9a0;
        }
    }
    ctx->pc = 0x41D924u;
    // 0x41d924: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x41d924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x41d928: 0xc7848054  lwc1        $f4, -0x7FAC($gp)
    ctx->pc = 0x41d928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x41d92c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x41d92cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x41d930: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x41d930u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x41d934: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x41d934u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x41d938: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x41d938u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x41d93c: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x41d93cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x41d940: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x41d940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x41d944: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x41d944u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x41d948: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x41d948u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x41d94c: 0xe5030004  swc1        $f3, 0x4($t0)
    ctx->pc = 0x41d94cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x41d950: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x41d950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x41d954: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x41d954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x41d958: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x41d958u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x41d95c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x41d95cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x41d960: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x41d960u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x41d964: 0x90e20003  lbu         $v0, 0x3($a3)
    ctx->pc = 0x41d964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x41d968: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x41d968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x41d96c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x41d96cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x41d970: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x41d970u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x41d974: 0x460041c6  mov.s       $f7, $f8
    ctx->pc = 0x41d974u;
    ctx->f[7] = FPU_MOV_S(ctx->f[8]);
    // 0x41d978: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x41d978u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x41d97c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x41d97cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x41d980: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x41d980u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x41d984: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x41d984u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x41d988: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x41d988u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x41d98c: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x41d98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x41d990: 0xe5030004  swc1        $f3, 0x4($t0)
    ctx->pc = 0x41d990u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x41d994: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x41D994u;
    {
        const bool branch_taken_0x41d994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D994u;
        // 0x41d998: 0xe5010008  swc1        $f1, 0x8($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d994) {
            ctx->pc = 0x41DB98u;
            goto label_41db98;
        }
    }
    ctx->pc = 0x41D99Cu;
    // 0x41d99c: 0x0  nop
    ctx->pc = 0x41d99cu;
    // NOP
label_41d9a0:
    // 0x41d9a0: 0x25230001  addiu       $v1, $t1, 0x1
    ctx->pc = 0x41d9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x41d9a4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x41d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x41d9a8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x41d9a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x41d9ac: 0xc7858054  lwc1        $f5, -0x7FAC($gp)
    ctx->pc = 0x41d9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x41d9b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x41d9b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x41d9b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x41d9b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x41d9b8: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x41d9b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x41d9bc: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x41d9bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x41d9c0: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x41d9c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x41d9c4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x41d9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x41d9c8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x41d9c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x41d9cc: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x41d9ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x41d9d0: 0xe5030004  swc1        $f3, 0x4($t0)
    ctx->pc = 0x41d9d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x41d9d4: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x41d9d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x41d9d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x41d9d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x41d9dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x41d9dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x41d9e0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x41d9e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x41d9e4: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x41d9e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x41d9e8: 0x90e20003  lbu         $v0, 0x3($a3)
    ctx->pc = 0x41d9e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x41d9ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x41d9ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x41d9f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x41d9f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x41d9f4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x41d9f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x41d9f8: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x41d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x41d9fc: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x41d9fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x41da00: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x41da00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x41da04: 0x460621c2  mul.s       $f7, $f4, $f6
    ctx->pc = 0x41da04u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x41da08: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x41da08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x41da0c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x41da0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x41da10: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x41da10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x41da14: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x41da14u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x41da18: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x41da18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x41da1c: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x41da1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x41da20: 0xe5030004  swc1        $f3, 0x4($t0)
    ctx->pc = 0x41da20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x41da24: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x41da24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x41da28: 0x31403  sra         $v0, $v1, 16
    ctx->pc = 0x41da28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 16));
    // 0x41da2c: 0x104a002c  beq         $v0, $t2, . + 4 + (0x2C << 2)
    ctx->pc = 0x41DA2Cu;
    {
        const bool branch_taken_0x41da2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x41DA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DA2Cu;
        // 0x41da30: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41da2c) {
            ctx->pc = 0x41DAE0u;
            goto label_41dae0;
        }
    }
    ctx->pc = 0x41DA34u;
    // 0x41da34: 0x460029c6  mov.s       $f7, $f5
    ctx->pc = 0x41da34u;
    ctx->f[7] = FPU_MOV_S(ctx->f[5]);
    // 0x41da38: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x41da38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41da3c: 0x3c090001  lui         $t1, 0x1
    ctx->pc = 0x41da3cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
    // 0x41da40: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x41da40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41da44: 0x0  nop
    ctx->pc = 0x41da44u;
    // NOP
label_41da48:
    // 0x41da48: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x41da48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x41da4c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x41da4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x41da50: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x41da50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x41da54: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x41da54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x41da58: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x41da58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x41da5c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x41da5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x41da60: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x41da60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x41da64: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x41da64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x41da68: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x41da68u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x41da6c: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x41da6cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x41da70: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x41da70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x41da74: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x41da74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x41da78: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x41da78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x41da7c: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x41da7cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x41da80: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x41da80u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x41da84: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x41da84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x41da88: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x41da88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x41da8c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x41da8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x41da90: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x41da90u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x41da94: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x41da94u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x41da98: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x41da98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41da9c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x41da9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x41daa0: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x41daa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x41daa4: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x41daa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41daa8: 0xc502000c  lwc1        $f2, 0xC($t0)
    ctx->pc = 0x41daa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x41daac: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x41daacu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x41dab0: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x41dab0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x41dab4: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x41dab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x41dab8: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x41dab8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x41dabc: 0xe5030004  swc1        $f3, 0x4($t0)
    ctx->pc = 0x41dabcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x41dac0: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x41dac0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x41dac4: 0xe502000c  swc1        $f2, 0xC($t0)
    ctx->pc = 0x41dac4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x41dac8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x41dac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x41dacc: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x41daccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x41dad0: 0x31403  sra         $v0, $v1, 16
    ctx->pc = 0x41dad0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 16));
    // 0x41dad4: 0x1445ffdc  bne         $v0, $a1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x41DAD4u;
    {
        const bool branch_taken_0x41dad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x41DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DAD4u;
        // 0x41dad8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41dad4) {
            ctx->pc = 0x41DA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41da48;
        }
    }
    ctx->pc = 0x41DADCu;
    // 0x41dadc: 0x0  nop
    ctx->pc = 0x41dadcu;
    // NOP
label_41dae0:
    // 0x41dae0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x41dae0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x41dae4: 0xc7808054  lwc1        $f0, -0x7FAC($gp)
    ctx->pc = 0x41dae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41dae8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x41dae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x41daec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x41daecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x41daf0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x41daf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x41daf4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x41daf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x41daf8: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x41daf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x41dafc: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x41dafcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x41db00: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x41db00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x41db04: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x41db04u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x41db08: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x41db08u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x41db0c: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x41db0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x41db10: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x41db10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x41db14: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x41db14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x41db18: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x41db18u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x41db1c: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x41db1cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x41db20: 0x90e20003  lbu         $v0, 0x3($a3)
    ctx->pc = 0x41db20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x41db24: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x41db24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x41db28: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x41db28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x41db2c: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x41db2cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x41db30: 0xc31023  subu        $v0, $a2, $v1
    ctx->pc = 0x41db30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x41db34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x41db34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x41db38: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x41db38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x41db3c: 0x3c013780  lui         $at, 0x3780
    ctx->pc = 0x41db3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14208 << 16));
    // 0x41db40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x41db40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x41db44: 0x460009c2  mul.s       $f7, $f1, $f0
    ctx->pc = 0x41db44u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x41db48: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x41db48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x41db4c: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x41db4cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x41db50: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x41db50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x41db54: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x41db54u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x41db58: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x41db58u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x41db5c: 0xe7a6000c  swc1        $f6, 0xC($sp)
    ctx->pc = 0x41db5cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x41db60: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x41db60u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x41db64: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x41db64u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x41db68: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x41db68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41db6c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x41db6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x41db70: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x41db70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x41db74: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x41db74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41db78: 0xc502000c  lwc1        $f2, 0xC($t0)
    ctx->pc = 0x41db78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x41db7c: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x41db7cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x41db80: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x41db80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x41db84: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x41db84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x41db88: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x41db88u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x41db8c: 0xe5030004  swc1        $f3, 0x4($t0)
    ctx->pc = 0x41db8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x41db90: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x41db90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x41db94: 0xe502000c  swc1        $f2, 0xC($t0)
    ctx->pc = 0x41db94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
label_41db98:
    // 0x41db98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x41db98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x41db9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x41db9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x41dba0: 0x460809c3  div.s       $f7, $f1, $f8
    ctx->pc = 0x41dba0u;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[1], ctx->f[8]); }
    // 0x41dba4: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x41dba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41dba8: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x41dba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x41dbac: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x41dbacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x41dbb0: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x41dbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41dbb4: 0xc502000c  lwc1        $f2, 0xC($t0)
    ctx->pc = 0x41dbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x41dbb8: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x41dbb8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x41dbbc: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x41dbbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x41dbc0: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x41dbc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x41dbc4: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x41dbc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x41dbc8: 0xe5030004  swc1        $f3, 0x4($t0)
    ctx->pc = 0x41dbc8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x41dbcc: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x41dbccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x41dbd0: 0xe502000c  swc1        $f2, 0xC($t0)
    ctx->pc = 0x41dbd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x41dbd4: 0x3e00008  jr          $ra
    ctx->pc = 0x41DBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41DBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DBD4u;
        // 0x41dbd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41DBD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41DBDCu;
    // 0x41dbdc: 0x0  nop
    ctx->pc = 0x41dbdcu;
    // NOP
    ctx->pc = 0x41dbe0u;
}

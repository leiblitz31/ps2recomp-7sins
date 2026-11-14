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

// Function: sub_00198470
// Address: 0x198470 - 0x1992d0
void sub_00198470_0x198470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198470_0x198470");
#endif

    switch (ctx->pc) {
        case 0x198494u: goto label_198494;
        case 0x1984a4u: goto label_1984a4;
        case 0x1985d8u: goto label_1985d8;
        case 0x1985ecu: goto label_1985ec;
        case 0x198600u: goto label_198600;
        case 0x19861cu: goto label_19861c;
        case 0x198630u: goto label_198630;
        case 0x1987f4u: goto label_1987f4;
        case 0x19880cu: goto label_19880c;
        case 0x198824u: goto label_198824;
        case 0x19883cu: goto label_19883c;
        case 0x198850u: goto label_198850;
        case 0x198860u: goto label_198860;
        case 0x198878u: goto label_198878;
        case 0x19888cu: goto label_19888c;
        case 0x1988c4u: goto label_1988c4;
        case 0x1988d8u: goto label_1988d8;
        case 0x198b68u: goto label_198b68;
        case 0x198b7cu: goto label_198b7c;
        case 0x198b90u: goto label_198b90;
        case 0x198ba8u: goto label_198ba8;
        case 0x198bbcu: goto label_198bbc;
        case 0x198bd4u: goto label_198bd4;
        case 0x198be8u: goto label_198be8;
        case 0x198c00u: goto label_198c00;
        case 0x198c14u: goto label_198c14;
        case 0x198c28u: goto label_198c28;
        case 0x198c3cu: goto label_198c3c;
        case 0x198c54u: goto label_198c54;
        case 0x198c68u: goto label_198c68;
        case 0x198c80u: goto label_198c80;
        case 0x198c94u: goto label_198c94;
        case 0x198cacu: goto label_198cac;
        case 0x198cc0u: goto label_198cc0;
        case 0x198f48u: goto label_198f48;
        case 0x198f5cu: goto label_198f5c;
        case 0x198f70u: goto label_198f70;
        case 0x198f88u: goto label_198f88;
        case 0x198fa0u: goto label_198fa0;
        case 0x198fb4u: goto label_198fb4;
        case 0x198fc8u: goto label_198fc8;
        case 0x198fe0u: goto label_198fe0;
        case 0x198ff4u: goto label_198ff4;
        case 0x1990acu: goto label_1990ac;
        case 0x1991e4u: goto label_1991e4;
        case 0x1991f8u: goto label_1991f8;
        case 0x19920cu: goto label_19920c;
        case 0x199224u: goto label_199224;
        case 0x199238u: goto label_199238;
        case 0x199254u: goto label_199254;
        case 0x199268u: goto label_199268;
        case 0x19928cu: goto label_19928c;
        case 0x1992a4u: goto label_1992a4;
        case 0x1992b4u: goto label_1992b4;
        default: break;
    }

    ctx->pc = 0x198470u;

    // 0x198470: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x198470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x198474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x198474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x198478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x198478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19847c: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x19847cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x198480: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x198480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x198484: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x198484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x198488: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x198488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x19848c: 0xc05fc54  jal         func_17F150
    ctx->pc = 0x19848Cu;
    SET_GPR_U32(ctx, 31, 0x198494u);
    ctx->pc = 0x17F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F150u, 0x19848Cu, 0x198494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198494u;
label_198494:
    // 0x198494: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x198494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x198498: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x198498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19849c: 0xc084504  jal         func_211410
    ctx->pc = 0x19849Cu;
    SET_GPR_U32(ctx, 31, 0x1984A4u);
    ctx->pc = 0x211410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211410u, 0x19849Cu, 0x1984A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1984A4u;
label_1984a4:
    // 0x1984a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1984a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1984a8: 0x0  nop
    ctx->pc = 0x1984a8u;
    // NOP
    // 0x1984ac: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1984acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1984b0: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x1984b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1984b4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1984b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1984b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1984b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1984bc: 0x0  nop
    ctx->pc = 0x1984bcu;
    // NOP
    // 0x1984c0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1984c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1984c4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1984c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1984c8: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1984c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1984cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1984ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1984d0: 0x0  nop
    ctx->pc = 0x1984d0u;
    // NOP
    // 0x1984d4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1984d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1984d8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1984d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1984dc: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1984dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1984e0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1984e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1984e4: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1984E4u;
    {
        const bool branch_taken_0x1984e4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1984e4) {
            ctx->pc = 0x198500u;
            goto label_198500;
        }
    }
    ctx->pc = 0x1984ECu;
    // 0x1984ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1984ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1984f0: 0x0  nop
    ctx->pc = 0x1984f0u;
    // NOP
    // 0x1984f4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1984f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1984f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1984F8u;
    {
        const bool branch_taken_0x1984f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1984f8) {
            ctx->pc = 0x19851Cu;
            goto label_19851c;
        }
    }
    ctx->pc = 0x198500u;
label_198500:
    // 0x198500: 0x42842  srl         $a1, $a0, 1
    ctx->pc = 0x198500u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x198504: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x198504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x198508: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x198508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x19850c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x19850cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198510: 0x0  nop
    ctx->pc = 0x198510u;
    // NOP
    // 0x198514: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x198514u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198518: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x198518u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19851c:
    // 0x19851c: 0x3c104420  lui         $s0, 0x4420
    ctx->pc = 0x19851cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)17440 << 16));
    // 0x198520: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x198520u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198524: 0x0  nop
    ctx->pc = 0x198524u;
    // NOP
    // 0x198528: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x198528u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x19852c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x19852cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198530: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x198530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x198534: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x198534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x198538: 0x8f84bb80  lw          $a0, -0x4480($gp)
    ctx->pc = 0x198538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x19853c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x19853cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x198540: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x198540u;
    {
        const bool branch_taken_0x198540 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x198540) {
            ctx->pc = 0x19855Cu;
            goto label_19855c;
        }
    }
    ctx->pc = 0x198548u;
    // 0x198548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19854c: 0x0  nop
    ctx->pc = 0x19854cu;
    // NOP
    // 0x198550: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x198550u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198554: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x198554u;
    {
        const bool branch_taken_0x198554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198554) {
            ctx->pc = 0x198578u;
            goto label_198578;
        }
    }
    ctx->pc = 0x19855Cu;
label_19855c:
    // 0x19855c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19855cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x198560: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x198560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x198564: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x198564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x198568: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x198568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19856c: 0x0  nop
    ctx->pc = 0x19856cu;
    // NOP
    // 0x198570: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x198570u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198574: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x198574u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_198578:
    // 0x198578: 0x3c054420  lui         $a1, 0x4420
    ctx->pc = 0x198578u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17440 << 16));
    // 0x19857c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x19857cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198580: 0x0  nop
    ctx->pc = 0x198580u;
    // NOP
    // 0x198584: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x198584u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x198588: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x198588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19858c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19858cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x198590: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x198590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x198594: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x198594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198598: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x198598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x19859c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x19859cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1985a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1985a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1985a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1985a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1985a8: 0x0  nop
    ctx->pc = 0x1985a8u;
    // NOP
    // 0x1985ac: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1985acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1985b0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1985b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1985b4: 0x3c054080  lui         $a1, 0x4080
    ctx->pc = 0x1985b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16512 << 16));
    // 0x1985b8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1985b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1985bc: 0x0  nop
    ctx->pc = 0x1985bcu;
    // NOP
    // 0x1985c0: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1985c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1985c4: 0x27a6008c  addiu       $a2, $sp, 0x8C
    ctx->pc = 0x1985c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1985c8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1985c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1985ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1985d0: 0xc056708  jal         func_159C20
    ctx->pc = 0x1985D0u;
    SET_GPR_U32(ctx, 31, 0x1985D8u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x1985D0u, 0x1985D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1985D8u;
label_1985d8:
    // 0x1985d8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1985d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1985dc: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1985dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1985e0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1985e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1985e4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1985E4u;
    SET_GPR_U32(ctx, 31, 0x1985ECu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1985E4u, 0x1985ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1985ECu;
label_1985ec:
    // 0x1985ec: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1985ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1985f0: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x1985f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1985f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1985f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985f8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1985F8u;
    SET_GPR_U32(ctx, 31, 0x198600u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1985F8u, 0x198600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198600u;
label_198600:
    // 0x198600: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x198600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x198604: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x198604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x198608: 0x24850118  addiu       $a1, $a0, 0x118
    ctx->pc = 0x198608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 280));
    // 0x19860c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19860cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198610: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x198610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198614: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x198614u;
    SET_GPR_U32(ctx, 31, 0x19861Cu);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x198614u, 0x19861Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19861Cu;
label_19861c:
    // 0x19861c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19861cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198620: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x198620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x198624: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x198624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x198628: 0xc0842c0  jal         func_210B00
    ctx->pc = 0x198628u;
    SET_GPR_U32(ctx, 31, 0x198630u);
    ctx->pc = 0x210B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210B00u, 0x198628u, 0x198630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198630u;
label_198630:
    // 0x198630: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x198630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x198634: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x198634u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198638: 0x0  nop
    ctx->pc = 0x198638u;
    // NOP
    // 0x19863c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x19863cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x198640: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x198640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x198644: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x198644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x198648: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x198648u;
    {
        const bool branch_taken_0x198648 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x198648) {
            ctx->pc = 0x198664u;
            goto label_198664;
        }
    }
    ctx->pc = 0x198650u;
    // 0x198650: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x198650u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198654: 0x0  nop
    ctx->pc = 0x198654u;
    // NOP
    // 0x198658: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x198658u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19865c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19865Cu;
    {
        const bool branch_taken_0x19865c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19865c) {
            ctx->pc = 0x198680u;
            goto label_198680;
        }
    }
    ctx->pc = 0x198664u;
label_198664:
    // 0x198664: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x198664u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x198668: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x198668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x19866c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19866cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x198670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198674: 0x0  nop
    ctx->pc = 0x198674u;
    // NOP
    // 0x198678: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x198678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19867c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19867cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_198680:
    // 0x198680: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x198680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x198684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198688: 0x0  nop
    ctx->pc = 0x198688u;
    // NOP
    // 0x19868c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x19868cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x198690: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x198690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198694: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x198694u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x198698: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x198698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x19869c: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x19869cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1986a0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1986a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1986a4: 0xc78083fc  lwc1        $f0, -0x7C04($gp)
    ctx->pc = 0x1986a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1986a8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1986a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1986ac: 0xc7808400  lwc1        $f0, -0x7C00($gp)
    ctx->pc = 0x1986acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1986b0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1986b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1986b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1986b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1986b8: 0x0  nop
    ctx->pc = 0x1986b8u;
    // NOP
    // 0x1986bc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1986bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1986c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1986c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1986c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1986c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1986c8: 0x0  nop
    ctx->pc = 0x1986c8u;
    // NOP
    // 0x1986cc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1986ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1986d0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1986d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1986d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1986d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1986d8: 0x0  nop
    ctx->pc = 0x1986d8u;
    // NOP
    // 0x1986dc: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1986dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1986e0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1986e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1986e4: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1986e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1986e8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1986e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1986ec: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1986ECu;
    {
        const bool branch_taken_0x1986ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1986ec) {
            ctx->pc = 0x198708u;
            goto label_198708;
        }
    }
    ctx->pc = 0x1986F4u;
    // 0x1986f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1986f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1986f8: 0x0  nop
    ctx->pc = 0x1986f8u;
    // NOP
    // 0x1986fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1986fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198700: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x198700u;
    {
        const bool branch_taken_0x198700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198700) {
            ctx->pc = 0x198724u;
            goto label_198724;
        }
    }
    ctx->pc = 0x198708u;
label_198708:
    // 0x198708: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x198708u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x19870c: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x19870cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x198710: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x198710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x198714: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x198714u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198718: 0x0  nop
    ctx->pc = 0x198718u;
    // NOP
    // 0x19871c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x19871cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198720: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x198720u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_198724:
    // 0x198724: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x198724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x198728: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19872c: 0x0  nop
    ctx->pc = 0x19872cu;
    // NOP
    // 0x198730: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x198730u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x198734: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x198734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198738: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x198738u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19873c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x19873cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x198740: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x198740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x198744: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x198744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x198748: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x198748u;
    {
        const bool branch_taken_0x198748 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x198748) {
            ctx->pc = 0x198764u;
            goto label_198764;
        }
    }
    ctx->pc = 0x198750u;
    // 0x198750: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x198750u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198754: 0x0  nop
    ctx->pc = 0x198754u;
    // NOP
    // 0x198758: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x198758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19875c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19875Cu;
    {
        const bool branch_taken_0x19875c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19875c) {
            ctx->pc = 0x198780u;
            goto label_198780;
        }
    }
    ctx->pc = 0x198764u;
label_198764:
    // 0x198764: 0x42842  srl         $a1, $a0, 1
    ctx->pc = 0x198764u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x198768: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x198768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x19876c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x19876cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x198770: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x198770u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198774: 0x0  nop
    ctx->pc = 0x198774u;
    // NOP
    // 0x198778: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x198778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19877c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19877cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_198780:
    // 0x198780: 0x3c1043e0  lui         $s0, 0x43E0
    ctx->pc = 0x198780u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)17376 << 16));
    // 0x198784: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x198784u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198788: 0x0  nop
    ctx->pc = 0x198788u;
    // NOP
    // 0x19878c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x19878cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x198790: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x198790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198794: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x198794u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x198798: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x198798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x19879c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19879cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1987a0: 0x0  nop
    ctx->pc = 0x1987a0u;
    // NOP
    // 0x1987a4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1987a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1987a8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1987a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1987ac: 0xc7808278  lwc1        $f0, -0x7D88($gp)
    ctx->pc = 0x1987acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1987b0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1987b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1987b4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1987b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1987b8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1987b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1987bc: 0x0  nop
    ctx->pc = 0x1987bcu;
    // NOP
    // 0x1987c0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1987c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1987c4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1987c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1987c8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1987c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1987cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1987ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1987d0: 0x0  nop
    ctx->pc = 0x1987d0u;
    // NOP
    // 0x1987d4: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1987d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1987d8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1987d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1987dc: 0xc44000d8  lwc1        $f0, 0xD8($v0)
    ctx->pc = 0x1987dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1987e0: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1987e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1987e4: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x1987e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1987e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1987e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1987ec: 0xc056708  jal         func_159C20
    ctx->pc = 0x1987ECu;
    SET_GPR_U32(ctx, 31, 0x1987F4u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x1987ECu, 0x1987F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1987F4u;
label_1987f4:
    // 0x1987f4: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1987f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1987f8: 0x24a600a4  addiu       $a2, $a1, 0xA4
    ctx->pc = 0x1987f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x1987fc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1987fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198800: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x198800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x198804: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x198804u;
    SET_GPR_U32(ctx, 31, 0x19880Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x198804u, 0x19880Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19880Cu;
label_19880c:
    // 0x19880c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x19880cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x198810: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x198810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x198814: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x198814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198818: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x198818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19881c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19881Cu;
    SET_GPR_U32(ctx, 31, 0x198824u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19881Cu, 0x198824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198824u;
label_198824:
    // 0x198824: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x198824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x198828: 0x8fb000a0  lw          $s0, 0xA0($sp)
    ctx->pc = 0x198828u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19882c: 0x26040118  addiu       $a0, $s0, 0x118
    ctx->pc = 0x19882cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x198830: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x198830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198834: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x198834u;
    SET_GPR_U32(ctx, 31, 0x19883Cu);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x198834u, 0x19883Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19883Cu;
label_19883c:
    // 0x19883c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19883cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198840: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x198840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x198844: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x198844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x198848: 0xc0842c0  jal         func_210B00
    ctx->pc = 0x198848u;
    SET_GPR_U32(ctx, 31, 0x198850u);
    ctx->pc = 0x210B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210B00u, 0x198848u, 0x198850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198850u;
label_198850:
    // 0x198850: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x198850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x198854: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x198854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198858: 0xc06479c  jal         func_191E70
    ctx->pc = 0x198858u;
    SET_GPR_U32(ctx, 31, 0x198860u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x198858u, 0x198860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198860u;
label_198860:
    // 0x198860: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x198860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198864: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x198864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x198868: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x198868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19886c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x19886cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x198870: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x198870u;
    SET_GPR_U32(ctx, 31, 0x198878u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x198870u, 0x198878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198878u;
label_198878:
    // 0x198878: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x198878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19887c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19887cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198880: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x198880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x198884: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x198884u;
    SET_GPR_U32(ctx, 31, 0x19888Cu);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x198884u, 0x19888Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19888Cu;
label_19888c:
    // 0x19888c: 0xc7838288  lwc1        $f3, -0x7D78($gp)
    ctx->pc = 0x19888cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x198890: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x198890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x198894: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x198894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x198898: 0xc44100d8  lwc1        $f1, 0xD8($v0)
    ctx->pc = 0x198898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19889c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19889cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1988a0: 0x0  nop
    ctx->pc = 0x1988a0u;
    // NOP
    // 0x1988a4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1988a4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1988a8: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1988a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1988ac: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1988acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1988b0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1988b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1988b4: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x1988b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x1988b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1988b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1988bc: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x1988BCu;
    SET_GPR_U32(ctx, 31, 0x1988C4u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x1988BCu, 0x1988C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1988C4u;
label_1988c4:
    // 0x1988c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1988c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1988c8: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1988c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1988cc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1988ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1988d0: 0xc0842c0  jal         func_210B00
    ctx->pc = 0x1988D0u;
    SET_GPR_U32(ctx, 31, 0x1988D8u);
    ctx->pc = 0x210B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210B00u, 0x1988D0u, 0x1988D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1988D8u;
label_1988d8:
    // 0x1988d8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1988d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1988dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1988dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1988e0: 0x0  nop
    ctx->pc = 0x1988e0u;
    // NOP
    // 0x1988e4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1988e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1988e8: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1988e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1988ec: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1988ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1988f0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1988F0u;
    {
        const bool branch_taken_0x1988f0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1988f0) {
            ctx->pc = 0x19890Cu;
            goto label_19890c;
        }
    }
    ctx->pc = 0x1988F8u;
    // 0x1988f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1988f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1988fc: 0x0  nop
    ctx->pc = 0x1988fcu;
    // NOP
    // 0x198900: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x198900u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198904: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x198904u;
    {
        const bool branch_taken_0x198904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198904) {
            ctx->pc = 0x198928u;
            goto label_198928;
        }
    }
    ctx->pc = 0x19890Cu;
label_19890c:
    // 0x19890c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19890cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x198910: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x198910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x198914: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x198914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x198918: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x198918u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19891c: 0x0  nop
    ctx->pc = 0x19891cu;
    // NOP
    // 0x198920: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x198920u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198924: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x198924u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_198928:
    // 0x198928: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x198928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x19892c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19892cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198930: 0x0  nop
    ctx->pc = 0x198930u;
    // NOP
    // 0x198934: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x198934u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x198938: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x198938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19893c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19893cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x198940: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x198940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x198944: 0xc78082e4  lwc1        $f0, -0x7D1C($gp)
    ctx->pc = 0x198944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198948: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x198948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x19894c: 0xc7808404  lwc1        $f0, -0x7BFC($gp)
    ctx->pc = 0x19894cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198950: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x198950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x198954: 0xc7808378  lwc1        $f0, -0x7C88($gp)
    ctx->pc = 0x198954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198958: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x198958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x19895c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19895cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198960: 0x0  nop
    ctx->pc = 0x198960u;
    // NOP
    // 0x198964: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x198964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x198968: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x198968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19896c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19896cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198970: 0x0  nop
    ctx->pc = 0x198970u;
    // NOP
    // 0x198974: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x198974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x198978: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x198978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x19897c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x19897cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x198980: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x198980u;
    {
        const bool branch_taken_0x198980 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x198980) {
            ctx->pc = 0x19899Cu;
            goto label_19899c;
        }
    }
    ctx->pc = 0x198988u;
    // 0x198988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19898c: 0x0  nop
    ctx->pc = 0x19898cu;
    // NOP
    // 0x198990: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x198990u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198994: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x198994u;
    {
        const bool branch_taken_0x198994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198994) {
            ctx->pc = 0x1989B8u;
            goto label_1989b8;
        }
    }
    ctx->pc = 0x19899Cu;
label_19899c:
    // 0x19899c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19899cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1989a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1989a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1989a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1989a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1989a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1989a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1989ac: 0x0  nop
    ctx->pc = 0x1989acu;
    // NOP
    // 0x1989b0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1989b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1989b4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1989b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1989b8:
    // 0x1989b8: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x1989b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x1989bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1989bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1989c0: 0x0  nop
    ctx->pc = 0x1989c0u;
    // NOP
    // 0x1989c4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1989c4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1989c8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1989c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1989cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1989ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1989d0: 0x0  nop
    ctx->pc = 0x1989d0u;
    // NOP
    // 0x1989d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1989d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1989d8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1989d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1989dc: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1989dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1989e0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1989e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1989e4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1989E4u;
    {
        const bool branch_taken_0x1989e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1989e4) {
            ctx->pc = 0x198A00u;
            goto label_198a00;
        }
    }
    ctx->pc = 0x1989ECu;
    // 0x1989ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1989ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1989f0: 0x0  nop
    ctx->pc = 0x1989f0u;
    // NOP
    // 0x1989f4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1989f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1989f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1989F8u;
    {
        const bool branch_taken_0x1989f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1989f8) {
            ctx->pc = 0x198A1Cu;
            goto label_198a1c;
        }
    }
    ctx->pc = 0x198A00u;
label_198a00:
    // 0x198a00: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x198a00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x198a04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x198a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x198a08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x198a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x198a0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x198a0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198a10: 0x0  nop
    ctx->pc = 0x198a10u;
    // NOP
    // 0x198a14: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x198a14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198a18: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x198a18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_198a1c:
    // 0x198a1c: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x198a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x198a20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198a20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198a24: 0x0  nop
    ctx->pc = 0x198a24u;
    // NOP
    // 0x198a28: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x198a28u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x198a2c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x198a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x198a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198a34: 0x0  nop
    ctx->pc = 0x198a34u;
    // NOP
    // 0x198a38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x198a38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x198a3c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x198a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x198a40: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x198a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x198a44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198a48: 0x0  nop
    ctx->pc = 0x198a48u;
    // NOP
    // 0x198a4c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x198a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x198a50: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x198a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x198a54: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x198a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x198a58: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x198a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x198a5c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x198A5Cu;
    {
        const bool branch_taken_0x198a5c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x198a5c) {
            ctx->pc = 0x198A78u;
            goto label_198a78;
        }
    }
    ctx->pc = 0x198A64u;
    // 0x198a64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198a68: 0x0  nop
    ctx->pc = 0x198a68u;
    // NOP
    // 0x198a6c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x198a6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198a70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x198A70u;
    {
        const bool branch_taken_0x198a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198a70) {
            ctx->pc = 0x198A94u;
            goto label_198a94;
        }
    }
    ctx->pc = 0x198A78u;
label_198a78:
    // 0x198a78: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x198a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x198a7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x198a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x198a80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x198a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x198a84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x198a84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198a88: 0x0  nop
    ctx->pc = 0x198a88u;
    // NOP
    // 0x198a8c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x198a8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198a90: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x198a90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_198a94:
    // 0x198a94: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x198a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x198a98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198a9c: 0x0  nop
    ctx->pc = 0x198a9cu;
    // NOP
    // 0x198aa0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x198aa0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x198aa4: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x198aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198aa8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x198aa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x198aac: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x198aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x198ab0: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x198ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x198ab4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x198ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x198ab8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x198AB8u;
    {
        const bool branch_taken_0x198ab8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x198ab8) {
            ctx->pc = 0x198AD4u;
            goto label_198ad4;
        }
    }
    ctx->pc = 0x198AC0u;
    // 0x198ac0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198ac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198ac4: 0x0  nop
    ctx->pc = 0x198ac4u;
    // NOP
    // 0x198ac8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x198ac8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198acc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x198ACCu;
    {
        const bool branch_taken_0x198acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198acc) {
            ctx->pc = 0x198AF0u;
            goto label_198af0;
        }
    }
    ctx->pc = 0x198AD4u;
label_198ad4:
    // 0x198ad4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x198ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x198ad8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x198ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x198adc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x198adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x198ae0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x198ae0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198ae4: 0x0  nop
    ctx->pc = 0x198ae4u;
    // NOP
    // 0x198ae8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x198ae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198aec: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x198aecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_198af0:
    // 0x198af0: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x198af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x198af4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198af8: 0x0  nop
    ctx->pc = 0x198af8u;
    // NOP
    // 0x198afc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x198afcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x198b00: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x198b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198b04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x198b04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x198b08: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x198b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x198b0c: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x198b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198b10: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x198b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x198b14: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x198b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198b18: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x198b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x198b1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x198b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x198b20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198b24: 0x0  nop
    ctx->pc = 0x198b24u;
    // NOP
    // 0x198b28: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x198b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x198b2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x198b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x198b30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198b34: 0x0  nop
    ctx->pc = 0x198b34u;
    // NOP
    // 0x198b38: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x198b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x198b3c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x198b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x198b40: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x198b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x198b44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198b48: 0x0  nop
    ctx->pc = 0x198b48u;
    // NOP
    // 0x198b4c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x198b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x198b50: 0xc780829c  lwc1        $f0, -0x7D64($gp)
    ctx->pc = 0x198b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198b54: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x198b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x198b58: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x198b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x198b5c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x198b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x198b60: 0xc056708  jal         func_159C20
    ctx->pc = 0x198B60u;
    SET_GPR_U32(ctx, 31, 0x198B68u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x198B60u, 0x198B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198B68u;
label_198b68:
    // 0x198b68: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x198b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x198b6c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x198b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x198b70: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x198b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x198b74: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x198B74u;
    SET_GPR_U32(ctx, 31, 0x198B7Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x198B74u, 0x198B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198B7Cu;
label_198b7c:
    // 0x198b7c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x198b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x198b80: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x198b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x198b84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x198b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b88: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x198B88u;
    SET_GPR_U32(ctx, 31, 0x198B90u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x198B88u, 0x198B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198B90u;
label_198b90:
    // 0x198b90: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x198b90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x198b94: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x198b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x198b98: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x198b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x198b9c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x198b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x198ba0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x198BA0u;
    SET_GPR_U32(ctx, 31, 0x198BA8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x198BA0u, 0x198BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198BA8u;
label_198ba8:
    // 0x198ba8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x198ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x198bac: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x198bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x198bb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x198bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198bb4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x198BB4u;
    SET_GPR_U32(ctx, 31, 0x198BBCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x198BB4u, 0x198BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198BBCu;
label_198bbc:
    // 0x198bbc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x198bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x198bc0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x198bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x198bc4: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x198bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x198bc8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x198bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x198bcc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x198BCCu;
    SET_GPR_U32(ctx, 31, 0x198BD4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x198BCCu, 0x198BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198BD4u;
label_198bd4:
    // 0x198bd4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x198bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x198bd8: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x198bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x198bdc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x198bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198be0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x198BE0u;
    SET_GPR_U32(ctx, 31, 0x198BE8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x198BE0u, 0x198BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198BE8u;
label_198be8:
    // 0x198be8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x198be8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x198bec: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x198becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x198bf0: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x198bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x198bf4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x198bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x198bf8: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x198BF8u;
    SET_GPR_U32(ctx, 31, 0x198C00u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x198BF8u, 0x198C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198C00u;
label_198c00:
    // 0x198c00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x198c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198c04: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x198c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x198c08: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x198c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x198c0c: 0xc0842c0  jal         func_210B00
    ctx->pc = 0x198C0Cu;
    SET_GPR_U32(ctx, 31, 0x198C14u);
    ctx->pc = 0x210B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210B00u, 0x198C0Cu, 0x198C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198C14u;
label_198c14:
    // 0x198c14: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x198c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x198c18: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x198c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x198c1c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x198c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x198c20: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x198C20u;
    SET_GPR_U32(ctx, 31, 0x198C28u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x198C20u, 0x198C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198C28u;
label_198c28:
    // 0x198c28: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x198c28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x198c2c: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x198c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x198c30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x198c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198c34: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x198C34u;
    SET_GPR_U32(ctx, 31, 0x198C3Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x198C34u, 0x198C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198C3Cu;
label_198c3c:
    // 0x198c3c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x198c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x198c40: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x198c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x198c44: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x198c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x198c48: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x198c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x198c4c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x198C4Cu;
    SET_GPR_U32(ctx, 31, 0x198C54u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x198C4Cu, 0x198C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198C54u;
label_198c54:
    // 0x198c54: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x198c54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x198c58: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x198c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x198c5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x198c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198c60: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x198C60u;
    SET_GPR_U32(ctx, 31, 0x198C68u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x198C60u, 0x198C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198C68u;
label_198c68:
    // 0x198c68: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x198c68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x198c6c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x198c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x198c70: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x198c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x198c74: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x198c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x198c78: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x198C78u;
    SET_GPR_U32(ctx, 31, 0x198C80u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x198C78u, 0x198C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198C80u;
label_198c80:
    // 0x198c80: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x198c80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x198c84: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x198c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x198c88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x198c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198c8c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x198C8Cu;
    SET_GPR_U32(ctx, 31, 0x198C94u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x198C8Cu, 0x198C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198C94u;
label_198c94:
    // 0x198c94: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x198c94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x198c98: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x198c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x198c9c: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x198c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x198ca0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x198ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x198ca4: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x198CA4u;
    SET_GPR_U32(ctx, 31, 0x198CACu);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x198CA4u, 0x198CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198CACu;
label_198cac:
    // 0x198cac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x198cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198cb0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x198cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x198cb4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x198cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x198cb8: 0xc0842c0  jal         func_210B00
    ctx->pc = 0x198CB8u;
    SET_GPR_U32(ctx, 31, 0x198CC0u);
    ctx->pc = 0x210B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210B00u, 0x198CB8u, 0x198CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198CC0u;
label_198cc0:
    // 0x198cc0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x198cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x198cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198cc8: 0x0  nop
    ctx->pc = 0x198cc8u;
    // NOP
    // 0x198ccc: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x198cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x198cd0: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x198cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x198cd4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x198cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x198cd8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x198CD8u;
    {
        const bool branch_taken_0x198cd8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x198cd8) {
            ctx->pc = 0x198CF4u;
            goto label_198cf4;
        }
    }
    ctx->pc = 0x198CE0u;
    // 0x198ce0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198ce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198ce4: 0x0  nop
    ctx->pc = 0x198ce4u;
    // NOP
    // 0x198ce8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x198ce8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198cec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x198CECu;
    {
        const bool branch_taken_0x198cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198cec) {
            ctx->pc = 0x198D10u;
            goto label_198d10;
        }
    }
    ctx->pc = 0x198CF4u;
label_198cf4:
    // 0x198cf4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x198cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x198cf8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x198cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x198cfc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x198cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x198d00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x198d00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198d04: 0x0  nop
    ctx->pc = 0x198d04u;
    // NOP
    // 0x198d08: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x198d08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198d0c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x198d0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_198d10:
    // 0x198d10: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x198d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x198d14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198d18: 0x0  nop
    ctx->pc = 0x198d18u;
    // NOP
    // 0x198d1c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x198d1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x198d20: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x198d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198d24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x198d24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x198d28: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x198d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x198d2c: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x198d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198d30: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x198d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x198d34: 0xc7808408  lwc1        $f0, -0x7BF8($gp)
    ctx->pc = 0x198d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198d38: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x198d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x198d3c: 0xc78080b4  lwc1        $f0, -0x7F4C($gp)
    ctx->pc = 0x198d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198d40: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x198d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x198d44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x198d44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198d48: 0x0  nop
    ctx->pc = 0x198d48u;
    // NOP
    // 0x198d4c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x198d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x198d50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x198d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x198d54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198d58: 0x0  nop
    ctx->pc = 0x198d58u;
    // NOP
    // 0x198d5c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x198d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x198d60: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x198d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x198d64: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x198d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x198d68: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x198D68u;
    {
        const bool branch_taken_0x198d68 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x198d68) {
            ctx->pc = 0x198D84u;
            goto label_198d84;
        }
    }
    ctx->pc = 0x198D70u;
    // 0x198d70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198d74: 0x0  nop
    ctx->pc = 0x198d74u;
    // NOP
    // 0x198d78: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x198d78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198d7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x198D7Cu;
    {
        const bool branch_taken_0x198d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198d7c) {
            ctx->pc = 0x198DA0u;
            goto label_198da0;
        }
    }
    ctx->pc = 0x198D84u;
label_198d84:
    // 0x198d84: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x198d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x198d88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x198d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x198d8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x198d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x198d90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x198d90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198d94: 0x0  nop
    ctx->pc = 0x198d94u;
    // NOP
    // 0x198d98: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x198d98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198d9c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x198d9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_198da0:
    // 0x198da0: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x198da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x198da4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198da8: 0x0  nop
    ctx->pc = 0x198da8u;
    // NOP
    // 0x198dac: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x198dacu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x198db0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x198db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x198db4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198db8: 0x0  nop
    ctx->pc = 0x198db8u;
    // NOP
    // 0x198dbc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x198dbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x198dc0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x198dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x198dc4: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x198dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x198dc8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x198dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x198dcc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x198DCCu;
    {
        const bool branch_taken_0x198dcc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x198dcc) {
            ctx->pc = 0x198DE8u;
            goto label_198de8;
        }
    }
    ctx->pc = 0x198DD4u;
    // 0x198dd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198dd8: 0x0  nop
    ctx->pc = 0x198dd8u;
    // NOP
    // 0x198ddc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x198ddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198de0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x198DE0u;
    {
        const bool branch_taken_0x198de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198de0) {
            ctx->pc = 0x198E04u;
            goto label_198e04;
        }
    }
    ctx->pc = 0x198DE8u;
label_198de8:
    // 0x198de8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x198de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x198dec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x198decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x198df0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x198df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x198df4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x198df4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198df8: 0x0  nop
    ctx->pc = 0x198df8u;
    // NOP
    // 0x198dfc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x198dfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198e00: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x198e00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_198e04:
    // 0x198e04: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x198e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x198e08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198e0c: 0x0  nop
    ctx->pc = 0x198e0cu;
    // NOP
    // 0x198e10: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x198e10u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x198e14: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x198e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x198e18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198e18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198e1c: 0x0  nop
    ctx->pc = 0x198e1cu;
    // NOP
    // 0x198e20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x198e20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x198e24: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x198e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x198e28: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x198e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x198e2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198e30: 0x0  nop
    ctx->pc = 0x198e30u;
    // NOP
    // 0x198e34: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x198e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x198e38: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x198e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x198e3c: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x198e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x198e40: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x198e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x198e44: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x198E44u;
    {
        const bool branch_taken_0x198e44 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x198e44) {
            ctx->pc = 0x198E60u;
            goto label_198e60;
        }
    }
    ctx->pc = 0x198E4Cu;
    // 0x198e4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198e50: 0x0  nop
    ctx->pc = 0x198e50u;
    // NOP
    // 0x198e54: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x198e54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198e58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x198E58u;
    {
        const bool branch_taken_0x198e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198e58) {
            ctx->pc = 0x198E7Cu;
            goto label_198e7c;
        }
    }
    ctx->pc = 0x198E60u;
label_198e60:
    // 0x198e60: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x198e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x198e64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x198e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x198e68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x198e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x198e6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x198e6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198e70: 0x0  nop
    ctx->pc = 0x198e70u;
    // NOP
    // 0x198e74: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x198e74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198e78: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x198e78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_198e7c:
    // 0x198e7c: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x198e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x198e80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198e80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198e84: 0x0  nop
    ctx->pc = 0x198e84u;
    // NOP
    // 0x198e88: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x198e88u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x198e8c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x198e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198e90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x198e90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x198e94: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x198e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x198e98: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x198e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x198e9c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x198e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x198ea0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x198EA0u;
    {
        const bool branch_taken_0x198ea0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x198ea0) {
            ctx->pc = 0x198EBCu;
            goto label_198ebc;
        }
    }
    ctx->pc = 0x198EA8u;
    // 0x198ea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198eac: 0x0  nop
    ctx->pc = 0x198eacu;
    // NOP
    // 0x198eb0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x198eb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198eb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x198EB4u;
    {
        const bool branch_taken_0x198eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198eb4) {
            ctx->pc = 0x198ED8u;
            goto label_198ed8;
        }
    }
    ctx->pc = 0x198EBCu;
label_198ebc:
    // 0x198ebc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x198ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x198ec0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x198ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x198ec4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x198ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x198ec8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x198ec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198ecc: 0x0  nop
    ctx->pc = 0x198eccu;
    // NOP
    // 0x198ed0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x198ed0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198ed4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x198ed4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_198ed8:
    // 0x198ed8: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x198ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x198edc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198ee0: 0x0  nop
    ctx->pc = 0x198ee0u;
    // NOP
    // 0x198ee4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x198ee4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x198ee8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x198ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198eec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x198eecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x198ef0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x198ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x198ef4: 0xc780840c  lwc1        $f0, -0x7BF4($gp)
    ctx->pc = 0x198ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198ef8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x198ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x198efc: 0xc7808410  lwc1        $f0, -0x7BF0($gp)
    ctx->pc = 0x198efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198f00: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x198f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x198f04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x198f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x198f08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198f0c: 0x0  nop
    ctx->pc = 0x198f0cu;
    // NOP
    // 0x198f10: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x198f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x198f14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x198f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x198f18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198f1c: 0x0  nop
    ctx->pc = 0x198f1cu;
    // NOP
    // 0x198f20: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x198f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x198f24: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x198f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x198f28: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x198f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x198f2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198f30: 0x0  nop
    ctx->pc = 0x198f30u;
    // NOP
    // 0x198f34: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x198f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x198f38: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x198f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x198f3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x198f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198f40: 0xc056708  jal         func_159C20
    ctx->pc = 0x198F40u;
    SET_GPR_U32(ctx, 31, 0x198F48u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x198F40u, 0x198F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198F48u;
label_198f48:
    // 0x198f48: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x198f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x198f4c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x198f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x198f50: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x198f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x198f54: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x198F54u;
    SET_GPR_U32(ctx, 31, 0x198F5Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x198F54u, 0x198F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198F5Cu;
label_198f5c:
    // 0x198f5c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x198f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x198f60: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x198f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x198f64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x198f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198f68: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x198F68u;
    SET_GPR_U32(ctx, 31, 0x198F70u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x198F68u, 0x198F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198F70u;
label_198f70:
    // 0x198f70: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x198f70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x198f74: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x198f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x198f78: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x198f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x198f7c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x198f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x198f80: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x198F80u;
    SET_GPR_U32(ctx, 31, 0x198F88u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x198F80u, 0x198F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198F88u;
label_198f88:
    // 0x198f88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x198f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198f8c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x198f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x198f90: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x198f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x198f94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x198f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198f98: 0xc0842c0  jal         func_210B00
    ctx->pc = 0x198F98u;
    SET_GPR_U32(ctx, 31, 0x198FA0u);
    ctx->pc = 0x210B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210B00u, 0x198F98u, 0x198FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198FA0u;
label_198fa0:
    // 0x198fa0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x198fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x198fa4: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x198fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x198fa8: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x198fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x198fac: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x198FACu;
    SET_GPR_U32(ctx, 31, 0x198FB4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x198FACu, 0x198FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198FB4u;
label_198fb4:
    // 0x198fb4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x198fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x198fb8: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x198fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x198fbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x198fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198fc0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x198FC0u;
    SET_GPR_U32(ctx, 31, 0x198FC8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x198FC0u, 0x198FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198FC8u;
label_198fc8:
    // 0x198fc8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x198fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x198fcc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x198fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x198fd0: 0x24640118  addiu       $a0, $v1, 0x118
    ctx->pc = 0x198fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x198fd4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x198fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x198fd8: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x198FD8u;
    SET_GPR_U32(ctx, 31, 0x198FE0u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x198FD8u, 0x198FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198FE0u;
label_198fe0:
    // 0x198fe0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x198fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198fe4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x198fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x198fe8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x198fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x198fec: 0xc0842c0  jal         func_210B00
    ctx->pc = 0x198FECu;
    SET_GPR_U32(ctx, 31, 0x198FF4u);
    ctx->pc = 0x210B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210B00u, 0x198FECu, 0x198FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198FF4u;
label_198ff4:
    // 0x198ff4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x198ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ff8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x198ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x198ffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199000: 0x0  nop
    ctx->pc = 0x199000u;
    // NOP
    // 0x199004: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x199004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x199008: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x199008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x19900c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x19900cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x199010: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x199010u;
    {
        const bool branch_taken_0x199010 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x199010) {
            ctx->pc = 0x19902Cu;
            goto label_19902c;
        }
    }
    ctx->pc = 0x199018u;
    // 0x199018: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x199018u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19901c: 0x0  nop
    ctx->pc = 0x19901cu;
    // NOP
    // 0x199020: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x199020u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x199024: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x199024u;
    {
        const bool branch_taken_0x199024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199024) {
            ctx->pc = 0x199048u;
            goto label_199048;
        }
    }
    ctx->pc = 0x19902Cu;
label_19902c:
    // 0x19902c: 0x42842  srl         $a1, $a0, 1
    ctx->pc = 0x19902cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x199030: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x199030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x199034: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x199034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x199038: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x199038u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19903c: 0x0  nop
    ctx->pc = 0x19903cu;
    // NOP
    // 0x199040: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x199040u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x199044: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x199044u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_199048:
    // 0x199048: 0x3c1043e0  lui         $s0, 0x43E0
    ctx->pc = 0x199048u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)17376 << 16));
    // 0x19904c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x19904cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199050: 0x0  nop
    ctx->pc = 0x199050u;
    // NOP
    // 0x199054: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x199054u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x199058: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x199058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19905c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19905cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x199060: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x199060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x199064: 0xc78082e4  lwc1        $f0, -0x7D1C($gp)
    ctx->pc = 0x199064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199068: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x199068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x19906c: 0xc7808414  lwc1        $f0, -0x7BEC($gp)
    ctx->pc = 0x19906cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199070: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x199070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x199074: 0xc7808418  lwc1        $f0, -0x7BE8($gp)
    ctx->pc = 0x199074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199078: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x199078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x19907c: 0x3c044020  lui         $a0, 0x4020
    ctx->pc = 0x19907cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16416 << 16));
    // 0x199080: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x199080u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199084: 0x0  nop
    ctx->pc = 0x199084u;
    // NOP
    // 0x199088: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x199088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x19908c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19908cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x199090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199094: 0x0  nop
    ctx->pc = 0x199094u;
    // NOP
    // 0x199098: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x199098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x19909c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x19909cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1990a0: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x1990a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1990a4: 0xc104d38  jal         func_4134E0
    ctx->pc = 0x1990A4u;
    SET_GPR_U32(ctx, 31, 0x1990ACu);
    ctx->pc = 0x4134E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4134E0u, 0x1990A4u, 0x1990ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1990ACu;
label_1990ac:
    // 0x1990ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1990acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1990b0: 0x0  nop
    ctx->pc = 0x1990b0u;
    // NOP
    // 0x1990b4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1990b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1990b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1990b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1990bc: 0x0  nop
    ctx->pc = 0x1990bcu;
    // NOP
    // 0x1990c0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1990c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1990c4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1990c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1990c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1990c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1990cc: 0x0  nop
    ctx->pc = 0x1990ccu;
    // NOP
    // 0x1990d0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1990d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1990d4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1990d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1990d8: 0x8f85bb80  lw          $a1, -0x4480($gp)
    ctx->pc = 0x1990d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1990dc: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1990dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1990e0: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1990E0u;
    {
        const bool branch_taken_0x1990e0 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1990e0) {
            ctx->pc = 0x1990FCu;
            goto label_1990fc;
        }
    }
    ctx->pc = 0x1990E8u;
    // 0x1990e8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1990e8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1990ec: 0x0  nop
    ctx->pc = 0x1990ecu;
    // NOP
    // 0x1990f0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1990f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1990f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1990F4u;
    {
        const bool branch_taken_0x1990f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1990f4) {
            ctx->pc = 0x199118u;
            goto label_199118;
        }
    }
    ctx->pc = 0x1990FCu;
label_1990fc:
    // 0x1990fc: 0x61042  srl         $v0, $a2, 1
    ctx->pc = 0x1990fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x199100: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x199100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x199104: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x199104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x199108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19910c: 0x0  nop
    ctx->pc = 0x19910cu;
    // NOP
    // 0x199110: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x199110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x199114: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x199114u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_199118:
    // 0x199118: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x199118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x19911c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19911cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199120: 0x0  nop
    ctx->pc = 0x199120u;
    // NOP
    // 0x199124: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x199124u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x199128: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x199128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19912c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19912cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x199130: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x199130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x199134: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x199134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x199138: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x199138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x19913c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19913Cu;
    {
        const bool branch_taken_0x19913c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19913c) {
            ctx->pc = 0x199158u;
            goto label_199158;
        }
    }
    ctx->pc = 0x199144u;
    // 0x199144: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199148: 0x0  nop
    ctx->pc = 0x199148u;
    // NOP
    // 0x19914c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x19914cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x199150: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x199150u;
    {
        const bool branch_taken_0x199150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199150) {
            ctx->pc = 0x199174u;
            goto label_199174;
        }
    }
    ctx->pc = 0x199158u;
label_199158:
    // 0x199158: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x199158u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x19915c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19915cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x199160: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x199160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x199164: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x199164u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199168: 0x0  nop
    ctx->pc = 0x199168u;
    // NOP
    // 0x19916c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x19916cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x199170: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x199170u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_199174:
    // 0x199174: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x199174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x199178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19917c: 0x0  nop
    ctx->pc = 0x19917cu;
    // NOP
    // 0x199180: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x199180u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x199184: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x199184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199188: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x199188u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19918c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x19918cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x199190: 0xc780841c  lwc1        $f0, -0x7BE4($gp)
    ctx->pc = 0x199190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199194: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x199194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x199198: 0xc780841c  lwc1        $f0, -0x7BE4($gp)
    ctx->pc = 0x199198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19919c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x19919cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1991a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1991a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1991a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1991a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1991a8: 0x0  nop
    ctx->pc = 0x1991a8u;
    // NOP
    // 0x1991ac: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1991acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1991b0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1991b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1991b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1991b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1991b8: 0x0  nop
    ctx->pc = 0x1991b8u;
    // NOP
    // 0x1991bc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1991bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1991c0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1991c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1991c4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1991c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1991c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1991c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1991cc: 0x0  nop
    ctx->pc = 0x1991ccu;
    // NOP
    // 0x1991d0: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1991d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1991d4: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x1991d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1991d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1991d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1991dc: 0xc056708  jal         func_159C20
    ctx->pc = 0x1991DCu;
    SET_GPR_U32(ctx, 31, 0x1991E4u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x1991DCu, 0x1991E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1991E4u;
label_1991e4:
    // 0x1991e4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1991e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1991e8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1991e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1991ec: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1991ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1991f0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1991F0u;
    SET_GPR_U32(ctx, 31, 0x1991F8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1991F0u, 0x1991F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1991F8u;
label_1991f8:
    // 0x1991f8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1991f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1991fc: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x1991fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x199200: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199204: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x199204u;
    SET_GPR_U32(ctx, 31, 0x19920Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x199204u, 0x19920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19920Cu;
label_19920c:
    // 0x19920c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x19920cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x199210: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x199210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x199214: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x199214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x199218: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x199218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19921c: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19921Cu;
    SET_GPR_U32(ctx, 31, 0x199224u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19921Cu, 0x199224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199224u;
label_199224:
    // 0x199224: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199228: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x199228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19922c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x19922cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x199230: 0xc0842c0  jal         func_210B00
    ctx->pc = 0x199230u;
    SET_GPR_U32(ctx, 31, 0x199238u);
    ctx->pc = 0x210B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210B00u, 0x199230u, 0x199238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199238u;
label_199238:
    // 0x199238: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x199238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19923c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x19923cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x199240: 0x245000a4  addiu       $s0, $v0, 0xA4
    ctx->pc = 0x199240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x199244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199248: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x199248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x19924c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19924Cu;
    SET_GPR_U32(ctx, 31, 0x199254u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19924Cu, 0x199254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199254u;
label_199254:
    // 0x199254: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x199254u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x199258: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x199258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x19925c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19925cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199260: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x199260u;
    SET_GPR_U32(ctx, 31, 0x199268u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x199260u, 0x199268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199268u;
label_199268:
    // 0x199268: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x199268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19926c: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x19926cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x199270: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x199270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x199274: 0x24450118  addiu       $a1, $v0, 0x118
    ctx->pc = 0x199274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x199278: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x199278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19927c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x19927cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x199280: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x199280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199284: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x199284u;
    SET_GPR_U32(ctx, 31, 0x19928Cu);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x199284u, 0x19928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19928Cu;
label_19928c:
    // 0x19928c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19928cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199290: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x199290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199294: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x199294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x199298: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x199298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19929c: 0xc0842c0  jal         func_210B00
    ctx->pc = 0x19929Cu;
    SET_GPR_U32(ctx, 31, 0x1992A4u);
    ctx->pc = 0x210B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210B00u, 0x19929Cu, 0x1992A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1992A4u;
label_1992a4:
    // 0x1992a4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1992a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1992a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1992a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1992ac: 0xc08455c  jal         func_211570
    ctx->pc = 0x1992ACu;
    SET_GPR_U32(ctx, 31, 0x1992B4u);
    ctx->pc = 0x211570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211570u, 0x1992ACu, 0x1992B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1992B4u;
label_1992b4:
    // 0x1992b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1992b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1992b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1992b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1992bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1992bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1992c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1992C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1992C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1992C8u;
    // 0x1992c8: 0x0  nop
    ctx->pc = 0x1992c8u;
    // NOP
    // 0x1992cc: 0x0  nop
    ctx->pc = 0x1992ccu;
    // NOP
    ctx->pc = 0x1992d0u;
}

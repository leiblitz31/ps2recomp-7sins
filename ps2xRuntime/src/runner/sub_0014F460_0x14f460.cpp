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

// Function: sub_0014F460
// Address: 0x14f460 - 0x14f830
void sub_0014F460_0x14f460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F460_0x14f460");
#endif

    switch (ctx->pc) {
        case 0x14f4acu: goto label_14f4ac;
        case 0x14f4bcu: goto label_14f4bc;
        case 0x14f4c8u: goto label_14f4c8;
        case 0x14f4dcu: goto label_14f4dc;
        case 0x14f4e8u: goto label_14f4e8;
        case 0x14f660u: goto label_14f660;
        case 0x14f66cu: goto label_14f66c;
        case 0x14f678u: goto label_14f678;
        case 0x14f6b0u: goto label_14f6b0;
        case 0x14f6e4u: goto label_14f6e4;
        case 0x14f70cu: goto label_14f70c;
        case 0x14f738u: goto label_14f738;
        case 0x14f768u: goto label_14f768;
        case 0x14f780u: goto label_14f780;
        case 0x14f78cu: goto label_14f78c;
        case 0x14f7a0u: goto label_14f7a0;
        case 0x14f7d0u: goto label_14f7d0;
        case 0x14f7e4u: goto label_14f7e4;
        case 0x14f7f4u: goto label_14f7f4;
        default: break;
    }

    ctx->pc = 0x14f460u;

    // 0x14f460: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x14f460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x14f464: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x14f464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x14f468: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x14f468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x14f46c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14f46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14f470: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14f470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14f474: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14f474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14f478: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14f478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14f47c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14f47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14f480: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14f480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14f484: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14f484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14f488: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14f488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14f48c: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x14f48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x14f490: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x14f490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x14f494: 0xafa600e0  sw          $a2, 0xE0($sp)
    ctx->pc = 0x14f494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
    // 0x14f498: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x14f498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x14f49c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14f49cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14f4a0: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x14f4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x14f4a4: 0xc0529b8  jal         func_14A6E0
    ctx->pc = 0x14F4A4u;
    SET_GPR_U32(ctx, 31, 0x14F4ACu);
    ctx->pc = 0x14A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A6E0u, 0x14F4A4u, 0x14F4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F4ACu;
label_14f4ac:
    // 0x14f4ac: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14f4b0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x14f4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14f4b4: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14F4B4u;
    SET_GPR_U32(ctx, 31, 0x14F4BCu);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14F4B4u, 0x14F4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F4BCu;
label_14f4bc:
    // 0x14f4bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14f4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f4c0: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x14F4C0u;
    SET_GPR_U32(ctx, 31, 0x14F4C8u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x14F4C0u, 0x14F4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F4C8u;
label_14f4c8:
    // 0x14f4c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x14f4c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f4cc: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14f4d0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x14f4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14f4d4: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14F4D4u;
    SET_GPR_U32(ctx, 31, 0x14F4DCu);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14F4D4u, 0x14F4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F4DCu;
label_14f4dc:
    // 0x14f4dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14f4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f4e0: 0xc0477d8  jal         func_11DF60
    ctx->pc = 0x14F4E0u;
    SET_GPR_U32(ctx, 31, 0x14F4E8u);
    ctx->pc = 0x11DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF60u, 0x14F4E0u, 0x14F4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F4E8u;
label_14f4e8:
    // 0x14f4e8: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x14f4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x14f4ec: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x14f4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x14f4f0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x14f4f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14f4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f4f8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x14f4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f4fc: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x14f4fcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x14f500: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14f500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14f504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f508: 0x0  nop
    ctx->pc = 0x14f508u;
    // NOP
    // 0x14f50c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14f50cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f510: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x14F510u;
    {
        const bool branch_taken_0x14f510 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f510) {
            ctx->pc = 0x14F528u;
            goto label_14f528;
        }
    }
    ctx->pc = 0x14F518u;
    // 0x14f518: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14f518u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14f51c: 0x44170800  mfc1        $s7, $f1
    ctx->pc = 0x14f51cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
    // 0x14f520: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14F520u;
    {
        const bool branch_taken_0x14f520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f520) {
            ctx->pc = 0x14F53Cu;
            goto label_14f53c;
        }
    }
    ctx->pc = 0x14F528u;
label_14f528:
    // 0x14f528: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x14f528u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14f52c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14f52cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14f530: 0x44170800  mfc1        $s7, $f1
    ctx->pc = 0x14f530u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
    // 0x14f534: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14f534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14f538: 0x2e2b825  or          $s7, $s7, $v0
    ctx->pc = 0x14f538u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
label_14f53c:
    // 0x14f53c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x14f53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x14f540: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14f540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x14f544: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14f544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f548: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x14f548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f54c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x14f54cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x14f550: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14f550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14f554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f558: 0x0  nop
    ctx->pc = 0x14f558u;
    // NOP
    // 0x14f55c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14f55cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f560: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x14F560u;
    {
        const bool branch_taken_0x14f560 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f560) {
            ctx->pc = 0x14F578u;
            goto label_14f578;
        }
    }
    ctx->pc = 0x14F568u;
    // 0x14f568: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14f568u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14f56c: 0x44160800  mfc1        $s6, $f1
    ctx->pc = 0x14f56cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
    // 0x14f570: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14F570u;
    {
        const bool branch_taken_0x14f570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f570) {
            ctx->pc = 0x14F58Cu;
            goto label_14f58c;
        }
    }
    ctx->pc = 0x14F578u;
label_14f578:
    // 0x14f578: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x14f578u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14f57c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14f57cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14f580: 0x44160800  mfc1        $s6, $f1
    ctx->pc = 0x14f580u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
    // 0x14f584: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14f584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14f588: 0x2c2b025  or          $s6, $s6, $v0
    ctx->pc = 0x14f588u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
label_14f58c:
    // 0x14f58c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x14f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14f590: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14f590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f594: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14f598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f59c: 0x0  nop
    ctx->pc = 0x14f59cu;
    // NOP
    // 0x14f5a0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x14f5a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14f5a4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x14f5a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f5ac: 0x0  nop
    ctx->pc = 0x14f5acu;
    // NOP
    // 0x14f5b0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x14f5b0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x14f5b4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14f5b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f5bc: 0x0  nop
    ctx->pc = 0x14f5bcu;
    // NOP
    // 0x14f5c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14f5c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f5c4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x14F5C4u;
    {
        const bool branch_taken_0x14f5c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f5c4) {
            ctx->pc = 0x14F5DCu;
            goto label_14f5dc;
        }
    }
    ctx->pc = 0x14F5CCu;
    // 0x14f5cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14f5ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14f5d0: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x14f5d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x14f5d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14F5D4u;
    {
        const bool branch_taken_0x14f5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f5d4) {
            ctx->pc = 0x14F5F0u;
            goto label_14f5f0;
        }
    }
    ctx->pc = 0x14F5DCu;
label_14f5dc:
    // 0x14f5dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x14f5dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14f5e0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14f5e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14f5e4: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x14f5e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x14f5e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14f5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14f5ec: 0x2a2a825  or          $s5, $s5, $v0
    ctx->pc = 0x14f5ecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
label_14f5f0:
    // 0x14f5f0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x14f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14f5f4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x14f5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f5f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14f5fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f600: 0x0  nop
    ctx->pc = 0x14f600u;
    // NOP
    // 0x14f604: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x14f604u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14f608: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14f608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x14f60c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f60cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f610: 0x0  nop
    ctx->pc = 0x14f610u;
    // NOP
    // 0x14f614: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x14f614u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x14f618: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14f618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14f61c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f61cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f620: 0x0  nop
    ctx->pc = 0x14f620u;
    // NOP
    // 0x14f624: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14f624u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f628: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x14F628u;
    {
        const bool branch_taken_0x14f628 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f628) {
            ctx->pc = 0x14F640u;
            goto label_14f640;
        }
    }
    ctx->pc = 0x14F630u;
    // 0x14f630: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14f630u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14f634: 0x44140800  mfc1        $s4, $f1
    ctx->pc = 0x14f634u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x14f638: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14F638u;
    {
        const bool branch_taken_0x14f638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f638) {
            ctx->pc = 0x14F654u;
            goto label_14f654;
        }
    }
    ctx->pc = 0x14F640u;
label_14f640:
    // 0x14f640: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x14f640u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14f644: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14f644u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14f648: 0x44140800  mfc1        $s4, $f1
    ctx->pc = 0x14f648u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x14f64c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14f650: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x14f650u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_14f654:
    // 0x14f654: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x14f654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x14f658: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x14F658u;
    SET_GPR_U32(ctx, 31, 0x14F660u);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x14F658u, 0x14F660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F660u;
label_14f660:
    // 0x14f660: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x14f660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f664: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x14F664u;
    {
        const bool branch_taken_0x14f664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f664) {
            ctx->pc = 0x14F74Cu;
            goto label_14f74c;
        }
    }
    ctx->pc = 0x14F66Cu;
label_14f66c:
    // 0x14f66c: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x14f66cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f670: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x14F670u;
    {
        const bool branch_taken_0x14f670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f670) {
            ctx->pc = 0x14F73Cu;
            goto label_14f73c;
        }
    }
    ctx->pc = 0x14F678u;
label_14f678:
    // 0x14f678: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14f678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14f67c: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x14f67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x14f680: 0x1617000b  bne         $s0, $s7, . + 4 + (0xB << 2)
    ctx->pc = 0x14F680u;
    {
        const bool branch_taken_0x14f680 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 23));
        if (branch_taken_0x14f680) {
            ctx->pc = 0x14F6B0u;
            goto label_14f6b0;
        }
    }
    ctx->pc = 0x14F688u;
    // 0x14f688: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x14f688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14f68c: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x14f68cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x14f690: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x14f690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14f694: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14f694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14f698: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14f698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14f69c: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x14f69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x14f6a0: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x14f6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x14f6a4: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x14f6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x14f6a8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x14F6A8u;
    SET_GPR_U32(ctx, 31, 0x14F6B0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x14F6A8u, 0x14F6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F6B0u;
label_14f6b0:
    // 0x14f6b0: 0x1615000c  bne         $s0, $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x14F6B0u;
    {
        const bool branch_taken_0x14f6b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        if (branch_taken_0x14f6b0) {
            ctx->pc = 0x14F6E4u;
            goto label_14f6e4;
        }
    }
    ctx->pc = 0x14F6B8u;
    // 0x14f6b8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x14f6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14f6bc: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x14f6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14f6c0: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x14f6c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x14f6c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14f6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14f6c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14f6cc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14f6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14f6d0: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x14f6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x14f6d4: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x14f6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x14f6d8: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x14f6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x14f6dc: 0xc0444e0  jal         func_111380
    ctx->pc = 0x14F6DCu;
    SET_GPR_U32(ctx, 31, 0x14F6E4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x14F6DCu, 0x14F6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F6E4u;
label_14f6e4:
    // 0x14f6e4: 0x16360009  bne         $s1, $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x14F6E4u;
    {
        const bool branch_taken_0x14f6e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 22));
        if (branch_taken_0x14f6e4) {
            ctx->pc = 0x14F70Cu;
            goto label_14f70c;
        }
    }
    ctx->pc = 0x14F6ECu;
    // 0x14f6ec: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x14f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14f6f0: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x14f6f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x14f6f4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x14f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14f6f8: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x14f6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x14f6fc: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x14f6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x14f700: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x14f700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x14f704: 0xc0444e0  jal         func_111380
    ctx->pc = 0x14F704u;
    SET_GPR_U32(ctx, 31, 0x14F70Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x14F704u, 0x14F70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F70Cu;
label_14f70c:
    // 0x14f70c: 0x1634000a  bne         $s1, $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x14F70Cu;
    {
        const bool branch_taken_0x14f70c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        if (branch_taken_0x14f70c) {
            ctx->pc = 0x14F738u;
            goto label_14f738;
        }
    }
    ctx->pc = 0x14F714u;
    // 0x14f714: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x14f714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14f718: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x14f718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14f71c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x14f71cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x14f720: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x14f720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14f724: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x14f724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x14f728: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x14f728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x14f72c: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x14f72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x14f730: 0xc0444e0  jal         func_111380
    ctx->pc = 0x14F730u;
    SET_GPR_U32(ctx, 31, 0x14F738u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x14F730u, 0x14F738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F738u;
label_14f738:
    // 0x14f738: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14f738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_14f73c:
    // 0x14f73c: 0x2b0082b  sltu        $at, $s5, $s0
    ctx->pc = 0x14f73cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x14f740: 0x1020ffcd  beqz        $at, . + 4 + (-0x33 << 2)
    ctx->pc = 0x14F740u;
    {
        const bool branch_taken_0x14f740 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f740) {
            ctx->pc = 0x14F678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f678;
        }
    }
    ctx->pc = 0x14F748u;
    // 0x14f748: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14f748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_14f74c:
    // 0x14f74c: 0x291082b  sltu        $at, $s4, $s1
    ctx->pc = 0x14f74cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14f750: 0x1020ffc6  beqz        $at, . + 4 + (-0x3A << 2)
    ctx->pc = 0x14F750u;
    {
        const bool branch_taken_0x14f750 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f750) {
            ctx->pc = 0x14F66Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f66c;
        }
    }
    ctx->pc = 0x14F758u;
    // 0x14f758: 0xa380ba88  sb          $zero, -0x4578($gp)
    ctx->pc = 0x14f758u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949512), (uint8_t)GPR_U32(ctx, 0));
    // 0x14f75c: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x14f75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x14f760: 0xc053548  jal         func_14D520
    ctx->pc = 0x14F760u;
    SET_GPR_U32(ctx, 31, 0x14F768u);
    ctx->pc = 0x14D520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D520u, 0x14F760u, 0x14F768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F768u;
label_14f768:
    // 0x14f768: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14f768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14f76c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x14F76Cu;
    {
        const bool branch_taken_0x14f76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f76c) {
            ctx->pc = 0x14F7D8u;
            goto label_14f7d8;
        }
    }
    ctx->pc = 0x14F774u;
    // 0x14f774: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x14f774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x14f778: 0xc041010  jal         func_104040
    ctx->pc = 0x14F778u;
    SET_GPR_U32(ctx, 31, 0x14F780u);
    ctx->pc = 0x104040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104040u, 0x14F778u, 0x14F780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F780u;
label_14f780:
    // 0x14f780: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14f780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f784: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14F784u;
    {
        const bool branch_taken_0x14f784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f784) {
            ctx->pc = 0x14F7C4u;
            goto label_14f7c4;
        }
    }
    ctx->pc = 0x14F78Cu;
label_14f78c:
    // 0x14f78c: 0x8e5e0000  lw          $fp, 0x0($s2)
    ctx->pc = 0x14f78cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14f790: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x14f790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x14f794: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x14f794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f798: 0xc053e48  jal         func_14F920
    ctx->pc = 0x14F798u;
    SET_GPR_U32(ctx, 31, 0x14F7A0u);
    ctx->pc = 0x14F920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F920u, 0x14F798u, 0x14F7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F7A0u;
label_14f7a0:
    // 0x14f7a0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14f7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14f7a4: 0x9382ba88  lbu         $v0, -0x4578($gp)
    ctx->pc = 0x14f7a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949512)));
    // 0x14f7a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14f7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14f7ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14f7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14f7b0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x14f7b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14f7b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x14f7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x14f7b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x14f7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x14f7bc: 0xa382ba88  sb          $v0, -0x4578($gp)
    ctx->pc = 0x14f7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949512), (uint8_t)GPR_U32(ctx, 2));
    // 0x14f7c0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x14f7c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_14f7c4:
    // 0x14f7c4: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x14f7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x14f7c8: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x14F7C8u;
    SET_GPR_U32(ctx, 31, 0x14F7D0u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x14F7C8u, 0x14F7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F7D0u;
label_14f7d0:
    // 0x14f7d0: 0x1642ffee  bne         $s2, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x14F7D0u;
    {
        const bool branch_taken_0x14f7d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x14f7d0) {
            ctx->pc = 0x14F78Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f78c;
        }
    }
    ctx->pc = 0x14F7D8u;
label_14f7d8:
    // 0x14f7d8: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x14f7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x14f7dc: 0xc052c38  jal         func_14B0E0
    ctx->pc = 0x14F7DCu;
    SET_GPR_U32(ctx, 31, 0x14F7E4u);
    ctx->pc = 0x14B0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B0E0u, 0x14F7DCu, 0x14F7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F7E4u;
label_14f7e4:
    // 0x14f7e4: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x14f7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x14f7e8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14f7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14f7ec: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x14F7ECu;
    SET_GPR_U32(ctx, 31, 0x14F7F4u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x14F7ECu, 0x14F7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F7F4u;
label_14f7f4:
    // 0x14f7f4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x14f7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14f7f8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x14f7f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14f7fc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x14f7fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14f800: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14f800u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14f804: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14f804u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14f808: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14f808u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14f80c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14f80cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14f810: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14f810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f814: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14f814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14f818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f81c: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x14f81cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14f820: 0x3e00008  jr          $ra
    ctx->pc = 0x14F820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F828u;
    // 0x14f828: 0x0  nop
    ctx->pc = 0x14f828u;
    // NOP
    // 0x14f82c: 0x0  nop
    ctx->pc = 0x14f82cu;
    // NOP
    ctx->pc = 0x14f830u;
}

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

// Function: sub_00150C20
// Address: 0x150c20 - 0x151430
void sub_00150C20_0x150c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150C20_0x150c20");
#endif

    switch (ctx->pc) {
        case 0x150d0cu: goto label_150d0c;
        case 0x150d20u: goto label_150d20;
        case 0x150d2cu: goto label_150d2c;
        case 0x150d3cu: goto label_150d3c;
        case 0x150d4cu: goto label_150d4c;
        case 0x150d60u: goto label_150d60;
        case 0x150df0u: goto label_150df0;
        case 0x150e08u: goto label_150e08;
        case 0x150e14u: goto label_150e14;
        case 0x150e48u: goto label_150e48;
        case 0x150e70u: goto label_150e70;
        case 0x150e7cu: goto label_150e7c;
        case 0x150e98u: goto label_150e98;
        case 0x150eb8u: goto label_150eb8;
        case 0x150ed0u: goto label_150ed0;
        case 0x150ee8u: goto label_150ee8;
        case 0x150efcu: goto label_150efc;
        case 0x150f10u: goto label_150f10;
        case 0x150f50u: goto label_150f50;
        case 0x150f80u: goto label_150f80;
        case 0x150facu: goto label_150fac;
        case 0x150fb8u: goto label_150fb8;
        case 0x151160u: goto label_151160;
        case 0x1511e8u: goto label_1511e8;
        case 0x1511fcu: goto label_1511fc;
        case 0x151224u: goto label_151224;
        case 0x151238u: goto label_151238;
        case 0x151250u: goto label_151250;
        case 0x151268u: goto label_151268;
        case 0x15127cu: goto label_15127c;
        case 0x151294u: goto label_151294;
        case 0x15129cu: goto label_15129c;
        case 0x1512a8u: goto label_1512a8;
        case 0x1512b8u: goto label_1512b8;
        case 0x1512c8u: goto label_1512c8;
        case 0x1512dcu: goto label_1512dc;
        case 0x1512e8u: goto label_1512e8;
        case 0x1512f0u: goto label_1512f0;
        case 0x1512fcu: goto label_1512fc;
        case 0x15130cu: goto label_15130c;
        case 0x151334u: goto label_151334;
        case 0x151348u: goto label_151348;
        case 0x151394u: goto label_151394;
        case 0x1513a0u: goto label_1513a0;
        case 0x1513acu: goto label_1513ac;
        case 0x1513c8u: goto label_1513c8;
        case 0x1513f0u: goto label_1513f0;
        default: break;
    }

    ctx->pc = 0x150c20u;

    // 0x150c20: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x150c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x150c24: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x150c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x150c28: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x150c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x150c2c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x150c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x150c30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x150c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x150c34: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x150c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x150c38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x150c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x150c3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x150c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x150c40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x150c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x150c44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x150c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x150c48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x150c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x150c4c: 0xafa50180  sw          $a1, 0x180($sp)
    ctx->pc = 0x150c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 5));
    // 0x150c50: 0x8f84bb70  lw          $a0, -0x4490($gp)
    ctx->pc = 0x150c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x150c54: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x150c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x150c58: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x150c58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150c5c: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x150c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150c60: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x150c60u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x150c64: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150c64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x150c68: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x150c68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x150c6c: 0x0  nop
    ctx->pc = 0x150c6cu;
    // NOP
    // 0x150c70: 0xafa30168  sw          $v1, 0x168($sp)
    ctx->pc = 0x150c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 3));
    // 0x150c74: 0x8f84bb70  lw          $a0, -0x4490($gp)
    ctx->pc = 0x150c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x150c78: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x150c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x150c7c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x150c7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150c80: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x150c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150c84: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x150c84u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x150c88: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150c88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x150c8c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x150c8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x150c90: 0x0  nop
    ctx->pc = 0x150c90u;
    // NOP
    // 0x150c94: 0xafa30164  sw          $v1, 0x164($sp)
    ctx->pc = 0x150c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 3));
    // 0x150c98: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x150c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x150c9c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x150c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x150ca0: 0x8c63bde8  lw          $v1, -0x4218($v1)
    ctx->pc = 0x150ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BDE8u));
    // 0x150ca4: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x150CA4u;
    {
        const bool branch_taken_0x150ca4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x150ca4) {
            ctx->pc = 0x150CC0u;
            goto label_150cc0;
        }
    }
    ctx->pc = 0x150CACu;
    // 0x150cac: 0x8fa40164  lw          $a0, 0x164($sp)
    ctx->pc = 0x150cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x150cb0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x150cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x150cb4: 0x8c63bdec  lw          $v1, -0x4214($v1)
    ctx->pc = 0x150cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BDECu));
    // 0x150cb8: 0x108301c3  beq         $a0, $v1, . + 4 + (0x1C3 << 2)
    ctx->pc = 0x150CB8u;
    {
        const bool branch_taken_0x150cb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x150cb8) {
            ctx->pc = 0x1513C8u;
            goto label_1513c8;
        }
    }
    ctx->pc = 0x150CC0u;
label_150cc0:
    // 0x150cc0: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x150cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x150cc4: 0x106001c0  beqz        $v1, . + 4 + (0x1C0 << 2)
    ctx->pc = 0x150CC4u;
    {
        const bool branch_taken_0x150cc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150cc4) {
            ctx->pc = 0x1513C8u;
            goto label_1513c8;
        }
    }
    ctx->pc = 0x150CCCu;
    // 0x150ccc: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x150cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x150cd0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x150cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x150cd4: 0x8c63bde0  lw          $v1, -0x4220($v1)
    ctx->pc = 0x150cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BDE0u));
    // 0x150cd8: 0x108301bb  beq         $a0, $v1, . + 4 + (0x1BB << 2)
    ctx->pc = 0x150CD8u;
    {
        const bool branch_taken_0x150cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x150cd8) {
            ctx->pc = 0x1513C8u;
            goto label_1513c8;
        }
    }
    ctx->pc = 0x150CE0u;
    // 0x150ce0: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x150ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x150ce4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x150ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x150ce8: 0xac43bde0  sw          $v1, -0x4220($v0)
    ctx->pc = 0x150ce8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x60BDE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BDE0u, _value); } while (0);
    // 0x150cec: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x150cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x150cf0: 0x8c42bde4  lw          $v0, -0x421C($v0)
    ctx->pc = 0x150cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BDE4u));
    // 0x150cf4: 0x10020007  beq         $zero, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x150CF4u;
    {
        const bool branch_taken_0x150cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x150cf4) {
            ctx->pc = 0x150D14u;
            goto label_150d14;
        }
    }
    ctx->pc = 0x150CFCu;
    // 0x150cfc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x150cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x150d00: 0x8c44bde4  lw          $a0, -0x421C($v0)
    ctx->pc = 0x150d00u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x60BDE4u));
    // 0x150d04: 0xc0e20da  jal         func_388368
    ctx->pc = 0x150D04u;
    SET_GPR_U32(ctx, 31, 0x150D0Cu);
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x150D04u, 0x150D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150D0Cu;
label_150d0c:
    // 0x150d0c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x150d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x150d10: 0xac40bde4  sw          $zero, -0x421C($v0)
    ctx->pc = 0x150d10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x60BDE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BDE4u, _value); } while (0);
label_150d14:
    // 0x150d14: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x150d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x150d18: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x150D18u;
    SET_GPR_U32(ctx, 31, 0x150D20u);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x150D18u, 0x150D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150D20u;
label_150d20:
    // 0x150d20: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x150d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
    // 0x150d24: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x150D24u;
    {
        const bool branch_taken_0x150d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150d24) {
            ctx->pc = 0x150E58u;
            goto label_150e58;
        }
    }
    ctx->pc = 0x150D2Cu;
label_150d2c:
    // 0x150d2c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x150d2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150d30: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x150d30u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150d34: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x150D34u;
    {
        const bool branch_taken_0x150d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150d34) {
            ctx->pc = 0x150DF8u;
            goto label_150df8;
        }
    }
    ctx->pc = 0x150D3Cu;
label_150d3c:
    // 0x150d3c: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x150d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x150d40: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x150d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x150d44: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x150D44u;
    SET_GPR_U32(ctx, 31, 0x150D4Cu);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x150D44u, 0x150D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150D4Cu;
label_150d4c:
    // 0x150d4c: 0x8fa6015c  lw          $a2, 0x15C($sp)
    ctx->pc = 0x150d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x150d50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x150d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150d54: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x150d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150d58: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x150D58u;
    SET_GPR_U32(ctx, 31, 0x150D60u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x150D58u, 0x150D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150D60u;
label_150d60:
    // 0x150d60: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x150d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x150d64: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x150d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x150d68: 0x10020017  beq         $zero, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x150D68u;
    {
        const bool branch_taken_0x150d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x150d68) {
            ctx->pc = 0x150DC8u;
            goto label_150dc8;
        }
    }
    ctx->pc = 0x150D70u;
    // 0x150d70: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x150d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x150d74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x150d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150d78: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x150d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x150d7c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x150D7Cu;
    {
        const bool branch_taken_0x150d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x150d7c) {
            ctx->pc = 0x150DC8u;
            goto label_150dc8;
        }
    }
    ctx->pc = 0x150D84u;
    // 0x150d84: 0x1640000c  bnez        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x150D84u;
    {
        const bool branch_taken_0x150d84 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x150d84) {
            ctx->pc = 0x150DB8u;
            goto label_150db8;
        }
    }
    ctx->pc = 0x150D8Cu;
    // 0x150d8c: 0x33c200ff  andi        $v0, $fp, 0xFF
    ctx->pc = 0x150d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x150d90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x150d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x150d94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x150d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x150d98: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x150d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x150d9c: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x150d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x150da0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x150da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x150da4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x150da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x150da8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x150da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x150dac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x150dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x150db0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x150db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x150db4: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x150db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
label_150db8:
    // 0x150db8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x150db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x150dbc: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x150dbcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x150dc0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x150DC0u;
    {
        const bool branch_taken_0x150dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150dc0) {
            ctx->pc = 0x150DF4u;
            goto label_150df4;
        }
    }
    ctx->pc = 0x150DC8u;
label_150dc8:
    // 0x150dc8: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x150DC8u;
    {
        const bool branch_taken_0x150dc8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x150dc8) {
            ctx->pc = 0x150DF4u;
            goto label_150df4;
        }
    }
    ctx->pc = 0x150DD0u;
    // 0x150dd0: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x150dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x150dd4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x150dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x150dd8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x150dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x150ddc: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x150ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x150de0: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x150de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x150de4: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x150de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x150de8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x150DE8u;
    SET_GPR_U32(ctx, 31, 0x150DF0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x150DE8u, 0x150DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150DF0u;
label_150df0:
    // 0x150df0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x150df0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_150df4:
    // 0x150df4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x150df4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_150df8:
    // 0x150df8: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x150df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x150dfc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x150dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x150e00: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x150E00u;
    SET_GPR_U32(ctx, 31, 0x150E08u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x150E00u, 0x150E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150E08u;
label_150e08:
    // 0x150e08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x150e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150e0c: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x150E0Cu;
    SET_GPR_U32(ctx, 31, 0x150E14u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x150E0Cu, 0x150E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150E14u;
label_150e14:
    // 0x150e14: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x150e14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x150e18: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x150E18u;
    {
        const bool branch_taken_0x150e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150e18) {
            ctx->pc = 0x150D3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150d3c;
        }
    }
    ctx->pc = 0x150E20u;
    // 0x150e20: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x150E20u;
    {
        const bool branch_taken_0x150e20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x150e20) {
            ctx->pc = 0x150E4Cu;
            goto label_150e4c;
        }
    }
    ctx->pc = 0x150E28u;
    // 0x150e28: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x150e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x150e2c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x150e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x150e30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x150e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x150e34: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x150e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x150e38: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x150e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x150e3c: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x150e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x150e40: 0xc0444e0  jal         func_111380
    ctx->pc = 0x150E40u;
    SET_GPR_U32(ctx, 31, 0x150E48u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x150E40u, 0x150E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150E48u;
label_150e48:
    // 0x150e48: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x150e48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_150e4c:
    // 0x150e4c: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x150e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x150e50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x150e54: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x150e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
label_150e58:
    // 0x150e58: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x150e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x150e5c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x150e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x150e60: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x150e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x150e64: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x150e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x150e68: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x150E68u;
    SET_GPR_U32(ctx, 31, 0x150E70u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x150E68u, 0x150E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150E70u;
label_150e70:
    // 0x150e70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x150e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150e74: 0xc0477d8  jal         func_11DF60
    ctx->pc = 0x150E74u;
    SET_GPR_U32(ctx, 31, 0x150E7Cu);
    ctx->pc = 0x11DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF60u, 0x150E74u, 0x150E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150E7Cu;
label_150e7c:
    // 0x150e7c: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x150e7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x150e80: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x150e80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x150e84: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x150E84u;
    {
        const bool branch_taken_0x150e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150e84) {
            ctx->pc = 0x150D2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150d2c;
        }
    }
    ctx->pc = 0x150E8Cu;
    // 0x150e8c: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x150e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x150e90: 0xc053548  jal         func_14D520
    ctx->pc = 0x150E90u;
    SET_GPR_U32(ctx, 31, 0x150E98u);
    ctx->pc = 0x14D520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D520u, 0x150E90u, 0x150E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150E98u;
label_150e98:
    // 0x150e98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x150e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x150e9c: 0x14400146  bnez        $v0, . + 4 + (0x146 << 2)
    ctx->pc = 0x150E9Cu;
    {
        const bool branch_taken_0x150e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150e9c) {
            ctx->pc = 0x1513B8u;
            goto label_1513b8;
        }
    }
    ctx->pc = 0x150EA4u;
    // 0x150ea4: 0x27a20154  addiu       $v0, $sp, 0x154
    ctx->pc = 0x150ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x150ea8: 0xc7808d04  lwc1        $f0, -0x72FC($gp)
    ctx->pc = 0x150ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150eac: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x150eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x150eb0: 0xc0e3992  jal         func_38E648
    ctx->pc = 0x150EB0u;
    SET_GPR_U32(ctx, 31, 0x150EB8u);
    ctx->pc = 0x38E648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E648u, 0x150EB0u, 0x150EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150EB8u;
label_150eb8:
    // 0x150eb8: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x150eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x150ebc: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x150ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x150ec0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x150ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x150ec4: 0x27a50154  addiu       $a1, $sp, 0x154
    ctx->pc = 0x150ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x150ec8: 0xc052608  jal         func_149820
    ctx->pc = 0x150EC8u;
    SET_GPR_U32(ctx, 31, 0x150ED0u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x150EC8u, 0x150ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150ED0u;
label_150ed0:
    // 0x150ed0: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x150ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x150ed4: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x150ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x150ed8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x150ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x150edc: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x150edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x150ee0: 0xc044598  jal         func_111660
    ctx->pc = 0x150EE0u;
    SET_GPR_U32(ctx, 31, 0x150EE8u);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x150EE0u, 0x150EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150EE8u;
label_150ee8:
    // 0x150ee8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x150ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x150eec: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x150eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x150ef0: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x150ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x150ef4: 0xc044598  jal         func_111660
    ctx->pc = 0x150EF4u;
    SET_GPR_U32(ctx, 31, 0x150EFCu);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x150EF4u, 0x150EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150EFCu;
label_150efc:
    // 0x150efc: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x150efcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x150f00: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x150f00u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x150f04: 0x24060079  addiu       $a2, $zero, 0x79
    ctx->pc = 0x150f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x150f08: 0xc0e2dbc  jal         func_38B6F0
    ctx->pc = 0x150F08u;
    SET_GPR_U32(ctx, 31, 0x150F10u);
    ctx->pc = 0x38B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B6F0u, 0x150F08u, 0x150F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F10u;
label_150f10:
    // 0x150f10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x150f10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150f14: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x150f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x150f18: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x150f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x150f1c: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x150f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x150f20: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x150f20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x150f24: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x150f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x150f28: 0x8c570018  lw          $s7, 0x18($v0)
    ctx->pc = 0x150f28u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x150f2c: 0x8e340030  lw          $s4, 0x30($s1)
    ctx->pc = 0x150f2cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x150f30: 0x8e36002c  lw          $s6, 0x2C($s1)
    ctx->pc = 0x150f30u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x150f34: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x150f34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150f38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x150f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150f3c: 0x0  nop
    ctx->pc = 0x150f3cu;
    // NOP
    // 0x150f40: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x150f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x150f44: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x150f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x150f48: 0xc094d24  jal         func_253490
    ctx->pc = 0x150F48u;
    SET_GPR_U32(ctx, 31, 0x150F50u);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x150F48u, 0x150F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F50u;
label_150f50:
    // 0x150f50: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x150f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x150f54: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x150F54u;
    {
        const bool branch_taken_0x150f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150f54) {
            ctx->pc = 0x150F74u;
            goto label_150f74;
        }
    }
    ctx->pc = 0x150F5Cu;
    // 0x150f5c: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x150f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x150f60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150f64: 0x0  nop
    ctx->pc = 0x150f64u;
    // NOP
    // 0x150f68: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x150f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x150f6c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x150F6Cu;
    {
        const bool branch_taken_0x150f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150f6c) {
            ctx->pc = 0x150FA0u;
            goto label_150fa0;
        }
    }
    ctx->pc = 0x150F74u;
label_150f74:
    // 0x150f74: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x150f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x150f78: 0xc094d24  jal         func_253490
    ctx->pc = 0x150F78u;
    SET_GPR_U32(ctx, 31, 0x150F80u);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x150F78u, 0x150F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F80u;
label_150f80:
    // 0x150f80: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x150f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x150f84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x150f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150f88: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x150F88u;
    {
        const bool branch_taken_0x150f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x150f88) {
            ctx->pc = 0x150FA0u;
            goto label_150fa0;
        }
    }
    ctx->pc = 0x150F90u;
    // 0x150f90: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x150f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x150f94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150f98: 0x0  nop
    ctx->pc = 0x150f98u;
    // NOP
    // 0x150f9c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x150f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_150fa0:
    // 0x150fa0: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x150fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x150fa4: 0xc041010  jal         func_104040
    ctx->pc = 0x150FA4u;
    SET_GPR_U32(ctx, 31, 0x150FACu);
    ctx->pc = 0x104040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104040u, 0x150FA4u, 0x150FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150FACu;
label_150fac:
    // 0x150fac: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x150facu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150fb0: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x150FB0u;
    {
        const bool branch_taken_0x150fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150fb0) {
            ctx->pc = 0x151244u;
            goto label_151244;
        }
    }
    ctx->pc = 0x150FB8u;
label_150fb8:
    // 0x150fb8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x150fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x150fbc: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x150fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x150fc0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x150fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x150fc4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x150FC4u;
    {
        const bool branch_taken_0x150fc4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x150fc4) {
            ctx->pc = 0x150FE0u;
            goto label_150fe0;
        }
    }
    ctx->pc = 0x150FCCu;
    // 0x150fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150fd0: 0x0  nop
    ctx->pc = 0x150fd0u;
    // NOP
    // 0x150fd4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x150fd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x150fd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x150FD8u;
    {
        const bool branch_taken_0x150fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150fd8) {
            ctx->pc = 0x150FFCu;
            goto label_150ffc;
        }
    }
    ctx->pc = 0x150FE0u;
label_150fe0:
    // 0x150fe0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x150fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x150fe4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x150fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x150fe8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x150fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x150fec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x150fecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150ff0: 0x0  nop
    ctx->pc = 0x150ff0u;
    // NOP
    // 0x150ff4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x150ff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x150ff8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x150ff8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_150ffc:
    // 0x150ffc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x150ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x151000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151004: 0x0  nop
    ctx->pc = 0x151004u;
    // NOP
    // 0x151008: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x151008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15100c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x15100cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x151010: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x151010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x151014: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x151014u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x151018: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x151018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15101c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15101Cu;
    {
        const bool branch_taken_0x15101c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x15101c) {
            ctx->pc = 0x151038u;
            goto label_151038;
        }
    }
    ctx->pc = 0x151024u;
    // 0x151024: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151028: 0x0  nop
    ctx->pc = 0x151028u;
    // NOP
    // 0x15102c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x15102cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x151030: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x151030u;
    {
        const bool branch_taken_0x151030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151030) {
            ctx->pc = 0x151054u;
            goto label_151054;
        }
    }
    ctx->pc = 0x151038u;
label_151038:
    // 0x151038: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x151038u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x15103c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15103cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x151040: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x151040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x151044: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151048: 0x0  nop
    ctx->pc = 0x151048u;
    // NOP
    // 0x15104c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x15104cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x151050: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x151050u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_151054:
    // 0x151054: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x151054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x151058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15105c: 0x0  nop
    ctx->pc = 0x15105cu;
    // NOP
    // 0x151060: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x151060u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x151064: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x151064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x151068: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x151068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x15106c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15106cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x151070: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x151070u;
    {
        const bool branch_taken_0x151070 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x151070) {
            ctx->pc = 0x15108Cu;
            goto label_15108c;
        }
    }
    ctx->pc = 0x151078u;
    // 0x151078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15107c: 0x0  nop
    ctx->pc = 0x15107cu;
    // NOP
    // 0x151080: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x151080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x151084: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x151084u;
    {
        const bool branch_taken_0x151084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151084) {
            ctx->pc = 0x1510A8u;
            goto label_1510a8;
        }
    }
    ctx->pc = 0x15108Cu;
label_15108c:
    // 0x15108c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x15108cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x151090: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x151090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x151094: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x151094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x151098: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15109c: 0x0  nop
    ctx->pc = 0x15109cu;
    // NOP
    // 0x1510a0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1510a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1510a4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1510a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1510a8:
    // 0x1510a8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1510a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1510ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1510acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1510b0: 0x0  nop
    ctx->pc = 0x1510b0u;
    // NOP
    // 0x1510b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1510b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1510b8: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1510b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x1510bc: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1510bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1510c0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1510c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1510c4: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1510c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1510c8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1510c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1510cc: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x1510ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1510d0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1510d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1510d4: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1510d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1510d8: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x1510d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1510dc: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1510dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1510e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1510e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1510e4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1510e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1510e8: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1510e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1510ec: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1510ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1510f0: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x1510f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1510f4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1510f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1510f8: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1510f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1510fc: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x1510fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151100: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x151100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151104: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x151104u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x151108: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x151108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x15110c: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x15110cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151110: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x151110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x151114: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x151114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x151118: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x151118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15111c: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x15111cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151120: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x151120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x151124: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x151124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x151128: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x151128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x15112c: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x15112cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151130: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x151130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x151134: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x151134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151138: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x151138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x15113c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x15113cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x151140: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x151140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x151144: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x151144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151148: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x151148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15114c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x15114cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x151150: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x151150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x151154: 0xa3a0016f  sb          $zero, 0x16F($sp)
    ctx->pc = 0x151154u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 367), (uint8_t)GPR_U32(ctx, 0));
    // 0x151158: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x151158u;
    {
        const bool branch_taken_0x151158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151158) {
            ctx->pc = 0x1511B0u;
            goto label_1511b0;
        }
    }
    ctx->pc = 0x151160u;
label_151160:
    // 0x151160: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151164: 0x0  nop
    ctx->pc = 0x151164u;
    // NOP
    // 0x151168: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x151168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x15116c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15116cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x151170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151174: 0x0  nop
    ctx->pc = 0x151174u;
    // NOP
    // 0x151178: 0xe6e00004  swc1        $f0, 0x4($s7)
    ctx->pc = 0x151178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x15117c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15117cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151180: 0x0  nop
    ctx->pc = 0x151180u;
    // NOP
    // 0x151184: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x151184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x151188: 0x26f7000c  addiu       $s7, $s7, 0xC
    ctx->pc = 0x151188u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
    // 0x15118c: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x15118cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x151190: 0xa2800001  sb          $zero, 0x1($s4)
    ctx->pc = 0x151190u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x151194: 0xa2800002  sb          $zero, 0x2($s4)
    ctx->pc = 0x151194u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x151198: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x151198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15119c: 0xa2820003  sb          $v0, 0x3($s4)
    ctx->pc = 0x15119cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1511a0: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1511a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1511a4: 0x93a2016f  lbu         $v0, 0x16F($sp)
    ctx->pc = 0x1511a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 367)));
    // 0x1511a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1511a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1511ac: 0xa3a2016f  sb          $v0, 0x16F($sp)
    ctx->pc = 0x1511acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 367), (uint8_t)GPR_U32(ctx, 2));
label_1511b0:
    // 0x1511b0: 0x93a2016f  lbu         $v0, 0x16F($sp)
    ctx->pc = 0x1511b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 367)));
    // 0x1511b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1511b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1511b8: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1511b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1511bc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1511BCu;
    {
        const bool branch_taken_0x1511bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1511bc) {
            ctx->pc = 0x151160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151160;
        }
    }
    ctx->pc = 0x1511C4u;
    // 0x1511c4: 0x3266ffff  andi        $a2, $s3, 0xFFFF
    ctx->pc = 0x1511c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x1511c8: 0x26620002  addiu       $v0, $s3, 0x2
    ctx->pc = 0x1511c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x1511cc: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x1511ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1511d0: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1511d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1511d4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x1511d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1511d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1511d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1511dc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1511dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1511e0: 0xc0e3356  jal         func_38CD58
    ctx->pc = 0x1511E0u;
    SET_GPR_U32(ctx, 31, 0x1511E8u);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x1511E0u, 0x1511E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1511E8u;
label_1511e8:
    // 0x1511e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1511e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1511ec: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1511ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1511f0: 0x8fa60150  lw          $a2, 0x150($sp)
    ctx->pc = 0x1511f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1511f4: 0xc0e335c  jal         func_38CD70
    ctx->pc = 0x1511F4u;
    SET_GPR_U32(ctx, 31, 0x1511FCu);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x1511F4u, 0x1511FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1511FCu;
label_1511fc:
    // 0x1511fc: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1511fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x151200: 0x3266ffff  andi        $a2, $s3, 0xFFFF
    ctx->pc = 0x151200u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x151204: 0x26620003  addiu       $v0, $s3, 0x3
    ctx->pc = 0x151204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x151208: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x151208u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15120c: 0x26620002  addiu       $v0, $s3, 0x2
    ctx->pc = 0x15120cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x151210: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x151210u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x151214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x151214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151218: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x151218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15121c: 0xc0e3356  jal         func_38CD58
    ctx->pc = 0x15121Cu;
    SET_GPR_U32(ctx, 31, 0x151224u);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x15121Cu, 0x151224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151224u;
label_151224:
    // 0x151224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x151224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151228: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x151228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15122c: 0x8fa60150  lw          $a2, 0x150($sp)
    ctx->pc = 0x15122cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x151230: 0xc0e335c  jal         func_38CD70
    ctx->pc = 0x151230u;
    SET_GPR_U32(ctx, 31, 0x151238u);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x151230u, 0x151238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151238u;
label_151238:
    // 0x151238: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x151238u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x15123c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x15123cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x151240: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x151240u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_151244:
    // 0x151244: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x151244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x151248: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x151248u;
    SET_GPR_U32(ctx, 31, 0x151250u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x151248u, 0x151250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151250u;
label_151250:
    // 0x151250: 0x16a2ff59  bne         $s5, $v0, . + 4 + (-0xA7 << 2)
    ctx->pc = 0x151250u;
    {
        const bool branch_taken_0x151250 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x151250) {
            ctx->pc = 0x150FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150fb8;
        }
    }
    ctx->pc = 0x151258u;
    // 0x151258: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x151258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x15125c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x15125cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x151260: 0xc0e2ab0  jal         func_38AAC0
    ctx->pc = 0x151260u;
    SET_GPR_U32(ctx, 31, 0x151268u);
    ctx->pc = 0x38AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AAC0u, 0x151260u, 0x151268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151268u;
label_151268:
    // 0x151268: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x151268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x15126c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x15126cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x151270: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x151270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x151274: 0xc046270  jal         func_1189C0
    ctx->pc = 0x151274u;
    SET_GPR_U32(ctx, 31, 0x15127Cu);
    ctx->pc = 0x1189C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C0u, 0x151274u, 0x15127Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15127Cu;
label_15127c:
    // 0x15127c: 0x27a2014c  addiu       $v0, $sp, 0x14C
    ctx->pc = 0x15127cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x151280: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x151280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x151284: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x151284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x151288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x151288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15128c: 0xc0e2d08  jal         func_38B420
    ctx->pc = 0x15128Cu;
    SET_GPR_U32(ctx, 31, 0x151294u);
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x15128Cu, 0x151294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151294u;
label_151294:
    // 0x151294: 0xc0e2094  jal         func_388250
    ctx->pc = 0x151294u;
    SET_GPR_U32(ctx, 31, 0x15129Cu);
    ctx->pc = 0x388250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388250u, 0x151294u, 0x15129Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15129Cu;
label_15129c:
    // 0x15129c: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x15129cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x1512a0: 0xc1067b0  jal         func_419EC0
    ctx->pc = 0x1512A0u;
    SET_GPR_U32(ctx, 31, 0x1512A8u);
    ctx->pc = 0x419EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EC0u, 0x1512A0u, 0x1512A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1512A8u;
label_1512a8:
    // 0x1512a8: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1512a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1512ac: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1512acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1512b0: 0xc106638  jal         func_4198E0
    ctx->pc = 0x1512B0u;
    SET_GPR_U32(ctx, 31, 0x1512B8u);
    ctx->pc = 0x4198E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4198E0u, 0x1512B0u, 0x1512B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1512B8u;
label_1512b8:
    // 0x1512b8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1512b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1512bc: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1512bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1512c0: 0xc0e2686  jal         func_389A18
    ctx->pc = 0x1512C0u;
    SET_GPR_U32(ctx, 31, 0x1512C8u);
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x1512C0u, 0x1512C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1512C8u;
label_1512c8:
    // 0x1512c8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1512c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1512cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1512ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1512d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1512d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1512d4: 0xc0e2836  jal         func_38A0D8
    ctx->pc = 0x1512D4u;
    SET_GPR_U32(ctx, 31, 0x1512DCu);
    ctx->pc = 0x38A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A0D8u, 0x1512D4u, 0x1512DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1512DCu;
label_1512dc:
    // 0x1512dc: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1512dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1512e0: 0xc0c9722  jal         func_325C88
    ctx->pc = 0x1512E0u;
    SET_GPR_U32(ctx, 31, 0x1512E8u);
    ctx->pc = 0x325C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325C88u, 0x1512E0u, 0x1512E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1512E8u;
label_1512e8:
    // 0x1512e8: 0xc0e2744  jal         func_389D10
    ctx->pc = 0x1512E8u;
    SET_GPR_U32(ctx, 31, 0x1512F0u);
    ctx->pc = 0x389D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389D10u, 0x1512E8u, 0x1512F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1512F0u;
label_1512f0:
    // 0x1512f0: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x1512f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x1512f4: 0xc1067b0  jal         func_419EC0
    ctx->pc = 0x1512F4u;
    SET_GPR_U32(ctx, 31, 0x1512FCu);
    ctx->pc = 0x419EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EC0u, 0x1512F4u, 0x1512FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1512FCu;
label_1512fc:
    // 0x1512fc: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1512fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x151300: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x151300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x151304: 0xc106638  jal         func_4198E0
    ctx->pc = 0x151304u;
    SET_GPR_U32(ctx, 31, 0x15130Cu);
    ctx->pc = 0x4198E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4198E0u, 0x151304u, 0x15130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15130Cu;
label_15130c:
    // 0x15130c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x15130cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x151310: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x151310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x151314: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x151314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x151318: 0x27a20134  addiu       $v0, $sp, 0x134
    ctx->pc = 0x151318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x15131c: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x15131cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x151320: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x151320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x151324: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x151324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x151328: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x151328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x15132c: 0xc0e2700  jal         func_389C00
    ctx->pc = 0x15132Cu;
    SET_GPR_U32(ctx, 31, 0x151334u);
    ctx->pc = 0x389C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389C00u, 0x15132Cu, 0x151334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151334u;
label_151334:
    // 0x151334: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x151334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x151338: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x151338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x15133c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x15133cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x151340: 0xc090f80  jal         func_243E00
    ctx->pc = 0x151340u;
    SET_GPR_U32(ctx, 31, 0x151348u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x151340u, 0x151348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151348u;
label_151348:
    // 0x151348: 0x27a300f8  addiu       $v1, $sp, 0xF8
    ctx->pc = 0x151348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x15134c: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x15134cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x151350: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x151350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x151354: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x151354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151358: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x151358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15135c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x15135cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x151360: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x151360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x151364: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x151364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x151368: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x151368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15136c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15136cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x151370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151374: 0x0  nop
    ctx->pc = 0x151374u;
    // NOP
    // 0x151378: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x151378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15137c: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x15137cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x151380: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x151380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x151384: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x151384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x151388: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x151388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15138c: 0xc106598  jal         func_419660
    ctx->pc = 0x15138Cu;
    SET_GPR_U32(ctx, 31, 0x151394u);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x15138Cu, 0x151394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151394u;
label_151394:
    // 0x151394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x151394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151398: 0xc0e3414  jal         func_38D050
    ctx->pc = 0x151398u;
    SET_GPR_U32(ctx, 31, 0x1513A0u);
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x151398u, 0x1513A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1513A0u;
label_1513a0:
    // 0x1513a0: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x1513a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1513a4: 0xc0e39c0  jal         func_38E700
    ctx->pc = 0x1513A4u;
    SET_GPR_U32(ctx, 31, 0x1513ACu);
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x1513A4u, 0x1513ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1513ACu;
label_1513ac:
    // 0x1513ac: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x1513acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x1513b0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1513b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1513b4: 0xac43bde4  sw          $v1, -0x421C($v0)
    ctx->pc = 0x1513b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x60BDE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BDE4u, _value); } while (0);
label_1513b8:
    // 0x1513b8: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x1513b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x1513bc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1513bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1513c0: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x1513C0u;
    SET_GPR_U32(ctx, 31, 0x1513C8u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x1513C0u, 0x1513C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1513C8u;
label_1513c8:
    // 0x1513c8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1513c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1513cc: 0x8c63bde4  lw          $v1, -0x421C($v1)
    ctx->pc = 0x1513ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BDE4u));
    // 0x1513d0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1513D0u;
    {
        const bool branch_taken_0x1513d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1513d0) {
            ctx->pc = 0x1513F0u;
            goto label_1513f0;
        }
    }
    ctx->pc = 0x1513D8u;
    // 0x1513d8: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x1513d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x1513dc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1513dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1513e0: 0x8c45bde4  lw          $a1, -0x421C($v0)
    ctx->pc = 0x1513e0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x60BDE4u));
    // 0x1513e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1513e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1513e8: 0xc052be8  jal         func_14AFA0
    ctx->pc = 0x1513E8u;
    SET_GPR_U32(ctx, 31, 0x1513F0u);
    ctx->pc = 0x14AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AFA0u, 0x1513E8u, 0x1513F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1513F0u;
label_1513f0:
    // 0x1513f0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1513f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1513f4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1513f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1513f8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1513f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1513fc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1513fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x151400: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x151400u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x151404: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x151404u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151408: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x151408u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15140c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15140cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151410: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151414: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151418: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x151418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x15141c: 0x3e00008  jr          $ra
    ctx->pc = 0x15141Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15141Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151424u;
    // 0x151424: 0x0  nop
    ctx->pc = 0x151424u;
    // NOP
    // 0x151428: 0x0  nop
    ctx->pc = 0x151428u;
    // NOP
    // 0x15142c: 0x0  nop
    ctx->pc = 0x15142cu;
    // NOP
    ctx->pc = 0x151430u;
}
